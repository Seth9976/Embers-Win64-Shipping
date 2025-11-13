// 函数: sub_141e912d0
// 地址: 0x141e912d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1

if (rdi == 0)
    int32_t rax_13 = arg1[2].d
    *arg2 = arg1[1]
    arg2[1].d = rax_13
else
    void* rdi_1 = *(rdi + 0x130)
    int128_t zmm7
    int128_t var_28_1 = zmm7
    int128_t zmm8
    int128_t var_38_1 = zmm8
    int128_t zmm9
    int128_t var_48_1 = zmm9
    int64_t var_b8
    float var_b0_1
    float zmm1[0x4]
    
    if (rdi_1 == 0)
        var_b8 = data_143dbb1f8.q
        var_b0_1 = data_143dbb200
    else
        zmm1 = *(rdi_1 + 0x1d0)
        var_b8.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_b0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_b8:4.d = temp0_1[0]
    
    int64_t var_c8
    float var_a8[0x4]
    int32_t rax_6
    float zmm0[0x4]
    float zmm6[0x4]
    
    if (rdi_1 == 0)
        zmm0 = zx.o(data_143dbb208)
        rax_6 = data_143dbb210
    else
        zmm1 = *(rdi_1 + 0x1c0)
        uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_1 + 0x180), zmm1, 4))
        var_a8 = zmm1
        
        if (temp0_4 != 0)
            *(rdi_1 + 0x180) = zmm1
            int32_t* rax_4
            rax_4, zmm6 = sub_140adf5d0(&var_a8, &var_c8)
            *(rdi_1 + 0x190) = *rax_4
            *(rdi_1 + 0x198) = rax_4[2]
        
        zmm0 = zx.o(*(rdi_1 + 0x190))
        rax_6 = *(rdi_1 + 0x198)
    
    bool cond:0_1 = var_b8.d.d f!= *(arg1 + 0x14)
    var_c8 = zmm0.q
    var_a8[0].q = var_c8
    var_a8[2] = rax_6
    
    if (cond:0_1 || var_b8:4.d.d f!= arg1[3].d || var_b0_1.d f!= *(arg1 + 0x1c)
            || var_a8[0][0] f!= arg1[4].d || var_a8[1][0] f!= *(arg1 + 0x24)
            || not(var_a8[2][0] f== arg1[5].d))
        float var_18_1[0x4] = zmm6
        *(arg1 + 0x14) = var_b8
        zmm0 = zx.o(var_c8)
        *(arg1 + 0x1c) = var_b0_1
        arg1[4] = zmm0.q
        arg1[5].d = rax_6
        zmm1 = *(arg1 + 0xc)
        int32_t zmm2 = arg1[2].d
        zmm6 = arg1[1].d
        float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
        temp0_5[0] = zmm1[0]
        var_c8 = 0
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
        temp0_6[0] = zmm2
        int32_t var_c0_2 = 0
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
        temp0_7[0] = 0x3f800000
        var_c8.o = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
        float var_88[0xa]
        float* rax_10
        float zmm6_1[0x4]
        rax_10, zmm6_1, zmm7, zmm8, zmm9 = sub_14077e760(&var_88, &var_a8)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        float temp0_11[0x4] = __mulps_xmmps_memps(temp0_9, *(rax_10 + 0x30))
        float temp0_12[0x4] = __mulps_xmmps_memps(temp0_10, *(rax_10 + 0x10))
        float temp0_14[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), *(rax_10 + 0x20))
        float temp0_16[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), *rax_10)
        float temp0_19[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_11, temp0_14), _mm_add_ps(temp0_12, temp0_16))
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
        temp0_19[0] = temp0_19[0] f+ zmm9.d
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
        temp0_20[0] = temp0_20[0] f+ zmm8.d
        temp0_21[0] = temp0_21[0] f+ zmm7.d
        float temp0_22[0x4] = _mm_unpacklo_ps(temp0_19, temp0_20[0].q)
        float var_c0_3 = temp0_21[0]
        *(arg1 + 0x2c) = temp0_22.q
        *(arg1 + 0x34) = var_c0_3
    
    int32_t rax_12 = *(arg1 + 0x34)
    *arg2 = *(arg1 + 0x2c)
    arg2[1].d = rax_12

return arg2
