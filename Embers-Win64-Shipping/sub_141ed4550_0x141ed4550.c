// 函数: sub_141ed4550
// 地址: 0x141ed4550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141e7aa60(*arg1, arg1[1])
uint64_t result_1 = result

if (result != 0)
    uint32_t zmm0_1[0x4] = sub_141c3a420(result + 0x1ac)
    result = zx.q(arg1[3].b)
    
    if (result.b == 0 || not(zmm0_1[0] f<= *(arg1 + 0x14)))
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x14), data_142d3f770)
        int64_t rbp
        rbp.b = temp0_1[0] f<= 9.99999994e-09f
        
        if (*(result_1 + 0x185) != 2)
            if (result.b != 0 || rbp.b != 0)
                result.b = 1
            else
                result = 0
            
            *(result_1 + 0x185) = result.b
            goto label_141ed45f8
        
        if (not(temp0_1[0] f> 9.99999994e-09f) && not(sub_141c39c40(result_1 + 0x1ac) f< arg1[2].d))
        label_141ed45f8:
            
            if (arg1[3].b != 0 || rbp.b != 0)
                int32_t zmm0_3 = sub_141c39bb0(result_1 + 0x1ac)
                float zmm2[0x4] = arg1[2].d
                
                if (not(zmm0_3 f< 0f))
                    zmm2 = _mm_min_ss(zmm2[0], zmm0_3)
                
                sub_141c45d50(result_1 + 0x1ac, zmm2[0])
            
            return sub_141c46d20(result_1 + 0x1ac, *(arg1 + 0x14), arg1[2].d, *(arg1 + 0x19))

return result
