// 函数: sub_1423200a0
// 地址: 0x1423200a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f64a80(arg1)

if (result != 0 && *(arg1 + 0x430) != 0 && *(arg1 + 0x808) s> 0)
    result = sub_141f5e0e0(arg1, arg2)
    int32_t j = result.d
    
    if (result.d != 0xffffffff)
        int32_t i_1 = 0
        int32_t i = 0
        
        if (*(arg1 + 0x818) s> 0)
            int64_t rbp_1 = 0
            
            do
                int64_t rbx_2 = *(*(*(arg1 + 0x810) + rbp_1) + 0x18)
                result = sub_141f5e0e0(arg1, rbx_2)
                
                if (result.d != 0xffffffff)
                    if (rbx_2 == arg2)
                        result = sub_1422352a0(*(*(arg1 + 0x810) + rbp_1))
                    else if (result.d s> j)
                        int64_t rdx_3 = *(*(arg1 + 0x430) + 0x1a8)
                        result = zx.q(*(rdx_3 + sx.q(result.d) * 0xc + 8))
                        
                        while (result.d != j)
                            result = zx.q(*(rdx_3 + sx.q(result.d) * 0xc + 8))
                            
                            if (result.d == 0xffffffff)
                                goto label_142320187
                        
                        result = sub_1422352a0(*(*(arg1 + 0x810) + rbp_1))
                
            label_142320187:
                i += 1
                rbp_1 += 8
            while (i s< *(arg1 + 0x818))
        
        if (*(arg1 + 0x808) s> 0)
            void** r14_1 = nullptr
            
            do
                result = sub_14221b2f0(*(r14_1 + *(arg1 + 0x800)))
                
                if (result.b != 0)
                    int64_t rbx_3 = *(sub_140d3c6e0(*(r14_1 + *(arg1 + 0x800)) + 0x100) + 0x80)
                    result = sub_141f5e0e0(arg1, rbx_3)
                    
                    if (result.d != 0xffffffff)
                        if (rbx_3 == arg2)
                            result = sub_142225820(*(r14_1 + *(arg1 + 0x800)), 0)
                        else if (result.d s> j)
                            int64_t rdx_6 = *(*(arg1 + 0x430) + 0x1a8)
                            result = zx.q(*(rdx_6 + sx.q(result.d) * 0xc + 8))
                            
                            while (result.d != j)
                                result = zx.q(*(rdx_6 + sx.q(result.d) * 0xc + 8))
                                
                                if (result.d == 0xffffffff)
                                    goto label_14232023d
                            
                            result = sub_142225820(*(r14_1 + *(arg1 + 0x800)), 0)
                
            label_14232023d:
                i_1 += 1
                r14_1 = &r14_1[1]
            while (i_1 s< *(arg1 + 0x808))

return result
