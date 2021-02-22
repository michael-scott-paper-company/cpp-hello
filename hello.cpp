int main(int argc, char argv[])
{
    // NON_COMPLIANT
    for (int i = 0, j = 1; i < j; i += 2) j++;
    
    // NON_COMPLIANT
    int x, y;
    for (x = 0, y = 1; x < y; x += 2) y++;
    
    return 0;
}
