// 函数: sub_140db3460
// 地址: 0x140db3460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg1[2]
float zmm4 = *arg2 - *arg1
float zmm5 = arg2[1] - arg1[1]
int128_t zmm7
zmm7.d = 1f / (zmm2 * arg1[5] - arg1[4] * arg1[3])
float zmm1 = (zmm5 * zmm2 - zmm4 * arg1[3]) f* zmm7.d
int64_t result

if (not(zmm1 < 0f) && not(zmm1 > 1f))
    zmm4 = (zmm4 * arg1[5] - zmm5 * arg1[4]) f* zmm7.d
    
    if (not(zmm4 < 0f) && not(zmm4 > 1f))
        result.b = 1
        return result

result.b = 0
return result
