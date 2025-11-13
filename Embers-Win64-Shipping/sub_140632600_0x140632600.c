// 函数: sub_140632600
// 地址: 0x140632600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg3 + 4)
int128_t zmm2 = *arg3
float zmm3 = *arg2
float zmm5 = arg2[1]
int128_t zmm0 = *(arg3 + 8)
float zmm4 = arg2[2]
int128_t zmm6
zmm6.d = zmm0.d f+ zmm4
zmm4 = zmm4 f- zmm0.d
int128_t zmm8
zmm8.d = zmm2.d f+ zmm3
int128_t zmm7
zmm7.d = zmm1.d f+ zmm5
zmm5 = zmm5 f- zmm1.d
zmm1 = *arg1
int64_t result

if (not(zmm1.d f< zmm3 f- zmm2.d) && not(zmm1.d f> zmm8.d))
    zmm0 = *(arg1 + 4)
    
    if (not(zmm0.d f< zmm5) && not(zmm0.d f> zmm7.d))
        zmm0 = *(arg1 + 8)
        
        if (not(zmm0.d f< zmm4) && not(zmm0.d f> zmm6.d))
            result.b = 1
            return result

result.b = 0
return result
