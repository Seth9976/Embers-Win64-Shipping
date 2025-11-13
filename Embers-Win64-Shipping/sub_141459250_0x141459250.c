// 函数: sub_141459250
// 地址: 0x141459250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4.d = arg4.d f* 0.0174532924f
uint128_t zmm12 = cosf(arg4.d)
uint128_t zmm0_1 = zx.o(*(arg1 + 0x60c))
uint128_t zmm6 = zmm0_1
arg4 = zmm0_1
zmm0_1.d = (*(arg1 + 0x340)).d f* *arg2
int128_t zmm10 = *(arg1 + 0x344)
float zmm5 = *(arg1 + 0x354)
int128_t zmm11 = *(arg1 + 0x364)
int128_t zmm8 = *(arg1 + 0x348)
float zmm4 = *(arg1 + 0x358)
float zmm2 = *(arg1 + 0x350) f* arg2[4] f+ zmm0_1.d + *(arg1 + 0x360) f* arg2[8]
int128_t zmm9 = *(arg1 + 0x368)
zmm6.d = zmm6.d f- *arg3
int128_t zmm7
zmm7.d = (*(arg1 + 0x614)).d f- arg3[2]
arg4.d = _mm_shuffle_ps(arg4, arg4, 0x55).d f- arg3[1]
int32_t result

if (zmm2 f< zmm12.d)
    result.b = 1
else
    zmm10.d = zmm10.d f* arg2[1]
    zmm11.d = zmm11.d f* arg2[9]
    
    if (zmm5 f* arg2[5] f+ zmm10.d f+ zmm11.d f< zmm12.d)
        result.b = 1
    else
        zmm8.d = zmm8.d f* arg2[2]
        zmm9.d = zmm9.d f* arg2[0xa]
        
        if (zmm4 f* arg2[6] f+ zmm8.d f+ zmm9.d f< zmm12.d)
            result.b = 1
        else
            zmm0_1 = arg5
            arg4.d = arg4.d f* arg4.d
            zmm6.d = zmm6.d f* zmm6.d
            zmm7.d = zmm7.d f* zmm7.d
            arg4.d = arg4.d f+ zmm6.d
            zmm0_1.d = zmm0_1.d f* zmm0_1.d
            arg4.d = arg4.d f+ zmm7.d
            
            if (arg4.d f> zmm0_1.d)
                result.b = 1
            else
                result.b = 0

return result
