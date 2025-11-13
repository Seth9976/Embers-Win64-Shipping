// 函数: sub_14074c510
// 地址: 0x14074c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if ((*(arg1 + 0x54c) & 4) != 0 && *(arg1 + 0xc0) == 0)
    rax_1 = sub_140d3c6e0(arg1 + 0x568)

if ((*(arg1 + 0x54c) & 4) == 0 || *(arg1 + 0xc0) != 0 || rax_1 == 0)
    void* rax_3 = *(arg1 + 0x528)
    float var_88
    float zmm0[0x4]
    uint128_t zmm1
    float zmm3
    float zmm5
    int128_t zmm6
    int128_t zmm7
    float zmm8[0x4]
    
    if (rax_3 == 0)
        zmm1 = zx.o(data_143dbb1f8.q)
        float rax_4 = data_143dbb200
        zmm8 = zx.o(0)
        zmm8[0] = 0f * 0.5f
        zmm6.d = 0f * 0.5f
        zmm5 = 0f * 0.5f
        zmm0 = zmm1
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm8[0] = zmm8[0] f+ zmm1.d
        float var_7c_2 = zmm8[0]
        int32_t var_78_2 = zmm6.d
        zmm1.d = 0f * 0f
        zmm3 = zmm6.d + temp0_2[0]
        float var_74_2 = zmm5
        zmm0 = zx.o(0)
        var_88 = zmm8[0]
        zmm0[0] = 0f * 0f
        zmm7.d = 0f * 0f
        zmm1.d = zmm1.d f+ zmm0[0]
        float var_84_2 = zmm3
        float var_80_2 = zmm5 + rax_4
        zmm1.d = zmm1.d f+ zmm7.d
        zmm1.d = zmm1.d f* 0.25f
        zmm0 = _mm_sqrt_ss(zx.o(0)[0], zmm1.d)
    else
        float zmm4[0x4] = *(rax_3 + 0x6d0)
        zmm6 = *(rax_3 + 0x6c8)
        zmm7.d = (*(rax_3 + 0x6dc)).d f- zmm4[0]
        zmm5 = *(rax_3 + 0x6cc)
        zmm8 = *(rax_3 + 0x6d8)
        zmm8[0] = zmm8[0] - zmm5
        uint128_t zmm9
        zmm9.d = (*(rax_3 + 0x6d4)).d f- zmm6.d
        zmm3 = zmm7.d * 0.5f
        zmm7.d = zmm7.d f* zmm7.d
        float zmm2 = zmm8[0] * 0.5f
        zmm4[0] = zmm4[0] + zmm3
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm1.d = zmm9.d f* 0.5f
        zmm9.d = zmm9.d f* zmm9.d
        float var_80_1 = zmm4[0]
        zmm6.d = zmm6.d f+ zmm1.d
        zmm4 = *(arg1 + 0x264)
        zmm9.d = zmm9.d f+ zmm8[0]
        float var_84_1 = zmm5 + zmm2
        zmm4[0] = zmm4[0] f* zmm1.d
        zmm1.d = zmm4.d f* zmm2
        zmm9.d = zmm9.d f+ zmm7.d
        var_88 = zmm6.d
        float var_7c_1 = zmm4[0]
        zmm4[0] = zmm4[0] * zmm3
        int32_t var_78_1 = zmm1.d
        zmm9.d = zmm9.d f* 0.25f
        float var_74_1 = zmm4[0]
        zmm0 = _mm_sqrt_ss(0, zmm9.d)
        zmm0[0] = zmm0[0] * zmm4[0]
    float var_70_1 = zmm0[0]
    sub_140ae2e90(&var_88, arg2, arg3)
else
    *arg2 = *(rax_1 + 0x100)
    arg2[1].q = *(rax_1 + 0x110)
    *(arg2 + 0x18) = *(rax_1 + 0x118)

return arg2
