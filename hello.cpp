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
    return 0;
}

int main(int argc, char argv[])
{
    int n = 10;
    for (int i = 0; i < n; n--) { // NON_COMPLIANT
    }
    
    for (auto i = init(); i < 10; inc(i)) { // NON_COMPLIANT
    }
    
    for (int i = 0; i < 10; i = do_foo(), i+1) { // NON_COMPLIANT
    }
    
    for (int i = 0; i < 10; i++); // COMPLIANT
    
    for (int i = 0; i < 10; ++i); // COMPLIANT
    
    for (int i = 10; i > 0; i--); // COMPLIANT
    
    for (int i = 10; i > 0; --i); // COMPLIANT
    
    for (int i = 0, j = 0; i != j; i++, j++); // COMPLIANT
    
    for (int i = 0; i < 10; i += 1); // COMPLIANT
    
    return 0;
}
