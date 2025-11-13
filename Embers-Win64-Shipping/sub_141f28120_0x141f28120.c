// 函数: sub_141f28120
// 地址: 0x141f28120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef4e60(arg1, 0)
int32_t j = 0
arg1[0x59].d = 0

if (arg2 != 0)
    uint64_t rax = arg1[0x15]
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    for (void** i = data_143f3af10; i != &i[sx.q(data_143f3af18)]; i = &i[1])
        void* rsi_1 = *i
        
        if (*(rsi_1 + 0x18) == rax)
            if (rsi_1 != 0)
                int32_t rcx_2 = *(rsi_1 + 0x28)
                
                if (rcx_2 s> 0)
                    int64_t rbx_1 = 0
                    
                    do
                        int64_t* r9_1 = *(rsi_1 + 0x20)
                        rax = zx.q(rcx_2)
                        
                        if (*(r9_1 + rbx_1) == arg1)
                            int32_t rax_2 = rax.d - j - 1
                            
                            if (rax_2 s>= 1)
                                rax_2 = 1
                            
                            if (rax_2 != 0)
                                memcpy(&r9_1[sx.q(j)], &r9_1[sx.q(rcx_2 - rax_2)], rax_2 << 3)
                                rcx_2 = *(rsi_1 + 0x28)
                            
                            *(rsi_1 + 0x28) = rcx_2 - 1
                            sub_1405c53d0(rsi_1 + 0x20)
                            rax = zx.q(*(rsi_1 + 0x28))
                            j -= 1
                            rbx_1 -= 8
                        
                        j += 1
                        rbx_1 += 8
                        rcx_2 = rax.d
                    while (j s< rax.d)
            
            break

if ((arg1[0x3f].b & 1) == 0)
    return 

jump(*(*arg1 + 0x3a0))
