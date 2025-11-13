// 函数: sub_142bd83f0
// 地址: 0x142bd83f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *arg1
int32_t r9 = 0
int32_t r10 = 3

if (rax u< arg2)
    while (true)
        char rdx = *rax
        rax = &rax[1]
        
        if (rdx == 0x5c)
            if (rax == arg2)
                break
            
            switch (zx.d(*rax) - 0x28)
                case 0, 1, 0x34, 0x3a, 0x3e, 0x46, 0x4a, 0x4c
                    rax = &rax[1]
                default
                    for (int32_t i = 0; i u< 3; i += 1)
                        if (rax u>= arg2)
                            goto label_142bd84ac
                        
                        if (*rax - 0x30 u> 7)
                            break
                        
                        rax = &rax[1]
        else if (rdx == 0x28)
            r9 += 1
        else if (rdx == 0x29)
            int32_t temp0_1 = r9
            r9 -= 1
            
            if (temp0_1 == 1)
                r10 = 0
                break
        
        if (rax u>= arg2)
            *arg1 = rax
            return 3

label_142bd84ac:
*arg1 = rax
return zx.q(r10)
