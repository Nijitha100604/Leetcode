int addDigits(int num) {
   int copy = num;
   int sum = 0;
   while(copy!=0)
   {
      int d = copy%10;
      sum += d;
      copy /= 10;
   }

   if(sum<=9)
        return sum;
   else
        return addDigits(sum);

}
