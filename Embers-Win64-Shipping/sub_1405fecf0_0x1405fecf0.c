// 函数: sub_1405fecf0
// 地址: 0x1405fecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg1[0xb] != 0 && (**arg1)(arg1, 4) != 0)
    void* arg_8 = &arg1[2]
    EnterCriticalSection(&arg1[2])
    int64_t rax_2
    
    if (*(arg1 + 0xbc) u> 1)
        rax_2 = *arg2
    
    int64_t* rdi
    
    if (*(arg1 + 0xbc) u<= 1 || rax_2 s< 0 || rax_2 s> arg1[7])
        rdi.b = 0
    else if (arg1[0xe].b == 0)
        rdi = zx.q(sub_1405f2370(&arg1[-1], rax_2))
    else
        if (arg2 != &arg1[0x15])
            if (arg1[0x16].b != 0)
                arg1[0x16].b = 0
                rax_2 = *arg2
            
            arg1[0x15] = rax_2
            arg1[0x16].b = 1
        
        rdi.b = 1
    
    if (arg1 != -0x10)
        LeaveCriticalSection(&arg1[2])
    
    return zx.q(rdi.b)

return 0
