----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:13:39 03/07/2017 
-- Design Name: 
-- Module Name:    BRAM_ctrlr - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity BRAM_ctrlr is
    Port ( D_mem_i : in  STD_LOGIC_VECTOR (13 downto 0);
			  fdiv_i  : in  STD_LOGIC_VECTOR (4 downto 0);
           wr_addr_i : in  STD_LOGIC_VECTOR (14 downto 0);
			  inc_rd_addr_i : in  std_logic_vector(13 downto 0);
			  max_rd_addr_i : in  std_logic_vector(14 downto 0);
           smp_rdy_i : in  STD_LOGIC;
			  GEN_RUN_i : in  STD_LOGIC;
			  D_SRAM_i : in  STD_LOGIC_VECTOR (13 downto 0);
			  D_SRAM_o : out  STD_LOGIC_VECTOR (13 downto 0);
			  D_DAC_o : out  STD_LOGIC_VECTOR (13 downto 0);
			  mem_wr_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
			  mem_rd_addr_o : out  STD_LOGIC_VECTOR (14 downto 0);
			  mem_wr_ack_o : out  STD_LOGIC;
			  WEN_o : out  STD_LOGIC_VECTOR (0 downto 0);
			  --DEBUG_o : out STD_LOGIC_VECTOR (11 downto 0);
			  --LED_o : out STD_LOGIC_VECTOR (11 downto 0);
			  CLK_i : in  STD_LOGIC;
           RST_i : in  STD_LOGIC);
end BRAM_ctrlr;

architecture Behavioral of BRAM_ctrlr is

TYPE mem_write_state_type IS (IDLE, send_read_req, write_bram, ERROR); 
signal mem_write_state : mem_write_state_type;
TYPE mem_read_state_type IS (DAC_GEN_STOP, DAC_GEN_RUN, SRAM_to_DAC); --, set_addr
signal mem_read_state : mem_read_state_type;
signal D_SRAM_i_s, D_SRAM_o_s : std_logic_vector(13 downto 0);
signal wr_addr_s : std_logic_vector(14 downto 0);
signal wr_en_s : std_logic_vector(0 downto 0);
signal read_addr_s,future_read_addr_s : unsigned (14 downto 0);
signal smp_rdy_past, mem_wr_ack_s : std_logic;
signal D_DAC_s : std_logic_vector (13 downto 0);
signal debug_s, led_s : std_logic_vector (11 downto 0);
signal fdiv_cnt_s : unsigned (4 downto 0);

begin

	PROCESS(CLK_i)
	BEGIN
	   IF (rising_edge(CLK_i)) THEN
			IF (RST_i = '0') THEN
				mem_write_state <= IDLE;
			ELSE
				--Write Case
				smp_rdy_past <= smp_rdy_i;
				CASE mem_write_state IS
					WHEN IDLE =>
						mem_wr_ack_s <= '0';
						wr_en_s <= "0";
						IF (smp_rdy_i = '1' AND smp_rdy_past = '0') THEN
							mem_write_state <= send_read_req;
						end IF;
					WHEN send_read_req =>
						wr_addr_s <= wr_addr_i;
						D_SRAM_o_s <= D_mem_i;
						mem_write_state <= write_bram;
					WHEN  write_bram =>
						D_SRAM_o_s <= D_mem_i;
						wr_en_s <= "1";
						mem_wr_ack_s <= '1';
						IF (smp_rdy_i = '0') THEN
							mem_write_state <= IDLE;
						end IF;
					WHEN OTHERS=>
						mem_write_state <= ERROR;
				end CASE;
			--Read Case
				CASE mem_read_state IS
					WHEN DAC_GEN_STOP =>
						D_DAC_s <= (others=>'0');
						read_addr_s <= (others=>'0');
						future_read_addr_s <= (others=>'0');
						fdiv_cnt_s <= "00001";
						IF (GEN_RUN_i = '1') THEN
							mem_read_state <= SRAM_to_DAC;
						end IF;
					WHEN  SRAM_to_DAC =>
						IF (GEN_RUN_i = '1') THEN
							D_DAC_s <= D_SRAM_i;
							IF (fdiv_cnt_s = unsigned(fdiv_i)) THEN
								fdiv_cnt_s <= "00001";
								IF (read_addr_s + unsigned(inc_rd_addr_i) >= (unsigned(max_rd_addr_i))) THEN
									read_addr_s <= read_addr_s - unsigned(max_rd_addr_i) + unsigned(inc_rd_addr_i);
								ELSE
									read_addr_s <= read_addr_s + unsigned(inc_rd_addr_i);
								END IF;
							ELSE
								fdiv_cnt_s <= fdiv_cnt_s + 1;
							end IF;
						ELSE
							read_addr_s <= (others=>'0');
							mem_read_state <= DAC_GEN_STOP;
						END IF;
					WHEN OTHERS=>
						mem_write_state <= ERROR;
				end CASE;
			end IF;
		end IF;
	end PROCESS;
	D_SRAM_o <= D_SRAM_o_s;
	D_DAC_o <=  D_DAC_s;
	mem_wr_addr_o <= wr_addr_s;
	mem_rd_addr_o <= std_logic_vector(read_addr_s);
	WEN_o <= wr_en_s;
	mem_wr_ack_o <= mem_wr_ack_s;
end Behavioral;
