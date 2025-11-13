// 函数: sub_141e8b090
// 地址: 0x141e8b090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg1[4]
int32_t result = (zx.o(0)).d

if (not(zmm3 <= 0f))
    result = arg1[2]
    float zmm2 = arg1[3] / zmm3
    zmm3 = arg1[1]
    
    if (not(zmm2 >= 1f))
        result = result f* zmm2
        *arg1 = zmm3 f+ result
        arg1[3] = arg2 + arg1[3]
        return result
    
    arg1[4] = 0
    *arg1 = zmm3 f+ result
    arg1[3] = arg2 + arg1[3]

return result
