int romanToInt(char* s) {
    int integer = 0;
    for(int i=0; i<strlen(s); i++)
    {
        switch(s[i])
        {
            case 'I':
                if(s[i+1]=='V'){
                    integer += 4;
                    i++;
                    break;
                }
                else if(s[i+1]=='X'){
                    integer += 9;
                    i++;
                    break;
                }
                else{
                    integer += 1;
                    break;
                }
            case 'V':
                integer += 5;
                break;
            case 'X':
                if(s[i+1]=='L'){
                    integer += 40;
                    i++;
                    break;
                }
                else if(s[i+1]=='C'){
                    integer += 90;
                    i++;
                    break;
                }
                else{
                    integer += 10;
                    break;
                }
            case 'L':
                integer += 50;
                break;
            case 'C':
                 if(s[i+1]=='D'){
                    integer += 400;
                    i++;
                    break;
                 }
                 else if(s[i+1]=='M'){
                    integer += 900;
                    i++;
                    break;
                 }
                 else{
                    integer += 100;
                    break;
                 }
            case 'D':
                integer += 500;
                break;
            case 'M':
                integer += 1000;
                break;
        }
    }
    return integer;
}
