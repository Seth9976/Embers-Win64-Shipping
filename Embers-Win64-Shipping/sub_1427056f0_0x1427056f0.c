// 函数: sub_1427056f0
// 地址: 0x1427056f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
float zmm6[0x4]

if (data_143f72470 s> result.d)
    result = _Init_thread_header(&data_143f72470)
    
    if (data_143f72470 == 0xffffffff)
        int64_t rax_14
        rax_14, zmm6 = sub_14254a2d0()
        data_143f72468 = rax_14
        result = _Init_thread_footer(&data_143f72470)

if (arg2 != 0 && arg1[0x20] == arg2)
    result = zx.q(arg3 - 2)
    
    if ((result.d & 0xfffffffa) == 0 && arg3 != 7)
        int16_t arg_10
        
        if ((*(*arg1 + 0x520))(arg1) == 0)
            char arg_12 = 3
            arg_10 = data_143b58116 | 0x20
            return (*(*arg1 + 0x440))(arg1, &arg_10)
        
        int32_t rcx_2 = *(arg2 + 0x98)
        result = zx.q(rcx_2 u>> 2)
        
        if ((result.b & 1) != 0 && test_bit(rcx_2, 0xa))
            result = sub_140d3c6e0(arg2 + 0x40)
            
            if (result != 0)
                void* const rsi_1
                
                if ((*(arg2 + 0x98) & 0x400) == 0)
                    rsi_1 = nullptr
                else
                    rsi_1 = sub_140d3c6e0(arg2 + 0x40)
                
                int64_t* rax_7 = sub_1427009c0(arg2)
                uint128_t zmm1
                int32_t var_148
                uint64_t var_128
                uint128_t zmm0
                
                if (rax_7 == 0)
                    void* rax_11 = *(rsi_1 + 0x130)
                    uint64_t* rax_12
                    
                    if (rax_11 == 0)
                        int32_t var_120_3 = data_143dbb200
                        rax_12 = &var_128
                        var_128 = data_143dbb1f8.q
                    else
                        zmm1 = *(rax_11 + 0x1d0)
                        rax_12 = &var_148
                        var_148 = zmm1.d
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        int32_t var_140_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                        int32_t var_144_1 = zmm0.d
                    
                    zmm1 = zx.o(*rax_12)
                    result = zx.q(rax_12[1].d)
                else
                    int64_t r10_1 = *rax_7
                    int64_t rdx_1 = arg1[0x14]
                    float var_28_1[0x4] = zmm6
                    int32_t var_120_1 = *(arg1 + 0x194)
                    var_128 = *(arg1 + 0x18c)
                    void var_d8
                    void arg_20
                    (*(r10_1 + 0x38))(rax_7, rdx_1, &var_128, &var_148, &var_d8, &arg_20)
                    void* rax_8 = *(rsi_1 + 0x130)
                    
                    if (rax_8 == 0)
                        zmm0 = data_142d3f660
                    else
                        zmm0 = *(rax_8 + 0x1c0)
                    
                    float var_138[0x4] = zmm0
                    float zmm12[0x4] = var_138
                    float (* rax_10)[0x4] = (*(*rax_7 + 0x18))(rax_7, &var_138)
                    zmm1.d = zmm12.d f* 2f
                    int32_t var_dc_1 = 0x3f800000
                    int32_t var_10c_1 = 0
                    int32_t var_fc_1 = 0
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    temp0_1[0] = temp0_1[0] * 2f
                    int32_t var_ec_1 = 0
                    float zmm3 = temp0_2[0] * 2f
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                    zmm12[0] = zmm12[0] f* zmm1.d
                    temp0_2[0] = temp0_2[0] * zmm3
                    temp0_1[0] = temp0_1[0] * temp0_1[0]
                    temp0_3[0] = temp0_3[0] f* zmm1.d
                    temp0_3[0] = temp0_3[0] * temp0_1[0]
                    zmm0.d = temp0_1.d f+ temp0_2[0]
                    zmm12[0] = zmm12[0] * zmm3
                    temp0_2[0] = temp0_2[0] + zmm12[0]
                    zmm12[0] = zmm12[0] * temp0_1[0]
                    temp0_1[0] = temp0_1[0] + zmm12[0]
                    zmm1.d = temp0_3.d f* zmm3
                    zmm3 = (*rax_10)[2]
                    int128_t zmm14
                    zmm14.d = 1f f- zmm0.d
                    arg_10.d = zmm12[0]
                    float zmm13[0x4] = zmm12
                    zmm0 = arg_10.d
                    zmm13[0] = zmm13[0] - temp0_3[0]
                    zmm0.d = zmm0.d f- zmm1.d
                    temp0_2[0] = temp0_2[0] * temp0_1[0]
                    temp0_3[0] = temp0_3[0] + zmm12[0]
                    float zmm4_1[0x4] = (*rax_10)[1]
                    uint128_t zmm10
                    zmm10.d = zmm1.d f+ zmm12[0]
                    float zmm7[0x4] = *rax_10
                    arg_10.d = zmm0.d
                    zmm0 = var_148
                    zmm12 = 0x3f800000
                    int128_t zmm11
                    zmm11.d = 1f - temp0_2[0]
                    var_138[3] = 0x3f800000
                    float zmm5_1[0x4] = var_138
                    zmm12[0] = 1f - temp0_1[0]
                    zmm5_1[0] = zmm0.d
                    var_128 = 0
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
                    temp0_2[0] = temp0_2[0] - temp0_3[0]
                    int32_t var_144
                    temp0_4[0] = var_144.d
                    int32_t var_120_2 = 0
                    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
                    temp0_3[0] = temp0_3[0] + temp0_2[0]
                    int32_t var_140
                    temp0_5[0] = var_140[0]
                    zmm0.d = zmm7[0]
                    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
                    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    zmm0.d = zmm4_1[0]
                    _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                    zmm0.d = zmm3
                    zmm1 = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
                    float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm0, zmm0, 0xc9))
                    zmm0.d = zmm10.d
                    float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
                    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    zmm0.d = temp0_2[0]
                    float temp0_15[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
                    _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                    zmm0.d = zmm11.d
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm0, zmm0, 0xc9))
                    zmm0.d = zmm13[0]
                    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    zmm0.d = zmm12[0]
                    float temp0_20[0x4] = _mm_add_ps(temp0_12, zmm1)
                    _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                    zmm0.d = temp0_3[0]
                    float temp0_23[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(zmm0, zmm0, 0xc9))
                    zmm0.d = zmm14.d
                    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    zmm0.d = temp0_3.d
                    zmm1 = arg_10.d
                    _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                    zmm0.d = zmm1.d
                    float temp0_29[0x4] = _mm_add_ps(temp0_20, 
                        _mm_add_ps(temp0_23, 
                            _mm_mul_ps(temp0_15, _mm_shuffle_ps(zmm0, zmm0, 0xc9))))
                    zmm1.d = temp0_29[0]
                    result = zx.q(_mm_shuffle_ps(temp0_29, temp0_29, 0xaa).d)
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm0.d = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)[0]
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                *(arg1 + 0x1a4) = zmm1.q
                *(arg1 + 0x1ac) = result.d

return result
