// 函数: sub_142c230f0
// 地址: 0x142c230f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0)
    void* rbx_1 = &arg1[2]
    
    if (sub_142bf7510(arg2, rbx_1, ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 2) != 0)
        uint32_t result = zx.d(arg1[1])
        int32_t rdi_1 = 0
        uint32_t r14_1 = zx.d(*arg1) << 8
        uint32_t r14_2 = r14_1 + result
        
        if (r14_1 == neg.d(result))
        label_142c2321e:
            result.b = 1
        else
            while (true)
                result = sub_142c294c0(rbx_1, arg2, arg3)
                
                if (result.b != 0)
                    uint16_t rdx_3 = zx.w(*rbx_1)
                    uint64_t r8_5 = zx.q(*(rbx_1 + 1))
                    
                    if (0 == rdx_3 * 0x100 + r8_5.w)
                        goto label_142c2320f
                    
                    char* rbp_4 = (zx.q(rdx_3.b) << 8) + arg3 + r8_5
                    char rax_2 = sub_142bf7510(arg2, rbp_4, 2)
                    
                    if (rax_2 != 0)
                        result = sub_142bf7510(arg2, &rbp_4[2], 
                            ((zx.d(*rbp_4) << 8) + zx.d(rbp_4[1])) * 2)
                    
                    if (rax_2 != 0 && result.b != 0)
                        goto label_142c2320f
                    
                    if (sub_142bf99e0(arg2, rbx_1, 2).b != 0)
                        *rbx_1 = 0
                    label_142c2320f:
                        rdi_1 += 1
                        rbx_1 += 2
                        
                        if (rdi_1 u>= r14_2)
                            goto label_142c2321e
                        
                        continue
                
                result.b = 0
                break
        
        return result

return 0
