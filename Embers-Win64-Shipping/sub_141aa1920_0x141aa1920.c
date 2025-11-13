// 函数: sub_141aa1920
// 地址: 0x141aa1920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d48
int64_t rax_1 = __security_cookie ^ &var_d48
int32_t rax_2 = data_143f393d0
int64_t* var_ce8 = arg3
int64_t* r12 = arg3
sub_140b34200("RigidBodyEval", rax_2)

if (*(arg1 + 0x370) != 0xffff && *(arg1 + 0x368) != -1)
    *(arg1 + 0x372) = *(*arg2 + 0x432)
    int64_t rdx_1
    
    if (*(arg1 + 0x370) != 0xffff)
        rdx_1 = *(arg1 + 0x368)
    
    if (*(arg1 + 0x370) == 0xffff || rdx_1 == -1)
        rdx_1 = *(arg1 + 0x368)
    label_141aa19da:
        
        if (rdx_1 u< data_143de5458 - sx.q(*(arg1 + 0x372)) - 1 && data_1439dbe3c != 0)
            *(arg1 + 0x1bb) = 2
    else if (rdx_1 != *(*arg2 + 0x428))
        goto label_141aa19da

void* rcx_4 = *arg2
*(arg1 + 0x370) = *(rcx_4 + 0x430)
*(arg1 + 0x368) = *(rcx_4 + 0x428)
*(arg1 + 0x372) = *(rcx_4 + 0x432)
int128_t zmm13 = *(arg1 + 0x1dc)
*(arg1 + 0x1dc) = 0
int32_t var_cf8 = zmm13.d

if ((*(arg1 + 0x1d8) & 1) != 0 && *(arg1 + 0x1f0) != 0)
    void* rax_9 = *arg2
    void* rdx_2 = arg2[3]
    float zmm2[0x4] = *(rax_9 + 0x10)
    float var_538[0x4] = zmm2
    float var_528_1[0x4] = *(rax_9 + 0x20)
    float var_518_1[0x4] = *(rax_9 + 0x30)
    
    if (*(arg1 + 0x370) == 0xffff || *(arg1 + 0x368) == -1)
        *(arg1 + 0xd0) = zmm2
        *(arg1 + 0xe0) = var_528_1
        *(arg1 + 0xf0) = var_518_1
    
    int32_t rax_10 = *(arg1 + 0x1b0)
    int32_t rdx_3
    int32_t var_cc8_2
    
    if (rax_10 s>= 0)
        rdx_3 = *(arg1 + 0x1b4)
        var_cc8_2 = rdx_3
    else
        int32_t rcx_5 = rax_10 * 2
        
        if ((rcx_5 & 0xfffffffe) == 0xfffffffe)
            int32_t var_cc8_1 = 0xffffffff
            rdx_3 = -1
        else
            rdx_3 = *(*(rdx_2 + 0x80) + (sx.q(rcx_5) s>> 1 << 2))
            var_cc8_2 = rdx_3
    void* r13_1 = &arg2[1]
    int64_t rsi_1 = sx.q(rdx_3)
    float zmm6[0x4]
    float zmm11[0x4]
    float zmm12[0x4]
    
    if (*(rsi_1 + arg2[4]) == 0)
        zmm6, zmm11, zmm12 = sub_141a98300(r13_1, rdx_3)
    
    int64_t rax_15 = *r13_1
    int64_t rcx_10 = rsi_1 * 6
    float var_48_1[0x4] = zmm6
    float var_98_1[0x4] = zmm11
    float var_a8_1[0x4] = zmm12
    float var_508[0x4] = *(rax_15 + (rcx_10 << 3))
    float zmm1_1[0x4] = *(rax_15 + (rcx_10 << 3) + 0x10)
    float zmm0_1[0x4] = *(rax_15 + (rcx_10 << 3) + 0x20)
    void var_568
    float zmm13_1[0x4] = sub_141acfa50(&var_568, *(arg1 + 0x1b9), &var_538, &var_508)
    char rcx_12 = *(arg1 + 0x1bb)
    float zmm14_1[0x4] = zx.o(0)
    float zmm8_1[0x4] = 0x80000000
    float zmm15_1[0x4] = 0x3f800000
    float zmm9_1[0x4] = 0xbf800000
    float zmm7_1[0x4] = 0x38d1b717
    char var_d18_1 = rcx_12
    void* var_d08_1
    uint32_t var_cd8[0x4]
    uint32_t var_cb8[0x4]
    float var_c80
    float zmm0_2[0x4]
    float zmm1_2[0x4]
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    float zmm6_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    
    if (rcx_12 != 0)
    label_141aa1c50:
        char rax_17 = rcx_12
        
        if ((*(arg1 + 0x1bc) & 4) != 0 && *(arg1 + 0x4d0) s> 0)
            void* r14_1 = *(arg1 + 0x210)
            void* r15_3 = (sx.q(*(arg1 + 0x218)) << 5) + r14_1
            
            if (r14_1 != r15_3)
                do
                    int128_t* rsi_4 = (sx.q(*(r14_1 + 0x14)) << 6) + *(arg1 + 0x240)
                    
                    if ((rsi_4[3].b & 1) != 0)
                        int64_t rbx_1 = sx.q(*(r14_1 + 0x10))
                        int32_t rdx_7 =
                            *(*(arg1 + 0x400) + (sx.q(*(*(rdx_2 + 0x60) + (rbx_1 << 2))) << 2))
                        
                        if (rdx_7 != 0xffffffff)
                            int128_t* rax_20 = sub_141ab9f30(arg1 + 0x4c8, rdx_7)
                            float var_358[0x4] = *rax_20
                            float zmm1_3[0x4] = rax_20[1]
                            float zmm0_3[0x4] = rax_20[2]
                            int128_t* rax_21
                            rax_21, zmm14_1, zmm15_1 = sub_141ab9f30(r13_1, rbx_1.d)
                            zmm13_1 = *rax_21
                            float var_2f8[0x4] = zmm13_1
                            zmm12_1 = rax_21[1]
                            float var_2e8_1[0x4] = zmm12_1
                            float zmm5_1[0x4] = rax_21[2]
                            float var_2d8_1[0x4] = zmm5_1
                            uint32_t rcx_16 = zx.d(*(arg1 + 0x1b9))
                            float var_c78_1[0x4] = zmm5_1
                            float var_3e8[0x4]
                            float var_3d8[0x4]
                            float zmm0_4[0x4]
                            float zmm4_1[0x4]
                            
                            if (rcx_16 == 0)
                            label_141aa22d9:
                                var_3e8 = var_358
                                float var_3c8_4[0x4] = zmm0_3
                                var_3d8 = zmm1_3
                            label_141aa22f5:
                                zmm9_1 = data_143f2b810
                                zmm7_1 = var_538
                                zmm8_1 = var_518_1
                            else
                                if (rcx_16 != 1)
                                    if (rcx_16 != 2)
                                        goto label_141aa22d9
                                    
                                    zmm14_1, zmm15_1 = sub_140ad7d70(&var_358, &var_3e8, &var_508)
                                    goto label_141aa1d5e
                                
                                zmm9_1 = data_143f2b810
                                zmm8_1 = var_518_1
                                zmm6_1 = data_143f2b820
                                zmm9_1[0].q = zx.o(0) u>> 0x40
                                var_3e8 = _mm_shuffle_ps(zx.o(0), zmm9_1, 0xc4)
                                float var_3c8_1[0x4] = _mm_and_ps(zmm9_1, zmm6_1)
                                zmm1_2 = data_143f2b8d0
                                int128_t var_3d8_1 = zx.o(0)
                                var_d08_1.o = zmm1_2
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm0_3, zmm8_1), 
                                        zmm1_2, 1)) != 0)
                                    zmm1_2 = var_538
                                    zmm12_1 = data_143f2b810
                                    zmm3_1 = _mm_add_ps(zmm1_2, zmm1_2)
                                    _mm_mul_ps(zmm0_3, zmm8_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                                    zmm5_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
                                    zmm4_1 = _mm_mul_ps(zmm3_1, zmm1_2)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x29), zmm0_4)
                                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                                    zmm0_4 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_2)
                                    zmm0_4 = _mm_add_ps(zmm0_4, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                                    zmm10_1 = _mm_add_ps(zmm3_1, zmm2_1)
                                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                                    zmm3_1 = var_358
                                    zmm1_2 = _mm_sub_ps(zmm9_1, zmm0_4)
                                    zmm10_1 = _mm_mul_ps(zmm10_1, zmm8_1)
                                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm8_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                                    zmm1_2 = _mm_and_ps(zmm1_2, zmm6_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm5_1, zmm1_2, 0x32)
                                    zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_2, 0), 
                                        zmm0_4, 0x82)
                                    zmm0_4 = _mm_shuffle_ps(zmm10_1, zmm1_2, 0x31)
                                    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_2, 0x10), 
                                        zmm0_4, 0x88)
                                    zmm10_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_1, 0x12), 
                                        zmm1_2, 0xe8)
                                    zmm1_2 = _mm_add_ps(zmm3_1, zmm3_1)
                                    zmm12_1[0].q = var_528_1 u>> 0x40
                                    zmm8_1 = _mm_shuffle_ps(var_528_1, zmm12_1, 0xc4)
                                    zmm5_1 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xc9)
                                    float var_8a8_1[0x4] = zmm9_1
                                    float var_898_1[0x4] = zmm7_1
                                    float var_888_1[0x4] = zmm10_1
                                    zmm4_1 = _mm_mul_ps(zmm1_2, zmm3_1)
                                    zmm2_1 =
                                        _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_2)
                                    zmm0_4 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                                        _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                                    float var_878_1[0x4] = zmm8_1
                                    zmm6_1 = _mm_add_ps(zmm3_1, zmm2_1)
                                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                                    zmm1_2 = _mm_sub_ps(zmm12_1, zmm0_4)
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm0_3)
                                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                                    zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_2, zmm0_3), 
                                        data_143f2b820)
                                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_2, 0), 
                                        _mm_shuffle_ps(zmm5_1, zmm1_2, 0x32), 0x82)
                                    zmm0_4 = _mm_shuffle_ps(zmm6_1, zmm1_2, 0x31)
                                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_2, 0x10), 
                                        zmm0_4, 0x88)
                                    float var_868_1[0x4] = zmm3_1
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_1)
                                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_1, 0x12), 
                                        zmm1_2, 0xe8)
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10_1)
                                    zmm12_1[0].q = zmm1_3 u>> 0x40
                                    zmm5_1 = _mm_shuffle_ps(zmm1_3, zmm12_1, 0xc4)
                                    zmm0_4 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                                    float var_858_1[0x4] = zmm4_1
                                    float var_848_1[0x4] = zmm6_1
                                    float var_838_1[0x4] = zmm5_1
                                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_4, zmm9_1))
                                    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm9_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm10_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm7_1)
                                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                    float var_c68[0x4] = zmm2_1
                                    zmm2_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_4)
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm8_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                                    zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_1)
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_4)
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                                    int96_t var_c58_1 = zmm3_1[0].12
                                    zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10_1)
                                    zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_1)
                                    zmm5_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_4)
                                    int96_t var_c48_1 = zmm2_1[0].12
                                    int96_t var_c38_1 =
                                        _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_2), zmm5_1)[0].12
                                    zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
                                        sub_1407740e0(&var_c68, 0x322bcc77)
                                    float zmm2_2[0x4] = var_c68[0]
                                    float zmm1_4 = var_c68[1]
                                    float zmm4_2[0x4] = _mm_and_ps(
                                        _mm_cmpeq_ps(var_d08_1.o, zmm11_1, 2), 
                                        data_143f2b8c0 ^ zmm12_1)
                                    uint32_t zmm0_5[0x4] = var_c68[2]
                                    zmm4_2 ^= data_143f2b8c0
                                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                    zmm1_4 = zmm1_4 * zmm4_2[0]
                                    zmm0_5[0] = zmm0_5[0] f* zmm4_2[0]
                                    var_c68[0] = zmm2_2[0]
                                    zmm2_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                                    var_c68[1] = zmm1_4
                                    zmm1_4 = var_c58_1:4.d * zmm2_2[0]
                                    var_c68[2] = zmm0_5[0]
                                    zmm0_5 = var_c58_1:8.d
                                    zmm0_5[0] = zmm0_5[0] f* zmm2_2[0]
                                    float zmm3_2 = var_c58_1.d * zmm2_2[0]
                                    zmm2_2 = var_c48_1.d
                                    zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                                    var_c58_1:4.d = zmm1_4
                                    var_c58_1:8.d = zmm0_5[0]
                                    zmm0_5 = var_c48_1:8.d
                                    zmm1_4 = var_c48_1:4.d * zmm4_2[0]
                                    zmm0_5[0] = zmm0_5[0] f* zmm4_2[0]
                                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                    var_c48_1:4.d = zmm1_4
                                    var_c48_1:8.d = zmm0_5[0]
                                    var_c58_1.d = zmm3_2
                                    var_c48_1.d = zmm2_2[0]
                                    sub_14077e4a0(&var_cb8, &var_c68)
                                    zmm5_1 = var_cb8
                                    zmm6_1 = data_143f2b8b0
                                    zmm1_2 = _mm_mul_ps(zmm5_1, zmm5_1)
                                    var_d08_1.d = 0x322bcc77
                                    float var_3c8_2[0x4] = zmm11_1
                                    zmm1_2 =
                                        _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                    zmm4_1 =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                                    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
                                    zmm3_1 = _mm_mul_ps(zmm4_1, zmm6_1)
                                    zmm2_1 = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6_1, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_1)), 
                                            zmm1_2), 
                                        zmm1_2)
                                    zmm6_1 = _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                                    zmm0_4 = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                                    zmm6_1 = _mm_and_ps(
                                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_1), zmm2_1), 
                                            zmm5_1) ^ data_143f2b8a0, 
                                        zmm0_4) ^ data_143f2b8a0
                                    var_cb8 = zmm6_1
                                    var_3e8 = zmm6_1
                                    var_3d8 = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(var_c38_1.d, var_c38_1:8.d[0].q), 
                                        _mm_unpacklo_ps(var_c38_1:4.d, zmm14_1[0].q)[0].q)
                                label_141aa1d5e:
                                    zmm5_1 = var_2d8_1
                                    zmm12_1 = var_2e8_1
                                    zmm13_1 = var_2f8
                                    goto label_141aa22f5
                                
                                zmm7_1 = var_538
                                zmm2_1 = var_358
                                zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), 
                                    _mm_shuffle_ps(zmm7_1, zmm7_1, 0))
                                zmm1_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                                zmm5_1 = _mm_mul_ps(zmm1_3, zmm8_1)
                                zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f2b850)
                                zmm6_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                                zmm4_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
                                zmm0_4 = _mm_mul_ps(zmm6_1, zmm2_1)
                                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                                zmm10_1 = _mm_mul_ps(zmm0_3, zmm8_1)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_4)
                                zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55))
                                zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa))
                                zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                                zmm0_4 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f2b830)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                                zmm0_4 = _mm_mul_ps(zmm0_4, zmm4_1)
                                float var_3c8_3[0x4] = zmm10_1
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm2_1)
                                zmm2_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                                var_3e8 = zmm3_1
                                zmm3_1 = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm2_1), 
                                    zmm0_4)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
                                zmm6_1 = _mm_mul_ps(zmm6_1, zmm3_1)
                                zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), zmm2_1)
                                zmm6_1 = _mm_add_ps(zmm6_1, zmm5_1)
                                zmm5_1 = var_c78_1
                                var_3d8 = __addps_xmmps_memps(
                                    _mm_add_ps(
                                        _mm_sub_ps(zmm1_2, 
                                            _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), 
                                                zmm4_1)), 
                                        zmm6_1), 
                                    var_528_1)
                            
                            uint32_t rcx_21 = zx.d(*(arg1 + 0x1b9))
                            float var_418[0x4]
                            float var_408[0x4]
                            float var_3f8_3[0x4]
                            
                            if (rcx_21 == 0)
                            label_141aa28ac:
                                var_418 = zmm13_1
                                var_3f8_3 = zmm5_1
                                var_408 = zmm12_1
                            else if (rcx_21 == 1)
                                zmm6_1 = data_143f2b820
                                zmm2_1 = zx.o(0)
                                zmm9_1[0].q = zmm2_1 u>> 0x40
                                var_418 = _mm_shuffle_ps(zx.o(0), zmm9_1, 0xc4)
                                float var_3f8_1[0x4] = _mm_and_ps(zmm9_1, zmm6_1)
                                zmm1_2 = data_143f2b8d0
                                float var_408_1[0x4] = zmm2_1
                                var_d08_1.o = zmm1_2
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_1, zmm8_1), 
                                        zmm1_2, 1)) == 0)
                                    zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x1b)
                                    zmm1_2 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x4e)
                                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0))
                                    zmm3_1 = zmm12_1
                                    zmm4_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm8_1)
                                    zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f2b850)
                                    zmm0_4 = _mm_mul_ps(zmm4_1, zmm13_1)
                                    zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xb1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_4)
                                    zmm1_2 =
                                        _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55))
                                    zmm13_1 =
                                        _mm_mul_ps(zmm13_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa))
                                    zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                                    zmm0_4 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                                    zmm13_1 = __mulps_xmmps_memps(zmm13_1, data_143f2b830)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    zmm1_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
                                    var_418 = _mm_add_ps(zmm2_1, zmm13_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
                                    zmm0_4 = _mm_mul_ps(zmm0_4, zmm2_1)
                                    zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                                    zmm1_2 = _mm_sub_ps(_mm_mul_ps(zmm1_2, zmm7_1), zmm0_4)
                                    zmm1_2 = _mm_add_ps(zmm1_2, zmm1_2)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_2)
                                    zmm12_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0xd2), zmm7_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xc9)
                                    zmm4_1 = _mm_add_ps(zmm4_1, zmm3_1)
                                    zmm12_1 = __addps_xmmps_memps(
                                        _mm_add_ps(_mm_sub_ps(zmm12_1, _mm_mul_ps(zmm0_4, zmm2_1)), 
                                            zmm4_1), 
                                        var_528_1)
                                    var_3f8_3 = zmm5_1
                                    var_408 = zmm12_1
                                else
                                    zmm1_2 = _mm_add_ps(zmm7_1, zmm7_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 4)
                                    zmm4_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
                                    _mm_mul_ps(zmm5_1, zmm8_1)
                                    zmm2_1 =
                                        _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                                    zmm3_1 = _mm_mul_ps(zmm1_2, zmm7_1)
                                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                                    zmm7_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xff), zmm1_2)
                                    zmm0_4 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                                    zmm10_1 = _mm_add_ps(zmm7_1, zmm2_1)
                                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm7_1)
                                    zmm1_2 = _mm_sub_ps(zmm9_1, zmm0_4)
                                    zmm10_1 = _mm_mul_ps(zmm10_1, zmm8_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm8_1)
                                    zmm2_1 = _mm_add_ps(zmm13_1, zmm13_1)
                                    zmm1_2 = _mm_and_ps(zmm1_2, zmm6_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm4_1, zmm1_2, 0x32)
                                    zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_2, 0), 
                                        zmm0_4, 0x82)
                                    zmm0_4 = _mm_shuffle_ps(zmm10_1, zmm1_2, 0x31)
                                    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_2, 0x10), 
                                        zmm0_4, 0x88)
                                    zmm0_4 = data_143f2b810
                                    zmm3_1 = _mm_mul_ps(zmm2_1, zmm13_1)
                                    zmm10_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm4_1, 0x12), 
                                        zmm1_2, 0xe8)
                                    zmm1_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x29)
                                    zmm0_4[0].q = var_528_1 u>> 0x40
                                    zmm8_1 = _mm_shuffle_ps(var_528_1, zmm0_4, 0xc4)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13_1, zmm13_1, 4))
                                    zmm0_4 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                                    zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x12), zmm13_1)
                                    zmm13_1 = data_143f2b810
                                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                    float var_828_1[0x4] = zmm9_1
                                    float var_818_1[0x4] = zmm7_1
                                    zmm6_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    float var_808_1[0x4] = zmm10_1
                                    zmm1_2 = _mm_sub_ps(zmm1_2, zmm2_1)
                                    float var_7f8_1[0x4] = zmm8_1
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm5_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_2)
                                    zmm1_2 = __andps_xmmxud_memxud(
                                        _mm_mul_ps(_mm_sub_ps(zmm13_1, zmm0_4), zmm5_1), 
                                        data_143f2b820)
                                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_2, 0), 
                                        _mm_shuffle_ps(zmm4_1, zmm1_2, 0x32), 0x82)
                                    float var_7e8_1[0x4] = zmm3_1
                                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                                    zmm0_4 = _mm_shuffle_ps(zmm6_1, zmm1_2, 0x31)
                                    zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_2, 0x10), 
                                        zmm0_4, 0x88)
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_1)
                                    zmm13_1[0].q = zmm12_1 u>> 0x40
                                    zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm13_1, 0xc4)
                                    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm9_1)
                                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm4_1, 0x12), 
                                        zmm1_2, 0xe8)
                                    zmm1_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_4)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm10_1)
                                    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm9_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    float var_7d8_1[0x4] = zmm5_1
                                    float var_7c8_1[0x4] = zmm6_1
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                                    float var_7b8_1[0x4] = zmm12_1
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7_1)
                                    float var_ba8[0x4] = zmm2_1
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), zmm7_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_4)
                                    zmm5_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8_1)
                                    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), zmm9_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_4)
                                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm5_1)
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                                    zmm0_4 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_1)
                                    int96_t var_b98_1 = zmm3_1[0].12
                                    zmm1_2 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x55), zmm7_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm10_1)
                                    zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_4)
                                    zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_1)
                                    int96_t var_b88_1 = zmm2_1[0].12
                                    int96_t var_b78_1 =
                                        _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_2), zmm12_1)[0].12
                                    zmm11_1, zmm13_1, zmm14_1, zmm15_1 =
                                        sub_1407740e0(&var_ba8, 0x322bcc77)
                                    uint32_t zmm0_6[0x4] = data_143f2b8c0
                                    float zmm4_3[0x4] = _mm_cmpeq_ps(var_d08_1.o, zmm11_1, 2)
                                    float zmm2_3[0x4] = var_ba8[0]
                                    float zmm1_5 = var_ba8[1]
                                    zmm4_3 = _mm_and_ps(zmm4_3, zmm0_6 ^ zmm13_1)
                                    zmm0_6 = var_ba8[2]
                                    zmm4_3 ^= data_143f2b8c0
                                    zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                                    zmm1_5 = zmm1_5 * zmm4_3[0]
                                    zmm0_6[0] = zmm0_6[0] f* zmm4_3[0]
                                    var_ba8[0] = zmm2_3[0]
                                    zmm2_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                                    var_ba8[1] = zmm1_5
                                    zmm1_5 = var_b98_1:4.d * zmm2_3[0]
                                    var_ba8[2] = zmm0_6[0]
                                    zmm0_6 = var_b98_1:8.d
                                    zmm0_6[0] = zmm0_6[0] f* zmm2_3[0]
                                    float zmm3_3 = var_b98_1.d * zmm2_3[0]
                                    zmm2_3 = var_b88_1.d
                                    zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                                    var_b98_1:4.d = zmm1_5
                                    var_b98_1:8.d = zmm0_6[0]
                                    zmm0_6 = var_b88_1:8.d
                                    zmm1_5 = var_b88_1:4.d * zmm4_3[0]
                                    zmm0_6[0] = zmm0_6[0] f* zmm4_3[0]
                                    zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                                    var_b88_1:4.d = zmm1_5
                                    var_b88_1:8.d = zmm0_6[0]
                                    var_b98_1.d = zmm3_3
                                    var_b88_1.d = zmm2_3[0]
                                    sub_14077e4a0(&var_cd8, &var_ba8)
                                    uint32_t zmm5_2[0x4] = var_cd8
                                    zmm6_1 = data_143f2b8b0
                                    zmm1_2 = _mm_mul_ps(zmm5_2, zmm5_2)
                                    var_d08_1.d = 0x322bcc77
                                    float var_3f8_2[0x4] = zmm11_1
                                    zmm1_2 =
                                        _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                    zmm4_1 =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                                    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
                                    zmm3_1 = _mm_mul_ps(zmm4_1, zmm6_1)
                                    zmm2_1 = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6_1, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_1)), 
                                            zmm1_2), 
                                        zmm1_2)
                                    zmm6_1 = _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                                    zmm0_4 = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                                    zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_1), zmm2_1)
                                    zmm2_1 = _mm_unpacklo_ps(var_b78_1:4.d, zmm14_1[0].q)
                                    zmm6_1 = _mm_and_ps(
                                        _mm_mul_ps(zmm6_1, zmm5_2) ^ data_143f2b8a0, zmm0_4)
                                        ^ data_143f2b8a0
                                    zmm12_1 = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(var_b78_1.d, var_b78_1:8.d[0].q), 
                                        zmm2_1[0].q)
                                    var_cd8 = zmm6_1
                                    var_418 = zmm6_1
                                    var_408 = zmm12_1
                            else
                                if (rcx_21 != 2)
                                    goto label_141aa28ac
                                
                                zmm14_1, zmm15_1 = sub_140ad7d70(&var_2f8, &var_418, &var_508)
                                zmm12_1 = var_408
                            zmm13_1 = var_cf8
                            float rax_24
                            
                            if (zmm13_1[0] <= zmm14_1[0])
                                rsi_4[1].q = data_143dbb1f8.q
                                rax_24 = data_143dbb200
                            else
                                zmm2_1 = zmm12_1
                                zmm2_1[0] = zmm2_1[0] - var_3d8[0]
                                zmm1_2 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
                                zmm0_4 = _mm_shuffle_ps(var_3d8, var_3d8, 0x55)
                                zmm15_1[0] = zmm15_1[0] / zmm13_1[0]
                                zmm1_2[0] = zmm1_2[0] - zmm0_4[0]
                                zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                                zmm3_1 = _mm_shuffle_ps(var_3d8, var_3d8, 0xaa)
                                zmm12_1[0] = zmm12_1[0] - zmm3_1[0]
                                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                                zmm1_2[0] = zmm1_2[0] * zmm15_1[0]
                                zmm12_1[0] = zmm12_1[0] * zmm15_1[0]
                                rsi_4[1].q = (_mm_unpacklo_ps(zmm2_1, zmm1_2[0].q)).q
                                var_c80 = zmm12_1[0]
                                rax_24 = var_c80
                            
                            zmm9_1 = 0xbf800000
                            *(rsi_4 + 0x18) = rax_24
                            zmm2_1 = var_418
                            zmm4_1 = var_3e8
                            zmm3_1 = zmm2_1 ^ 0x80000000
                            zmm6_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b)
                            zmm0_4 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55) ^ 0x80000000
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            zmm3_1[0] = zmm0_4[0]
                            zmm1_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                            zmm3_1[0] = (zmm1_2 ^ 0x80000000)[0]
                            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
                            zmm1_2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e)
                            zmm3_1[0] = zmm2_1[0]
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
                            var_d08_1.o = zmm3_1
                            zmm6_1 = _mm_mul_ps(zmm6_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0))
                            zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm4_1)
                            zmm6_1 = __mulps_xmmps_memps(zmm6_1, data_143f2b850)
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm0_4)
                            zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
                            zmm4_1 = _mm_mul_ps(zmm4_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
                            zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                            zmm4_1 = __mulps_xmmps_memps(zmm4_1, data_143f2b830)
                            zmm6_1 = _mm_add_ps(_mm_add_ps(zmm6_1, zmm1_2), zmm4_1)
                            var_d08_1.o = zmm6_1
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            
                            if (zmm6_1[0] >= -1f)
                                zmm0_4 = _mm_min_ss(zmm6_1[0], zmm15_1[0])
                            else
                                zmm0_4 = 0xbf800000
                            
                            zmm0_2 = acosf(zmm0_4[0])
                            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                            zmm2_1 = zmm0_2
                            zmm15_1[0] = zmm15_1[0] - zmm6_1[0]
                            zmm15_1[0] = zmm15_1[0] / zmm13_1[0]
                            zmm3_1 = _mm_sqrt_ss(0, _mm_max_ss(zmm15_1[0], zmm14_1[0])[0])
                            
                            if (zmm3_1[0] < 9.99999975e-05f)
                                zmm1_2 = zmm15_1
                                zmm7_1 = zmm14_1
                                zmm6_1 = zmm14_1
                            else
                                zmm6_1 = zmm15_1
                                zmm6_1[0] = zmm6_1[0] / zmm3_1[0]
                                zmm1_2 = zmm6_1
                                zmm7_1 = zmm6_1
                                zmm1_2[0] = zmm1_2[0] f* var_d08_1.d
                                zmm7_1[0] = zmm7_1[0] f* var_d08_1:4.d
                                int32_t var_d00
                                zmm6_1[0] = zmm6_1[0] f* var_d00
                            
                            zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                            float var_c90_1 = zmm6_1[0]
                            float var_c94_1 = zmm7_1[0]
                            bool cond:6_1 = zmm2_1[0] < zmm14_1[0]
                            float var_c98_1 = zmm1_2[0]
                            zmm2_1[0] = zmm2_1[0] * 0.159154937f
                            
                            if (cond:6_1)
                                zmm2_1[0] = zmm2_1[0] - 0.5f
                            else
                                zmm2_1[0] = zmm2_1[0] + 0.5f
                            
                            zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1[0])))
                            zmm0_2[0] = zmm0_2[0] * 6.28318548f
                            zmm2_1[0] = zmm2_1[0] - zmm0_2[0]
                            
                            if (not(zmm2_1[0] <= 1.57079637f))
                                zmm0_2 = 0x40490fdb
                                zmm0_2[0] = 3.14159274f - zmm2_1[0]
                                zmm2_1 = zmm0_2
                            else if (zmm2_1[0] >= -1.57079637f)
                                zmm9_1 = zmm15_1
                            else
                                zmm0_2 = 0xc0490fdb
                                zmm0_2[0] = -3.14159274f - zmm2_1[0]
                                zmm2_1 = zmm0_2
                            
                            float zmm5_3[0x4] = 0x3638b88e
                            float zmm4_4[0x4] = zmm2_1
                            zmm4_4[0] = zmm4_4[0] * zmm2_1[0]
                            zmm4_4[0] = zmm4_4[0] * 2.3889859e-08f
                            zmm5_3[0] = 2.75255616e-06f - zmm4_4[0]
                            zmm4_4[0] = zmm4_4[0] * 2.60516146e-07f
                            zmm5_3[0] = zmm5_3[0] * zmm4_4[0]
                            zmm5_3[0] = zmm5_3[0] - 0.000198408743f
                            zmm5_3[0] = zmm5_3[0] * zmm4_4[0]
                            zmm5_3[0] = zmm5_3[0] + 0.00833333097f
                            zmm5_3[0] = zmm5_3[0] * zmm4_4[0]
                            zmm5_3[0] = zmm5_3[0] - 0.166666672f
                            zmm5_3[0] = zmm5_3[0] * zmm4_4[0]
                            zmm5_3[0] = zmm5_3[0] + zmm15_1[0]
                            zmm5_3[0] = zmm5_3[0] * zmm2_1[0]
                            zmm2_1 = 0x37cfb4c2
                            zmm2_1[0] = 2.47604949e-05f - zmm4_4[0]
                            zmm5_3[0] = zmm5_3[0] * zmm1_2[0]
                            zmm5_3[0] = zmm5_3[0] * zmm7_1[0]
                            zmm2_1[0] = zmm2_1[0] * zmm4_4[0]
                            zmm3_1 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xe1)
                            zmm3_1[0] = zmm5_3[0]
                            zmm5_3[0] = zmm5_3[0] * zmm6_1[0]
                            zmm2_1[0] = zmm2_1[0] - 0.00138883782f
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                            zmm3_1[0] = zmm5_3[0]
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
                            zmm2_1[0] = zmm2_1[0] * zmm4_4[0]
                            zmm2_1[0] = zmm2_1[0] + 0.0416666381f
                            zmm2_1[0] = zmm2_1[0] * zmm4_4[0]
                            zmm2_1[0] = zmm2_1[0] - 0.5f
                            zmm2_1[0] = zmm2_1[0] * zmm4_4[0]
                            zmm2_1[0] = zmm2_1[0] + zmm15_1[0]
                            zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
                            zmm3_1[0] = zmm2_1[0]
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
                            var_d08_1.o = zmm3_1
                            *rsi_4 = zmm3_1
                    
                    r14_1 += 0x20
                while (r14_1 != r15_3)
                
                rax_17 = *(arg1 + 0x1bb)
                r12 = var_ce8
        
        uint32_t rcx_26 = zx.d(rax_17)
        
        if (rcx_26 == 1)
            void* rsi_6 = *(arg1 + 0x210)
            void* r14_7 = (sx.q(*(arg1 + 0x218)) << 5) + rsi_6
            
            if (rsi_6 != r14_7)
                zmm15_1 = zx.o(0)
                
                do
                    int64_t rbx_5 = sx.q(*(rsi_6 + 0x14))
                    int64_t rax_40 = *(arg1 + 0x240)
                    int64_t rcx_42 = rbx_5 << 6
                    *(rcx_42 + rax_40 + 0x30) |= 2
                    float var_4d8[0x4]
                    sub_141abd220(*(*(arg1 + 0x220) + (rbx_5 << 3)), &var_4d8)
                    zmm11_1 = data_143f2b810
                    float zmm2_7[0x4] = data_143f2b820
                    zmm11_1[0].q = zmm15_1 u>> 0x40
                    float zmm0_10[0x4] = _mm_shuffle_ps(zmm15_1, zmm11_1, 0xc4)
                    float zmm1_9[0x4] = _mm_and_ps(zmm11_1, zmm2_7)
                    float var_388[0x4] = zmm0_10
                    float var_368_1[0x4] = zmm1_9
                    float var_378_1[0x4] = zmm15_1
                    uint32_t rcx_45 = zx.d(*(arg1 + 0x1b9))
                    float var_4c8[0x4]
                    float var_4b8[0x4]
                    float zmm3_7[0x4]
                    float zmm4_7[0x4]
                    float zmm5_6[0x4]
                    float zmm6_5[0x4]
                    float zmm8_3[0x4]
                    float var_378_3[0x4]
                    
                    if (rcx_45 == 0)
                    label_141aa3a0b:
                        zmm13_1 = var_4b8
                        zmm12_1 = var_4c8
                        zmm6_5 = var_4d8
                        var_388 = zmm6_5
                        var_378_3 = zmm12_1
                    else if (rcx_45 == 1)
                        float var_208[0x3][0x4]
                        float (* rax_42)[0x4]
                        rax_42, zmm15_1 = sub_140ad7d70(&var_4d8, &var_208, arg1 + 0xd0)
                        zmm2_7 = data_143f2b820
                        zmm6_5 = *rax_42
                        var_388 = zmm6_5
                        zmm12_1 = rax_42[1]
                        float var_378_2[0x4] = zmm12_1
                        zmm13_1 = rax_42[2]
                    else
                        if (rcx_45 != 2)
                            goto label_141aa3a0b
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_4b8, zmm0_1), 
                                data_143f2b8d0, 1)) == 0)
                            zmm4_7 = var_508
                            zmm2_7 = var_4d8
                            zmm3_7 = __mulps_xmmps_memps(zmm0_1, var_4c8)
                            zmm0_10 = _mm_shuffle_ps(zmm2_7, zmm2_7, 0x1b)
                            zmm6_5 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0), zmm0_10)
                            zmm1_9 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55)
                            zmm5_6 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                            zmm0_10 = _mm_mul_ps(zmm2_7, zmm5_6)
                            zmm6_5 = __mulps_xmmps_memps(zmm6_5, data_143f2b850)
                            zmm13_1 = _mm_mul_ps(zmm0_1, var_4b8)
                            zmm6_5 = _mm_add_ps(zmm6_5, zmm0_10)
                            zmm1_9 = _mm_mul_ps(zmm1_9, _mm_shuffle_ps(zmm2_7, zmm2_7, 0x4e))
                            zmm0_10 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa), 
                                _mm_shuffle_ps(zmm2_7, zmm2_7, 0xb1))
                            zmm1_9 = __mulps_xmmps_memps(zmm1_9, data_143f2b840)
                            zmm2_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xd2)
                            zmm0_10 = __mulps_xmmps_memps(zmm0_10, data_143f2b830)
                            zmm6_5 = _mm_add_ps(zmm6_5, zmm1_9)
                            zmm4_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xc9)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xd2), zmm4_7)
                            zmm6_5 = _mm_add_ps(zmm6_5, zmm0_10)
                            zmm1_9 = _mm_sub_ps(zmm1_9, 
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xc9), zmm2_7))
                            zmm1_9 = _mm_add_ps(zmm1_9, zmm1_9)
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm1_9)
                            zmm12_1 = _mm_mul_ps(_mm_shuffle_ps(zmm1_9, zmm1_9, 0xd2), zmm4_7)
                            zmm0_10 = _mm_shuffle_ps(zmm1_9, zmm1_9, 0xc9)
                            zmm5_6 = _mm_add_ps(zmm5_6, zmm3_7)
                            zmm0_10 = _mm_mul_ps(zmm0_10, zmm2_7)
                            zmm2_7 = data_143f2b820
                            zmm12_1 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm12_1, zmm0_10), zmm5_6), zmm1_1)
                        else
                            zmm3_7 = var_508
                            zmm5_6 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                            zmm1_9 = _mm_add_ps(zmm3_7, zmm3_7)
                            zmm2_7 = _mm_shuffle_ps(zmm3_7, zmm3_7, 4)
                            _mm_mul_ps(zmm0_1, var_4b8)
                            zmm2_7 = _mm_mul_ps(zmm2_7, _mm_shuffle_ps(zmm1_9, zmm1_9, 0x29))
                            zmm4_7 = _mm_mul_ps(zmm1_9, zmm3_7)
                            zmm1_9 = _mm_shuffle_ps(zmm1_9, zmm1_9, 0x12)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xff), zmm1_9)
                            zmm0_10 = _mm_add_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0x1a), 
                                _mm_shuffle_ps(zmm4_7, zmm4_7, 1))
                            zmm10_1 = _mm_add_ps(zmm3_7, zmm2_7)
                            zmm2_7 = _mm_sub_ps(zmm2_7, zmm3_7)
                            zmm3_7 = var_4d8
                            zmm1_9 = _mm_sub_ps(zmm11_1, zmm0_10)
                            zmm10_1 = _mm_mul_ps(zmm10_1, zmm0_1)
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm2_7)
                            zmm1_9 = _mm_mul_ps(zmm1_9, zmm0_1)
                            zmm2_7 = _mm_shuffle_ps(zmm3_7, zmm3_7, 4)
                            zmm1_9 = __andps_xmmxud_memxud(zmm1_9, data_143f2b820)
                            zmm0_10 = _mm_shuffle_ps(zmm5_6, zmm1_9, 0x32)
                            zmm9_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_9, 0), zmm0_10, 0x82)
                            zmm0_10 = _mm_shuffle_ps(zmm10_1, zmm1_9, 0x31)
                            zmm7_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_6, zmm1_9, 0x10), zmm0_10, 0x88)
                            zmm10_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_6, 0x12), zmm1_9, 0xe8)
                            zmm1_9 = _mm_add_ps(zmm3_7, zmm3_7)
                            zmm11_1[0].q = zmm1_1 u>> 0x40
                            zmm8_3 = _mm_shuffle_ps(zmm1_1, zmm11_1, 0xc4)
                            float var_728_1[0x4] = zmm9_1
                            float var_718_1[0x4] = zmm7_1
                            float var_708_1[0x4] = zmm10_1
                            float var_6f8_1[0x4] = zmm8_3
                            zmm4_7 = _mm_mul_ps(zmm1_9, zmm3_7)
                            zmm2_7 = _mm_mul_ps(zmm2_7, _mm_shuffle_ps(zmm1_9, zmm1_9, 0x29))
                            zmm1_9 = _mm_shuffle_ps(zmm1_9, zmm1_9, 0x12)
                            zmm5_6 = _mm_shuffle_ps(var_4b8, var_4b8, 0xc9)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xff), zmm1_9)
                            zmm6_5 = _mm_add_ps(zmm3_7, zmm2_7)
                            zmm2_7 = _mm_sub_ps(zmm2_7, zmm3_7)
                            zmm6_5 = _mm_mul_ps(zmm6_5, var_4b8)
                            zmm0_10 = _mm_add_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0x1a), 
                                _mm_shuffle_ps(zmm4_7, zmm4_7, 1))
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm2_7)
                            zmm1_9 = __andps_xmmxud_memxud(
                                __mulps_xmmps_memps(_mm_sub_ps(zmm11_1, zmm0_10), var_4b8), 
                                data_143f2b820)
                            zmm3_7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_5, zmm1_9, 0), 
                                _mm_shuffle_ps(zmm5_6, zmm1_9, 0x32), 0x82)
                            zmm0_10 = _mm_shuffle_ps(zmm6_5, zmm1_9, 0x31)
                            zmm2_7 = _mm_shuffle_ps(zmm3_7, zmm3_7, 0x55)
                            zmm4_7 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_6, zmm1_9, 0x10), zmm0_10, 0x88)
                            float var_8e8_1[0x4] = zmm3_7
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm7_1)
                            zmm6_5 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_5, zmm5_6, 0x12), zmm1_9, 0xe8)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xaa), zmm10_1)
                            zmm11_1[0].q = var_4c8 u>> 0x40
                            zmm5_6 = _mm_shuffle_ps(var_4c8, zmm11_1, 0xc4)
                            zmm0_10 = _mm_shuffle_ps(zmm3_7, zmm3_7, 0)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xff), zmm8_3)
                            float var_8d8_1[0x4] = zmm4_7
                            float var_8b8_1[0x4] = zmm5_6
                            float var_8c8_1[0x4] = zmm6_5
                            zmm2_7 = _mm_add_ps(zmm2_7, _mm_mul_ps(zmm0_10, zmm9_1))
                            zmm0_10 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0), zmm9_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_9)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa), zmm10_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm3_7)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0x55), zmm7_1)
                            zmm4_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                            float var_be8[0x4] = zmm2_7
                            zmm2_7 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0x55)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm0_10)
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm7_1)
                            zmm4_7 = _mm_mul_ps(zmm4_7, zmm8_3)
                            zmm0_10 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm1_9)
                            zmm0_10 = _mm_mul_ps(zmm0_10, zmm9_1)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0xaa), zmm10_1)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm4_7)
                            zmm6_5 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xff)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_10)
                            zmm6_5 = _mm_mul_ps(zmm6_5, zmm8_3)
                            zmm0_10 = _mm_shuffle_ps(zmm5_6, zmm5_6, 0)
                            int96_t var_bd8_1 = zmm3_7[0].12
                            zmm3_7 = _mm_shuffle_ps(zmm5_6, zmm5_6, 0x55)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_9)
                            zmm3_7 = _mm_mul_ps(zmm3_7, zmm7_1)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xaa), zmm10_1)
                            zmm0_10 = _mm_mul_ps(zmm0_10, zmm9_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm6_5)
                            zmm5_6 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xff), zmm8_3)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm0_10)
                            int96_t var_bc8_1 = zmm2_7[0].12
                            int96_t var_bb8_1 = _mm_add_ps(_mm_add_ps(zmm3_7, zmm1_9), zmm5_6)[0].12
                            int64_t zmm14_3
                            zmm11_1, zmm12_1, zmm13_1, zmm14_3, zmm15_1 =
                                sub_1407740e0(&var_be8, 0x322bcc77)
                            float zmm2_8[0x4] = var_be8[0]
                            float zmm1_10 = var_be8[1]
                            zmm12_1 = _mm_and_ps(_mm_cmpeq_ps(zmm12_1, zmm13_1, 2), 
                                data_143f2b8c0 ^ zmm11_1)
                            uint32_t zmm0_11[0x4] = var_be8[2]
                            zmm12_1 ^= data_143f2b8c0
                            zmm2_8[0] = zmm2_8[0] * zmm12_1[0]
                            zmm1_10 = zmm1_10 * zmm12_1[0]
                            zmm0_11[0] = zmm0_11[0] f* zmm12_1[0]
                            var_be8[0] = zmm2_8[0]
                            zmm2_8 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
                            var_be8[1] = zmm1_10
                            zmm1_10 = var_bd8_1:4.d * zmm2_8[0]
                            var_be8[2] = zmm0_11[0]
                            zmm0_11 = var_bd8_1:8.d
                            zmm0_11[0] = zmm0_11[0] f* zmm2_8[0]
                            float zmm3_8 = var_bd8_1.d * zmm2_8[0]
                            zmm2_8 = var_bc8_1.d
                            var_bd8_1:4.d = zmm1_10
                            var_bd8_1:8.d = zmm0_11[0]
                            zmm0_11 = var_bc8_1:8.d
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                            zmm1_10 = var_bc8_1:4.d * zmm12_1[0]
                            zmm0_11[0] = zmm0_11[0] f* zmm12_1[0]
                            zmm2_8[0] = zmm2_8[0] * zmm12_1[0]
                            var_bc8_1:4.d = zmm1_10
                            var_bc8_1:8.d = zmm0_11[0]
                            var_bd8_1.d = zmm3_8
                            var_bc8_1.d = zmm2_8[0]
                            sub_14077e4a0(&var_cd8, &var_be8)
                            zmm5_6 = var_cd8
                            zmm6_5 = data_143f2b8b0
                            zmm1_9 = _mm_mul_ps(zmm5_6, zmm5_6)
                            var_d08_1.d = 0x322bcc77
                            zmm1_9 = _mm_add_ps(zmm1_9, _mm_shuffle_ps(zmm1_9, zmm1_9, 0x4e))
                            zmm4_7 = _mm_add_ps(_mm_shuffle_ps(zmm1_9, zmm1_9, 0x39), zmm1_9)
                            zmm1_9 = _mm_rsqrt_ps(zmm4_7)
                            zmm3_7 = _mm_mul_ps(zmm4_7, zmm6_5)
                            zmm2_7 = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_5, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_9, zmm1_9), zmm3_7)), 
                                    zmm1_9), 
                                zmm1_9)
                            zmm6_5 =
                                _mm_sub_ps(zmm6_5, _mm_mul_ps(_mm_mul_ps(zmm2_7, zmm2_7), zmm3_7))
                            zmm0_10 =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_7, 2)
                            zmm6_5 = _mm_add_ps(_mm_mul_ps(zmm6_5, zmm2_7), zmm2_7)
                            zmm2_7 = _mm_unpacklo_ps(var_bb8_1:4.d, zmm14_3)
                            zmm6_5 =
                                _mm_and_ps(_mm_mul_ps(zmm6_5, zmm5_6) ^ data_143f2b8a0, zmm0_10)
                                ^ data_143f2b8a0
                            zmm12_1 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_bb8_1.d, var_bb8_1:8.d[0].q), zmm2_7[0].q)
                            zmm2_7 = data_143f2b820
                            var_cd8 = zmm6_5
                        
                        var_388 = zmm6_5
                        var_378_3 = zmm12_1
                    float var_368_2[0x4] = zmm13_1
                    uint32_t rcx_50 = zx.d(*(arg1 + 0x1b9))
                    
                    if (rcx_50 == 0)
                        goto label_141aa3f92
                    
                    float var_4a8[0x4]
                    float var_498[0x4]
                    float var_488[0x4]
                    
                    if (rcx_50 == 1)
                        zmm8_3 = data_143f2b810
                        zmm8_3[0].q = zmm15_1 u>> 0x40
                        var_4a8 = _mm_shuffle_ps(zmm15_1, zmm8_3, 0xc4)
                        float var_488_1[0x4] = _mm_and_ps(zmm8_3, zmm2_7)
                        zmm1_9 = data_143f2b8d0
                        float var_498_1[0x4] = zmm15_1
                        float var_c78_2[0x4] = zmm1_9
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13_1, var_518_1), zmm1_9, 1))
                                == 0)
                            zmm4_7 = var_538
                            zmm2_7 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0x1b)
                            zmm1_9 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0x4e)
                            zmm2_7 = _mm_mul_ps(zmm2_7, _mm_shuffle_ps(zmm4_7, zmm4_7, 0))
                            zmm12_1 = _mm_mul_ps(zmm12_1, var_518_1)
                            zmm5_6 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                            zmm2_7 = __mulps_xmmps_memps(zmm2_7, data_143f2b850)
                            zmm0_10 = _mm_mul_ps(zmm5_6, zmm6_5)
                            zmm3_7 = zmm12_1
                            zmm6_5 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xb1)
                            zmm13_1 = _mm_mul_ps(zmm13_1, var_518_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_10)
                            zmm1_9 = _mm_mul_ps(zmm1_9, _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55))
                            zmm0_10 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa), zmm6_5)
                            zmm1_9 = __mulps_xmmps_memps(zmm1_9, data_143f2b840)
                            zmm0_10 = __mulps_xmmps_memps(zmm0_10, data_143f2b830)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_9)
                            zmm1_9 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xd2)
                            zmm4_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xc9)
                            zmm6_5 = _mm_add_ps(zmm2_7, zmm0_10)
                            zmm2_7 = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xd2), zmm4_7), 
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xc9), zmm1_9))
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm2_7)
                            zmm12_1 = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xd2)
                            zmm0_10 = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xc9)
                            zmm12_1 = _mm_mul_ps(zmm12_1, zmm4_7)
                            zmm0_10 = _mm_mul_ps(zmm0_10, zmm1_9)
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm5_6)
                            zmm12_1 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm12_1, zmm0_10), 
                                    _mm_add_ps(zmm2_7, zmm3_7)), 
                                var_528_1)
                        label_141aa3f92:
                            var_488 = zmm13_1
                            var_498 = zmm12_1
                            var_4a8 = zmm6_5
                        else
                            zmm1_9 = var_538
                            zmm5_6 = _mm_shuffle_ps(var_518_1, var_518_1, 0xc9)
                            zmm3_7 = _mm_add_ps(zmm1_9, zmm1_9)
                            zmm0_10 = _mm_shuffle_ps(zmm1_9, zmm1_9, 4)
                            _mm_mul_ps(zmm13_1, var_518_1)
                            zmm4_7 = _mm_mul_ps(zmm3_7, zmm1_9)
                            zmm2_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0x29), zmm0_10)
                            zmm1_9 = _mm_shuffle_ps(zmm1_9, zmm1_9, 0xff)
                            zmm0_10 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0x1a)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0x12), zmm1_9)
                            zmm0_10 = _mm_add_ps(zmm0_10, _mm_shuffle_ps(zmm4_7, zmm4_7, 1))
                            zmm4_7 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
                            zmm10_1 = _mm_add_ps(zmm3_7, zmm2_7)
                            zmm2_7 = _mm_sub_ps(zmm2_7, zmm3_7)
                            zmm1_9 = _mm_sub_ps(zmm8_3, zmm0_10)
                            zmm10_1 = _mm_mul_ps(zmm10_1, var_518_1)
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm2_7)
                            zmm1_9 = _mm_mul_ps(zmm1_9, var_518_1)
                            zmm2_7 = _mm_add_ps(zmm6_5, zmm6_5)
                            zmm1_9 = __andps_xmmxud_memxud(zmm1_9, data_143f2b820)
                            zmm0_10 = _mm_shuffle_ps(zmm5_6, zmm1_9, 0x32)
                            zmm9_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_9, 0), zmm0_10, 0x82)
                            zmm0_10 = _mm_shuffle_ps(zmm10_1, zmm1_9, 0x31)
                            zmm7_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_6, zmm1_9, 0x10), zmm0_10, 0x88)
                            zmm3_7 = _mm_mul_ps(zmm2_7, zmm6_5)
                            zmm8_3[0].q = var_528_1 u>> 0x40
                            zmm8_3 = _mm_shuffle_ps(var_528_1, zmm8_3, 0xc4)
                            zmm0_10 = _mm_shuffle_ps(zmm6_5, zmm6_5, 4)
                            zmm6_5 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xff)
                            zmm10_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_6, 0x12), zmm1_9, 0xe8)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm2_7, zmm2_7, 0x29), zmm0_10)
                            zmm0_10 = _mm_add_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0x1a), 
                                _mm_shuffle_ps(zmm3_7, zmm3_7, 1))
                            zmm2_7 = _mm_mul_ps(_mm_shuffle_ps(zmm2_7, zmm2_7, 0x12), zmm6_5)
                            float var_6e8_1[0x4] = zmm9_1
                            float var_6d8_1[0x4] = zmm7_1
                            float var_6c8_1[0x4] = zmm10_1
                            float var_6b8_1[0x4] = zmm8_3
                            zmm6_5 = _mm_add_ps(zmm2_7, zmm1_9)
                            zmm1_9 = _mm_sub_ps(zmm1_9, zmm2_7)
                            zmm6_5 = _mm_mul_ps(zmm6_5, zmm13_1)
                            zmm4_7 = _mm_mul_ps(zmm4_7, zmm1_9)
                            zmm1_9 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(data_143f2b810, zmm0_10), zmm13_1), 
                                data_143f2b820)
                            zmm3_7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_5, zmm1_9, 0), 
                                _mm_shuffle_ps(zmm4_7, zmm1_9, 0x32), 0x82)
                            float var_6a8_1[0x4] = zmm3_7
                            zmm2_7 = _mm_shuffle_ps(zmm3_7, zmm3_7, 0x55)
                            zmm0_10 = _mm_shuffle_ps(zmm6_5, zmm1_9, 0x31)
                            zmm5_6 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm4_7, zmm1_9, 0x10), zmm0_10, 0x88)
                            zmm0_10 = data_143f2b810
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm7_1)
                            zmm0_10[0].q = zmm12_1 u>> 0x40
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm0_10, 0xc4)
                            zmm0_10 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0), zmm9_1)
                            zmm6_5 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_5, zmm4_7, 0x12), zmm1_9, 0xe8)
                            zmm1_9 = _mm_shuffle_ps(zmm3_7, zmm3_7, 0xaa)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_10)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_7, zmm3_7, 0xff), zmm8_3)
                            zmm1_9 = _mm_mul_ps(zmm1_9, zmm10_1)
                            zmm0_10 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0), zmm9_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_9)
                            float var_698_1[0x4] = zmm5_6
                            float var_688_1[0x4] = zmm6_5
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xaa), zmm10_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm3_7)
                            float var_678_1[0x4] = zmm12_1
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0x55), zmm7_1)
                            float var_c28[0x4] = zmm2_7
                            zmm2_7 = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0x55), zmm7_1)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm0_10)
                            zmm5_6 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xff), zmm8_3)
                            zmm0_10 = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0), zmm9_1)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm1_9)
                            zmm1_9 = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0xaa), zmm10_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_10)
                            zmm6_5 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xff)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm5_6)
                            zmm6_5 = _mm_mul_ps(zmm6_5, zmm8_3)
                            zmm0_10 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_9)
                            zmm0_10 = _mm_mul_ps(zmm0_10, zmm9_1)
                            int96_t var_c18_1 = zmm3_7[0].12
                            zmm1_9 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                            zmm3_7 = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x55), zmm7_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm6_5)
                            zmm1_9 = _mm_mul_ps(zmm1_9, zmm10_1)
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                            zmm3_7 = _mm_add_ps(zmm3_7, zmm0_10)
                            zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_3)
                            int96_t var_c08_1 = zmm2_7[0].12
                            int96_t var_bf8_1 =
                                _mm_add_ps(_mm_add_ps(zmm3_7, zmm1_9), zmm12_1)[0].12
                            float zmm11_4[0x4]
                            int64_t zmm14_4
                            zmm11_4, zmm14_4 = sub_1407740e0(&var_c28, 0x322bcc77)
                            uint32_t zmm0_12[0x4] = data_143f2b8c0
                            float zmm4_8[0x4] = _mm_cmpeq_ps(var_c78_2, zmm11_4, 2)
                            float zmm2_9[0x4] = var_c28[0]
                            float zmm1_11 = var_c28[1]
                            zmm4_8 = _mm_and_ps(zmm4_8, zmm0_12 ^ data_143f2b810) ^ data_143f2b8c0
                            zmm0_12 = var_c28[2]
                            zmm2_9[0] = zmm2_9[0] * zmm4_8[0]
                            zmm1_11 = zmm1_11 * zmm4_8[0]
                            zmm0_12[0] = zmm0_12[0] f* zmm4_8[0]
                            var_c28[0] = zmm2_9[0]
                            zmm2_9 = _mm_shuffle_ps(zmm4_8, zmm4_8, 0x55)
                            var_c28[1] = zmm1_11
                            zmm1_11 = var_c18_1:4.d * zmm2_9[0]
                            var_c28[2] = zmm0_12[0]
                            zmm0_12 = var_c18_1:8.d
                            zmm0_12[0] = zmm0_12[0] f* zmm2_9[0]
                            float zmm3_9 = var_c18_1.d * zmm2_9[0]
                            zmm2_9 = var_c08_1.d
                            zmm4_8 = _mm_shuffle_ps(zmm4_8, zmm4_8, 0xaa)
                            var_c18_1:4.d = zmm1_11
                            var_c18_1:8.d = zmm0_12[0]
                            zmm0_12 = var_c08_1:8.d
                            zmm1_11 = var_c08_1:4.d * zmm4_8[0]
                            zmm0_12[0] = zmm0_12[0] f* zmm4_8[0]
                            zmm2_9[0] = zmm2_9[0] * zmm4_8[0]
                            var_c08_1:4.d = zmm1_11
                            var_c08_1:8.d = zmm0_12[0]
                            var_c18_1.d = zmm3_9
                            var_c08_1.d = zmm2_9[0]
                            sub_14077e4a0(&var_cb8, &var_c28)
                            float zmm5_7[0x4] = var_cb8
                            zmm13_1 = zmm11_4
                            zmm6_5 = data_143f2b8b0
                            float zmm1_12[0x4] = _mm_mul_ps(zmm5_7, zmm5_7)
                            var_d08_1.d = 0x322bcc77
                            var_488 = zmm11_4
                            zmm1_12 = _mm_add_ps(zmm1_12, _mm_shuffle_ps(zmm1_12, zmm1_12, 0x4e))
                            float zmm4_9[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_12, zmm1_12, 0x39), zmm1_12)
                            zmm1_12 = _mm_rsqrt_ps(zmm4_9)
                            float zmm3_10[0x4] = _mm_mul_ps(zmm4_9, zmm6_5)
                            float zmm2_10[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_5, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_12, zmm1_12), zmm3_10)), 
                                    zmm1_12), 
                                zmm1_12)
                            zmm6_5 = _mm_sub_ps(zmm6_5, 
                                _mm_mul_ps(_mm_mul_ps(zmm2_10, zmm2_10), zmm3_10))
                            uint32_t zmm0_13[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_9, 2)
                            zmm6_5 = _mm_add_ps(_mm_mul_ps(zmm6_5, zmm2_10), zmm2_10)
                            zmm2_10 = _mm_unpacklo_ps(var_bf8_1:4.d, zmm14_4)
                            zmm6_5 =
                                _mm_and_ps(_mm_mul_ps(zmm6_5, zmm5_7) ^ data_143f2b8a0, zmm0_13)
                                ^ data_143f2b8a0
                            zmm12_1 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_bf8_1.d, var_bf8_1:8.d[0].q), zmm2_10[0].q)
                            var_cb8 = zmm6_5
                            var_498 = zmm12_1
                            var_4a8 = zmm6_5
                    else
                        if (rcx_50 != 2)
                            goto label_141aa3f92
                        
                        sub_140ad7d70(&var_388, &var_4a8, &var_508)
                        zmm13_1 = var_488
                        zmm12_1 = var_498
                        zmm6_5 = var_4a8
                    var_4d8 = zmm6_5
                    var_4c8 = zmm12_1
                    var_4b8 = zmm13_1
                    zmm14_1, zmm15_1 = sub_141acdd30(*(*(arg1 + 0x220) + (rbx_5 << 3)), &var_4d8)
                    int64_t rax_44 = sx.q(*(rsi_6 + 0x18))
                    
                    if (rax_44.d != 0xffffffff)
                        float var_1d8[0x3][0x4]
                        float var_1a8[0x3][0x4]
                        float (* rax_46)[0x4]
                        rax_46, zmm14_1, zmm15_1 = sub_140ad7d70(&var_4d8, &var_1a8, 
                            sub_141abd220(*(*(arg1 + 0x220) + (rax_44 << 3)), &var_1d8))
                        zmm1_2 = rax_46[1]
                        int64_t rax_47 = *(arg1 + 0x240)
                        zmm0_2 = zmm1_2
                        zmm0_2[0] = zmm0_2[0] * zmm1_2[0]
                        zmm2_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                        zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                        zmm2_1[0] = zmm2_1[0] + zmm0_2[0]
                        zmm2_1[0] = zmm2_1[0] + zmm1_2[0]
                        *((rbx_5 << 6) + rax_47 + 0x2c) = _mm_sqrt_ss(0, zmm2_1[0])[0]
                    
                    rsi_6 += 0x20
                while (rsi_6 != r14_7)
                
                zmm15_1 = 0x3f800000
        else if (rcx_26 == 2)
            void* r14_2 = *(arg1 + 0x210)
            void* r13_4 = (sx.q(*(arg1 + 0x218)) << 5) + r14_2
            
            if (r14_2 != r13_4)
                void* rsi_5 = r14_2 + 0x10
                
                do
                    int64_t r15_4 = sx.q(*(rsi_5 + 4))
                    int64_t rax_26 = *(arg1 + 0x240)
                    int64_t rbx_3 = r15_4 << 6
                    *(rbx_3 + rax_26 + 0x30) |= 2
                    float (* rax_27)[0x4] = sub_141ab9f30(r13_1, *rsi_5)
                    uint32_t rax_28 = zx.d(*(arg1 + 0x1b9))
                    float var_448[0x4]
                    
                    if (rax_28 == 0)
                    label_141aa31f5:
                        var_448 = *rax_27
                        float var_438_4[0x4] = rax_27[1]
                        float var_428_4[0x4] = rax_27[2]
                    else if (rax_28 == 1)
                        float zmm12_2[0x4] = data_143f2b810
                        float zmm6_2[0x4] = data_143f2b820
                        float zmm13_2[0x4] = data_143f2b8d0
                        zmm12_2[0].q = zx.o(0) u>> 0x40
                        var_448 = _mm_shuffle_ps(zx.o(0), zmm12_2, 0xc4)
                        float var_428_1[0x4] = _mm_and_ps(zmm12_2, zmm6_2)
                        int128_t var_438_1 = zx.o(0)
                        float zmm11_2[0x4] = rax_27[2]
                        float zmm0_7[0x4]
                        float zmm1_6[0x4]
                        float zmm2_4[0x4]
                        float zmm3_4[0x4]
                        float zmm4_5[0x4]
                        float zmm5_4[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm11_2, var_518_1), zmm13_2, 
                                1)) == 0)
                            zmm4_5 = var_538
                            zmm3_4 = *rax_27
                            zmm6_2 = rax_27[1]
                            zmm2_4 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0x1b)
                            zmm1_6 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0x4e)
                            zmm2_4 = _mm_mul_ps(zmm2_4, _mm_shuffle_ps(zmm4_5, zmm4_5, 0))
                            zmm0_7 = zmm3_4
                            zmm3_4 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xb1)
                            zmm6_2 = _mm_mul_ps(zmm6_2, var_518_1)
                            zmm2_4 = __mulps_xmmps_memps(zmm2_4, data_143f2b850)
                            zmm5_4 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xff)
                            zmm0_7 = _mm_mul_ps(zmm0_7, zmm5_4)
                            zmm11_2 = _mm_mul_ps(zmm11_2, var_518_1)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm0_7)
                            zmm1_6 = _mm_mul_ps(zmm1_6, _mm_shuffle_ps(zmm4_5, zmm4_5, 0x55))
                            zmm3_4 = _mm_mul_ps(zmm3_4, _mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa))
                            zmm1_6 = __mulps_xmmps_memps(zmm1_6, data_143f2b840)
                            zmm0_7 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
                            zmm3_4 = __mulps_xmmps_memps(zmm3_4, data_143f2b830)
                            float var_428_3[0x4] = zmm11_2
                            zmm2_4 = _mm_add_ps(_mm_add_ps(zmm2_4, zmm1_6), zmm3_4)
                            zmm3_4 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
                            var_448 = zmm2_4
                            zmm2_4 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xd2)
                            zmm0_7 = _mm_mul_ps(zmm0_7, zmm2_4)
                            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xc9)
                            zmm3_4 = _mm_sub_ps(_mm_mul_ps(zmm3_4, zmm4_5), zmm0_7)
                            zmm3_4 = _mm_add_ps(zmm3_4, zmm3_4)
                            zmm1_6 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xd2)
                            zmm0_7 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xc9)
                            zmm1_6 = _mm_mul_ps(zmm1_6, zmm4_5)
                            zmm0_7 = _mm_mul_ps(zmm0_7, zmm2_4)
                            zmm3_4 = _mm_mul_ps(zmm3_4, zmm5_4)
                            float var_438_3[0x4] = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm1_6, zmm0_7), _mm_add_ps(zmm3_4, zmm6_2)), 
                                var_528_1)
                        else
                            zmm3_4 = var_538
                            zmm1_6 = _mm_add_ps(zmm3_4, zmm3_4)
                            zmm5_4 = _mm_shuffle_ps(var_518_1, var_518_1, 0xc9)
                            _mm_mul_ps(zmm11_2, var_518_1)
                            zmm2_4 = _mm_shuffle_ps(zmm3_4, zmm3_4, 4)
                            zmm4_5 = _mm_mul_ps(zmm3_4, zmm1_6)
                            zmm2_4 = _mm_mul_ps(zmm2_4, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x29))
                            zmm1_6 = _mm_shuffle_ps(zmm1_6, zmm1_6, 0x12)
                            zmm0_7 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x1a)
                            zmm3_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_4, zmm3_4, 0xff), zmm1_6)
                            zmm0_7 = _mm_add_ps(zmm0_7, _mm_shuffle_ps(zmm4_5, zmm4_5, 1))
                            float zmm10_2[0x4] = _mm_add_ps(zmm3_4, zmm2_4)
                            zmm2_4 = _mm_sub_ps(zmm2_4, zmm3_4)
                            zmm1_6 = _mm_sub_ps(zmm12_2, zmm0_7)
                            zmm10_2 = _mm_mul_ps(zmm10_2, var_518_1)
                            zmm5_4 = _mm_mul_ps(zmm5_4, zmm2_4)
                            zmm1_6 = _mm_and_ps(_mm_mul_ps(zmm1_6, var_518_1), zmm6_2)
                            zmm0_7 = _mm_shuffle_ps(zmm5_4, zmm1_6, 0x32)
                            float zmm9_2[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_2, zmm1_6, 0), zmm0_7, 0x82)
                            zmm0_7 = _mm_shuffle_ps(zmm10_2, zmm1_6, 0x31)
                            float zmm7_2[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_4, zmm1_6, 0x10), zmm0_7, 0x88)
                            zmm10_2 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_2, zmm5_4, 0x12), zmm1_6, 0xe8)
                            zmm12_2[0].q = var_528_1 u>> 0x40
                            float zmm8_2[0x4] = _mm_shuffle_ps(var_528_1, zmm12_2, 0xc4)
                            float var_778_1[0x4] = zmm8_2
                            float var_7a8_1[0x4] = zmm9_2
                            float var_798_1[0x4] = zmm7_2
                            float var_788_1[0x4] = zmm10_2
                            zmm3_4 = *rax_27
                            zmm4_5 = zmm3_4
                            zmm1_6 = _mm_add_ps(zmm3_4, zmm3_4)
                            zmm2_4 = _mm_shuffle_ps(zmm3_4, zmm3_4, 4)
                            zmm3_4 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xff)
                            zmm4_5 = _mm_mul_ps(zmm4_5, zmm1_6)
                            zmm2_4 = _mm_mul_ps(zmm2_4, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x29))
                            zmm3_4 = _mm_mul_ps(zmm3_4, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x12))
                            zmm1_6 = rax_27[2]
                            zmm0_7 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x1a)
                            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 1)
                            zmm5_4 = _mm_shuffle_ps(zmm1_6, zmm1_6, 0xc9)
                            zmm6_2 = _mm_add_ps(zmm3_4, zmm2_4)
                            zmm2_4 = _mm_sub_ps(zmm2_4, zmm3_4)
                            zmm0_7 = _mm_add_ps(zmm0_7, zmm4_5)
                            zmm6_2 = _mm_mul_ps(zmm6_2, zmm1_6)
                            zmm5_4 = _mm_mul_ps(zmm5_4, zmm2_4)
                            zmm2_4 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(zmm12_2, zmm0_7), zmm1_6), data_143f2b820)
                            zmm3_4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_2, zmm2_4, 0), 
                                _mm_shuffle_ps(zmm5_4, zmm2_4, 0x32), 0x82)
                            zmm4_5 = _mm_shuffle_ps(zmm5_4, zmm2_4, 0x10)
                            zmm1_6 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xaa)
                            zmm4_5 =
                                _mm_shuffle_ps(zmm4_5, _mm_shuffle_ps(zmm6_2, zmm2_4, 0x31), 0x88)
                            float var_768_1[0x4] = zmm3_4
                            zmm1_6 = _mm_mul_ps(zmm1_6, zmm10_2)
                            zmm6_2 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_2, zmm5_4, 0x12), zmm2_4, 0xe8)
                            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_4, zmm3_4, 0x55), zmm7_2)
                            float var_758_1[0x4] = zmm4_5
                            float var_748_1[0x4] = zmm6_2
                            zmm5_4 = rax_27[1]
                            zmm12_2[0].q = zmm5_4 u>> 0x40
                            zmm5_4 = _mm_shuffle_ps(zmm5_4, zmm12_2, 0xc4)
                            zmm0_7 = _mm_shuffle_ps(zmm3_4, zmm3_4, 0)
                            zmm3_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_4, zmm3_4, 0xff), zmm8_2)
                            float var_738_1[0x4] = zmm5_4
                            zmm2_4 = _mm_add_ps(zmm2_4, _mm_mul_ps(zmm0_7, zmm9_2))
                            zmm0_7 = _mm_mul_ps(_mm_shuffle_ps(zmm4_5, zmm4_5, 0), zmm9_2)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm1_6)
                            zmm1_6 = _mm_mul_ps(_mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa), zmm10_2)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm3_4)
                            zmm3_4 = _mm_mul_ps(_mm_shuffle_ps(zmm4_5, zmm4_5, 0x55), zmm7_2)
                            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xff)
                            float var_b68[0x4] = zmm2_4
                            zmm2_4 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
                            zmm3_4 = _mm_add_ps(zmm3_4, zmm0_7)
                            zmm2_4 = _mm_mul_ps(zmm2_4, zmm7_2)
                            zmm4_5 = _mm_mul_ps(zmm4_5, zmm8_2)
                            zmm0_7 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0)
                            zmm3_4 = _mm_add_ps(zmm3_4, zmm1_6)
                            zmm0_7 = _mm_mul_ps(zmm0_7, zmm9_2)
                            zmm1_6 = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa), zmm10_2)
                            zmm3_4 = _mm_add_ps(zmm3_4, zmm4_5)
                            zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm0_7)
                            zmm6_2 = _mm_mul_ps(zmm6_2, zmm8_2)
                            zmm0_7 = _mm_shuffle_ps(zmm5_4, zmm5_4, 0)
                            int96_t var_b58_1 = zmm3_4[0].12
                            zmm3_4 = _mm_shuffle_ps(zmm5_4, zmm5_4, 0x55)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm1_6)
                            zmm3_4 = _mm_mul_ps(zmm3_4, zmm7_2)
                            zmm1_6 = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xaa), zmm10_2)
                            zmm0_7 = _mm_mul_ps(zmm0_7, zmm9_2)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm6_2)
                            zmm5_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xff), zmm8_2)
                            zmm3_4 = _mm_add_ps(zmm3_4, zmm0_7)
                            int96_t var_b48_1 = zmm2_4[0].12
                            int96_t var_b38_1 = _mm_add_ps(_mm_add_ps(zmm3_4, zmm1_6), zmm5_4)[0].12
                            float zmm11_3[0x4]
                            int128_t zmm12_3
                            float zmm13_3[0x4]
                            int64_t zmm14_2
                            zmm11_3, zmm12_3, zmm13_3, zmm14_2 = sub_1407740e0(&var_b68, 0x322bcc77)
                            uint32_t zmm6_3[0x4] = _mm_and_ps(data_143f2b8c0 ^ zmm12_3, 
                                _mm_cmpeq_ps(zmm13_3, zmm11_3, 2)) ^ data_143f2b8c0
                            void var_a38
                            int64_t* rax_31 = sub_14173efa0(&var_b68, &var_a38, 1)
                            float zmm2_5[0x4] = zmm6_3
                            float zmm1_7 = zmm6_3[0]
                            float zmm0_8 = zmm6_3[0]
                            zmm2_5[0] = zmm2_5[0] f* *rax_31
                            zmm1_7 = zmm1_7 f* *(rax_31 + 4)
                            zmm0_8 = zmm0_8 f* rax_31[1].d
                            var_b68[0] = zmm2_5[0]
                            zmm2_5 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
                            var_b68[1] = zmm1_7
                            zmm1_7 = var_b58_1:4.d * zmm2_5[0]
                            var_b68[2] = zmm0_8
                            zmm0_8 = var_b58_1:8.d * zmm2_5[0]
                            float zmm3_5 = var_b58_1.d * zmm2_5[0]
                            zmm2_5 = var_b48_1.d
                            var_b58_1:4.d = zmm1_7
                            var_b58_1:8.d = zmm0_8
                            zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa)
                            zmm1_7 = var_b48_1:4.d f* zmm6_3[0]
                            zmm0_8 = var_b48_1:8.d f* zmm6_3[0]
                            zmm2_5[0] = zmm2_5[0] f* zmm6_3[0]
                            var_b48_1:4.d = zmm1_7
                            var_b48_1:8.d = zmm0_8
                            var_b58_1.d = zmm3_5
                            var_b48_1.d = zmm2_5[0]
                            sub_14077e4a0(&var_cd8, &var_b68)
                            float zmm5_5[0x4] = var_cd8
                            float zmm6_4[0x4] = data_143f2b8b0
                            float zmm1_8[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
                            var_d08_1.d = 0x322bcc77
                            float var_428_2[0x4] = zmm11_3
                            zmm1_8 = _mm_add_ps(zmm1_8, _mm_shuffle_ps(zmm1_8, zmm1_8, 0x4e))
                            float zmm4_6[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_8, zmm1_8, 0x39), zmm1_8)
                            zmm1_8 = _mm_rsqrt_ps(zmm4_6)
                            float zmm3_6[0x4] = _mm_mul_ps(zmm4_6, zmm6_4)
                            float zmm2_6[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_4, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_8, zmm1_8), zmm3_6)), 
                                    zmm1_8), 
                                zmm1_8)
                            zmm6_4 =
                                _mm_sub_ps(zmm6_4, _mm_mul_ps(_mm_mul_ps(zmm2_6, zmm2_6), zmm3_6))
                            uint32_t zmm0_9[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_6, 2)
                            zmm6_4 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_4, zmm2_6), zmm2_6), zmm5_5)
                                    ^ data_143f2b8a0, 
                                zmm0_9) ^ data_143f2b8a0
                            var_cd8 = zmm6_4
                            var_448 = zmm6_4
                            float var_438_2[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_b38_1.d, var_b38_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_b38_1:4.d, zmm14_2)[0].q)
                    else
                        if (rax_28 != 2)
                            goto label_141aa31f5
                        
                        sub_140ad7d70(rax_27, &var_448, &var_508)
                    
                    zmm14_1, zmm15_1 = sub_141acdd30(*(*(arg1 + 0x220) + (r15_4 << 3)), &var_448)
                    int64_t rax_32 = sx.q(*(rsi_5 + 8))
                    
                    if (rax_32.d != 0xffffffff)
                        float var_268[0x3][0x4]
                        float var_238[0x3][0x4]
                        float (* rax_34)[0x4]
                        rax_34, zmm14_1, zmm15_1 = sub_140ad7d70(&var_448, &var_238, 
                            sub_141abd220(*(*(arg1 + 0x220) + (rax_32 << 3)), &var_268))
                        zmm1_2 = rax_34[1]
                        int64_t rax_35 = *(arg1 + 0x240)
                        zmm0_2 = zmm1_2
                        zmm0_2[0] = zmm0_2[0] * zmm1_2[0]
                        zmm2_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                        zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                        zmm2_1[0] = zmm2_1[0] + zmm0_2[0]
                        zmm2_1[0] = zmm2_1[0] + zmm1_2[0]
                        *(rbx_3 + rax_35 + 0x2c) = _mm_sqrt_ss(0, zmm2_1[0])[0]
                    
                    r14_2 += 0x20
                    rsi_5 += 0x20
                while (r14_2 != r13_4)
                
                r12 = var_ce8
        
        zmm7_1 = 0x38d1b717
        zmm8_1 = 0x80000000
        zmm9_1 = 0xbf800000
        zmm13_1 = var_cf8
        rcx_12 = var_d18_1
        *(arg1 + 0xd0) = var_538
        *(arg1 + 0xe0) = var_528_1
        *(arg1 + 0xf0) = var_518_1
        *(arg1 + 0x1bb) = 0
        *(arg1 + 0x578) = data_143dbb1f8.q
        *(arg1 + 0x580) = data_143dbb200
    else
        char rax_16 = *(arg1 + 0x1d8)
        
        if ((rax_16 & 4) != 0)
            *(arg1 + 0x1d8) = rax_16 & 0xfb
            zmm7_1, zmm8_1, zmm9_1, zmm13_1, zmm14_1, zmm15_1 =
                sub_141ac28b0(arg1, arg2, &var_538, &var_508)
            rcx_12 = *(arg1 + 0x1bb)
            var_d18_1 = rcx_12
            
            if (rcx_12 != 0)
                goto label_141aa1c50
    
    if ((*(arg1 + 0x1e4) != 0 || rcx_12 == 0) && not(zmm13_1[0] f<= *(arg1 + 0x1e0)))
        if ((*(arg1 + 0x1bc) & 4) == 0 || *(arg1 + 0x4d0) s<= 0)
            char rdx_31 = *(arg1 + 0x1b9)
            
            if (rdx_31 != 1)
                zmm13_1 = *(arg1 + 0x110)
                zmm1_2 = *(arg1 + 0x140)
                zmm12_1 = zmm13_1
                float (* var_d28_1)[0x4] = &var_508
                zmm12_1[0] = zmm12_1[0] - zmm1_2[0]
                zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                zmm11_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x55)
                zmm11_1[0] = zmm11_1[0] - zmm0_2[0]
                zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa)
                zmm13_1[0] = zmm13_1[0] - zmm1_2[0]
                zmm15_1[0] = zmm15_1[0] f/ var_cf8
                zmm13_1[0] = zmm13_1[0] * zmm15_1[0]
                zmm12_1[0] = zmm12_1[0] * zmm15_1[0]
                zmm11_1[0] = zmm11_1[0] * zmm15_1[0]
                float var_c80_1 = zmm13_1[0]
                var_ce8.d = (zmm12_1 ^ zmm8_1)[0]
                var_ce8:4.d = (zmm11_1 ^ zmm8_1)[0]
                float var_ce0_1 = (zmm13_1 ^ zmm8_1)[0]
                uint64_t var_a2c
                uint64_t* rax_49
                int512_t zmm6_6
                rax_49, zmm6_6 = sub_141ad6900(&var_a2c, rdx_31, &var_ce8, &var_538, var_d28_1)
                float zmm2_11 = *(arg1 + 0x578) - zmm12_1[0]
                zmm6_6.o = *rax_49
                float zmm3_11 = *(arg1 + 0x57c) - zmm11_1[0]
                zmm7_1 = *(rax_49 + 4)
                zmm9_1 = rax_49[1].d
                zmm8_1 = *(arg1 + 0x190)
                float zmm4_11 = *(arg1 + 0x580) - zmm13_1[0]
                zmm10_1 = *(arg1 + 0x194)
                var_d08_1.d = (*(arg1 + 0x18c))[0]
                *(arg1 + 0x578) = (_mm_unpacklo_ps(zmm12_1, zmm11_1[0].q)).q
                *(arg1 + 0x580) = var_c80_1
                var_ce8.d = zmm2_11 * zmm15_1[0]
                var_ce8:4.d = zmm3_11 * zmm15_1[0]
                float var_ce0_2 = zmm4_11 * zmm15_1[0]
                uint64_t var_a20
                uint64_t* rax_51
                int32_t zmm6_7
                rax_51, zmm6_7 =
                    sub_141ad6900(&var_a20, *(arg1 + 0x1b9), &var_ce8, &var_538, &var_508)
                float zmm5_8[0x4] = var_d08_1.d
                int64_t rsi_7 = sx.q(*(arg1 + 0x218))
                void* i = *(arg1 + 0x210)
                float zmm0_15[0x4] = *rax_51
                zmm0_15[0] = zmm0_15[0] f* *(arg1 + 0x180)
                zmm11_1 = *(rax_51 + 4)
                zmm11_1[0] = zmm11_1[0] f* *(arg1 + 0x184)
                zmm8_1[0] = zmm8_1[0] * zmm7_1[0]
                zmm7_1 = rax_51[1].d
                zmm7_1[0] = zmm7_1[0] f* *(arg1 + 0x188)
                zmm5_8[0] = zmm5_8[0] f* zmm6_7
                zmm11_1[0] = zmm11_1[0] + zmm8_1[0]
                zmm10_1[0] = zmm10_1[0] * zmm9_1[0]
                zmm5_8[0] = zmm5_8[0] + zmm0_15[0]
                zmm7_1[0] = zmm7_1[0] + zmm10_1[0]
                var_d08_1.d = zmm5_8[0]
                
                for (void* rsi_9 = (rsi_7 << 5) + i; i != rsi_9; i += 0x20)
                    int64_t r9_6 = sx.q(*(i + 0x14))
                    
                    if ((*((r9_6 << 6) + *(arg1 + 0x240) + 0x30) & 1) != 0)
                        void* r9_7 = *(*(arg1 + 0x220) + (r9_6 << 3))
                        zmm9_1 = *(sx.q(*(r9_7 + 0x38)) * 0x60 + *(*(r9_7 + 0x30) + 0x50) + 0xc)
                        
                        if (not(zmm9_1[0] <= zx.o(0)[0]))
                            zmm8_1 = *(arg1 + 0x198)
                            float zmm1_13[0x4] = zmm5_8
                            float zmm3_12[0x4] = zmm11_1
                            float zmm4_12[0x4] = zmm7_1
                            
                            if (_mm_and_ps(zmm8_1, 0x7fffffff)[0] > 9.99999975e-05f)
                            label_141aa43b8:
                                zmm4_12 = *(arg1 + 0x1a0) ^ 0x80000000
                                bool cond:5_1 = zmm7_1[0] < zmm4_12[0]
                                int32_t rax_56 = *(arg1 + 0x1a0)
                                zmm3_12 = *(arg1 + 0x19c)
                                zmm1_13 = zmm8_1 ^ 0x80000000
                                var_ce8 = *(arg1 + 0x198)
                                zmm3_12 ^= 0x80000000
                                
                                if (not(cond:5_1))
                                    zmm4_12 = __minss_xmmss_memss(zmm7_1[0], rax_56)
                                
                                if (not(zmm11_1[0] < zmm3_12[0]))
                                    zmm3_12 = __minss_xmmss_memss(zmm11_1[0], var_ce8:4.d)
                                
                                if (not(zmm5_8[0] < zmm1_13[0]))
                                    zmm1_13 = __minss_xmmss_memss(zmm5_8[0], var_ce8.d)
                            else
                                if (_mm_and_ps(*(arg1 + 0x19c), 0x7fffffff)[0] > 9.99999975e-05f)
                                    goto label_141aa43b8
                                
                                if (not(_mm_and_ps(*(arg1 + 0x1a0), 0x7fffffff)[0]
                                        <= 9.99999975e-05f))
                                    goto label_141aa43b8
                            
                            zmm15_1[0] = zmm15_1[0] / zmm9_1[0]
                            zmm15_1[0] = zmm15_1[0] * zmm1_13[0]
                            zmm15_1[0] = zmm15_1[0] * zmm3_12[0]
                            float var_ae8 = zmm15_1[0]
                            zmm15_1[0] = zmm15_1[0] * zmm4_12[0]
                            float var_ae4_1 = zmm15_1[0]
                            float var_ae0_1 = zmm15_1[0]
                            sub_142240060(*(r9_7 + 0x30), *(r9_7 + 0x38), &var_ae8)
                            zmm5_8 = var_d08_1.d
                
                zmm13_1 = var_cf8
        else
            void* i_1 = *(arg1 + 0x210)
            
            for (void* r15_7 = (sx.q(*(arg1 + 0x218)) << 5) + i_1; i_1 != r15_7; i_1 += 0x20)
                int64_t r14_3 = sx.q(*(i_1 + 0x14))
                float (* rdx_22)[0x4] = (r14_3 << 6) + *(arg1 + 0x240)
                
                if ((rdx_22[3][0].b & 1) != 0)
                    zmm1_2 = (*rdx_22)[5]
                    zmm2_1 = (*rdx_22)[6]
                    void* r14_4 = *(*(arg1 + 0x220) + (r14_3 << 3))
                    int64_t rbx_4 = *(*(r14_4 + 0x30) + 0x50)
                    int64_t rcx_40 = sx.q(*(r14_4 + 0x38)) * 0x60
                    *(rcx_40 + rbx_4) = rdx_22[1][0][0]
                    *(rcx_40 + rbx_4 + 4) = zmm1_2[0]
                    *(rcx_40 + rbx_4 + 8) = zmm2_1[0]
                    zmm6_1 = *rdx_22
                    int64_t var_c88_1 = zmm6_1[0].q
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    
                    if (zmm6_1[0] >= zmm9_1[0])
                        zmm0_2 = _mm_min_ss(zmm6_1[0], zmm15_1[0])
                    else
                        zmm0_2 = zmm9_1
                    
                    zmm0_2 = acosf(zmm0_2[0])
                    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                    zmm2_1 = zmm0_2
                    zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
                    zmm15_1[0] = zmm15_1[0] - zmm6_1[0]
                    zmm1_2 = _mm_max_ss(zmm15_1[0], zmm14_1[0])
                    zmm3_1 = _mm_sqrt_ss(zx.o(0)[0], zmm1_2[0])
                    float zmm4_10
                    
                    if (zmm3_1[0] < zmm7_1[0])
                        zmm3_1 = zmm15_1
                        zmm4_10 = zmm14_1[0]
                        zmm0_2 = zmm14_1
                    else
                        zmm0_2 = zmm15_1
                        zmm0_2[0] = zmm0_2[0] / zmm3_1[0]
                        zmm3_1 = zmm0_2
                        zmm4_10 = zmm0_2[0]
                        zmm3_1[0] = zmm3_1[0] f* var_c88_1.d
                        zmm4_10 = zmm4_10 f* var_c88_1:4.d
                        zmm0_2[0] = zmm0_2[0] * var_c80
                    
                    int64_t rax_48 = sx.q(*(r14_4 + 0x38))
                    zmm2_1[0] = zmm2_1[0] * zmm0_2[0]
                    zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
                    zmm2_1[0] = zmm2_1[0] * zmm4_10
                    int64_t rcx_61 = rax_48 * 0x60
                    *(rcx_61 + rbx_4 + 0x10) = zmm2_1[0]
                    *(rcx_61 + rbx_4 + 0x14) = zmm2_1[0]
                    *(rcx_61 + rbx_4 + 0x18) = zmm2_1[0]
            
            sub_141a9a1b0(arg1 + 0x4c8)
        
        void* rsi_10 = *(arg1 + 0x210)
        void* r15_10 = (sx.q(*(arg1 + 0x218)) << 5) + rsi_10
        
        if (rsi_10 != r15_10)
            int32_t* rbx_7 = rsi_10 + 0x10
            
            do
                int64_t r14_8 = sx.q(rbx_7[1])
                
                if ((*((r14_8 << 6) + *(arg1 + 0x240) + 0x30) & 1) == 0)
                    float (* rax_58)[0x4] = sub_141ab9f30(r13_1, *rbx_7)
                    uint32_t rax_59 = zx.d(*(arg1 + 0x1b9))
                    float var_3b8[0x4]
                    
                    if (rax_59 == 0)
                    label_141aa4a74:
                        var_3b8 = *rax_58
                        float var_3a8_4[0x4] = rax_58[1]
                        float var_398_4[0x4] = rax_58[2]
                    else if (rax_59 == 1)
                        float zmm12_4[0x4] = data_143f2b810
                        float zmm6_8[0x4] = data_143f2b820
                        float zmm15_2[0x4] = data_143f2b8d0
                        zmm12_4[0].q = zx.o(0) u>> 0x40
                        var_3b8 = _mm_shuffle_ps(zx.o(0), zmm12_4, 0xc4)
                        float var_398_1[0x4] = _mm_and_ps(zmm12_4, zmm6_8)
                        int128_t var_3a8_1 = zx.o(0)
                        float zmm11_5[0x4] = rax_58[2]
                        float zmm0_16[0x4]
                        float zmm1_14[0x4]
                        float zmm2_13[0x4]
                        float zmm3_13[0x4]
                        float zmm4_13[0x4]
                        float zmm5_9[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm11_5, var_518_1), zmm15_2, 
                                1)) == 0)
                            zmm4_13 = var_538
                            zmm3_13 = *rax_58
                            zmm6_8 = rax_58[1]
                            zmm2_13 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0x1b)
                            zmm1_14 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0x4e)
                            zmm2_13 = _mm_mul_ps(zmm2_13, _mm_shuffle_ps(zmm4_13, zmm4_13, 0))
                            zmm0_16 = zmm3_13
                            zmm3_13 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0xb1)
                            zmm6_8 = _mm_mul_ps(zmm6_8, var_518_1)
                            zmm2_13 = __mulps_xmmps_memps(zmm2_13, data_143f2b850)
                            zmm5_9 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xff)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm5_9)
                            zmm11_5 = _mm_mul_ps(zmm11_5, var_518_1)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm0_16)
                            zmm1_14 = _mm_mul_ps(zmm1_14, _mm_shuffle_ps(zmm4_13, zmm4_13, 0x55))
                            zmm3_13 = _mm_mul_ps(zmm3_13, _mm_shuffle_ps(zmm4_13, zmm4_13, 0xaa))
                            zmm1_14 = __mulps_xmmps_memps(zmm1_14, data_143f2b840)
                            zmm0_16 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0xc9)
                            zmm3_13 = __mulps_xmmps_memps(zmm3_13, data_143f2b830)
                            float var_398_3[0x4] = zmm11_5
                            zmm2_13 = _mm_add_ps(_mm_add_ps(zmm2_13, zmm1_14), zmm3_13)
                            zmm3_13 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0xd2)
                            var_3b8 = zmm2_13
                            zmm2_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xd2)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm2_13)
                            zmm4_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xc9)
                            zmm3_13 = _mm_sub_ps(_mm_mul_ps(zmm3_13, zmm4_13), zmm0_16)
                            zmm3_13 = _mm_add_ps(zmm3_13, zmm3_13)
                            zmm1_14 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0xd2)
                            zmm0_16 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0xc9)
                            zmm1_14 = _mm_mul_ps(zmm1_14, zmm4_13)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm2_13)
                            zmm3_13 = _mm_mul_ps(zmm3_13, zmm5_9)
                            float var_3a8_3[0x4] = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm1_14, zmm0_16), 
                                    _mm_add_ps(zmm3_13, zmm6_8)), 
                                var_528_1)
                        else
                            zmm3_13 = var_538
                            zmm1_14 = _mm_add_ps(zmm3_13, zmm3_13)
                            zmm5_9 = _mm_shuffle_ps(var_518_1, var_518_1, 0xc9)
                            _mm_mul_ps(zmm11_5, var_518_1)
                            zmm2_13 = _mm_shuffle_ps(zmm3_13, zmm3_13, 4)
                            zmm4_13 = _mm_mul_ps(zmm3_13, zmm1_14)
                            zmm2_13 = _mm_mul_ps(zmm2_13, _mm_shuffle_ps(zmm1_14, zmm1_14, 0x29))
                            zmm1_14 = _mm_shuffle_ps(zmm1_14, zmm1_14, 0x12)
                            zmm0_16 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0x1a)
                            zmm3_13 = _mm_mul_ps(_mm_shuffle_ps(zmm3_13, zmm3_13, 0xff), zmm1_14)
                            zmm0_16 = _mm_add_ps(zmm0_16, _mm_shuffle_ps(zmm4_13, zmm4_13, 1))
                            float zmm10_3[0x4] = _mm_add_ps(zmm3_13, zmm2_13)
                            zmm2_13 = _mm_sub_ps(zmm2_13, zmm3_13)
                            zmm1_14 = _mm_sub_ps(zmm12_4, zmm0_16)
                            zmm10_3 = _mm_mul_ps(zmm10_3, var_518_1)
                            zmm5_9 = _mm_mul_ps(zmm5_9, zmm2_13)
                            zmm1_14 = _mm_and_ps(_mm_mul_ps(zmm1_14, var_518_1), zmm6_8)
                            zmm0_16 = _mm_shuffle_ps(zmm5_9, zmm1_14, 0x32)
                            float zmm9_3[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_3, zmm1_14, 0), zmm0_16, 0x82)
                            zmm0_16 = _mm_shuffle_ps(zmm10_3, zmm1_14, 0x31)
                            float zmm7_3[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_9, zmm1_14, 0x10), zmm0_16, 0x88)
                            zmm10_3 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_3, zmm5_9, 0x12), zmm1_14, 0xe8)
                            zmm12_4[0].q = var_528_1 u>> 0x40
                            float zmm8_4[0x4] = _mm_shuffle_ps(var_528_1, zmm12_4, 0xc4)
                            float var_638_1[0x4] = zmm8_4
                            float var_668_1[0x4] = zmm9_3
                            float var_658_1[0x4] = zmm7_3
                            float var_648_1[0x4] = zmm10_3
                            zmm3_13 = *rax_58
                            zmm4_13 = zmm3_13
                            zmm1_14 = _mm_add_ps(zmm3_13, zmm3_13)
                            zmm2_13 = _mm_shuffle_ps(zmm3_13, zmm3_13, 4)
                            zmm3_13 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0xff)
                            zmm4_13 = _mm_mul_ps(zmm4_13, zmm1_14)
                            zmm2_13 = _mm_mul_ps(zmm2_13, _mm_shuffle_ps(zmm1_14, zmm1_14, 0x29))
                            zmm3_13 = _mm_mul_ps(zmm3_13, _mm_shuffle_ps(zmm1_14, zmm1_14, 0x12))
                            zmm1_14 = rax_58[2]
                            zmm0_16 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0x1a)
                            zmm4_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 1)
                            zmm5_9 = _mm_shuffle_ps(zmm1_14, zmm1_14, 0xc9)
                            zmm6_8 = _mm_add_ps(zmm3_13, zmm2_13)
                            zmm2_13 = _mm_sub_ps(zmm2_13, zmm3_13)
                            zmm0_16 = _mm_add_ps(zmm0_16, zmm4_13)
                            zmm6_8 = _mm_mul_ps(zmm6_8, zmm1_14)
                            zmm5_9 = _mm_mul_ps(zmm5_9, zmm2_13)
                            zmm2_13 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(zmm12_4, zmm0_16), zmm1_14), data_143f2b820)
                            zmm3_13 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_8, zmm2_13, 0), 
                                _mm_shuffle_ps(zmm5_9, zmm2_13, 0x32), 0x82)
                            zmm4_13 = _mm_shuffle_ps(zmm5_9, zmm2_13, 0x10)
                            zmm1_14 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0xaa)
                            zmm4_13 =
                                _mm_shuffle_ps(zmm4_13, _mm_shuffle_ps(zmm6_8, zmm2_13, 0x31), 0x88)
                            float var_628_1[0x4] = zmm3_13
                            zmm1_14 = _mm_mul_ps(zmm1_14, zmm10_3)
                            zmm6_8 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_8, zmm5_9, 0x12), zmm2_13, 0xe8)
                            zmm2_13 = _mm_mul_ps(_mm_shuffle_ps(zmm3_13, zmm3_13, 0x55), zmm7_3)
                            float var_618_1[0x4] = zmm4_13
                            float var_608_1[0x4] = zmm6_8
                            zmm5_9 = rax_58[1]
                            zmm12_4[0].q = zmm5_9 u>> 0x40
                            zmm5_9 = _mm_shuffle_ps(zmm5_9, zmm12_4, 0xc4)
                            zmm0_16 = _mm_shuffle_ps(zmm3_13, zmm3_13, 0)
                            zmm3_13 = _mm_mul_ps(_mm_shuffle_ps(zmm3_13, zmm3_13, 0xff), zmm8_4)
                            float var_5f8_1[0x4] = zmm5_9
                            zmm2_13 = _mm_add_ps(zmm2_13, _mm_mul_ps(zmm0_16, zmm9_3))
                            zmm0_16 = _mm_mul_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0), zmm9_3)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm1_14)
                            zmm1_14 = _mm_mul_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0xaa), zmm10_3)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm3_13)
                            zmm3_13 = _mm_mul_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0x55), zmm7_3)
                            zmm4_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xff)
                            float var_b28[0x4] = zmm2_13
                            zmm2_13 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0x55)
                            zmm3_13 = _mm_add_ps(zmm3_13, zmm0_16)
                            zmm2_13 = _mm_mul_ps(zmm2_13, zmm7_3)
                            zmm4_13 = _mm_mul_ps(zmm4_13, zmm8_4)
                            zmm0_16 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0)
                            zmm3_13 = _mm_add_ps(zmm3_13, zmm1_14)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm9_3)
                            zmm1_14 = _mm_mul_ps(_mm_shuffle_ps(zmm6_8, zmm6_8, 0xaa), zmm10_3)
                            zmm3_13 = _mm_add_ps(zmm3_13, zmm4_13)
                            zmm6_8 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0xff)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm0_16)
                            zmm6_8 = _mm_mul_ps(zmm6_8, zmm8_4)
                            zmm0_16 = _mm_shuffle_ps(zmm5_9, zmm5_9, 0)
                            float var_b18_1[0x4] = zmm3_13
                            zmm3_13 = _mm_shuffle_ps(zmm5_9, zmm5_9, 0x55)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm1_14)
                            zmm3_13 = _mm_mul_ps(zmm3_13, zmm7_3)
                            zmm1_14 = _mm_mul_ps(_mm_shuffle_ps(zmm5_9, zmm5_9, 0xaa), zmm10_3)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm9_3)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm6_8)
                            zmm5_9 = _mm_mul_ps(_mm_shuffle_ps(zmm5_9, zmm5_9, 0xff), zmm8_4)
                            zmm3_13 = _mm_add_ps(zmm3_13, zmm0_16)
                            int96_t var_b08_1 = zmm2_13[0].12
                            int96_t var_af8_1 =
                                _mm_add_ps(_mm_add_ps(zmm3_13, zmm1_14), zmm5_9)[0].12
                            float zmm11_6[0x4]
                            int128_t zmm12_5
                            int64_t zmm14_5
                            float zmm15_3[0x4]
                            zmm11_6, zmm12_5, zmm14_5, zmm15_3 = sub_1407740e0(&var_b28, 0x322bcc77)
                            uint32_t zmm6_9[0x4] = _mm_and_ps(data_143f2b8c0 ^ zmm12_5, 
                                _mm_cmpeq_ps(zmm15_3, zmm11_6, 2)) ^ data_143f2b8c0
                            void var_9f0
                            int64_t* rax_62 = sub_14173efa0(&var_b28, &var_9f0, 1)
                            float zmm2_14[0x4] = zmm6_9
                            float zmm1_15 = zmm6_9[0]
                            float zmm0_17 = zmm6_9[0]
                            zmm2_14[0] = zmm2_14[0] f* *rax_62
                            zmm1_15 = zmm1_15 f* *(rax_62 + 4)
                            zmm0_17 = zmm0_17 f* rax_62[1].d
                            var_b28[0] = zmm2_14[0]
                            var_b28[1] = zmm1_15
                            var_b28[2] = zmm0_17
                            void var_9fc
                            int64_t* rax_63 = sub_14173efa0(&var_b28, &var_9fc, 2)
                            zmm2_14 = _mm_shuffle_ps(zmm6_9, zmm6_9, 0x55)
                            zmm1_15 = zmm2_14[0]
                            zmm6_9 = _mm_shuffle_ps(zmm6_9, zmm6_9, 0xaa)
                            zmm1_15 = zmm1_15 f* *rax_63
                            float zmm0_18 = zmm2_14[0] f* *(rax_63 + 4)
                            zmm2_14[0] = zmm2_14[0] f* rax_63[1].d
                            var_b18_1[0] = zmm1_15
                            var_b18_1[1] = zmm0_18
                            var_b18_1[2] = zmm2_14[0]
                            zmm2_14 = var_b08_1.d
                            zmm1_15 = var_b08_1:4.d f* zmm6_9[0]
                            zmm0_18 = var_b08_1:8.d f* zmm6_9[0]
                            zmm2_14[0] = zmm2_14[0] f* zmm6_9[0]
                            var_b08_1:4.d = zmm1_15
                            var_b08_1:8.d = zmm0_18
                            var_b08_1.d = zmm2_14[0]
                            sub_14077e4a0(&var_cd8, &var_b28)
                            float zmm5_10[0x4] = var_cd8
                            float zmm6_10[0x4] = data_143f2b8b0
                            float zmm1_16[0x4] = _mm_mul_ps(zmm5_10, zmm5_10)
                            var_d08_1.d = 0x322bcc77
                            float var_398_2[0x4] = zmm11_6
                            zmm1_16 = _mm_add_ps(zmm1_16, _mm_shuffle_ps(zmm1_16, zmm1_16, 0x4e))
                            float zmm4_14[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_16, zmm1_16, 0x39), zmm1_16)
                            zmm1_16 = _mm_rsqrt_ps(zmm4_14)
                            float zmm3_14[0x4] = _mm_mul_ps(zmm4_14, zmm6_10)
                            float zmm2_15[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_10, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_16, zmm1_16), zmm3_14)), 
                                    zmm1_16), 
                                zmm1_16)
                            zmm6_10 = _mm_sub_ps(zmm6_10, 
                                _mm_mul_ps(_mm_mul_ps(zmm2_15, zmm2_15), zmm3_14))
                            uint32_t zmm0_19[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_14, 2)
                            zmm6_10 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_10, zmm2_15), zmm2_15), 
                                    zmm5_10) ^ data_143f2b8a0, 
                                zmm0_19) ^ data_143f2b8a0
                            var_cd8 = zmm6_10
                            var_3b8 = zmm6_10
                            float var_3a8_2[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_af8_1.d, var_af8_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_af8_1:4.d, zmm14_5)[0].q)
                    else
                        if (rax_59 != 2)
                            goto label_141aa4a74
                        
                        sub_140ad7d70(rax_58, &var_3b8, &var_508)
                    
                    zmm13_1 = sub_141acd1c0(*(*(arg1 + 0x220) + (r14_8 << 3)), &var_3b8)
                
                rsi_10 += 0x20
                rbx_7 = &rbx_7[8]
            while (rsi_10 != r15_10)
        
        sub_141ad4c50(arg1, &var_538, &var_508)
        void var_a58
        sub_141ad6900(&var_a58, *(arg1 + 0x1b9), arg1 + 0x2c0, &var_538, &var_508)
        zmm0_2 = 0xbf000000
        zmm13_1[0] = zmm13_1[0] * 29.9999981f
        int32_t i_5 = data_1439dbe38
        zmm13_1[0] = zmm13_1[0] + zmm13_1[0]
        zmm0_2[0] = -0.5f - zmm13_1[0]
        int32_t i_6 = neg.d(int.d(zmm0_2[0]) s>> 1)
        
        if (i_6 s< 1)
            i_5 = 1
        else if (i_6 s< i_5)
            i_5 = i_6
        
        zmm0_2 = _mm_cvtepi32_ps(zx.o(i_5))
        zmm13_1[0] = zmm13_1[0] / zmm0_2[0]
        
        if (i_5 s>= 1)
            uint64_t i_4 = zx.q(i_5)
            uint64_t i_2
            
            do
                zmm13_1 = sub_142253a30(*(arg1 + 0x1f0), zmm13_1, &var_a58)
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    
    void* i_3 = *(arg1 + 0x210)
    
    for (void* r13_7 = (sx.q(*(arg1 + 0x218)) << 5) + i_3; i_3 != r13_7; i_3 += 0x20)
        int64_t r15_11 = sx.q(*(i_3 + 0x14))
        
        if ((*((r15_11 << 6) + *(arg1 + 0x240) + 0x30) & 1) != 0)
            int128_t* rbx_8 = *(*(arg1 + 0x220) + (r15_11 << 3))
            float var_478[0x4]
            void var_178
            sub_140ad8030(rbx_8, &var_478, 
                sub_1417cbc40(&var_178, sx.q(*(rbx_8 + 0x38)) * 0x60 + 0x30 + *(rbx_8[3].q + 0x50)))
            float var_468[0x4]
            float var_458[0x4]
            float zmm2_16[0x4]
            float zmm3_15[0x4]
            float zmm4_15[0x4]
            float zmm5_11[0x4]
            float zmm8_5[0x4]
            
            if ((*(arg1 + 0x1bc) & 0x10) == 0)
                zmm15_1 = data_143f2b850
            else
                int64_t rax_69 = *(arg1 + 0x240)
                int64_t rsi_12 = r15_11 << 6
                
                if (*(rsi_12 + rax_69 + 0x1c) != 2 || *(rsi_12 + rax_69 + 0x20) != 2
                        || *(rsi_12 + rax_69 + 0x24) != 2)
                    zmm15_1 = data_143f2b850
                else
                    int64_t rax_70 = sx.q(*(i_3 + 0x18))
                    zmm1_2 = data_143dbb0d0
                    float var_328[0x4] = data_143dbb0c0
                    float var_308_1[0x4] = data_143dbb0e0
                    float var_318_1[0x4] = zmm1_2
                    
                    if (rax_70.d != 0xffffffff)
                        int128_t* rbx_9 = *(*(arg1 + 0x220) + (rax_70 << 3))
                        float var_298[0x4]
                        void var_148
                        sub_140ad8030(rbx_9, &var_298, 
                            sub_1417cbc40(&var_148, 
                                sx.q(*(rbx_9 + 0x38)) * 0x60 + 0x30 + *(rbx_9[3].q + 0x50)))
                        var_328 = var_298
                        float var_278[0x4]
                        var_308_1 = var_278
                        float var_288[0x4]
                        var_318_1 = var_288
                    
                    float var_2c8[0x4]
                    float zmm14_6[0x4]
                    zmm10_1, zmm14_6 = sub_140ad7d70(&var_478, &var_2c8, &var_328)
                    int64_t rax_75 = *(arg1 + 0x240)
                    float var_2b8[0x4]
                    var_2b8[0] = var_2b8[0] * var_2b8[0]
                    zmm2_16 = _mm_shuffle_ps(var_2b8, var_2b8, 0x55)
                    zmm3_15 = *(rsi_12 + rax_75 + 0x2c)
                    zmm2_16[0] = zmm2_16[0] * zmm2_16[0]
                    zmm1_2 = _mm_shuffle_ps(var_2b8, var_2b8, 0xaa)
                    zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                    zmm2_16[0] = zmm2_16[0] + var_2b8[0]
                    zmm2_16[0] = zmm2_16[0] + zmm1_2[0]
                    zmm5_11 = _mm_sqrt_ss(0, zmm2_16[0])
                    zmm5_11[0] = zmm5_11[0] - zmm3_15[0]
                    
                    if (_mm_and_ps(zmm5_11, zmm10_1)[0] <= 9.99999975e-05f
                            || zmm5_11[0] <= zmm3_15[0])
                        zmm15_1 = data_143f2b850
                    else if (zmm5_11[0] <= 9.99999975e-05f)
                        zmm3_15 = zmm14_6
                    label_141aa5216:
                        zmm1_2 = data_143f2b8d0
                        zmm2_16 = zmm3_15
                        zmm15_1 = data_143f2b850
                        zmm12_1 = _mm_unpacklo_ps(zmm3_15, zmm3_15[0].q)
                        zmm3_15 = var_328
                        float var_2a8[0x4]
                        zmm0_2 = _mm_min_ps(var_2a8, var_308_1)
                        zmm12_1 =
                            _mm_unpacklo_ps(zmm12_1, _mm_unpacklo_ps(zmm2_16, zmm14_6[0].q)[0].q)
                        zmm0_2 = _mm_cmpeq_ps(zmm0_2, zmm1_2, 1)
                        zmm12_1 = _mm_mul_ps(zmm12_1, var_2b8)
                        float var_c78_4[0x4] = zmm1_2
                        var_2b8 = zmm12_1
                        
                        if (_mm_movemask_ps(zmm0_2) == 0)
                            zmm2_16 = var_2c8
                            zmm0_2 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0)
                            zmm6_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_16, zmm2_16, 0x1b), zmm0_2)
                            zmm1_2 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0x4e)
                            zmm0_2 = zmm2_16
                            zmm2_16 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0xb1)
                            zmm12_1 = _mm_mul_ps(zmm12_1, var_308_1)
                            zmm4_15 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0xff)
                            zmm0_2 = _mm_mul_ps(zmm0_2, zmm4_15)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm15_1)
                            zmm13_1 = _mm_mul_ps(var_2a8, var_308_1)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm0_2)
                            zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm3_15, zmm3_15, 0x55))
                            zmm2_16 = _mm_mul_ps(zmm2_16, _mm_shuffle_ps(zmm3_15, zmm3_15, 0xaa))
                            zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                            zmm0_2 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xc9)
                            zmm2_16 = __mulps_xmmps_memps(zmm2_16, data_143f2b830)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm1_2)
                            zmm1_2 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0xd2)
                            zmm0_2 = _mm_mul_ps(zmm0_2, zmm1_2)
                            zmm3_15 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0xc9)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm2_16)
                            zmm2_16 = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0xd2), zmm3_15), zmm0_2)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm2_16)
                            zmm5_11 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0xd2)
                            zmm0_2 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0xc9)
                            zmm5_11 = _mm_mul_ps(zmm5_11, zmm3_15)
                            zmm0_2 = _mm_mul_ps(zmm0_2, zmm1_2)
                            zmm2_16 = _mm_mul_ps(zmm2_16, zmm4_15)
                            zmm5_11 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm5_11, zmm0_2), 
                                    _mm_add_ps(zmm2_16, zmm12_1)), 
                                var_318_1)
                        else
                            zmm10_1 = data_143f2b810
                            zmm1_2 = _mm_add_ps(zmm3_15, zmm3_15)
                            zmm2_16 = _mm_shuffle_ps(zmm3_15, zmm3_15, 4)
                            zmm5_11 = _mm_shuffle_ps(var_308_1, var_308_1, 0xc9)
                            _mm_mul_ps(var_2a8, var_308_1)
                            zmm2_16 = _mm_mul_ps(zmm2_16, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                            zmm4_15 = _mm_mul_ps(zmm1_2, zmm3_15)
                            zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                            zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0xff), zmm1_2)
                            zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                                _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                            zmm11_1 = _mm_add_ps(zmm3_15, zmm2_16)
                            zmm2_16 = _mm_sub_ps(zmm2_16, zmm3_15)
                            zmm1_2 = _mm_sub_ps(zmm10_1, zmm0_2)
                            zmm11_1 = _mm_mul_ps(zmm11_1, var_308_1)
                            zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_16)
                            zmm1_2 =
                                __andps_xmmxud_memxud(_mm_mul_ps(zmm1_2, var_308_1), data_143f2b820)
                            zmm0_2 = _mm_shuffle_ps(zmm5_11, zmm1_2, 0x32)
                            zmm9_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm11_1, zmm1_2, 0), zmm0_2, 0x82)
                            zmm0_2 = _mm_shuffle_ps(zmm11_1, zmm1_2, 0x31)
                            zmm7_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_2, 0x10), zmm0_2, 0x88)
                            zmm11_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm11_1, zmm5_11, 0x12), zmm1_2, 0xe8)
                            zmm1_2 = var_2c8
                            zmm10_1[0].q = var_318_1 u>> 0x40
                            zmm3_15 = _mm_add_ps(zmm1_2, zmm1_2)
                            zmm8_5 = _mm_shuffle_ps(var_318_1, zmm10_1, 0xc4)
                            float var_5e8_1[0x4] = zmm9_1
                            zmm2_16 = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                            float var_5d8_1[0x4] = zmm7_1
                            float var_5c8_1[0x4] = zmm11_1
                            float var_5b8_1[0x4] = zmm8_5
                            zmm4_15 = _mm_mul_ps(zmm3_15, zmm1_2)
                            zmm2_16 = _mm_mul_ps(zmm2_16, _mm_shuffle_ps(zmm3_15, zmm3_15, 0x29))
                            zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                            zmm5_11 = _mm_shuffle_ps(var_2a8, var_2a8, 0xc9)
                            zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0x12), zmm1_2)
                            zmm6_1 = _mm_add_ps(zmm3_15, zmm2_16)
                            zmm2_16 = _mm_sub_ps(zmm2_16, zmm3_15)
                            zmm6_1 = _mm_mul_ps(zmm6_1, var_2a8)
                            zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                                _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                            zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_16)
                            zmm1_2 = __andps_xmmxud_memxud(
                                __mulps_xmmps_memps(_mm_sub_ps(zmm10_1, zmm0_2), var_2a8), 
                                data_143f2b820)
                            zmm3_15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_2, 0), 
                                _mm_shuffle_ps(zmm5_11, zmm1_2, 0x32), 0x82)
                            zmm0_2 = _mm_shuffle_ps(zmm6_1, zmm1_2, 0x31)
                            zmm2_16 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0x55)
                            zmm4_15 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_2, 0x10), zmm0_2, 0x88)
                            float var_9a8_1[0x4] = zmm3_15
                            zmm2_16 = _mm_mul_ps(zmm2_16, zmm7_1)
                            zmm10_1[0].q = zmm12_1 u>> 0x40
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm10_1, 0xc4)
                            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0), zmm9_1)
                            zmm6_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_11, 0x12), zmm1_2, 0xe8)
                            zmm1_2 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0xaa)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm0_2)
                            zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0xff), zmm8_5)
                            zmm1_2 = _mm_mul_ps(zmm1_2, zmm11_1)
                            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0), zmm9_1)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm1_2)
                            float var_998_1[0x4] = zmm4_15
                            float var_988_1[0x4] = zmm6_1
                            zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xaa), zmm11_1)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm3_15)
                            float var_978_1[0x4] = zmm12_1
                            zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x55), zmm7_1)
                            float var_a98[0x4] = zmm2_16
                            zmm2_16 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), zmm7_1)
                            zmm3_15 = _mm_add_ps(zmm3_15, zmm0_2)
                            zmm4_15 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xff), zmm8_5)
                            zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), zmm9_1)
                            zmm3_15 = _mm_add_ps(zmm3_15, zmm1_2)
                            zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm11_1)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm0_2)
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            zmm3_15 = _mm_add_ps(zmm3_15, zmm4_15)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_5)
                            zmm0_2 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm1_2)
                            zmm0_2 = _mm_mul_ps(zmm0_2, zmm9_1)
                            float var_a88_1[0x4] = zmm3_15
                            zmm1_2 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                            zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x55), zmm7_1)
                            zmm2_16 = _mm_add_ps(zmm2_16, zmm6_1)
                            zmm1_2 = _mm_mul_ps(zmm1_2, zmm11_1)
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                            zmm3_15 = _mm_add_ps(zmm3_15, zmm0_2)
                            zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_5)
                            int96_t var_a68_1 =
                                _mm_add_ps(_mm_add_ps(zmm3_15, zmm1_2), zmm12_1)[0].12
                            int128_t zmm10_4
                            int64_t zmm14_8
                            zmm10_4, zmm13_1, zmm14_8 = sub_1407740e0(&var_a98, 0x322bcc77)
                            float zmm6_12[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_c78_4, zmm13_1, 2), 
                                data_143f2b8c0 ^ zmm10_4) ^ data_143f2b8c0
                            void var_a08
                            int64_t* rax_81 = sub_14173efa0(&var_a98, &var_a08, 1)
                            float zmm1_19 = zmm6_12[0]
                            float zmm0_26 = zmm6_12[0]
                            zmm6_12[0] = zmm6_12[0] f* *rax_81
                            zmm1_19 = zmm1_19 f* *(rax_81 + 4)
                            zmm0_26 = zmm0_26 f* rax_81[1].d
                            var_a98[0] = zmm6_12[0]
                            var_a98[1] = zmm1_19
                            var_a98[2] = zmm0_26
                            void var_9c0
                            float* rax_82 = sub_14173efa0(&var_a98, &var_9c0, 2)
                            float zmm2_19[0x4] = _mm_shuffle_ps(zmm6_12, zmm6_12, 0x55)
                            zmm1_19 = zmm2_19[0] * *rax_82
                            float zmm0_27 = zmm2_19[0] * rax_82[1]
                            zmm2_19[0] = zmm2_19[0] * rax_82[2]
                            var_a88_1[0] = zmm1_19
                            var_a88_1[1] = zmm0_27
                            var_a88_1[2] = zmm2_19[0]
                            void var_9e4
                            int64_t* rax_83 = sub_14173efa0(&var_a98, &var_9e4, 3)
                            zmm6_12 = _mm_shuffle_ps(zmm6_12, zmm6_12, 0xaa)
                            zmm1_19 = zmm6_12[0] f* *rax_83
                            float zmm0_28 = zmm6_12[0] f* *(rax_83 + 4)
                            zmm6_12[0] = zmm6_12[0] f* rax_83[1].d
                            zmm2_16[0] = zmm1_19
                            zmm2_16[1] = zmm0_28
                            zmm2_16[2] = zmm6_12[0]
                            sub_14077e4a0(&var_cd8, &var_a98)
                            zmm5_11 = var_cd8
                            zmm6_1 = data_143f2b8b0
                            float zmm1_20[0x4] = _mm_mul_ps(zmm5_11, zmm5_11)
                            var_d08_1.d = 0x322bcc77
                            zmm1_20 = _mm_add_ps(zmm1_20, _mm_shuffle_ps(zmm1_20, zmm1_20, 0x4e))
                            float zmm4_17[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_20, zmm1_20, 0x39), zmm1_20)
                            zmm1_20 = _mm_rsqrt_ps(zmm4_17)
                            float zmm3_17[0x4] = _mm_mul_ps(zmm4_17, zmm6_1)
                            float zmm2_20[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_20, zmm1_20), zmm3_17)), 
                                    zmm1_20), 
                                zmm1_20)
                            zmm6_1 = _mm_sub_ps(zmm6_1, 
                                _mm_mul_ps(_mm_mul_ps(zmm2_20, zmm2_20), zmm3_17))
                            float zmm0_29[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_17, 2)
                            zmm6_1 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_20), zmm2_20), 
                                    zmm5_11) ^ data_143f2b8a0, 
                                zmm0_29) ^ data_143f2b8a0
                            zmm5_11 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_a68_1.d, var_a68_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_a68_1:4.d, zmm14_8)[0].q)
                            var_cd8 = zmm6_1
                        
                        var_478 = zmm6_1
                        var_468 = zmm5_11
                        var_458 = zmm13_1
                        zmm15_1 = sub_141acdd30(*(*(arg1 + 0x220) + (r15_11 << 3)), &var_478)
                    else
                        zmm3_15[0] = zmm3_15[0] / zmm5_11[0]
                        
                        if (zmm3_15[0] < 0.899999976f)
                            goto label_141aa5216
                        
                        zmm15_1 = data_143f2b850
            
            uint32_t rcx_92 = zx.d(*(arg1 + 0x1b9))
            
            if (rcx_92 == 0)
            label_141aa58a0:
                zmm12_1 = var_458
                zmm7_1 = var_468
                zmm6_1 = var_478
            else if (rcx_92 == 1)
                float var_118[0x3][0x4]
                float (* rax_84)[0x4] = sub_140ad7d70(&var_478, &var_118, &var_538)
                zmm6_1 = *rax_84
                zmm7_1 = rax_84[1]
                zmm12_1 = rax_84[2]
            else
                if (rcx_92 != 2)
                    goto label_141aa58a0
                
                zmm1_2 = data_143f2b8d0
                float var_c78_3[0x4] = zmm1_2
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_458, zmm0_1), zmm1_2, 1)) == 0)
                    zmm4_15 = var_508
                    zmm2_16 = var_478
                    zmm0_2 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0x1b)
                    zmm6_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0), zmm0_2)
                    zmm1_2 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0x55)
                    zmm3_15 = _mm_mul_ps(var_468, zmm0_1)
                    zmm5_11 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xff)
                    zmm0_2 = _mm_mul_ps(zmm2_16, zmm5_11)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm15_1)
                    zmm12_1 = _mm_mul_ps(var_458, zmm0_1)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm0_2)
                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm2_16, zmm2_16, 0x4e))
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xaa), 
                        _mm_shuffle_ps(zmm2_16, zmm2_16, 0xb1))
                    zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                    zmm2_16 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0xd2)
                    zmm0_2 = __mulps_xmmps_memps(zmm0_2, data_143f2b830)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm1_2)
                    zmm1_2 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xd2)
                    zmm4_15 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xc9)
                    zmm2_16 = _mm_mul_ps(zmm2_16, zmm4_15)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm0_2)
                    zmm2_16 = _mm_sub_ps(zmm2_16, 
                        _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0xc9), zmm1_2))
                    zmm2_16 = _mm_add_ps(zmm2_16, zmm2_16)
                    zmm7_1 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0xd2)
                    zmm0_2 = _mm_shuffle_ps(zmm2_16, zmm2_16, 0xc9)
                    zmm7_1 = _mm_mul_ps(zmm7_1, zmm4_15)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm1_2)
                    zmm2_16 = _mm_mul_ps(zmm2_16, zmm5_11)
                    zmm7_1 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm7_1, zmm0_2), _mm_add_ps(zmm2_16, zmm3_15)), 
                        zmm1_1)
                else
                    zmm3_15 = var_508
                    zmm10_1 = data_143f2b810
                    zmm1_2 = _mm_add_ps(zmm3_15, zmm3_15)
                    zmm5_11 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                    zmm2_16 = _mm_shuffle_ps(zmm3_15, zmm3_15, 4)
                    _mm_mul_ps(var_458, zmm0_1)
                    zmm2_16 = _mm_mul_ps(zmm2_16, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                    zmm4_15 = _mm_mul_ps(zmm1_2, zmm3_15)
                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                    zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0xff), zmm1_2)
                    zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                        _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                    zmm11_1 = _mm_add_ps(zmm3_15, zmm2_16)
                    zmm2_16 = _mm_sub_ps(zmm2_16, zmm3_15)
                    zmm1_2 = _mm_sub_ps(zmm10_1, zmm0_2)
                    zmm11_1 = _mm_mul_ps(zmm11_1, zmm0_1)
                    zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_16)
                    zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_2, zmm0_1), data_143f2b820)
                    zmm0_2 = _mm_shuffle_ps(zmm5_11, zmm1_2, 0x32)
                    zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11_1, zmm1_2, 0), zmm0_2, 0x82)
                    zmm0_2 = _mm_shuffle_ps(zmm11_1, zmm1_2, 0x31)
                    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_2, 0x10), zmm0_2, 0x88)
                    zmm11_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11_1, zmm5_11, 0x12), zmm1_2, 0xe8)
                    zmm1_2 = var_478
                    zmm10_1[0].q = zmm1_1 u>> 0x40
                    zmm3_15 = _mm_add_ps(zmm1_2, zmm1_2)
                    zmm8_5 = _mm_shuffle_ps(zmm1_1, zmm10_1, 0xc4)
                    zmm5_11 = _mm_shuffle_ps(var_458, var_458, 0xc9)
                    zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                    float var_968_1[0x4] = zmm9_1
                    float var_958_1[0x4] = zmm7_1
                    float var_948_1[0x4] = zmm11_1
                    zmm4_15 = _mm_mul_ps(zmm3_15, zmm1_2)
                    zmm2_16 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0x29), zmm0_2)
                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                    zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0x12), zmm1_2)
                    zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                        _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                    float var_938_1[0x4] = zmm8_5
                    zmm6_1 = _mm_add_ps(zmm3_15, zmm2_16)
                    zmm2_16 = _mm_sub_ps(zmm2_16, zmm3_15)
                    zmm1_2 = _mm_sub_ps(zmm10_1, zmm0_2)
                    zmm6_1 = _mm_mul_ps(zmm6_1, var_458)
                    zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_16)
                    zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_2, var_458), data_143f2b820)
                    zmm3_15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_2, 0), 
                        _mm_shuffle_ps(zmm5_11, zmm1_2, 0x32), 0x82)
                    zmm0_2 = _mm_shuffle_ps(zmm6_1, zmm1_2, 0x31)
                    zmm2_16 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0x55)
                    zmm4_15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_2, 0x10), zmm0_2, 0x88)
                    float var_928_1[0x4] = zmm3_15
                    zmm2_16 = _mm_mul_ps(zmm2_16, zmm7_1)
                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_11, 0x12), zmm1_2, 0xe8)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0xaa), zmm11_1)
                    zmm10_1[0].q = var_468 u>> 0x40
                    zmm5_11 = _mm_shuffle_ps(var_468, zmm10_1, 0xc4)
                    zmm0_2 = _mm_shuffle_ps(zmm3_15, zmm3_15, 0)
                    zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm3_15, zmm3_15, 0xff), zmm8_5)
                    float var_918_1[0x4] = zmm4_15
                    float var_8f8_1[0x4] = zmm5_11
                    float var_908_1[0x4] = zmm6_1
                    zmm2_16 = _mm_add_ps(zmm2_16, _mm_mul_ps(zmm0_2, zmm9_1))
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0), zmm9_1)
                    zmm2_16 = _mm_add_ps(zmm2_16, zmm1_2)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xaa), zmm11_1)
                    zmm2_16 = _mm_add_ps(zmm2_16, zmm3_15)
                    zmm3_15 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x55), zmm7_1)
                    zmm4_15 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xff)
                    float var_ad8[0x4] = zmm2_16
                    zmm2_16 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                    zmm3_15 = _mm_add_ps(zmm3_15, zmm0_2)
                    zmm2_16 = _mm_mul_ps(zmm2_16, zmm7_1)
                    zmm4_15 = _mm_mul_ps(zmm4_15, zmm8_5)
                    zmm0_2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                    zmm3_15 = _mm_add_ps(zmm3_15, zmm1_2)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9_1)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm11_1)
                    zmm3_15 = _mm_add_ps(zmm3_15, zmm4_15)
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    zmm2_16 = _mm_add_ps(zmm2_16, zmm0_2)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_5)
                    zmm0_2 = _mm_shuffle_ps(zmm5_11, zmm5_11, 0)
                    float var_ac8_1[0x4] = zmm3_15
                    zmm3_15 = _mm_shuffle_ps(zmm5_11, zmm5_11, 0x55)
                    zmm2_16 = _mm_add_ps(zmm2_16, zmm1_2)
                    zmm3_15 = _mm_mul_ps(zmm3_15, zmm7_1)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_11, zmm5_11, 0xaa), zmm11_1)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9_1)
                    zmm2_16 = _mm_add_ps(zmm2_16, zmm6_1)
                    zmm5_11 = _mm_mul_ps(_mm_shuffle_ps(zmm5_11, zmm5_11, 0xff), zmm8_5)
                    int96_t var_aa8_1 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_15, zmm0_2), zmm1_2), zmm5_11)[0].12
                    int64_t zmm14_7
                    zmm10_1, zmm12_1, zmm14_7 = sub_1407740e0(&var_ad8, 0x322bcc77)
                    float zmm6_11[0x4] =
                        _mm_and_ps(_mm_cmpeq_ps(var_c78_3, zmm12_1, 2), data_143f2b8c0 ^ zmm10_1)
                        ^ data_143f2b8c0
                    void var_9d8
                    int64_t* rax_77 = sub_14173efa0(&var_ad8, &var_9d8, 1)
                    float zmm1_18 = zmm6_11[0]
                    float zmm0_22 = zmm6_11[0]
                    zmm6_11[0] = zmm6_11[0] f* *rax_77
                    zmm1_18 = zmm1_18 f* *(rax_77 + 4)
                    zmm0_22 = zmm0_22 f* rax_77[1].d
                    var_ad8[0] = zmm6_11[0]
                    var_ad8[1] = zmm1_18
                    var_ad8[2] = zmm0_22
                    void var_9cc
                    float* rax_78 = sub_14173efa0(&var_ad8, &var_9cc, 2)
                    float zmm2_17[0x4] = _mm_shuffle_ps(zmm6_11, zmm6_11, 0x55)
                    zmm1_18 = zmm2_17[0] * *rax_78
                    float zmm0_23 = zmm2_17[0] * rax_78[1]
                    zmm2_17[0] = zmm2_17[0] * rax_78[2]
                    var_ac8_1[0] = zmm1_18
                    var_ac8_1[1] = zmm0_23
                    var_ac8_1[2] = zmm2_17[0]
                    void var_a14
                    int64_t* rax_79 = sub_14173efa0(&var_ad8, &var_a14, 3)
                    zmm6_11 = _mm_shuffle_ps(zmm6_11, zmm6_11, 0xaa)
                    zmm1_18 = zmm6_11[0] f* *rax_79
                    float zmm0_24 = zmm6_11[0] f* *(rax_79 + 4)
                    zmm6_11[0] = zmm6_11[0] f* rax_79[1].d
                    zmm2_16[0] = zmm1_18
                    zmm2_16[1] = zmm0_24
                    zmm2_16[2] = zmm6_11[0]
                    sub_14077e4a0(&var_cb8, &var_ad8)
                    uint32_t zmm5_12[0x4] = var_cb8
                    zmm6_1 = data_143f2b8b0
                    zmm1_2 = _mm_mul_ps(zmm5_12, zmm5_12)
                    var_d08_1.d = 0x322bcc77
                    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                    float zmm4_16[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                    zmm1_2 = _mm_rsqrt_ps(zmm4_16)
                    float zmm3_16[0x4] = _mm_mul_ps(zmm4_16, zmm6_1)
                    float zmm2_18[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_16)), 
                            zmm1_2), 
                        zmm1_2)
                    zmm6_1 = _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2_18, zmm2_18), zmm3_16))
                    zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_16, 2)
                    zmm6_1 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_18), zmm2_18), zmm5_12)
                            ^ data_143f2b8a0, 
                        zmm0_2) ^ data_143f2b8a0
                    zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_aa8_1.d, var_aa8_1:8.d[0].q), 
                        _mm_unpacklo_ps(var_aa8_1:4.d, zmm14_7)[0].q)
                    var_cb8 = zmm6_1
            
            int32_t rax_85 = *(i_3 + 0x10)
            int64_t rbx_10 = sx.q(r12[1].d)
            int32_t rax_86 = (rbx_10 + 1).d
            r12[1].d = rax_86
            
            if (rax_86 s> *(r12 + 0xc))
                sub_1405c4fe0(r12)
            
            int64_t rax_87 = *r12
            int64_t rcx_109 = rbx_10 << 6
            *(rcx_109 + rax_87) = rax_85.o
            *(rcx_109 + rax_87 + 0x10) = zmm6_1
            *(rcx_109 + rax_87 + 0x20) = zmm7_1
            *(rcx_109 + rax_87 + 0x30) = zmm12_1
    
    *(arg1 + 0xd0) = var_538
    *(arg1 + 0xe0) = var_528_1
    *(arg1 + 0xf0) = var_518_1

int64_t result = sub_140b38680("RigidBodyEval", rax_2)
__security_check_cookie(rax_1 ^ &var_d48)
return result
