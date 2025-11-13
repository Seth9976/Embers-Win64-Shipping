// 函数: sub_141bf52c0
// 地址: 0x141bf52c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_a8
int64_t* result = sub_141bab3c0(arg1, &var_a8)
int64_t* rdi = var_a8

if (rdi != 0)
    TEB* gsbase
    float zmm1[0x4]
    
    if (data_143f3155c
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3155c)
        
        if (data_143f3155c == 0xffffffff)
            int32_t zmm3 = data_143dbb1f0.d
            int32_t zmm2 = data_143dbb1f0:4.d
            zmm1 = data_14399f65c
            data_143f31548 = data_14399f658[0]
            data_143f31558 = 0
            data_143f31540 = zmm3
            data_143f31544 = zmm2
            data_143f3154c = zmm1[0]
            data_143f31550 = zmm3
            data_143f31554 = zmm2
            _Init_thread_footer(&data_143f3155c)
    
    float var_98[0x4]
    int64_t var_78
    
    if (data_143f31548[0] f!= (*(arg1 + 0x98)).d || data_143f3154c[0] f!= *(arg1 + 0x9c)
            || data_143f31550[0] f!= *(arg1 + 0xa0) || data_143f31554[0] f!= *(arg1 + 0xa4)
            || data_143f31558[0] f!= *(arg1 + 0xa8) || data_143f31540[0] f!= *(arg1 + 0x90)
            || data_143f31544[0] f!= *(arg1 + 0x94))
        zmm1 = *(arg1 + 0xa8)
        zmm1[0] = zmm1[0] * 0.0174532924f
        *(arg1 + 0x90)
        *(arg1 + 0x94)
        int128_t zmm0_1
        int512_t zmm6_1
        int512_t zmm8_1
        int64_t zmm10_1
        float zmm11_1
        zmm0_1, zmm6_1, zmm8_1, zmm10_1, zmm11_1 = __libm_sse2_sincosf_(zmm1)
        zmm6_1.o = *(arg1 + 0x9c)
        zmm8_1.o = zmm0_1
        void arg_10
        int32_t* rax_2
        float zmm6_2
        float zmm8_2[0x4]
        float zmm9_1[0x4]
        rax_2, zmm6_2, zmm8_2, zmm9_1 = sub_141ba8920(&arg_10, arg1 + 0xa0)
        char var_80_2 = 1
        float zmm2_1[0x4] = zmm8_2 ^ data_142d3f780
        char var_7c_2 = 1
        float zmm5_1[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 1)
        zmm5_1[0] = zmm5_1[0] * zmm11_1
        float zmm1_1 = zmm11_1 f* rax_2[1]
        float zmm3_1 = zmm5_1[0]
        zmm2_1[0] = zmm2_1[0] * zmm6_2
        float zmm4_1 = zmm6_2 f* *rax_2
        var_78 = 0
        zmm2_1[0] = zmm2_1[0] * zmm1_1
        int32_t var_70_2 = 0
        zmm3_1 = zmm3_1 * zmm1_1
        zmm1_1 = zmm5_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm6_2
        zmm8_2[0] = zmm8_2[0] * zmm11_1
        zmm1_1 = zmm1_1 * zmm4_1 + zmm2_1[0]
        float zmm7_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
        zmm8_2[0] = zmm8_2[0] * zmm4_1
        zmm3_1 = zmm3_1 + zmm8_2[0]
        float zmm0_2[0x4] = _mm_unpacklo_ps(zmm9_1, zmm10_1)
        zmm8_2[0] = zmm8_2[0] + zmm5_1[0]
        int64_t var_88_1 = zmm0_2.q
        zmm7_1[0] = zmm3_1
        zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc6)
        zmm7_1[0] = zmm1_1
        zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x27)
        zmm7_1[0] = zmm8_2[0]
        var_98 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x39)
        sub_141b77e10(rdi, &rdi[0x39], &var_98, 0x11)
        result = sub_140745b20(&var_78)
    else
        char var_80_1 = 0
        var_78 = 0
        int32_t var_70_1 = 0
        char var_7c_1 = 1
        sub_141b77e10(rdi, &rdi[0x39], &var_98, 0x11)
        result = sub_140745b20(&var_78)

int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        result = (**var_a0)(var_a0)
        int32_t temp1_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_a0 + 8))(var_a0, 1)

return result
