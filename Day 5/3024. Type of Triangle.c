char* triangleType(int* n, int numsSize) {
    if(n[0]==n[1] && n[1]==n[2])
        return "equilateral";
    else if(n[0]==n[1]||n[1]==n[2]||n[2]==n[0])
    {
        if(n[0]+n[1]>n[2] && n[0]+n[2]>n[1] && n[1]+n[2]>n[0])
            return "isosceles";
    }
    else if(n[0]+n[1]>n[2] && n[0]+n[2]>n[1] && n[1]+n[2]>n[0])
        return "scalene";
    return "none";
}
