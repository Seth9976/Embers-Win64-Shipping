// 函数: sub_141e86910
// 地址: 0x141e86910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140a80ea0()
float zmm0[0x4]

if (result == 0)
    zmm0 = arg1.o
    int64_t var_58_1 = 0
    void** const var_48_1 = &data_142d42ed8
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
    temp0_1[0] = arg2.d
    int64_t (* var_68)(int64_t* arg1) = sub_141e76820
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
    temp0_2[0] = arg3.d
    float var_40_1[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
    return sub_141e85cb0(&var_68, arg4)

if (arg2.d f!= *(arg1 + 0xdc) || not(arg3.d f== *(arg1 + 0xd4)))
    *(arg1 + 0xdc) = arg2.d
    result = 0
    
    if (arg3.d f<= 0f)
        *(arg1 + 0xc8) = arg2.d
        *(arg1 + 0xc4) = arg2.d
        *(arg1 + 0xcc) = 0
        *(arg1 + 0xd4) = 0
    else
        zmm0 = *(arg1 + 0xc4)
        int128_t zmm6
        zmm6.d = arg2.d f- zmm0[0]
        *(arg1 + 0xc8) = zmm0[0]
        *(arg1 + 0xd4) = arg3.d
        *(arg1 + 0xd0) = 0
        *(arg1 + 0xcc) = zmm6.d

return result
