int init()
{
    return 0;
}

void inc(int &i)
{
    i++;
}

int do_foo()
{
    return 0
}

int main(int argc, char argv[])
{
    int n = 10;
    for (int i = 0; i < n; n--) { // NON_COMPLIANT
    }
    
    for (auto i = init(); i < 10; inc(i)) { // COMPLIANT
    }
    
    for (int i = 0; i < 10; i = do_foo(), i+1) { // NON_COMPLIANT
    }
    
    return 0;
}
