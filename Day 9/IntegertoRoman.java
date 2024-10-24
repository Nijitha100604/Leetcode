public class IntegertoRoman {
        public String intToRoman(int num) {
            int[] n={1000,900,500,400,100,90,50,40,10,9,5,4,1};
            String[] r = {"M","CM","D","CD","C", "XC","L", "XL","X","IX","V","IV", "I"};
            StringBuilder roman = new StringBuilder();
            for(int i=0; i<13; i++)
            {
                while(num>=n[i])
                {
                    num -= n[i];
                    roman.append(r[i]);
                }
            }
            return roman.toString();
        }
}
