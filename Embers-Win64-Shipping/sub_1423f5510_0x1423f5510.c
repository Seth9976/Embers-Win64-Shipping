// 函数: sub_1423f5510
// 地址: 0x1423f5510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x8b8))

if (result.b == 4)
    *(arg1 + 0x8b8) = 0
    result = *(arg1 + 0xc38)
    int64_t r8_2 = result + (sx.q(*(arg1 + 0xc40)) << 3)
    uint64_t result_1
    
    if (result == r8_2)
    label_1423f556e:
        result = sub_1423d6f90(data_143f5b298, 0)
        result_1 = result
    else
        while (true)
            result_1 = *result
            
            if (*(result_1 + 0x278) == arg2)
                break
            
            result += 8
            
            if (result == r8_2)
                goto label_1423f556e
    
    int64_t rcx_1 = *(result_1 + 0x218)
    
    if (rcx_1 != 0)
        uint64_t* var_18
        result = sub_14202a200(rcx_1, &var_18)
        uint64_t* r8_3 = var_18
        int32_t i_1
        int32_t i = i_1
        
        while (i s>= 0)
            if (i s>= r8_3[1].d)
                break
            
            result = *r8_3
            
            if (*(*(result + (sx.q(i) << 3)) + 0x30) == 0)
                *(arg1 + 0x8b8) = 4
                return result
            
            i += 1
            int32_t i_2 = i
else if (result.b u<= 1)
    result.b = *(sub_142437e30(arg2, 0, 1) + 0x370) != 0
    *(arg1 + 0x8b8) = result.b

return result
