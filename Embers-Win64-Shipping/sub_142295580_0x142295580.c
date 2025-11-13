// 函数: sub_142295580
// 地址: 0x142295580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
uint64_t rbx = zx.q(arg2)

if (arg2 != 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float (* rsi_1)[0x4] = arg1
    int128_t zmm0
    zmm0.d = float.s(rbx)
    int128_t zmm7
    zmm7.d = 1f f/ zmm0.d
    int128_t var_68 = *arg4
    
    do
        zmm6 = zx.o(0)
        zmm6[0] = float.s(zx.q(i))
        zmm6[0] = zmm6[0] f* zmm7.d
        zmm6[0] = zmm6[0] f* data_143a2fd94
        void var_78
        int32_t zmm8_1
        int128_t zmm9_1
        zmm6, zmm7, zmm8_1, zmm9_1 = sub_1422aae30(&var_78, zmm6, &var_68)
        float var_58[0x4]
        sub_140acc990(&var_58, &var_78)
        float zmm1[0x4] = var_58
        zmm6[0] = zmm6[0] f* zmm8_1
        *rsi_1 = zmm1
        zmm0, result = expf((zmm6 ^ zmm9_1)[0])
        i += 1
        (*rsi_1)[3] = zmm0.d
        rsi_1 = &rsi_1[1]
    while (i u< rbx.d)

if (data_143a2fd98 != 0)
    arg1[zx.q((rbx - 1).d)] = data_14399f5e0

return result
