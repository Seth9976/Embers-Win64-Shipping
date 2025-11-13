// 函数: sub_1421aeb90
// 地址: 0x1421aeb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int64_t* rcx = data_143f0f180
uint16_t* rdi = (*(*rcx + 0x130))(rcx, &data_143f02b98, arg1, 0, rbx.d << 6, 1)

if (rbx.d s> 0)
    int64_t rbx_1 = 0
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    int128_t zmm8
    int128_t var_48_1 = zmm8
    int128_t zmm9
    int128_t var_58_1 = zmm9
    
    do
        uint128_t zmm1
        zmm1.d = float.s(data_143f4d87c)
        zmm6.d = float.s(zx.q(*(*arg2 + (rbx_1 << 2))))
        int128_t zmm0
        zmm0.d = zmm6.d f/ zmm1.d
        truncf(zmm0.d)
        zmm1.d = float.s(data_143f4d880)
        zmm7.d = zmm0.d f/ zmm1.d
        truncf(zmm7.d)
        zmm7.d = zmm7.d f- zmm7.d
        zmm1.d = float.s(data_143f4d87c)
        zmm6.d = zmm6.d f/ zmm1.d
        truncf(zmm6.d)
        zmm6.d = zmm6.d f- zmm6.d
        zmm0.d = float.s(data_143a2ee34)
        int32_t i = 0
        zmm9.d = float.s(data_143a2ee38)
        float zmm2 = 1f f/ zmm0.d
        float zmm3 = zmm2 * 0.5f f+ zmm6.d
        float zmm4_1 = zmm2 * 1.5f f+ zmm6.d
        float zmm5_1 = zmm2 * 2.5f f+ zmm6.d
        zmm8.d = 1f f/ zmm9.d
        zmm2 = zmm2 * 3.5f f+ zmm6.d
        
        do
            *rdi = ((((zmm3 u>> 0x17).w - 0x10) & 0x1f) | (zmm3 u>> 0x1f).w << 5) << 0xa
                | ((zmm3 u>> 0xd).w & 0x3ff)
            zmm1.d = _mm_cvtepi32_ps(zx.o(i)).d f+ 0.5f
            zmm0.d = zmm8.d f* zmm1.d
            zmm0.d = zmm0.d f+ zmm7.d
            float rcx_4 = zmm0.d
            rdi[1] = ((((rcx_4 u>> 0x17).w - 0x10) & 0x1f) | (rcx_4 u>> 0x1f).w << 5) << 0xa
                | ((rcx_4 u>> 0xd).w & 0x3ff)
            rdi[2] = ((((zmm4_1 u>> 0x17).w - 0x10) & 0x1f) | (zmm4_1 u>> 0x1f).w << 5) << 0xa
                | ((zmm4_1 u>> 0xd).w & 0x3ff)
            rdi[3] = ((((rcx_4 u>> 0x17).w - 0x10) & 0x1f) | (rcx_4 u>> 0x1f).w << 5) << 0xa
                | ((rcx_4 u>> 0xd).w & 0x3ff)
            rdi[4] = ((((zmm5_1 u>> 0x17).w - 0x10) & 0x1f) | (zmm5_1 u>> 0x1f).w << 5) << 0xa
                | ((zmm5_1 u>> 0xd).w & 0x3ff)
            i += 1
            rdi[5] = ((((rcx_4 u>> 0x17).w - 0x10) & 0x1f) | (rcx_4 u>> 0x1f).w << 5) << 0xa
                | ((rcx_4 u>> 0xd).w & 0x3ff)
            rdi[6] = ((((zmm2 u>> 0x17).w - 0x10) & 0x1f) | (zmm2 u>> 0x1f).w << 5) << 0xa
                | ((zmm2 u>> 0xd).w & 0x3ff)
            zmm1.d = zmm1.d f/ zmm9.d
            zmm1.d = zmm1.d f+ zmm7.d
            float arg_10 = zmm1.d
            rdi[7] = ((((arg_10 u>> 0x17).w - 0x10) & 0x1f) | (arg_10 u>> 0x1f).w << 5) << 0xa
                | ((arg_10 u>> 0xd).w & 0x3ff)
            rdi = &rdi[8]
        while (i s< 4)
        
        rbx_1 += 1
    while (rbx_1 s< rbx)

jump(*(*data_143f0f180 + 0x138))
