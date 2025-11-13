// 函数: sub_142c237f0
// 地址: 0x142c237f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0)
    void* rbx_1 = &arg1[2]
    
    if (sub_142bf7510(arg2, rbx_1, ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 2) != 0)
        uint32_t result = zx.d(arg1[1])
        uint32_t rbp_1 = zx.d(*arg1) << 8
        int32_t rdi_1 = 0
        
        if (rbp_1 == neg.d(result))
        label_142c238ec:
            result.b = 1
        else
            while (true)
                if (sub_142c294c0(rbx_1, arg2, arg3).b != 0)
                    uint16_t rdx_3 = zx.w(*rbx_1)
                    uint64_t r8_5 = zx.q(*(rbx_1 + 1))
                    
                    if (0 == rdx_3 * 0x100 + r8_5.w)
                        goto label_142c238e2
                    
                    char* rcx_8 = (zx.q(rdx_3.b) << 8) + arg3 + r8_5
                    
                    if (sub_142c23250(rcx_8, arg2, rcx_8).b != 0)
                        goto label_142c238e2
                    
                    if (sub_142bf99e0(arg2, rbx_1, 2).b != 0)
                        *rbx_1 = 0
                    label_142c238e2:
                        rdi_1 += 1
                        rbx_1 += 2
                        
                        if (rdi_1 u>= rbp_1 + result)
                            goto label_142c238ec
                        
                        continue
                
                result.b = 0
                break
        
        return result

return 0
