// 函数: sub_141fcdd90
// 地址: 0x141fcdd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xae].d

if ((rax.b & 4) != 0)
    int32_t rax_1 = rax & 0xfffffffb
    arg1[0xae].d = rax_1
    return rax_1

int64_t* rax_2 = sub_14226e260(arg1)
arg1[0xae].d &= 0xfffffff7
arg1[0xae].d |= zx.d(arg2) << 3
char rax_3
uint128_t zmm6
uint128_t zmm7
float zmm8[0x4]
int128_t zmm9
uint128_t zmm10
uint128_t zmm11
float zmm12[0x4]
int128_t zmm13

if (rax_2 != 0)
    rax_3, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 = sub_141fb5de0(arg1, arg1 + 0x64c)

int32_t rax_4

if (rax_2 == 0 || rax_3 == 0)
    rax_4 = 0
else
    rax_4 = 4

int32_t rcx_5 = (arg1[0xae].d & 0xfffffffb) | rax_4
arg1[0xae].d = rcx_5

if ((rcx_5.b & 4) != 0)
    void* rax_5 = rax_2[0x26]
    uint128_t var_18_1 = zmm6
    uint128_t var_28_1 = zmm7
    float var_38_1[0x4] = zmm8
    uint128_t var_58_1 = zmm10
    uint128_t var_68_1 = zmm11
    float var_78_1[0x4] = zmm12
    int128_t var_88_1 = zmm13
    float var_b8
    uint64_t var_a8
    int32_t var_a0
    int32_t* rax_6
    uint128_t zmm0
    
    if (rax_5 == 0)
        var_a0 = data_143dbb200
        rax_6 = &var_a8
        var_a8 = data_143dbb1f8.q
    else
        float zmm1[0x4] = *(rax_5 + 0x1d0)
        rax_6 = &var_b8
        var_b8 = zmm1[0]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_b0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        int32_t var_b4_1 = zmm0.d
    
    rax_4 = rax_6[2]
    arg1[0xc8] = *rax_6
    arg1[0xc9].d = rax_4
    zmm10 = *(arg1 + 0x64c)
    zmm11 = arg1[0xca].d
    zmm6.d = zmm10.d f- arg1[0xc8].d
    zmm12 = *(arg1 + 0x654)
    zmm7.d = zmm11.d f- *(arg1 + 0x644)
    zmm8 = zmm12
    zmm8[0] = zmm8[0] f- arg1[0xc9].d
    var_b8 = zmm6.d
    zmm0.d = zmm6.d f* zmm6.d
    int32_t var_b4_2 = zmm7.d
    uint128_t zmm2
    zmm2.d = zmm7.d f* zmm7.d
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm2.d = zmm2.d f+ zmm0.d
    float var_b0_2 = zmm8[0]
    zmm2.d = zmm2.d f+ zmm8[0]
    zmm0 = _mm_sqrt_ss(0, zmm2.d)
    
    if (zmm0.d f!= zx.o(0).d)
        int128_t var_48_1 = zmm9
        
        if (zmm0.d f< 30f)
            if (not(zmm2.d f== 1f))
                if (zmm2.d f>= 9.99999994e-09f)
                    float zmm3[0x4] = zmm2
                    float temp0_4[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = temp0_4.d f* temp0_4[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm2.d = 0.5f - zmm3[0]
                    zmm0.d = temp0_4.d f* zmm2.d
                    temp0_4[0] = temp0_4[0] f+ zmm0.d
                    temp0_4[0] = temp0_4[0] * temp0_4[0]
                    zmm3[0] = zmm3[0] * temp0_4[0]
                    zmm0.d = temp0_4.d f* (0.5f - zmm3[0])
                    temp0_4[0] = temp0_4[0] f+ zmm0.d
                    zmm6.d = zmm6.d f* temp0_4[0]
                    zmm7.d = zmm7.d f* temp0_4[0]
                    zmm8[0] = zmm8[0] * temp0_4[0]
                else
                    zmm6 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm8 = data_143dbb200
            
            zmm6.d = zmm6.d f* 30f
            zmm7.d = zmm7.d f* 30f
            zmm8[0] = zmm8[0] * 30f
            zmm10.d = zmm10.d f- zmm6.d
            zmm11.d = zmm11.d f- zmm7.d
            zmm12[0] = zmm12[0] - zmm8[0]
            arg1[0xc8] = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
            arg1[0xc9].d = zmm12[0]
            sub_141dd67f0(rax_2, &arg1[0xc8], 0, nullptr, 0)
            arg1[0xcb].d = 0x41f00000
        else
            arg1[0xcb].d = zmm0.d
        
        sub_140adf3c0(&var_b8, &var_a8)
        (*(*arg1 + 0x668))(arg1, &var_a8)
        int512_t zmm2_1
        zmm2_1.o = zx.o(0)
        int32_t var_90_2 = var_a0
        int64_t rax_11 = *rax_2
        uint64_t var_98 = var_a8
        rax_4 = (*(rax_11 + 0x6f0))(rax_2, &var_98, zmm2_1)
    else
        arg1[0xae].d = rcx_5 & 0xfffffffb

return rax_4
