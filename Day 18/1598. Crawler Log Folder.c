int minOperations(char** logs, int logsSize) {
    int op = 0;
    for(int i=0; i<logsSize; i++)
    {
        if(strcmp(logs[i],"../")==0)
        {
            if(op>0)
                op--;
        }
        else if(strcmp(logs[i], "./")==0)
            continue;
        else
            op++;
    }
    return op;
}
