// 函数: sub_142bd8610
// 地址: 0x142bd8610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_1 = *arg1 + 1

if (i_1 u< arg2)
    while (true)
        char* i = i_1
        
        if (i_1 u< arg2)
            do
                char r8 = *i
                
                if (r8 u> 0x20 || not(test_bit(0x100003601, zx.q(r8))))
                    if (r8 != 0x25)
                        break
                    
                    for (; i u< arg2; i = &i[1])
                        char rcx_1 = *i
                        
                        if (rcx_1 == 0xd)
                            break
                        
                        if (rcx_1 == 0xa)
                            break
                
                i = &i[1]
            while (i u< arg2)
        
        i_1 = i
        
        if (i u>= arg2)
            break
        
        char rcx_2 = *i - 0x30
        
        if (rcx_2 u<= 0x36 && test_bit(0x7e0000007e03ff, zx.q(rcx_2)))
            i_1 = &i[1]
            
            if (i_1 u>= arg2)
                break
            
            continue
        
        if (*i == 0x3e)
            break
        
        *arg1 = i
        return 3

*arg1 = i_1 + 1
return 0
