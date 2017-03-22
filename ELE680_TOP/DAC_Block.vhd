----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:29:00 03/14/2017 
-- Design Name: 
-- Module Name:    DAC_Block - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity DAC_Block is
    Port ( D_DAC_i : in  STD_LOGIC_VECTOR (13 downto 0);
			  ATT_i : in STD_LOGIC_VECTOR (3 downto 0);
           D_o : out  STD_LOGIC_VECTOR (11 downto 0);
           RST_i : in  STD_LOGIC;
           CLK_i : in  STD_LOGIC);
end DAC_Block;

architecture Behavioral of DAC_Block is
signal D_DAC_s : std_logic_vector (11 downto 0);
begin
process(CLK_i)
begin
	IF(rising_edge(CLK_i)) THEN
		IF (RST_i = '0') THEN
			D_DAC_s <= (others=>'0');
		ELSE
			CASE ATT_i IS
				WHEN x"0"=>
					D_DAC_s <= D_DAC_i(13 downto 2);
				WHEN x"1"=>
					D_DAC_s <= "0" & D_DAC_i(13 downto 3);
				WHEN x"2"=>
					D_DAC_s <= "00" & D_DAC_i(13 downto 4);
				WHEN x"3"=>
					D_DAC_s <= "000" & D_DAC_i(13 downto 5);
				WHEN x"4"=>
					D_DAC_s <= "0000" & D_DAC_i(13 downto 6);
				WHEN x"5"=>
					D_DAC_s <= "00000" & D_DAC_i(13 downto 7);
				WHEN x"6"=>
					D_DAC_s <= "000000" & D_DAC_i(13 downto 8);
				WHEN x"7"=>
					D_DAC_s <= "0000000" & D_DAC_i(13 downto 9);
				WHEN x"8"=>
					D_DAC_s <= "00000000" & D_DAC_i(13 downto 10);
				WHEN x"9"=>
					D_DAC_s <= "000000000" & D_DAC_i(13 downto 11);
				WHEN x"A"=>
					D_DAC_s <= "0000000000" & D_DAC_i(13 downto 12);
				WHEN x"B"=>
					D_DAC_s <= "00000000000" & D_DAC_i(13 downto 13);
				WHEN others=>
					D_DAC_s <= (others=>'0');		
			end CASE;
		END IF;
	END IF;
end process;
D_o <= D_DAC_s;
end Behavioral;

