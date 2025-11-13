// 函数: sub_142bd8090
// 地址: 0x142bd8090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i_2 = *arg1
int32_t rbp = 0

if (i_2 u< arg2)
    char rdx = *i_2
    int64_t r14
    r14.b = 0
    
    if (rdx == 0x5b)
        r14.b = 0x5d
        i_2 = &i_2[1]
    else if (rdx == 0x7b)
        r14.b = 0x7d
        i_2 = &i_2[1]
    
    while (i_2 u< arg2)
        char* i = i_2
        
        if (i_2 u< arg2)
            do
                char rcx = *i
                
                if (rcx u> 0x20 || not(test_bit(0x100003601, zx.q(rcx))))
                    if (rcx != 0x25)
                        break
                    
                    for (; i u< arg2; i = &i[1])
                        char rax_1 = *i
                        
                        if (rax_1 == 0xd)
                            break
                        
                        if (rax_1 == 0xa)
                            break
                
                i = &i[1]
            while (i u< arg2)
        
        char* i_1 = i
        i_2 = i
        
        if (i u>= arg2)
            break
        
        if (*i == r14.b)
            i_2 = &i[1]
            break
        
        int16_t* rsi_1
        void arg_8
        
        if (arg4 == 0)
            rsi_1 = &arg_8
        else
            if (rbp s>= arg3)
                break
            
            rsi_1 = arg4 + (sx.q(rbp) << 1)
        *rsi_1 = (sub_142bd02f0(&i_1, arg2, 0) s>> 0x10).w
        i_2 = i_1
        
        if (i == i_2)
            rbp = -1
            break
        
        rbp += 1
        
        if (r14.b == 0)
            break

*arg1 = i_2
return zx.q(rbp)
