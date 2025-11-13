// 函数: sub_142c183d0
// 地址: 0x142c183d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 6) != 0 && sub_142bf7510(arg2, &arg1[4], 2) != 0)
    char rax = sub_142bf7510(arg2, &arg1[6], ((zx.d(arg1[4]) << 8) + zx.d(arg1[5])) * 2)
    
    if (rax != 0)
        if ((arg1[3] & 0x10) != 0)
            rax =
                sub_142bf7510(arg2, &arg1[4 + (((zx.q(arg1[4]) << 8) + zx.q(arg1[5]) + 1) << 1)], 2)
        
        if (((arg1[3] & 0x10) == 0 || rax != 0)
                && sub_142c17bd0(&arg1[4], arg2, arg1, (zx.d(*arg1) << 8) + zx.d(arg1[1])) != 0)
            int32_t rbx_2
            int32_t rsi_3
            uint32_t rdi_1
            
            if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) == 9)
                void* rax_5 = sub_142c17b60(arg1, 0)
                
                if ((zx.d(*rax_5) << 8) + zx.d(*(rax_5 + 1)) == 1)
                    rdi_1 = (zx.d(*(rax_5 + 2)) << 8) + zx.d(*(rax_5 + 3))
                else
                    rdi_1 = 0
                
                rbx_2 = 1
                rsi_3 = (zx.d(arg1[4]) << 8) + zx.d(arg1[5])
            
            uint64_t result
            
            if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) != 9 || rsi_3 u<= 1)
            label_142c1852b:
                result.b = 1
            else
                while (true)
                    result = sub_142c17b60(arg1, rbx_2)
                    int32_t rcx_12
                    
                    if ((zx.d(*result) << 8) + zx.d(*(result + 1)) == 1)
                        rcx_12 = zx.d(*(result + 3)) + (zx.d(*(result + 2)) << 8)
                    else
                        rcx_12 = 0
                    
                    if (rcx_12 != rdi_1)
                        result.b = 0
                        break
                    
                    rbx_2 += 1
                    
                    if (rbx_2 u>= rsi_3)
                        goto label_142c1852b
            
            return result

return 0
