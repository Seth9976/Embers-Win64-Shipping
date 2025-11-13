// 函数: sub_142c39730
// 地址: 0x142c39730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg3 + 0x60)
int32_t r9 = 0
int32_t rdi = 1
int32_t arg_18 = r8

if (r8 u> 1)
    int16_t* r14_1 = *(arg3 + 0x70) + 0x24
    
    do
        if ((1 << ((*r14_1).b & 0x1f) & 0x1c00) == 0)
            if (rdi - r9 u>= 2)
                int64_t rsi_1 = *(arg3 + 0x70)
                
                if (r9 u< rdi)
                    do
                        if ((1 << ((*(rsi_1 + zx.q(r9) * 0x14 + 0x10)).b & 0x1f) & 0x1c00) == 0)
                            uint64_t rbx_1 = zx.q(r9 + 1)
                            
                            if (rbx_1.d u< rdi)
                                int16_t* r8_3 = rsi_1 + ((rbx_1 + ((rbx_1 + 1) << 2)) << 2)
                                
                                while ((1 << ((*r8_3).b & 0x1f) & 0x1c00) != 0)
                                    rbx_1 = zx.q(rbx_1.d + 1)
                                    r8_3 = &r8_3[0xa]
                                    
                                    if (rbx_1.d u>= rdi)
                                        break
                            
                            sub_142c39eb0(arg1, arg2, arg3, r9, rbx_1.d, arg4)
                            r9 = (rbx_1 - 1).d
                        
                        r9 += 1
                    while (r9 u< rdi)
                    
                    r8 = arg_18
            
            r9 = rdi
        
        rdi += 1
        r14_1 = &r14_1[0xa]
    while (rdi u< r8)

return sub_142c3a260(arg1, arg2, arg3, r9, r8, arg4)
