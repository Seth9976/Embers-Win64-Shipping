// 函数: sub_1413edce0
// 地址: 0x1413edce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *arg1
int64_t result

if (not(zmm0 * zmm0 >= 9.99999975e-06f))
    zmm0 = arg1[1]
    
    if (not(zmm0 * zmm0 >= 9.99999975e-06f))
        zmm0 = arg1[2]
        
        if (not(zmm0 * zmm0 >= 9.99999975e-06f))
            result.b = 1
            return result

result.b = 0
return result
