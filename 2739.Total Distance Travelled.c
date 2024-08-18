int distanceTraveled(int mainTank, int additionalTank){
    int milege = 0;
    while(mainTank >= 5)
    {
        mainTank -= 5;
        milege += 50;
        if(additionalTank >=1)
        {
            mainTank += 1;
            additionalTank--;
        }
    }
    milege += mainTank*10;
    return milege;
}
