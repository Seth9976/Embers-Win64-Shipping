// 函数: sub_141aa59f0
// 地址: 0x141aa59f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d08
int64_t rax_1 = __security_cookie ^ &var_d08
bool cond:0 = *(arg1 + 0x368) == 0xffff
uint64_t* r12 = arg3
uint64_t* var_ca8 = arg3

if (not(cond:0) && *(arg1 + 0x360) != -1)
    *(arg1 + 0x36a) = *(*arg2 + 0x432)
    int64_t rdx
    
    if (*(arg1 + 0x368) != 0xffff)
        rdx = *(arg1 + 0x360)
    
    if (*(arg1 + 0x368) == 0xffff || rdx == -1)
        rdx = *(arg1 + 0x360)
    label_141aa5a93:
        
        if (rdx u< data_143de5458 - sx.q(*(arg1 + 0x36a)) - 1 && data_1439dbe3c != 0)
            *(arg1 + 0x13c) = 2
    else if (rdx != *(*arg2 + 0x428))
        goto label_141aa5a93

void* rcx_4 = *arg2
*(arg1 + 0x368) = *(rcx_4 + 0x430)
*(arg1 + 0x360) = *(rcx_4 + 0x428)
uint64_t result = zx.q(*(rcx_4 + 0x432))
*(arg1 + 0x36a) = result.w
int128_t zmm11 = *(arg1 + 0x1d0)
*(arg1 + 0x1d0) = 0
int32_t var_c98 = zmm11.d

if ((*(arg1 + 0x13d) & 1) != 0 && *(arg1 + 0x1e8) != 0)
    void* rax_7 = *arg2
    void* rdx_1 = arg2[3]
    float zmm2[0x4] = *(rax_7 + 0x10)
    float var_508[0x4] = zmm2
    float var_4f8_1[0x4] = *(rax_7 + 0x20)
    float var_4e8_1[0x4] = *(rax_7 + 0x30)
    
    if (*(arg1 + 0x368) == 0xffff || *(arg1 + 0x360) == -1)
        *(arg1 + 0x140) = zmm2
        *(arg1 + 0x150) = var_4f8_1
        *(arg1 + 0x160) = var_4e8_1
    
    int32_t rax_8 = *(arg1 + 0x118)
    int32_t rdx_2
    int32_t var_c78_2
    
    if (rax_8 s>= 0)
        rdx_2 = *(arg1 + 0x11c)
        var_c78_2 = rdx_2
    else
        int32_t rcx_5 = rax_8 * 2
        
        if ((rcx_5 & 0xfffffffe) == 0xfffffffe)
            int32_t var_c78_1 = 0xffffffff
            rdx_2 = -1
        else
            rdx_2 = *(*(rdx_1 + 0x80) + (sx.q(rcx_5) s>> 1 << 2))
            var_c78_2 = rdx_2
    void* r13_1 = &arg2[1]
    int64_t rsi_1 = sx.q(rdx_2)
    float zmm6[0x4]
    float zmm12[0x4]
    float zmm13[0x4]
    
    if (*(rsi_1 + arg2[4]) == 0)
        zmm6, zmm12, zmm13 = sub_141a98300(r13_1, rdx_2)
    
    int64_t rax_13 = *r13_1
    int64_t rcx_10 = rsi_1 * 6
    float var_48_1[0x4] = zmm6
    float var_a8_1[0x4] = zmm12
    float var_b8_1[0x4] = zmm13
    float var_4d8[0x4] = *(rax_13 + (rcx_10 << 3))
    float zmm1[0x4] = *(rax_13 + (rcx_10 << 3) + 0x10)
    float zmm0[0x4] = *(rax_13 + (rcx_10 << 3) + 0x20)
    void var_268
    int128_t* rax_14
    float zmm11_1[0x4]
    rax_14, zmm11_1 = sub_141acfa50(&var_268, *(arg1 + 0x121), &var_508, &var_4d8)
    sub_142252b90(*(arg1 + 0x1e8), rax_14)
    char rcx_13 = *(arg1 + 0x13c)
    float zmm14_1[0x4] = zx.o(0)
    float zmm8_1[0x4] = 0x80000000
    float zmm15_1[0x4] = 0x3f800000
    float zmm9_1[0x4] = 0xbf800000
    float zmm7_1[0x4] = 0x38d1b717
    char var_cc8_1 = rcx_13
    void* var_cb8_1
    uint32_t var_c88[0x4]
    uint32_t var_c68[0x4]
    float var_c20
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    float zmm6_1[0x4]
    float zmm10_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    
    if (rcx_13 != 0)
    label_141aa5d18:
        char rax_15 = rcx_13
        
        if ((*(arg1 + 0x123) & 4) != 0 && *(arg1 + 0x4c8) s> 0)
            void* r14_1 = *(arg1 + 0x208)
            void* r15_3 = (sx.q(*(arg1 + 0x210)) << 5) + r14_1
            
            if (r14_1 != r15_3)
                do
                    int128_t* rsi_4 = (sx.q(*(r14_1 + 0x14)) << 6) + *(arg1 + 0x238)
                    
                    if ((rsi_4[3].b & 1) != 0)
                        int64_t rbx_1 = sx.q(*(r14_1 + 0x10))
                        int32_t rdx_7 =
                            *(*(arg1 + 0x3f8) + (sx.q(*(*(rdx_1 + 0x60) + (rbx_1 << 2))) << 2))
                        
                        if (rdx_7 != 0xffffffff)
                            int128_t* rax_18 = sub_141ab9f30(arg1 + 0x4c0, rdx_7)
                            float var_328[0x4] = *rax_18
                            float zmm1_2[0x4] = rax_18[1]
                            float zmm0_2[0x4] = rax_18[2]
                            int128_t* rax_19
                            rax_19, zmm11_1, zmm14_1, zmm15_1 = sub_141ab9f30(r13_1, rbx_1.d)
                            zmm13_1 = *rax_19
                            float var_2c8[0x4] = zmm13_1
                            zmm12_1 = rax_19[1]
                            float var_2b8_1[0x4] = zmm12_1
                            float zmm5_1[0x4] = rax_19[2]
                            float var_2a8_1[0x4] = zmm5_1
                            uint32_t rcx_17 = zx.d(*(arg1 + 0x121))
                            float var_c38_1[0x4] = zmm5_1
                            float var_418[0x4]
                            float var_408[0x4]
                            float zmm0_3[0x4]
                            float zmm4_1[0x4]
                            
                            if (rcx_17 == 0)
                            label_141aa63b8:
                                var_418 = var_328
                                float var_3f8_4[0x4] = zmm0_2
                                var_408 = zmm1_2
                            label_141aa63d4:
                                zmm9_1 = data_143f2b810
                                zmm7_1 = var_508
                                zmm8_1 = var_4e8_1
                            else
                                if (rcx_17 != 1)
                                    if (rcx_17 != 2)
                                        goto label_141aa63b8
                                    
                                    zmm11_1, zmm14_1, zmm15_1 =
                                        sub_140ad7d70(&var_328, &var_418, &var_4d8)
                                    zmm5_1 = var_2a8_1
                                    zmm12_1 = var_2b8_1
                                    zmm13_1 = var_2c8
                                    goto label_141aa63d4
                                
                                zmm9_1 = data_143f2b810
                                zmm8_1 = var_4e8_1
                                zmm6_1 = data_143f2b820
                                zmm9_1[0].q = zx.o(0) u>> 0x40
                                var_418 = _mm_shuffle_ps(zx.o(0), zmm9_1, 0xc4)
                                float var_3f8_1[0x4] = _mm_and_ps(zmm9_1, zmm6_1)
                                zmm1_1 = data_143f2b8d0
                                int128_t var_408_1 = zx.o(0)
                                var_cb8_1.o = zmm1_1
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm0_2, zmm8_1), 
                                        zmm1_1, 1)) != 0)
                                    zmm3_1 = var_508
                                    zmm12_1 = data_143f2b810
                                    zmm1_1 = _mm_add_ps(zmm3_1, zmm3_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                                    zmm5_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
                                    _mm_mul_ps(zmm0_2, zmm8_1)
                                    zmm2_1 =
                                        _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                                    zmm4_1 = _mm_mul_ps(zmm1_1, zmm3_1)
                                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_1)
                                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                                        _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                                    zmm10_1 = _mm_add_ps(zmm3_1, zmm2_1)
                                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                                    zmm3_1 = var_328
                                    zmm1_1 = _mm_sub_ps(zmm9_1, zmm0_3)
                                    zmm10_1 = _mm_mul_ps(zmm10_1, zmm8_1)
                                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                                    zmm1_1 = _mm_and_ps(_mm_mul_ps(zmm1_1, zmm8_1), zmm6_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                                    zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_1, 0), 
                                        zmm0_3, 0x82)
                                    zmm0_3 = _mm_shuffle_ps(zmm10_1, zmm1_1, 0x31)
                                    zmm8_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), 
                                        zmm0_3, 0x88)
                                    zmm10_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_1, 0x12), 
                                        zmm1_1, 0xe8)
                                    zmm1_1 = _mm_add_ps(zmm3_1, zmm3_1)
                                    zmm12_1[0].q = var_4f8_1 u>> 0x40
                                    zmm7_1 = _mm_shuffle_ps(var_4f8_1, zmm12_1, 0xc4)
                                    zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                                    zmm5_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
                                    float var_888_1[0x4] = zmm9_1
                                    float var_878_1[0x4] = zmm8_1
                                    zmm4_1 = _mm_mul_ps(zmm1_1, zmm3_1)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x29), zmm0_3)
                                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_1)
                                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                                        _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                                    float var_868_1[0x4] = zmm10_1
                                    float var_858_1[0x4] = zmm7_1
                                    zmm6_1 = _mm_add_ps(zmm3_1, zmm2_1)
                                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3_1)
                                    zmm1_1 = _mm_sub_ps(zmm12_1, zmm0_3)
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm0_2)
                                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm0_2), 
                                        data_143f2b820)
                                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_1, 0), 
                                        _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32), 0x82)
                                    zmm0_3 = _mm_shuffle_ps(zmm6_1, zmm1_1, 0x31)
                                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), 
                                        zmm0_3, 0x88)
                                    float var_848_1[0x4] = zmm3_1
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm9_1)
                                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_1, 0x12), 
                                        zmm1_1, 0xe8)
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10_1)
                                    zmm12_1[0].q = zmm1_2 u>> 0x40
                                    zmm5_1 = _mm_shuffle_ps(zmm1_2, zmm12_1, 0xc4)
                                    zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm7_1)
                                    float var_838_1[0x4] = zmm4_1
                                    float var_828_1[0x4] = zmm6_1
                                    float var_818_1[0x4] = zmm5_1
                                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_3, zmm8_1))
                                    zmm0_3 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm8_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm10_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm9_1)
                                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                    float var_c18[0x4] = zmm2_1
                                    zmm2_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm9_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm7_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm8_1)
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm4_1)
                                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm7_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                    int96_t var_c08_1 = zmm3_1[0].12
                                    zmm3_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm9_1)
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10_1)
                                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm8_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_1)
                                    zmm5_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm7_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                                    int96_t var_bf8_1 = zmm2_1[0].12
                                    int96_t var_be8_1 =
                                        _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm5_1)[0].12
                                    zmm11_1, zmm12_1, zmm14_1, zmm15_1 =
                                        sub_1407740e0(&var_c18, 0x322bcc77)
                                    float zmm2_2[0x4] = var_c18[0]
                                    float zmm1_3 = var_c18[1]
                                    float zmm4_2[0x4] = _mm_and_ps(
                                        _mm_cmpeq_ps(var_cb8_1.o, zmm11_1, 2), 
                                        data_143f2b8c0 ^ zmm12_1)
                                    uint32_t zmm0_4[0x4] = var_c18[2]
                                    zmm4_2 ^= data_143f2b8c0
                                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                    zmm1_3 = zmm1_3 * zmm4_2[0]
                                    zmm0_4[0] = zmm0_4[0] f* zmm4_2[0]
                                    var_c18[0] = zmm2_2[0]
                                    zmm2_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                                    var_c18[1] = zmm1_3
                                    zmm1_3 = var_c08_1:4.d * zmm2_2[0]
                                    var_c18[2] = zmm0_4[0]
                                    zmm0_4 = var_c08_1:8.d
                                    zmm0_4[0] = zmm0_4[0] f* zmm2_2[0]
                                    float zmm3_2 = var_c08_1.d * zmm2_2[0]
                                    zmm2_2 = var_bf8_1.d
                                    zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                                    var_c08_1:4.d = zmm1_3
                                    var_c08_1:8.d = zmm0_4[0]
                                    zmm0_4 = var_bf8_1:8.d
                                    zmm1_3 = var_bf8_1:4.d * zmm4_2[0]
                                    zmm0_4[0] = zmm0_4[0] f* zmm4_2[0]
                                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                    var_bf8_1:4.d = zmm1_3
                                    var_bf8_1:8.d = zmm0_4[0]
                                    var_c08_1.d = zmm3_2
                                    var_bf8_1.d = zmm2_2[0]
                                    sub_14077e4a0(&var_c68, &var_c18)
                                    zmm5_1 = var_c68
                                    zmm6_1 = data_143f2b8b0
                                    zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                                    var_cb8_1.d = 0x322bcc77
                                    float var_3f8_2[0x4] = zmm11_1
                                    zmm1_1 =
                                        _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                                    zmm4_1 =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                                    zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                                    zmm3_1 = _mm_mul_ps(zmm4_1, zmm6_1)
                                    zmm2_1 = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6_1, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_1)), 
                                            zmm1_1), 
                                        zmm1_1)
                                    zmm6_1 = _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                                    zmm0_3 = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                                    zmm6_1 = _mm_and_ps(
                                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_1), zmm2_1), 
                                            zmm5_1) ^ data_143f2b8a0, 
                                        zmm0_3) ^ data_143f2b8a0
                                    var_c68 = zmm6_1
                                    var_418 = zmm6_1
                                    zmm3_1 = _mm_unpacklo_ps(var_be8_1.d, var_be8_1:8.d[0].q)
                                    zmm5_1 = var_2a8_1
                                    zmm12_1 = var_2b8_1
                                    zmm13_1 = var_2c8
                                    zmm11_1 = var_c98
                                    var_408 = _mm_unpacklo_ps(zmm3_1, 
                                        _mm_unpacklo_ps(var_be8_1:4.d, zmm14_1[0].q)[0].q)
                                    goto label_141aa63d4
                                
                                zmm7_1 = var_508
                                zmm2_1 = var_328
                                zmm0_3 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0)
                                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                                zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), zmm0_3)
                                zmm5_1 = _mm_mul_ps(zmm1_2, zmm8_1)
                                zmm6_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                                zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f2b850)
                                zmm0_3 = _mm_mul_ps(zmm6_1, zmm2_1)
                                zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                                zmm10_1 = _mm_mul_ps(zmm0_2, zmm8_1)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55))
                                zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa))
                                zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
                                zmm0_3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f2b830)
                                float var_3f8_3[0x4] = zmm10_1
                                zmm3_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm2_1)
                                zmm2_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                                zmm4_1 = _mm_mul_ps(zmm4_1, zmm2_1)
                                var_418 = zmm3_1
                                zmm3_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
                                zmm4_1 = _mm_sub_ps(zmm4_1, _mm_mul_ps(zmm0_3, zmm3_1))
                                zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                                zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                                zmm0_3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                zmm1_1 = _mm_mul_ps(zmm1_1, zmm2_1)
                                zmm0_3 = _mm_mul_ps(zmm0_3, zmm3_1)
                                zmm4_1 = _mm_mul_ps(zmm4_1, zmm6_1)
                                zmm1_1 = _mm_sub_ps(zmm1_1, zmm0_3)
                                zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                                zmm5_1 = var_c38_1
                                var_408 = __addps_xmmps_memps(_mm_add_ps(zmm1_1, zmm4_1), var_4f8_1)
                            
                            uint32_t rcx_22 = zx.d(*(arg1 + 0x121))
                            float var_448[0x4]
                            float var_438[0x4]
                            float var_428_3[0x4]
                            
                            if (rcx_22 == 0)
                            label_141aa698c:
                                var_448 = zmm13_1
                                var_428_3 = zmm5_1
                                var_438 = zmm12_1
                            else if (rcx_22 == 1)
                                zmm6_1 = data_143f2b820
                                zmm2_1 = zx.o(0)
                                zmm9_1[0].q = zmm2_1 u>> 0x40
                                var_448 = _mm_shuffle_ps(zx.o(0), zmm9_1, 0xc4)
                                float var_428_1[0x4] = _mm_and_ps(zmm9_1, zmm6_1)
                                zmm1_1 = data_143f2b8d0
                                float var_438_1[0x4] = zmm2_1
                                var_cb8_1.o = zmm1_1
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_1, zmm8_1), 
                                        zmm1_1, 1)) == 0)
                                    zmm0_3 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x1b), zmm0_3)
                                    zmm1_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x4e)
                                    zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_1)
                                    zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f2b850)
                                    zmm4_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                                    zmm3_1 = zmm12_1
                                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm8_1)
                                    zmm0_3 = _mm_mul_ps(zmm4_1, zmm13_1)
                                    zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xb1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
                                    zmm1_1 =
                                        _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55))
                                    zmm13_1 =
                                        _mm_mul_ps(zmm13_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa))
                                    zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
                                    zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                                    zmm13_1 = __mulps_xmmps_memps(zmm13_1, data_143f2b830)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
                                    var_448 = _mm_add_ps(zmm2_1, zmm13_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
                                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm2_1)
                                    zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                                    zmm1_1 = _mm_sub_ps(_mm_mul_ps(zmm1_1, zmm7_1), zmm0_3)
                                    zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                                    zmm12_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2), zmm7_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                                    zmm4_1 = _mm_add_ps(zmm4_1, zmm3_1)
                                    zmm12_1 = __addps_xmmps_memps(
                                        _mm_add_ps(_mm_sub_ps(zmm12_1, _mm_mul_ps(zmm0_3, zmm2_1)), 
                                            zmm4_1), 
                                        var_4f8_1)
                                    var_428_3 = zmm5_1
                                    var_438 = zmm12_1
                                else
                                    zmm0_3 = _mm_shuffle_ps(zmm7_1, zmm7_1, 4)
                                    zmm2_1 = _mm_add_ps(zmm7_1, zmm7_1)
                                    zmm4_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
                                    _mm_mul_ps(zmm5_1, zmm8_1)
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x29), zmm0_3)
                                    zmm3_1 = _mm_mul_ps(zmm2_1, zmm7_1)
                                    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x12), 
                                        _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff))
                                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                                    zmm10_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm2_1)
                                    zmm2_1 = _mm_add_ps(zmm13_1, zmm13_1)
                                    zmm10_1 = _mm_mul_ps(zmm10_1, zmm8_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                                    zmm1_1 = _mm_sub_ps(zmm9_1, zmm0_3)
                                    zmm3_1 = _mm_mul_ps(zmm2_1, zmm13_1)
                                    zmm1_1 = _mm_and_ps(_mm_mul_ps(zmm1_1, zmm8_1), zmm6_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                                    zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_1, 0), 
                                        zmm0_3, 0x82)
                                    zmm0_3 = _mm_shuffle_ps(zmm10_1, zmm1_1, 0x31)
                                    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), 
                                        zmm0_3, 0x88)
                                    zmm0_3 = data_143f2b810
                                    zmm10_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm4_1, 0x12), 
                                        zmm1_1, 0xe8)
                                    zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x29)
                                    zmm0_3[0].q = var_4f8_1 u>> 0x40
                                    zmm8_1 = _mm_shuffle_ps(var_4f8_1, zmm0_3, 0xc4)
                                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm13_1, zmm13_1, 4))
                                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                                    zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x12), zmm13_1)
                                    zmm13_1 = data_143f2b810
                                    zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                    float var_808_1[0x4] = zmm9_1
                                    float var_7f8_1[0x4] = zmm7_1
                                    zmm6_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    float var_7e8_1[0x4] = zmm10_1
                                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm2_1)
                                    float var_7d8_1[0x4] = zmm8_1
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm5_1)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
                                    zmm1_1 = __andps_xmmxud_memxud(
                                        _mm_mul_ps(_mm_sub_ps(zmm13_1, zmm0_3), zmm5_1), 
                                        data_143f2b820)
                                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_1, 0), 
                                        _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32), 0x82)
                                    float var_7c8_1[0x4] = zmm3_1
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), zmm7_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm6_1, zmm1_1, 0x31)
                                    zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), 
                                        zmm0_3, 0x88)
                                    zmm13_1[0].q = zmm12_1 u>> 0x40
                                    zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm13_1, 0xc4)
                                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm9_1)
                                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm4_1, 0x12), 
                                        zmm1_1, 0xe8)
                                    zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm10_1)
                                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm9_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    float var_7b8_1[0x4] = zmm5_1
                                    float var_7a8_1[0x4] = zmm6_1
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm10_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                                    float var_798_1[0x4] = zmm12_1
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7_1)
                                    float var_b58[0x4] = zmm2_1
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), zmm7_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                                    zmm5_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8_1)
                                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), zmm9_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                                    zmm1_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
                                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm5_1)
                                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                                    zmm0_3 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm9_1)
                                    int96_t var_b48_1 = zmm3_1[0].12
                                    zmm1_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                                    zmm3_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x55), zmm7_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_1)
                                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm10_1)
                                    zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                                    zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_1)
                                    int96_t var_b38_1 = zmm2_1[0].12
                                    int96_t var_b28_1 =
                                        _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm12_1)[0].12
                                    zmm11_1, zmm13_1, zmm14_1, zmm15_1 =
                                        sub_1407740e0(&var_b58, 0x322bcc77)
                                    uint32_t zmm0_5[0x4] = data_143f2b8c0
                                    float zmm4_3[0x4] = _mm_cmpeq_ps(var_cb8_1.o, zmm11_1, 2)
                                    float zmm2_3[0x4] = var_b58[0]
                                    float zmm1_4 = var_b58[1]
                                    zmm4_3 = _mm_and_ps(zmm4_3, zmm0_5 ^ zmm13_1) ^ data_143f2b8c0
                                    zmm0_5 = var_b58[2]
                                    zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                                    zmm1_4 = zmm1_4 * zmm4_3[0]
                                    zmm0_5[0] = zmm0_5[0] f* zmm4_3[0]
                                    var_b58[0] = zmm2_3[0]
                                    zmm2_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                                    var_b58[1] = zmm1_4
                                    zmm1_4 = var_b48_1:4.d * zmm2_3[0]
                                    var_b58[2] = zmm0_5[0]
                                    zmm0_5 = var_b48_1:8.d
                                    zmm0_5[0] = zmm0_5[0] f* zmm2_3[0]
                                    float zmm3_3 = var_b48_1.d * zmm2_3[0]
                                    zmm2_3 = var_b38_1.d
                                    zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                                    var_b48_1:4.d = zmm1_4
                                    var_b48_1:8.d = zmm0_5[0]
                                    zmm0_5 = var_b38_1:8.d
                                    zmm1_4 = var_b38_1:4.d * zmm4_3[0]
                                    zmm0_5[0] = zmm0_5[0] f* zmm4_3[0]
                                    zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                                    var_b38_1:4.d = zmm1_4
                                    var_b38_1:8.d = zmm0_5[0]
                                    var_b48_1.d = zmm3_3
                                    var_b38_1.d = zmm2_3[0]
                                    sub_14077e4a0(&var_c88, &var_b58)
                                    float zmm5_2[0x4] = var_c88
                                    zmm6_1 = data_143f2b8b0
                                    zmm1_1 = _mm_mul_ps(zmm5_2, zmm5_2)
                                    var_cb8_1.d = 0x322bcc77
                                    float var_428_2[0x4] = zmm11_1
                                    zmm11_1 = var_c98
                                    zmm1_1 =
                                        _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                                    zmm4_1 =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                                    zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                                    zmm3_1 = _mm_mul_ps(zmm4_1, zmm6_1)
                                    zmm2_1 = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6_1, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_1)), 
                                            zmm1_1), 
                                        zmm1_1)
                                    zmm6_1 = _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                                    zmm0_3 = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                                    zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_1), zmm2_1)
                                    zmm2_1 = _mm_unpacklo_ps(var_b28_1:4.d, zmm14_1[0].q)
                                    zmm6_1 = _mm_and_ps(
                                        _mm_mul_ps(zmm6_1, zmm5_2) ^ data_143f2b8a0, zmm0_3)
                                        ^ data_143f2b8a0
                                    zmm12_1 = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(var_b28_1.d, var_b28_1:8.d[0].q), 
                                        zmm2_1[0].q)
                                    var_c88 = zmm6_1
                                    var_448 = zmm6_1
                                    var_438 = zmm12_1
                            else
                                if (rcx_22 != 2)
                                    goto label_141aa698c
                                
                                zmm11_1, zmm14_1, zmm15_1 =
                                    sub_140ad7d70(&var_2c8, &var_448, &var_4d8)
                                zmm12_1 = var_438
                            float rax_22
                            
                            if (zmm11_1[0] <= zmm14_1[0])
                                rsi_4[1].q = data_143dbb1f8.q
                                rax_22 = data_143dbb200
                            else
                                zmm2_1 = zmm12_1
                                zmm2_1[0] = zmm2_1[0] - var_408[0]
                                zmm1_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
                                zmm0_3 = _mm_shuffle_ps(var_408, var_408, 0x55)
                                zmm15_1[0] = zmm15_1[0] / zmm11_1[0]
                                zmm1_1[0] = zmm1_1[0] - zmm0_3[0]
                                zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                                zmm3_1 = _mm_shuffle_ps(var_408, var_408, 0xaa)
                                zmm12_1[0] = zmm12_1[0] - zmm3_1[0]
                                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                                zmm1_1[0] = zmm1_1[0] * zmm15_1[0]
                                zmm12_1[0] = zmm12_1[0] * zmm15_1[0]
                                rsi_4[1].q = (_mm_unpacklo_ps(zmm2_1, zmm1_1[0].q)).q
                                var_c20 = zmm12_1[0]
                                rax_22 = var_c20
                            
                            zmm9_1 = 0xbf800000
                            *(rsi_4 + 0x18) = rax_22
                            zmm2_1 = var_448
                            zmm4_1 = var_418
                            zmm3_1 = zmm2_1 ^ 0x80000000
                            zmm6_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b)
                            zmm0_3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55) ^ 0x80000000
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            zmm3_1[0] = zmm0_3[0]
                            zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                            zmm3_1[0] = (zmm1_1 ^ 0x80000000)[0]
                            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
                            zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e)
                            zmm3_1[0] = zmm2_1[0]
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
                            var_cb8_1.o = zmm3_1
                            zmm6_1 = _mm_mul_ps(zmm6_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0))
                            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm4_1)
                            zmm6_1 = __mulps_xmmps_memps(zmm6_1, data_143f2b850)
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm0_3)
                            zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
                            zmm4_1 = _mm_mul_ps(zmm4_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
                            zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
                            zmm4_1 = __mulps_xmmps_memps(zmm4_1, data_143f2b830)
                            zmm6_1 = _mm_add_ps(_mm_add_ps(zmm6_1, zmm1_1), zmm4_1)
                            var_cb8_1.o = zmm6_1
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            
                            if (zmm6_1[0] >= -1f)
                                zmm0_3 = _mm_min_ss(zmm6_1[0], zmm15_1[0])
                            else
                                zmm0_3 = 0xbf800000
                            
                            zmm0_1 = acosf(zmm0_3[0])
                            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                            zmm2_1 = zmm0_1
                            zmm15_1[0] = zmm15_1[0] - zmm6_1[0]
                            zmm15_1[0] = zmm15_1[0] / zmm11_1[0]
                            zmm3_1 = _mm_sqrt_ss(0, _mm_max_ss(zmm15_1[0], zmm14_1[0])[0])
                            
                            if (zmm3_1[0] < 9.99999975e-05f)
                                zmm1_1 = zmm15_1
                                zmm7_1 = zmm14_1
                                zmm6_1 = zmm14_1
                            else
                                zmm6_1 = zmm15_1
                                zmm6_1[0] = zmm6_1[0] / zmm3_1[0]
                                zmm1_1 = zmm6_1
                                zmm7_1 = zmm6_1
                                zmm1_1[0] = zmm1_1[0] f* var_cb8_1.d
                                zmm7_1[0] = zmm7_1[0] f* var_cb8_1:4.d
                                int32_t var_cb0
                                zmm6_1[0] = zmm6_1[0] f* var_cb0
                            
                            zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                            float var_c48_1 = zmm6_1[0]
                            float var_c4c_1 = zmm7_1[0]
                            bool cond:7_1 = zmm2_1[0] < zmm14_1[0]
                            float var_c50_1 = zmm1_1[0]
                            zmm2_1[0] = zmm2_1[0] * 0.159154937f
                            
                            if (cond:7_1)
                                zmm2_1[0] = zmm2_1[0] - 0.5f
                            else
                                zmm2_1[0] = zmm2_1[0] + 0.5f
                            
                            zmm0_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm2_1[0])))
                            zmm0_1[0] = zmm0_1[0] * 6.28318548f
                            zmm2_1[0] = zmm2_1[0] - zmm0_1[0]
                            
                            if (not(zmm2_1[0] <= 1.57079637f))
                                zmm0_1 = 0x40490fdb
                                zmm0_1[0] = 3.14159274f - zmm2_1[0]
                                zmm2_1 = zmm0_1
                            else if (zmm2_1[0] >= -1.57079637f)
                                zmm9_1 = zmm15_1
                            else
                                zmm0_1 = 0xc0490fdb
                                zmm0_1[0] = -3.14159274f - zmm2_1[0]
                                zmm2_1 = zmm0_1
                            
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
                            zmm5_3[0] = zmm5_3[0] * zmm1_1[0]
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
                            var_cb8_1.o = zmm3_1
                            *rsi_4 = zmm3_1
                    
                    r14_1 += 0x20
                while (r14_1 != r15_3)
                
                rax_15 = *(arg1 + 0x13c)
                r12 = var_ca8
        
        uint32_t rcx_27 = zx.d(rax_15)
        
        if (rcx_27 == 1)
            void* rsi_6 = *(arg1 + 0x208)
            void* r14_6 = (sx.q(*(arg1 + 0x210)) << 5) + rsi_6
            
            if (rsi_6 != r14_6)
                zmm15_1 = zx.o(0)
                
                do
                    int64_t rbx_7 = sx.q(*(rsi_6 + 0x14))
                    int64_t rax_35 = *(arg1 + 0x238)
                    int64_t rcx_43 = rbx_7 << 6
                    *(rcx_43 + rax_35 + 0x30) |= 2
                    float var_4a8[0x4]
                    sub_14224f610(*(*(arg1 + 0x218) + (rbx_7 << 3)), &var_4a8)
                    zmm11_1 = data_143f2b810
                    float zmm2_7[0x4] = data_143f2b820
                    zmm11_1[0].q = zmm15_1 u>> 0x40
                    float zmm0_9[0x4] = _mm_shuffle_ps(zmm15_1, zmm11_1, 0xc4)
                    float zmm1_8[0x4] = _mm_and_ps(zmm11_1, zmm2_7)
                    float var_358[0x4] = zmm0_9
                    float var_338_1[0x4] = zmm1_8
                    float var_348_1[0x4] = zmm15_1
                    uint32_t rcx_46 = zx.d(*(arg1 + 0x121))
                    float var_498[0x4]
                    float var_488[0x4]
                    float zmm4_7[0x4]
                    float zmm5_6[0x4]
                    float var_348_3[0x4]
                    
                    if (rcx_46 == 0)
                    label_141aa7acd:
                        zmm13_1 = var_488
                        zmm12_1 = var_498
                        zmm6_1 = var_4a8
                        var_358 = zmm6_1
                        var_348_3 = zmm12_1
                    else if (rcx_46 == 1)
                        float var_1d8[0x3][0x4]
                        float (* rax_37)[0x4]
                        rax_37, zmm14_1, zmm15_1 = sub_140ad7d70(&var_4a8, &var_1d8, arg1 + 0x140)
                        zmm2_7 = data_143f2b820
                        zmm6_1 = *rax_37
                        var_358 = zmm6_1
                        zmm12_1 = rax_37[1]
                        float var_348_2[0x4] = zmm12_1
                        zmm13_1 = rax_37[2]
                    else
                        if (rcx_46 != 2)
                            goto label_141aa7acd
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_488, zmm0), data_143f2b8d0, 
                                1)) == 0)
                            zmm4_7 = var_4d8
                            zmm2_7 = var_4a8
                            zmm3_1 = __mulps_xmmps_memps(zmm0, var_498)
                            zmm0_9 = _mm_shuffle_ps(zmm2_7, zmm2_7, 0x1b)
                            zmm6_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0), zmm0_9)
                            zmm1_8 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55)
                            zmm5_6 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                            zmm13_1 = _mm_mul_ps(zmm0, var_488)
                            zmm6_1 = _mm_add_ps(__mulps_xmmps_memps(zmm6_1, data_143f2b850), 
                                _mm_mul_ps(zmm5_6, zmm2_7))
                            zmm1_8 = _mm_mul_ps(zmm1_8, _mm_shuffle_ps(zmm2_7, zmm2_7, 0x4e))
                            zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa), 
                                _mm_shuffle_ps(zmm2_7, zmm2_7, 0xb1))
                            zmm1_8 = __mulps_xmmps_memps(zmm1_8, data_143f2b840)
                            zmm2_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xd2)
                            zmm0_9 = __mulps_xmmps_memps(zmm0_9, data_143f2b830)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm1_8)
                            zmm4_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xc9)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), zmm4_7)
                            zmm6_1 = _mm_add_ps(zmm6_1, zmm0_9)
                            zmm1_8 = _mm_sub_ps(zmm1_8, 
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), zmm2_7))
                            zmm1_8 = _mm_add_ps(zmm1_8, zmm1_8)
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm1_8)
                            zmm12_1 = _mm_mul_ps(_mm_shuffle_ps(zmm1_8, zmm1_8, 0xd2), zmm4_7)
                            zmm0_9 = _mm_shuffle_ps(zmm1_8, zmm1_8, 0xc9)
                            zmm5_6 = _mm_add_ps(zmm5_6, zmm3_1)
                            zmm0_9 = _mm_mul_ps(zmm0_9, zmm2_7)
                            zmm2_7 = data_143f2b820
                            zmm12_1 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm12_1, zmm0_9), zmm5_6), zmm1)
                        else
                            zmm3_1 = var_4d8
                            zmm5_6 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
                            zmm1_8 = _mm_add_ps(zmm3_1, zmm3_1)
                            zmm2_7 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                            _mm_mul_ps(zmm0, var_488)
                            zmm2_7 = _mm_mul_ps(zmm2_7, _mm_shuffle_ps(zmm1_8, zmm1_8, 0x29))
                            zmm4_7 = _mm_mul_ps(zmm1_8, zmm3_1)
                            zmm1_8 = _mm_shuffle_ps(zmm1_8, zmm1_8, 0x12)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_8)
                            zmm0_9 = _mm_add_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0x1a), 
                                _mm_shuffle_ps(zmm4_7, zmm4_7, 1))
                            zmm10_1 = _mm_add_ps(zmm3_1, zmm2_7)
                            zmm2_7 = _mm_sub_ps(zmm2_7, zmm3_1)
                            zmm3_1 = var_4a8
                            zmm1_8 = _mm_sub_ps(zmm11_1, zmm0_9)
                            zmm10_1 = _mm_mul_ps(zmm10_1, zmm0)
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm2_7)
                            zmm1_8 = _mm_mul_ps(zmm1_8, zmm0)
                            zmm2_7 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                            zmm1_8 = __andps_xmmxud_memxud(zmm1_8, data_143f2b820)
                            zmm0_9 = _mm_shuffle_ps(zmm5_6, zmm1_8, 0x32)
                            zmm9_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_8, 0), zmm0_9, 0x82)
                            zmm0_9 = _mm_shuffle_ps(zmm10_1, zmm1_8, 0x31)
                            zmm7_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_6, zmm1_8, 0x10), zmm0_9, 0x88)
                            zmm10_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_6, 0x12), zmm1_8, 0xe8)
                            zmm1_8 = _mm_add_ps(zmm3_1, zmm3_1)
                            zmm11_1[0].q = zmm1 u>> 0x40
                            zmm8_1 = _mm_shuffle_ps(zmm1, zmm11_1, 0xc4)
                            float var_708_1[0x4] = zmm9_1
                            float var_6f8_1[0x4] = zmm7_1
                            float var_6e8_1[0x4] = zmm10_1
                            float var_6d8_1[0x4] = zmm8_1
                            zmm4_7 = _mm_mul_ps(zmm1_8, zmm3_1)
                            zmm2_7 = _mm_mul_ps(zmm2_7, _mm_shuffle_ps(zmm1_8, zmm1_8, 0x29))
                            zmm1_8 = _mm_shuffle_ps(zmm1_8, zmm1_8, 0x12)
                            zmm5_6 = _mm_shuffle_ps(var_488, var_488, 0xc9)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_8)
                            zmm6_1 = _mm_add_ps(zmm3_1, zmm2_7)
                            zmm2_7 = _mm_sub_ps(zmm2_7, zmm3_1)
                            zmm6_1 = _mm_mul_ps(zmm6_1, var_488)
                            zmm0_9 = _mm_add_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0x1a), 
                                _mm_shuffle_ps(zmm4_7, zmm4_7, 1))
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm2_7)
                            zmm1_8 = __andps_xmmxud_memxud(
                                __mulps_xmmps_memps(_mm_sub_ps(zmm11_1, zmm0_9), var_488), 
                                data_143f2b820)
                            zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_8, 0), 
                                _mm_shuffle_ps(zmm5_6, zmm1_8, 0x32), 0x82)
                            zmm0_9 = _mm_shuffle_ps(zmm6_1, zmm1_8, 0x31)
                            zmm2_7 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                            zmm4_7 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_6, zmm1_8, 0x10), zmm0_9, 0x88)
                            float var_8c8_1[0x4] = zmm3_1
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm7_1)
                            zmm6_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_6, 0x12), zmm1_8, 0xe8)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10_1)
                            zmm11_1[0].q = var_498 u>> 0x40
                            zmm5_6 = _mm_shuffle_ps(var_498, zmm11_1, 0xc4)
                            zmm0_9 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                            float var_8b8_1[0x4] = zmm4_7
                            float var_898_1[0x4] = zmm5_6
                            float var_8a8_1[0x4] = zmm6_1
                            zmm2_7 = _mm_add_ps(zmm2_7, _mm_mul_ps(zmm0_9, zmm9_1))
                            zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0), zmm9_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_8)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa), zmm10_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm3_1)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0x55), zmm7_1)
                            zmm4_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                            float var_b98[0x4] = zmm2_7
                            zmm2_7 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_9)
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm7_1)
                            zmm4_7 = _mm_mul_ps(zmm4_7, zmm8_1)
                            zmm0_9 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_8)
                            zmm0_9 = _mm_mul_ps(zmm0_9, zmm9_1)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm4_7)
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_9)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                            zmm0_9 = _mm_shuffle_ps(zmm5_6, zmm5_6, 0)
                            int96_t var_b88_1 = zmm3_1[0].12
                            zmm3_1 = _mm_shuffle_ps(zmm5_6, zmm5_6, 0x55)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_8)
                            zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xaa), zmm10_1)
                            zmm0_9 = _mm_mul_ps(zmm0_9, zmm9_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm6_1)
                            zmm5_6 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xff), zmm8_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_9)
                            int96_t var_b78_1 = zmm2_7[0].12
                            int96_t var_b68_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_8), zmm5_6)[0].12
                            zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                sub_1407740e0(&var_b98, 0x322bcc77)
                            float zmm2_8[0x4] = var_b98[0]
                            float zmm1_9 = var_b98[1]
                            zmm12_1 = _mm_and_ps(_mm_cmpeq_ps(zmm12_1, zmm13_1, 2), 
                                data_143f2b8c0 ^ zmm11_1)
                            uint32_t zmm0_10[0x4] = var_b98[2]
                            zmm12_1 ^= data_143f2b8c0
                            zmm2_8[0] = zmm2_8[0] * zmm12_1[0]
                            zmm1_9 = zmm1_9 * zmm12_1[0]
                            zmm0_10[0] = zmm0_10[0] f* zmm12_1[0]
                            var_b98[0] = zmm2_8[0]
                            zmm2_8 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
                            var_b98[1] = zmm1_9
                            zmm1_9 = var_b88_1:4.d * zmm2_8[0]
                            var_b98[2] = zmm0_10[0]
                            zmm0_10 = var_b88_1:8.d
                            zmm0_10[0] = zmm0_10[0] f* zmm2_8[0]
                            float zmm3_5 = var_b88_1.d * zmm2_8[0]
                            zmm2_8 = var_b78_1.d
                            var_b88_1:4.d = zmm1_9
                            var_b88_1:8.d = zmm0_10[0]
                            zmm0_10 = var_b78_1:8.d
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                            zmm1_9 = var_b78_1:4.d * zmm12_1[0]
                            zmm0_10[0] = zmm0_10[0] f* zmm12_1[0]
                            zmm2_8[0] = zmm2_8[0] * zmm12_1[0]
                            var_b78_1:4.d = zmm1_9
                            var_b78_1:8.d = zmm0_10[0]
                            var_b88_1.d = zmm3_5
                            var_b78_1.d = zmm2_8[0]
                            sub_14077e4a0(&var_c88, &var_b98)
                            zmm5_6 = var_c88
                            zmm6_1 = data_143f2b8b0
                            zmm1_8 = _mm_mul_ps(zmm5_6, zmm5_6)
                            var_cb8_1.d = 0x322bcc77
                            zmm1_8 = _mm_add_ps(zmm1_8, _mm_shuffle_ps(zmm1_8, zmm1_8, 0x4e))
                            zmm4_7 = _mm_add_ps(_mm_shuffle_ps(zmm1_8, zmm1_8, 0x39), zmm1_8)
                            zmm1_8 = _mm_rsqrt_ps(zmm4_7)
                            zmm3_1 = _mm_mul_ps(zmm4_7, zmm6_1)
                            zmm2_7 = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_8, zmm1_8), zmm3_1)), 
                                    zmm1_8), 
                                zmm1_8)
                            zmm6_1 =
                                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2_7, zmm2_7), zmm3_1))
                            zmm0_9 =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_7, 2)
                            zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_7), zmm2_7)
                            zmm2_7 = _mm_unpacklo_ps(var_b68_1:4.d, zmm14_1[0].q)
                            zmm6_1 = _mm_and_ps(_mm_mul_ps(zmm6_1, zmm5_6) ^ data_143f2b8a0, zmm0_9)
                                ^ data_143f2b8a0
                            zmm12_1 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_b68_1.d, var_b68_1:8.d[0].q), zmm2_7[0].q)
                            zmm2_7 = data_143f2b820
                            var_c88 = zmm6_1
                        
                        var_358 = zmm6_1
                        var_348_3 = zmm12_1
                    float var_338_2[0x4] = zmm13_1
                    uint32_t rcx_51 = zx.d(*(arg1 + 0x121))
                    
                    if (rcx_51 == 0)
                        goto label_141aa8054
                    
                    float var_478[0x4]
                    float var_468[0x4]
                    float var_458[0x4]
                    
                    if (rcx_51 == 1)
                        zmm8_1 = data_143f2b810
                        zmm8_1[0].q = zmm15_1 u>> 0x40
                        var_478 = _mm_shuffle_ps(zmm15_1, zmm8_1, 0xc4)
                        float var_458_1[0x4] = _mm_and_ps(zmm8_1, zmm2_7)
                        zmm1_8 = data_143f2b8d0
                        float var_468_1[0x4] = zmm15_1
                        float var_c38_2[0x4] = zmm1_8
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13_1, var_4e8_1), zmm1_8, 1))
                                == 0)
                            zmm4_7 = var_508
                            zmm2_7 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b)
                            zmm1_8 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e)
                            zmm2_7 = _mm_mul_ps(zmm2_7, _mm_shuffle_ps(zmm4_7, zmm4_7, 0))
                            zmm12_1 = _mm_mul_ps(zmm12_1, var_4e8_1)
                            zmm5_6 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                            zmm2_7 = __mulps_xmmps_memps(zmm2_7, data_143f2b850)
                            zmm0_9 = _mm_mul_ps(zmm5_6, zmm6_1)
                            zmm3_1 = zmm12_1
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1)
                            zmm13_1 = _mm_mul_ps(zmm13_1, var_4e8_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_9)
                            zmm1_8 = _mm_mul_ps(zmm1_8, _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55))
                            zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa), zmm6_1)
                            zmm1_8 = __mulps_xmmps_memps(zmm1_8, data_143f2b840)
                            zmm0_9 = __mulps_xmmps_memps(zmm0_9, data_143f2b830)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_8)
                            zmm1_8 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xd2)
                            zmm4_7 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xc9)
                            zmm6_1 = _mm_add_ps(zmm2_7, zmm0_9)
                            zmm2_7 = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2), zmm4_7), 
                                _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9), zmm1_8))
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm2_7)
                            zmm12_1 = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xd2)
                            zmm0_9 = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xc9)
                            zmm12_1 = _mm_mul_ps(zmm12_1, zmm4_7)
                            zmm0_9 = _mm_mul_ps(zmm0_9, zmm1_8)
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm5_6)
                            zmm12_1 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm12_1, zmm0_9), 
                                    _mm_add_ps(zmm2_7, zmm3_1)), 
                                var_4f8_1)
                        label_141aa8054:
                            var_458 = zmm13_1
                            var_468 = zmm12_1
                            var_478 = zmm6_1
                        else
                            zmm1_8 = var_508
                            zmm5_6 = _mm_shuffle_ps(var_4e8_1, var_4e8_1, 0xc9)
                            zmm3_1 = _mm_add_ps(zmm1_8, zmm1_8)
                            zmm0_9 = _mm_shuffle_ps(zmm1_8, zmm1_8, 4)
                            _mm_mul_ps(zmm13_1, var_4e8_1)
                            zmm4_7 = _mm_mul_ps(zmm3_1, zmm1_8)
                            zmm2_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x29), zmm0_9)
                            zmm1_8 = _mm_shuffle_ps(zmm1_8, zmm1_8, 0xff)
                            zmm0_9 = _mm_shuffle_ps(zmm4_7, zmm4_7, 0x1a)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_8)
                            zmm0_9 = _mm_add_ps(zmm0_9, _mm_shuffle_ps(zmm4_7, zmm4_7, 1))
                            zmm4_7 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
                            zmm10_1 = _mm_add_ps(zmm3_1, zmm2_7)
                            zmm2_7 = _mm_sub_ps(zmm2_7, zmm3_1)
                            zmm1_8 = _mm_sub_ps(zmm8_1, zmm0_9)
                            zmm10_1 = _mm_mul_ps(zmm10_1, var_4e8_1)
                            zmm5_6 = _mm_mul_ps(zmm5_6, zmm2_7)
                            zmm1_8 = _mm_mul_ps(zmm1_8, var_4e8_1)
                            zmm2_7 = _mm_add_ps(zmm6_1, zmm6_1)
                            zmm1_8 = __andps_xmmxud_memxud(zmm1_8, data_143f2b820)
                            zmm0_9 = _mm_shuffle_ps(zmm5_6, zmm1_8, 0x32)
                            zmm9_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_8, 0), zmm0_9, 0x82)
                            zmm0_9 = _mm_shuffle_ps(zmm10_1, zmm1_8, 0x31)
                            zmm7_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_6, zmm1_8, 0x10), zmm0_9, 0x88)
                            zmm3_1 = _mm_mul_ps(zmm2_7, zmm6_1)
                            zmm8_1[0].q = var_4f8_1 u>> 0x40
                            zmm8_1 = _mm_shuffle_ps(var_4f8_1, zmm8_1, 0xc4)
                            zmm0_9 = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            zmm10_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_6, 0x12), zmm1_8, 0xe8)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm2_7, zmm2_7, 0x29), zmm0_9)
                            zmm0_9 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                                _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                            zmm2_7 = _mm_mul_ps(_mm_shuffle_ps(zmm2_7, zmm2_7, 0x12), zmm6_1)
                            float var_6c8_1[0x4] = zmm9_1
                            float var_6b8_1[0x4] = zmm7_1
                            float var_6a8_1[0x4] = zmm10_1
                            float var_698_1[0x4] = zmm8_1
                            zmm6_1 = _mm_add_ps(zmm2_7, zmm1_8)
                            zmm1_8 = _mm_sub_ps(zmm1_8, zmm2_7)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm13_1)
                            zmm4_7 = _mm_mul_ps(zmm4_7, zmm1_8)
                            zmm1_8 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(data_143f2b810, zmm0_9), zmm13_1), 
                                data_143f2b820)
                            zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_8, 0), 
                                _mm_shuffle_ps(zmm4_7, zmm1_8, 0x32), 0x82)
                            float var_688_1[0x4] = zmm3_1
                            zmm2_7 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                            zmm0_9 = _mm_shuffle_ps(zmm6_1, zmm1_8, 0x31)
                            zmm5_6 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm4_7, zmm1_8, 0x10), zmm0_9, 0x88)
                            zmm0_9 = data_143f2b810
                            zmm2_7 = _mm_mul_ps(zmm2_7, zmm7_1)
                            zmm0_9[0].q = zmm12_1 u>> 0x40
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm0_9, 0xc4)
                            zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm9_1)
                            zmm6_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm4_7, 0x12), zmm1_8, 0xe8)
                            zmm1_8 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_9)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                            zmm1_8 = _mm_mul_ps(zmm1_8, zmm10_1)
                            zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0), zmm9_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_8)
                            float var_678_1[0x4] = zmm5_6
                            float var_668_1[0x4] = zmm6_1
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xaa), zmm10_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm3_1)
                            float var_658_1[0x4] = zmm12_1
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0x55), zmm7_1)
                            float var_bd8[0x4] = zmm2_7
                            zmm2_7 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), zmm7_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_9)
                            zmm5_6 = _mm_mul_ps(_mm_shuffle_ps(zmm5_6, zmm5_6, 0xff), zmm8_1)
                            zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), zmm9_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_8)
                            zmm1_8 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm0_9)
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm5_6)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                            zmm0_9 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm1_8)
                            zmm0_9 = _mm_mul_ps(zmm0_9, zmm9_1)
                            int96_t var_bc8_1 = zmm3_1[0].12
                            zmm1_8 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x55), zmm7_1)
                            zmm2_7 = _mm_add_ps(zmm2_7, zmm6_1)
                            zmm1_8 = _mm_mul_ps(zmm1_8, zmm10_1)
                            zmm12_1 = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xff)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_9)
                            zmm12_1 = _mm_mul_ps(zmm12_1, zmm8_1)
                            int96_t var_bb8_1 = zmm2_7[0].12
                            int96_t var_ba8_1 =
                                _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_8), zmm12_1)[0].12
                            zmm11_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_bd8, 0x322bcc77)
                            uint32_t zmm0_11[0x4] = data_143f2b8c0
                            float zmm4_8[0x4] = _mm_cmpeq_ps(var_c38_2, zmm11_1, 2)
                            float zmm2_9[0x4] = var_bd8[0]
                            float zmm1_10 = var_bd8[1]
                            zmm4_8 = _mm_and_ps(zmm4_8, zmm0_11 ^ data_143f2b810) ^ data_143f2b8c0
                            zmm0_11 = var_bd8[2]
                            zmm2_9[0] = zmm2_9[0] * zmm4_8[0]
                            zmm1_10 = zmm1_10 * zmm4_8[0]
                            zmm0_11[0] = zmm0_11[0] f* zmm4_8[0]
                            var_bd8[0] = zmm2_9[0]
                            zmm2_9 = _mm_shuffle_ps(zmm4_8, zmm4_8, 0x55)
                            var_bd8[1] = zmm1_10
                            zmm1_10 = var_bc8_1:4.d * zmm2_9[0]
                            var_bd8[2] = zmm0_11[0]
                            zmm0_11 = var_bc8_1:8.d
                            zmm0_11[0] = zmm0_11[0] f* zmm2_9[0]
                            float zmm3_6 = var_bc8_1.d * zmm2_9[0]
                            zmm2_9 = var_bb8_1.d
                            zmm4_8 = _mm_shuffle_ps(zmm4_8, zmm4_8, 0xaa)
                            var_bc8_1:4.d = zmm1_10
                            var_bc8_1:8.d = zmm0_11[0]
                            zmm0_11 = var_bb8_1:8.d
                            zmm1_10 = var_bb8_1:4.d * zmm4_8[0]
                            zmm0_11[0] = zmm0_11[0] f* zmm4_8[0]
                            zmm2_9[0] = zmm2_9[0] * zmm4_8[0]
                            var_bb8_1:4.d = zmm1_10
                            var_bb8_1:8.d = zmm0_11[0]
                            var_bc8_1.d = zmm3_6
                            var_bb8_1.d = zmm2_9[0]
                            sub_14077e4a0(&var_c68, &var_bd8)
                            float zmm5_7[0x4] = var_c68
                            zmm13_1 = zmm11_1
                            zmm6_1 = data_143f2b8b0
                            float zmm1_11[0x4] = _mm_mul_ps(zmm5_7, zmm5_7)
                            var_cb8_1.d = 0x322bcc77
                            var_458 = zmm11_1
                            zmm1_11 = _mm_add_ps(zmm1_11, _mm_shuffle_ps(zmm1_11, zmm1_11, 0x4e))
                            float zmm4_9[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_11, zmm1_11, 0x39), zmm1_11)
                            zmm1_11 = _mm_rsqrt_ps(zmm4_9)
                            zmm3_1 = _mm_mul_ps(zmm4_9, zmm6_1)
                            float zmm2_10[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_11, zmm1_11), zmm3_1)), 
                                    zmm1_11), 
                                zmm1_11)
                            zmm6_1 =
                                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2_10, zmm2_10), zmm3_1))
                            float zmm0_12[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_9, 2)
                            zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_10), zmm2_10)
                            zmm2_10 = _mm_unpacklo_ps(var_ba8_1:4.d, zmm14_1[0].q)
                            zmm6_1 =
                                _mm_and_ps(_mm_mul_ps(zmm6_1, zmm5_7) ^ data_143f2b8a0, zmm0_12)
                                ^ data_143f2b8a0
                            zmm12_1 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_ba8_1.d, var_ba8_1:8.d[0].q), zmm2_10[0].q)
                            var_c68 = zmm6_1
                            var_468 = zmm12_1
                            var_478 = zmm6_1
                    else
                        if (rcx_51 != 2)
                            goto label_141aa8054
                        
                        zmm14_1, zmm15_1 = sub_140ad7d70(&var_358, &var_478, &var_4d8)
                        zmm13_1 = var_458
                        zmm12_1 = var_468
                        zmm6_1 = var_478
                    var_4a8 = zmm6_1
                    var_498 = zmm12_1
                    var_488 = zmm13_1
                    sub_142253090(*(*(arg1 + 0x218) + (rbx_7 << 3)), &var_4a8)
                    int64_t rax_39 = sx.q(*(rsi_6 + 0x18))
                    
                    if (rax_39.d != 0xffffffff)
                        void var_1a8
                        float var_178[0x3][0x4]
                        float (* rax_41)[0x4]
                        rax_41, zmm14_1, zmm15_1 = sub_140ad7d70(&var_4a8, &var_178, 
                            sub_14224f610(*(*(arg1 + 0x218) + (rax_39 << 3)), &var_1a8))
                        zmm1_1 = rax_41[1]
                        int64_t rax_42 = *(arg1 + 0x238)
                        zmm0_1 = zmm1_1
                        zmm0_1[0] = zmm0_1[0] * zmm1_1[0]
                        zmm2_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                        *((rbx_7 << 6) + rax_42 + 0x2c) = _mm_sqrt_ss(0, zmm2_1[0])[0]
                    
                    rsi_6 += 0x20
                while (rsi_6 != r14_6)
                
                zmm15_1 = 0x3f800000
        else if (rcx_27 == 2)
            void* r14_2 = *(arg1 + 0x208)
            void* r13_4 = (sx.q(*(arg1 + 0x210)) << 5) + r14_2
            
            if (r14_2 != r13_4)
                void* rsi_5 = r14_2 + 0x10
                
                do
                    int64_t r15_4 = sx.q(*(rsi_5 + 4))
                    int64_t rax_24 = *(arg1 + 0x238)
                    int64_t rbx_3 = r15_4 << 6
                    *(rbx_3 + rax_24 + 0x30) |= 2
                    float (* rax_25)[0x4]
                    rax_25, zmm14_1, zmm15_1 = sub_141ab9f30(r13_1, *rsi_5)
                    uint32_t rax_26 = zx.d(*(arg1 + 0x121))
                    float var_3b8[0x4]
                    
                    if (rax_26 == 0)
                    label_141aa72d2:
                        var_3b8 = *rax_25
                        float var_3a8_4[0x4] = rax_25[1]
                        float var_398_4[0x4] = rax_25[2]
                    else if (rax_26 == 1)
                        zmm12_1 = data_143f2b810
                        zmm6_1 = data_143f2b820
                        zmm13_1 = data_143f2b8d0
                        zmm12_1[0].q = zx.o(0) u>> 0x40
                        var_3b8 = _mm_shuffle_ps(zx.o(0), zmm12_1, 0xc4)
                        float var_398_1[0x4] = _mm_and_ps(zmm12_1, zmm6_1)
                        int128_t var_3a8_1 = zx.o(0)
                        zmm11_1 = rax_25[2]
                        float zmm0_6[0x4]
                        float zmm1_5[0x4]
                        float zmm2_4[0x4]
                        float zmm4_5[0x4]
                        float zmm5_4[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm11_1, var_4e8_1), zmm13_1, 
                                1)) == 0)
                            zmm4_5 = var_508
                            zmm3_1 = *rax_25
                            zmm6_1 = rax_25[1]
                            zmm2_4 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
                            zmm1_5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
                            zmm2_4 = _mm_mul_ps(zmm2_4, _mm_shuffle_ps(zmm4_5, zmm4_5, 0))
                            zmm0_6 = zmm3_1
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
                            zmm6_1 = _mm_mul_ps(zmm6_1, var_4e8_1)
                            zmm2_4 = __mulps_xmmps_memps(zmm2_4, data_143f2b850)
                            zmm5_4 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xff)
                            zmm0_6 = _mm_mul_ps(zmm0_6, zmm5_4)
                            zmm11_1 = _mm_mul_ps(zmm11_1, var_4e8_1)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm0_6)
                            zmm1_5 = _mm_mul_ps(zmm1_5, _mm_shuffle_ps(zmm4_5, zmm4_5, 0x55))
                            zmm3_1 = _mm_mul_ps(zmm3_1, _mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa))
                            zmm1_5 = __mulps_xmmps_memps(zmm1_5, data_143f2b840)
                            zmm0_6 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
                            zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f2b830)
                            float var_398_3[0x4] = zmm11_1
                            zmm2_4 = _mm_add_ps(_mm_add_ps(zmm2_4, zmm1_5), zmm3_1)
                            zmm3_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
                            var_3b8 = zmm2_4
                            zmm2_4 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xd2)
                            zmm0_6 = _mm_mul_ps(zmm0_6, zmm2_4)
                            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xc9)
                            zmm3_1 = _mm_sub_ps(_mm_mul_ps(zmm3_1, zmm4_5), zmm0_6)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
                            zmm1_5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
                            zmm0_6 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                            zmm1_5 = _mm_mul_ps(zmm1_5, zmm4_5)
                            zmm0_6 = _mm_mul_ps(zmm0_6, zmm2_4)
                            zmm3_1 = _mm_mul_ps(zmm3_1, zmm5_4)
                            float var_3a8_3[0x4] = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_6), _mm_add_ps(zmm3_1, zmm6_1)), 
                                var_4f8_1)
                        else
                            zmm3_1 = var_508
                            zmm1_5 = _mm_add_ps(zmm3_1, zmm3_1)
                            zmm5_4 = _mm_shuffle_ps(var_4e8_1, var_4e8_1, 0xc9)
                            _mm_mul_ps(zmm11_1, var_4e8_1)
                            zmm2_4 = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                            zmm4_5 = _mm_mul_ps(zmm3_1, zmm1_5)
                            zmm2_4 = _mm_mul_ps(zmm2_4, _mm_shuffle_ps(zmm1_5, zmm1_5, 0x29))
                            zmm1_5 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x12)
                            zmm0_6 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x1a)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm1_5)
                            zmm0_6 = _mm_add_ps(zmm0_6, _mm_shuffle_ps(zmm4_5, zmm4_5, 1))
                            zmm10_1 = _mm_add_ps(zmm3_1, zmm2_4)
                            zmm2_4 = _mm_sub_ps(zmm2_4, zmm3_1)
                            zmm1_5 = _mm_sub_ps(zmm12_1, zmm0_6)
                            zmm10_1 = _mm_mul_ps(zmm10_1, var_4e8_1)
                            zmm5_4 = _mm_mul_ps(zmm5_4, zmm2_4)
                            zmm1_5 = _mm_and_ps(_mm_mul_ps(zmm1_5, var_4e8_1), zmm6_1)
                            zmm0_6 = _mm_shuffle_ps(zmm5_4, zmm1_5, 0x32)
                            zmm9_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm1_5, 0), zmm0_6, 0x82)
                            zmm0_6 = _mm_shuffle_ps(zmm10_1, zmm1_5, 0x31)
                            zmm7_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_4, zmm1_5, 0x10), zmm0_6, 0x88)
                            zmm10_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_1, zmm5_4, 0x12), zmm1_5, 0xe8)
                            zmm12_1[0].q = var_4f8_1 u>> 0x40
                            zmm8_1 = _mm_shuffle_ps(var_4f8_1, zmm12_1, 0xc4)
                            float var_758_1[0x4] = zmm8_1
                            float var_788_1[0x4] = zmm9_1
                            float var_778_1[0x4] = zmm7_1
                            float var_768_1[0x4] = zmm10_1
                            zmm1_5 = *rax_25
                            zmm4_5 = zmm1_5
                            zmm3_1 = _mm_add_ps(zmm1_5, zmm1_5)
                            zmm0_6 = _mm_shuffle_ps(zmm1_5, zmm1_5, 4)
                            zmm1_5 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xff)
                            zmm4_5 = _mm_mul_ps(zmm4_5, zmm3_1)
                            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x29), zmm0_6)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x12), zmm1_5)
                            zmm1_5 = rax_25[2]
                            zmm0_6 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x1a)
                            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 1)
                            zmm5_4 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xc9)
                            zmm6_1 = _mm_add_ps(zmm3_1, zmm2_4)
                            zmm2_4 = _mm_sub_ps(zmm2_4, zmm3_1)
                            zmm0_6 = _mm_add_ps(zmm0_6, zmm4_5)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm1_5)
                            zmm5_4 = _mm_mul_ps(zmm5_4, zmm2_4)
                            zmm2_4 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(zmm12_1, zmm0_6), zmm1_5), data_143f2b820)
                            zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm2_4, 0), 
                                _mm_shuffle_ps(zmm5_4, zmm2_4, 0x32), 0x82)
                            zmm4_5 = _mm_shuffle_ps(zmm5_4, zmm2_4, 0x10)
                            zmm1_5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                            zmm4_5 =
                                _mm_shuffle_ps(zmm4_5, _mm_shuffle_ps(zmm6_1, zmm2_4, 0x31), 0x88)
                            float var_748_1[0x4] = zmm3_1
                            zmm1_5 = _mm_mul_ps(zmm1_5, zmm10_1)
                            zmm6_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm5_4, 0x12), zmm2_4, 0xe8)
                            zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), zmm7_1)
                            float var_738_1[0x4] = zmm4_5
                            float var_728_1[0x4] = zmm6_1
                            zmm5_4 = rax_25[1]
                            zmm12_1[0].q = zmm5_4 u>> 0x40
                            zmm5_4 = _mm_shuffle_ps(zmm5_4, zmm12_1, 0xc4)
                            zmm0_6 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_1)
                            float var_718_1[0x4] = zmm5_4
                            zmm2_4 = _mm_add_ps(zmm2_4, _mm_mul_ps(zmm0_6, zmm9_1))
                            zmm0_6 = _mm_mul_ps(_mm_shuffle_ps(zmm4_5, zmm4_5, 0), zmm9_1)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm1_5)
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa), zmm10_1)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm3_1)
                            zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_5, zmm4_5, 0x55), zmm7_1)
                            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xff)
                            float var_b18[0x4] = zmm2_4
                            zmm2_4 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_6)
                            zmm2_4 = _mm_mul_ps(zmm2_4, zmm7_1)
                            zmm4_5 = _mm_mul_ps(zmm4_5, zmm8_1)
                            zmm0_6 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_5)
                            zmm0_6 = _mm_mul_ps(zmm0_6, zmm9_1)
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm10_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm4_5)
                            zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm0_6)
                            zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                            zmm0_6 = _mm_shuffle_ps(zmm5_4, zmm5_4, 0)
                            int96_t var_b08_1 = zmm3_1[0].12
                            zmm3_1 = _mm_shuffle_ps(zmm5_4, zmm5_4, 0x55)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm1_5)
                            zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xaa), zmm10_1)
                            zmm0_6 = _mm_mul_ps(zmm0_6, zmm9_1)
                            zmm2_4 = _mm_add_ps(zmm2_4, zmm6_1)
                            zmm5_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xff), zmm8_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0_6)
                            int96_t var_af8_1 = zmm2_4[0].12
                            int96_t var_ae8_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_5), zmm5_4)[0].12
                            zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                sub_1407740e0(&var_b18, 0x322bcc77)
                            uint32_t zmm6_2[0x4] = _mm_and_ps(data_143f2b8c0 ^ zmm12_1, 
                                _mm_cmpeq_ps(zmm13_1, zmm11_1, 2)) ^ data_143f2b8c0
                            void var_9d8
                            int64_t* rax_29 = sub_14173efa0(&var_b18, &var_9d8, 1)
                            float zmm2_5[0x4] = zmm6_2
                            float zmm1_6 = zmm6_2[0]
                            float zmm0_7 = zmm6_2[0]
                            zmm2_5[0] = zmm2_5[0] f* *rax_29
                            zmm1_6 = zmm1_6 f* *(rax_29 + 4)
                            zmm0_7 = zmm0_7 f* rax_29[1].d
                            var_b18[0] = zmm2_5[0]
                            zmm2_5 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
                            var_b18[1] = zmm1_6
                            zmm1_6 = var_b08_1:4.d * zmm2_5[0]
                            var_b18[2] = zmm0_7
                            zmm0_7 = var_b08_1:8.d * zmm2_5[0]
                            float zmm3_4 = var_b08_1.d * zmm2_5[0]
                            zmm2_5 = var_af8_1.d
                            var_b08_1:4.d = zmm1_6
                            var_b08_1:8.d = zmm0_7
                            zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa)
                            zmm1_6 = var_af8_1:4.d f* zmm6_2[0]
                            zmm0_7 = var_af8_1:8.d f* zmm6_2[0]
                            zmm2_5[0] = zmm2_5[0] f* zmm6_2[0]
                            var_af8_1:4.d = zmm1_6
                            var_af8_1:8.d = zmm0_7
                            var_b08_1.d = zmm3_4
                            var_af8_1.d = zmm2_5[0]
                            sub_14077e4a0(&var_c88, &var_b18)
                            float zmm5_5[0x4] = var_c88
                            zmm6_1 = data_143f2b8b0
                            float zmm1_7[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
                            var_cb8_1.d = 0x322bcc77
                            float var_398_2[0x4] = zmm11_1
                            zmm1_7 = _mm_add_ps(zmm1_7, _mm_shuffle_ps(zmm1_7, zmm1_7, 0x4e))
                            float zmm4_6[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_7, zmm1_7, 0x39), zmm1_7)
                            zmm1_7 = _mm_rsqrt_ps(zmm4_6)
                            zmm3_1 = _mm_mul_ps(zmm4_6, zmm6_1)
                            float zmm2_6[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_7, zmm1_7), zmm3_1)), 
                                    zmm1_7), 
                                zmm1_7)
                            zmm6_1 =
                                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2_6, zmm2_6), zmm3_1))
                            float zmm0_8[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_6, 2)
                            zmm6_1 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_6), zmm2_6), zmm5_5)
                                    ^ data_143f2b8a0, 
                                zmm0_8) ^ data_143f2b8a0
                            var_c88 = zmm6_1
                            var_3b8 = zmm6_1
                            float var_3a8_2[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_ae8_1.d, var_ae8_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_ae8_1:4.d, zmm14_1[0].q)[0].q)
                    else
                        if (rax_26 != 2)
                            goto label_141aa72d2
                        
                        zmm14_1, zmm15_1 = sub_140ad7d70(rax_25, &var_3b8, &var_4d8)
                    
                    sub_142253090(*(*(arg1 + 0x218) + (r15_4 << 3)), &var_3b8)
                    int64_t rax_30 = sx.q(*(rsi_5 + 8))
                    
                    if (rax_30.d != 0xffffffff)
                        void var_238
                        float var_208[0x3][0x4]
                        float (* rax_32)[0x4]
                        rax_32, zmm14_1, zmm15_1 = sub_140ad7d70(&var_3b8, &var_208, 
                            sub_14224f610(*(*(arg1 + 0x218) + (rax_30 << 3)), &var_238))
                        zmm1_1 = rax_32[1]
                        int64_t rax_33 = *(arg1 + 0x238)
                        zmm0_1 = zmm1_1
                        zmm0_1[0] = zmm0_1[0] * zmm1_1[0]
                        zmm2_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                        *(rbx_3 + rax_33 + 0x2c) = _mm_sqrt_ss(0, zmm2_1[0])[0]
                    
                    r14_2 += 0x20
                    rsi_5 += 0x20
                while (r14_2 != r13_4)
                
                r12 = var_ca8
        
        zmm7_1 = 0x38d1b717
        zmm8_1 = 0x80000000
        zmm9_1 = 0xbf800000
        zmm11_1 = var_c98
        rcx_13 = var_cc8_1
        *(arg1 + 0x140) = var_508
        *(arg1 + 0x150) = var_4f8_1
        *(arg1 + 0x160) = var_4e8_1
        *(arg1 + 0x13c) = 0
        *(arg1 + 0x570) = data_143dbb1f8.q
        result = zx.q(data_143dbb200)
        *(arg1 + 0x578) = result.d
    else
        result = zx.q(*(arg1 + 0x13d))
        
        if ((result.b & 4) != 0)
            result.b &= 0xfb
            *(arg1 + 0x13d) = result.b
            result, zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm14_1, zmm15_1 =
                sub_141ac3aa0(arg1, arg2, &var_508, &var_4d8)
            rcx_13 = *(arg1 + 0x13c)
            var_cc8_1 = rcx_13
            
            if (rcx_13 != 0)
                goto label_141aa5d18
    
    if ((*(arg1 + 0x1d8) != 0 || rcx_13 == 0) && not(zmm11_1[0] f<= *(arg1 + 0x1d4)))
        if ((*(arg1 + 0x123) & 4) == 0 || *(arg1 + 0x4c8) s<= 0)
            char rdx_30 = *(arg1 + 0x121)
            
            if (rdx_30 != 1)
                zmm14_1 = *(arg1 + 0x180)
                zmm1_1 = *(arg1 + 0x1b0)
                zmm13_1 = zmm14_1
                float (* var_ce8_1)[0x4] = &var_4d8
                zmm13_1[0] = zmm13_1[0] - zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                zmm12_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
                zmm12_1[0] = zmm12_1[0] - zmm0_1[0]
                zmm14_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
                zmm14_1[0] = zmm14_1[0] - zmm1_1[0]
                zmm15_1[0] = zmm15_1[0] / zmm11_1[0]
                zmm14_1[0] = zmm14_1[0] * zmm15_1[0]
                zmm13_1[0] = zmm13_1[0] * zmm15_1[0]
                zmm12_1[0] = zmm12_1[0] * zmm15_1[0]
                float var_c20_1 = zmm14_1[0]
                var_ca8.d = (zmm13_1 ^ zmm8_1)[0]
                var_ca8:4.d = (zmm12_1 ^ zmm8_1)[0]
                float var_ca0_1 = (zmm14_1 ^ zmm8_1)[0]
                uint64_t var_9cc
                uint64_t* rax_43
                int512_t zmm6_3
                rax_43, zmm6_3 = sub_141ad6900(&var_9cc, rdx_30, &var_ca8, &var_508, var_ce8_1)
                float zmm2_11 = *(arg1 + 0x570) - zmm13_1[0]
                float zmm3_7 = *(arg1 + 0x574) - zmm12_1[0]
                zmm6_3.o = *rax_43
                float zmm4_11 = *(arg1 + 0x578) - zmm14_1[0]
                zmm8_1 = *(rax_43 + 4)
                zmm10_1 = rax_43[1].d
                zmm7_1 = *(arg1 + 0xf4)
                zmm9_1 = *(arg1 + 0xf8)
                zmm11_1 = *(arg1 + 0xfc)
                *(arg1 + 0x570) = (_mm_unpacklo_ps(zmm13_1, zmm12_1[0].q)).q
                *(arg1 + 0x578) = var_c20_1
                var_ca8.d = zmm2_11 * zmm15_1[0]
                var_ca8:4.d = zmm3_7 * zmm15_1[0]
                float var_ca0_2 = zmm4_11 * zmm15_1[0]
                uint64_t var_9c0
                uint64_t* rax_45
                int32_t zmm6_4
                rax_45, zmm6_4 =
                    sub_141ad6900(&var_9c0, *(arg1 + 0x121), &var_ca8, &var_508, &var_4d8)
                void* i = *(arg1 + 0x208)
                zmm12_1 = *(arg1 + 0xe8)
                int64_t r14_7 = sx.q(*(arg1 + 0x210))
                zmm13_1 = *(rax_45 + 4)
                zmm13_1[0] = zmm13_1[0] f* *(arg1 + 0xec)
                zmm12_1[0] = zmm12_1[0] f* *rax_45
                void* r14_9 = (r14_7 << 5) + i
                zmm9_1[0] = zmm9_1[0] * zmm8_1[0]
                zmm8_1 = rax_45[1].d
                zmm8_1[0] = zmm8_1[0] f* *(arg1 + 0xf0)
                zmm7_1[0] = zmm7_1[0] f* zmm6_4
                zmm13_1[0] = zmm13_1[0] + zmm9_1[0]
                zmm11_1[0] = zmm11_1[0] * zmm10_1[0]
                zmm12_1[0] = zmm12_1[0] + zmm7_1[0]
                zmm8_1[0] = zmm8_1[0] + zmm11_1[0]
                
                for (; i != r14_9; i += 0x20)
                    int64_t rdx_32 = sx.q(*(i + 0x14))
                    
                    if ((*((rdx_32 << 6) + *(arg1 + 0x238) + 0x30) & 1) != 0)
                        void* rsi_7 = *(*(arg1 + 0x218) + (rdx_32 << 3))
                        zmm11_1 = sub_14224f430(rsi_7)
                        
                        if (not(zmm11_1[0] <= zx.o(0)[0]))
                            zmm9_1 = *(arg1 + 0x100)
                            float zmm3_8[0x4] = zmm12_1
                            float zmm4_12[0x4] = zmm13_1
                            float zmm5_8[0x4] = zmm8_1
                            
                            if (_mm_and_ps(zmm9_1, 0x7fffffff)[0] > 9.99999975e-05f)
                            label_141aa846b:
                                zmm5_8 = *(arg1 + 0x108) ^ 0x80000000
                                bool cond:6_1 = zmm8_1[0] < zmm5_8[0]
                                int32_t rax_48 = *(arg1 + 0x108)
                                zmm4_12 = *(arg1 + 0x104)
                                zmm3_8 = zmm9_1 ^ 0x80000000
                                var_ca8 = *(arg1 + 0x100)
                                zmm4_12 ^= 0x80000000
                                
                                if (not(cond:6_1))
                                    zmm5_8 = __minss_xmmss_memss(zmm8_1[0], rax_48)
                                
                                if (not(zmm13_1[0] < zmm4_12[0]))
                                    zmm4_12 = __minss_xmmss_memss(zmm13_1[0], var_ca8:4.d)
                                
                                if (not(zmm12_1[0] < zmm3_8[0]))
                                    zmm3_8 = __minss_xmmss_memss(zmm12_1[0], var_ca8.d)
                            else
                                if (_mm_and_ps(*(arg1 + 0x104), 0x7fffffff)[0] > 9.99999975e-05f)
                                    goto label_141aa846b
                                
                                if (not(_mm_and_ps(*(arg1 + 0x108), 0x7fffffff)[0]
                                        <= 9.99999975e-05f))
                                    goto label_141aa846b
                            
                            float zmm2_12[0x4] = 0x3f800000
                            zmm2_12[0] = 1f / zmm11_1[0]
                            zmm2_12[0] = zmm2_12[0] * zmm3_8[0]
                            zmm2_12[0] = zmm2_12[0] * zmm4_12[0]
                            zmm2_12[0] = zmm2_12[0] * zmm5_8[0]
                            float var_a8c = zmm2_12[0]
                            float var_a88_1 = zmm2_12[0]
                            float var_a84_1 = zmm2_12[0]
                            sub_142240000(rsi_7, &var_a8c)
        else
            void* i_1 = *(arg1 + 0x208)
            
            for (void* r15_7 = (sx.q(*(arg1 + 0x210)) << 5) + i_1; i_1 != r15_7; i_1 += 0x20)
                int64_t rcx_40 = sx.q(*(i_1 + 0x14))
                float (* rbx_6)[0x4] = (rcx_40 << 6) + *(arg1 + 0x238)
                
                if ((rbx_6[3][0].b & 1) != 0)
                    void* r14_3 = *(*(arg1 + 0x218) + (rcx_40 << 3))
                    sub_1422528f0(r14_3, &rbx_6[1])
                    zmm6_1 = *rbx_6
                    int64_t var_c28_1 = zmm6_1[0].q
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    float _X
                    
                    if (zmm6_1[0] >= zmm9_1[0])
                        _X = _mm_min_ss(zmm6_1[0], zmm15_1[0])
                    else
                        _X = zmm9_1[0]
                    
                    zmm3_1 = acosf(_X)
                    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                    zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                    zmm15_1[0] = zmm15_1[0] - zmm6_1[0]
                    float zmm0_13[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm15_1[0], zmm14_1[0])[0])
                    float zmm4_10
                    
                    if (zmm0_13[0] < zmm7_1[0])
                        zmm1_1 = zmm15_1
                        zmm4_10 = zmm14_1[0]
                        zmm2_1 = zmm14_1
                    else
                        zmm2_1 = zmm15_1
                        zmm2_1[0] = zmm2_1[0] / zmm0_13[0]
                        zmm1_1 = zmm2_1
                        zmm4_10 = zmm2_1[0]
                        zmm1_1[0] = zmm1_1[0] f* var_c28_1.d
                        zmm4_10 = zmm4_10 f* var_c28_1:4.d
                        zmm2_1[0] = zmm2_1[0] * var_c20
                    
                    zmm3_1[0] = zmm3_1[0] * zmm1_1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm2_1[0]
                    zmm3_1[0] = zmm3_1[0] * zmm4_10
                    float var_a98 = zmm3_1[0]
                    float var_a90_1 = zmm3_1[0]
                    float var_a94_1 = zmm3_1[0]
                    sub_142251eb0(r14_3, &var_a98)
            
            sub_141a9a1b0(arg1 + 0x4c0)
        
        void* rsi_8 = *(arg1 + 0x208)
        void* r15_10 = (sx.q(*(arg1 + 0x210)) << 5) + rsi_8
        
        if (rsi_8 != r15_10)
            int32_t* rbx_9 = rsi_8 + 0x10
            
            do
                int64_t r14_10 = sx.q(rbx_9[1])
                
                if ((*((r14_10 << 6) + *(arg1 + 0x238) + 0x30) & 1) == 0)
                    float (* rax_50)[0x4] = sub_141ab9f30(r13_1, *rbx_9)
                    uint32_t rax_51 = zx.d(*(arg1 + 0x121))
                    float var_388[0x4]
                    
                    if (rax_51 == 0)
                    label_141aa8b2b:
                        var_388 = *rax_50
                        float var_378_4[0x4] = rax_50[1]
                        float var_368_4[0x4] = rax_50[2]
                    else if (rax_51 == 1)
                        float zmm12_2[0x4] = data_143f2b810
                        uint32_t zmm15_2[0x4] = data_143f2b820
                        float zmm13_2[0x4] = data_143f2b8d0
                        zmm12_2[0].q = zx.o(0) u>> 0x40
                        var_388 = _mm_shuffle_ps(zx.o(0), zmm12_2, 0xc4)
                        float var_368_1[0x4] = _mm_and_ps(zmm12_2, zmm15_2)
                        int128_t var_378_1 = zx.o(0)
                        float zmm11_2[0x4] = rax_50[2]
                        float zmm0_16[0x4]
                        float zmm1_13[0x4]
                        float zmm2_13[0x4]
                        float zmm3_9[0x4]
                        float zmm4_13[0x4]
                        float zmm5_9[0x4]
                        float zmm6_5[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm11_2, var_4e8_1), zmm13_2, 
                                1)) == 0)
                            zmm4_13 = var_508
                            zmm3_9 = *rax_50
                            zmm6_5 = rax_50[1]
                            zmm2_13 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0x1b)
                            zmm1_13 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0x4e)
                            zmm2_13 = _mm_mul_ps(zmm2_13, _mm_shuffle_ps(zmm4_13, zmm4_13, 0))
                            zmm0_16 = zmm3_9
                            zmm3_9 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0xb1)
                            zmm6_5 = _mm_mul_ps(zmm6_5, var_4e8_1)
                            zmm2_13 = __mulps_xmmps_memps(zmm2_13, data_143f2b850)
                            zmm5_9 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xff)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm5_9)
                            zmm11_2 = _mm_mul_ps(zmm11_2, var_4e8_1)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm0_16)
                            zmm1_13 = _mm_mul_ps(zmm1_13, _mm_shuffle_ps(zmm4_13, zmm4_13, 0x55))
                            zmm3_9 = _mm_mul_ps(zmm3_9, _mm_shuffle_ps(zmm4_13, zmm4_13, 0xaa))
                            zmm1_13 = __mulps_xmmps_memps(zmm1_13, data_143f2b840)
                            zmm0_16 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xc9)
                            zmm3_9 = __mulps_xmmps_memps(zmm3_9, data_143f2b830)
                            float var_368_3[0x4] = zmm11_2
                            zmm2_13 = _mm_add_ps(_mm_add_ps(zmm2_13, zmm1_13), zmm3_9)
                            zmm3_9 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xd2)
                            var_388 = zmm2_13
                            zmm2_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xd2)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm2_13)
                            zmm4_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xc9)
                            zmm3_9 = _mm_sub_ps(_mm_mul_ps(zmm3_9, zmm4_13), zmm0_16)
                            zmm3_9 = _mm_add_ps(zmm3_9, zmm3_9)
                            zmm1_13 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0xd2)
                            zmm0_16 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0xc9)
                            zmm1_13 = _mm_mul_ps(zmm1_13, zmm4_13)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm2_13)
                            zmm3_9 = _mm_mul_ps(zmm3_9, zmm5_9)
                            float var_378_3[0x4] = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm1_13, zmm0_16), 
                                    _mm_add_ps(zmm3_9, zmm6_5)), 
                                var_4f8_1)
                        else
                            zmm1_13 = var_508
                            zmm3_9 = _mm_add_ps(zmm1_13, zmm1_13)
                            zmm5_9 = _mm_shuffle_ps(var_4e8_1, var_4e8_1, 0xc9)
                            _mm_mul_ps(zmm11_2, var_4e8_1)
                            zmm0_16 = _mm_shuffle_ps(zmm1_13, zmm1_13, 4)
                            zmm2_13 = _mm_mul_ps(_mm_shuffle_ps(zmm3_9, zmm3_9, 0x29), zmm0_16)
                            zmm4_13 = _mm_mul_ps(zmm3_9, zmm1_13)
                            zmm1_13 = _mm_shuffle_ps(zmm1_13, zmm1_13, 0xff)
                            zmm3_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3_9, zmm3_9, 0x12), zmm1_13)
                            zmm0_16 = _mm_add_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0x1a), 
                                _mm_shuffle_ps(zmm4_13, zmm4_13, 1))
                            float zmm10_2[0x4] = _mm_add_ps(zmm3_9, zmm2_13)
                            zmm2_13 = _mm_sub_ps(zmm2_13, zmm3_9)
                            zmm1_13 = _mm_sub_ps(zmm12_2, zmm0_16)
                            zmm10_2 = _mm_mul_ps(zmm10_2, var_4e8_1)
                            zmm5_9 = _mm_mul_ps(zmm5_9, zmm2_13)
                            zmm1_13 = _mm_and_ps(_mm_mul_ps(zmm1_13, var_4e8_1), zmm15_2)
                            zmm0_16 = _mm_shuffle_ps(zmm5_9, zmm1_13, 0x32)
                            float zmm9_2[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_2, zmm1_13, 0), zmm0_16, 0x82)
                            zmm0_16 = _mm_shuffle_ps(zmm10_2, zmm1_13, 0x31)
                            float zmm7_2[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_9, zmm1_13, 0x10), zmm0_16, 0x88)
                            zmm10_2 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm10_2, zmm5_9, 0x12), zmm1_13, 0xe8)
                            zmm12_2[0].q = var_4f8_1 u>> 0x40
                            float zmm8_2[0x4] = _mm_shuffle_ps(var_4f8_1, zmm12_2, 0xc4)
                            float var_618_1[0x4] = zmm8_2
                            float var_648_1[0x4] = zmm9_2
                            float var_638_1[0x4] = zmm7_2
                            float var_628_1[0x4] = zmm10_2
                            zmm1_13 = *rax_50
                            zmm4_13 = zmm1_13
                            zmm3_9 = _mm_add_ps(zmm1_13, zmm1_13)
                            zmm2_13 = _mm_shuffle_ps(zmm1_13, zmm1_13, 4)
                            zmm1_13 = _mm_shuffle_ps(zmm1_13, zmm1_13, 0xff)
                            zmm4_13 = _mm_mul_ps(zmm4_13, zmm3_9)
                            zmm2_13 = _mm_mul_ps(zmm2_13, _mm_shuffle_ps(zmm3_9, zmm3_9, 0x29))
                            zmm3_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3_9, zmm3_9, 0x12), zmm1_13)
                            zmm1_13 = rax_50[2]
                            zmm0_16 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0x1a)
                            zmm4_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 1)
                            zmm5_9 = _mm_shuffle_ps(zmm1_13, zmm1_13, 0xc9)
                            zmm6_5 = _mm_add_ps(zmm3_9, zmm2_13)
                            zmm2_13 = _mm_sub_ps(zmm2_13, zmm3_9)
                            zmm0_16 = _mm_add_ps(zmm0_16, zmm4_13)
                            zmm6_5 = _mm_mul_ps(zmm6_5, zmm1_13)
                            zmm5_9 = _mm_mul_ps(zmm5_9, zmm2_13)
                            zmm2_13 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm12_2, zmm0_16), zmm1_13), 
                                zmm15_2)
                            zmm3_9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_5, zmm2_13, 0), 
                                _mm_shuffle_ps(zmm5_9, zmm2_13, 0x32), 0x82)
                            zmm4_13 = _mm_shuffle_ps(zmm5_9, zmm2_13, 0x10)
                            zmm1_13 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0xaa)
                            zmm4_13 =
                                _mm_shuffle_ps(zmm4_13, _mm_shuffle_ps(zmm6_5, zmm2_13, 0x31), 0x88)
                            float var_608_1[0x4] = zmm3_9
                            zmm1_13 = _mm_mul_ps(zmm1_13, zmm10_2)
                            zmm6_5 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm6_5, zmm5_9, 0x12), zmm2_13, 0xe8)
                            zmm2_13 = _mm_mul_ps(_mm_shuffle_ps(zmm3_9, zmm3_9, 0x55), zmm7_2)
                            float var_5f8_1[0x4] = zmm4_13
                            float var_5e8_1[0x4] = zmm6_5
                            zmm5_9 = rax_50[1]
                            zmm12_2[0].q = zmm5_9 u>> 0x40
                            zmm5_9 = _mm_shuffle_ps(zmm5_9, zmm12_2, 0xc4)
                            zmm0_16 = _mm_shuffle_ps(zmm3_9, zmm3_9, 0)
                            zmm3_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3_9, zmm3_9, 0xff), zmm8_2)
                            float var_5d8_1[0x4] = zmm5_9
                            zmm2_13 = _mm_add_ps(zmm2_13, _mm_mul_ps(zmm0_16, zmm9_2))
                            zmm0_16 = _mm_mul_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0), zmm9_2)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm1_13)
                            zmm1_13 = _mm_mul_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0xaa), zmm10_2)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm3_9)
                            zmm3_9 = _mm_mul_ps(_mm_shuffle_ps(zmm4_13, zmm4_13, 0x55), zmm7_2)
                            zmm4_13 = _mm_shuffle_ps(zmm4_13, zmm4_13, 0xff)
                            float var_ad8[0x4] = zmm2_13
                            zmm2_13 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0x55)
                            zmm3_9 = _mm_add_ps(zmm3_9, zmm0_16)
                            zmm2_13 = _mm_mul_ps(zmm2_13, zmm7_2)
                            zmm4_13 = _mm_mul_ps(zmm4_13, zmm8_2)
                            zmm0_16 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0)
                            zmm3_9 = _mm_add_ps(zmm3_9, zmm1_13)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm9_2)
                            zmm1_13 = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0xaa), zmm10_2)
                            zmm3_9 = _mm_add_ps(zmm3_9, zmm4_13)
                            zmm6_5 = _mm_shuffle_ps(zmm6_5, zmm6_5, 0xff)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm0_16)
                            zmm6_5 = _mm_mul_ps(zmm6_5, zmm8_2)
                            zmm0_16 = _mm_shuffle_ps(zmm5_9, zmm5_9, 0)
                            float var_ac8_1[0x4] = zmm3_9
                            zmm3_9 = _mm_shuffle_ps(zmm5_9, zmm5_9, 0x55)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm1_13)
                            zmm3_9 = _mm_mul_ps(zmm3_9, zmm7_2)
                            zmm1_13 = _mm_mul_ps(_mm_shuffle_ps(zmm5_9, zmm5_9, 0xaa), zmm10_2)
                            zmm0_16 = _mm_mul_ps(zmm0_16, zmm9_2)
                            zmm2_13 = _mm_add_ps(zmm2_13, zmm6_5)
                            zmm5_9 = _mm_mul_ps(_mm_shuffle_ps(zmm5_9, zmm5_9, 0xff), zmm8_2)
                            zmm3_9 = _mm_add_ps(zmm3_9, zmm0_16)
                            int96_t var_ab8_1 = zmm2_13[0].12
                            int96_t var_aa8_1 =
                                _mm_add_ps(_mm_add_ps(zmm3_9, zmm1_13), zmm5_9)[0].12
                            float zmm11_3[0x4]
                            int128_t zmm12_3
                            float zmm13_3[0x4]
                            int64_t zmm14_2
                            zmm11_3, zmm12_3, zmm13_3, zmm14_2 = sub_1407740e0(&var_ad8, 0x322bcc77)
                            zmm13_3 = _mm_and_ps(_mm_cmpeq_ps(zmm13_3, zmm11_3, 2), 
                                data_143f2b8c0 ^ zmm12_3) ^ data_143f2b8c0
                            void var_990
                            int64_t* rax_54 = sub_14173efa0(&var_ad8, &var_990, 1)
                            float zmm1_14 = zmm13_3[0]
                            float zmm0_18 = zmm13_3[0]
                            zmm13_3[0] = zmm13_3[0] f* *rax_54
                            zmm1_14 = zmm1_14 f* *(rax_54 + 4)
                            zmm0_18 = zmm0_18 f* rax_54[1].d
                            var_ad8[0] = zmm13_3[0]
                            var_ad8[1] = zmm1_14
                            var_ad8[2] = zmm0_18
                            void var_99c
                            int64_t* rax_55 = sub_14173efa0(&var_ad8, &var_99c, 2)
                            float zmm2_14[0x4] = _mm_shuffle_ps(zmm13_3, zmm13_3, 0x55)
                            zmm1_14 = zmm2_14[0]
                            zmm13_3 = _mm_shuffle_ps(zmm13_3, zmm13_3, 0xaa)
                            zmm1_14 = zmm1_14 f* *rax_55
                            float zmm0_19 = zmm2_14[0] f* *(rax_55 + 4)
                            zmm2_14[0] = zmm2_14[0] f* rax_55[1].d
                            var_ac8_1[0] = zmm1_14
                            var_ac8_1[1] = zmm0_19
                            var_ac8_1[2] = zmm2_14[0]
                            zmm2_14 = var_ab8_1.d
                            zmm1_14 = var_ab8_1:4.d * zmm13_3[0]
                            zmm0_19 = var_ab8_1:8.d * zmm13_3[0]
                            zmm2_14[0] = zmm2_14[0] * zmm13_3[0]
                            var_ab8_1:4.d = zmm1_14
                            var_ab8_1:8.d = zmm0_19
                            var_ab8_1.d = zmm2_14[0]
                            sub_14077e4a0(&var_c88, &var_ad8)
                            uint32_t zmm5_10[0x4] = var_c88
                            float zmm6_6[0x4] = data_143f2b8b0
                            float zmm1_15[0x4] = _mm_mul_ps(zmm5_10, zmm5_10)
                            var_cb8_1.d = 0x322bcc77
                            float var_368_2[0x4] = zmm11_3
                            zmm1_15 = _mm_add_ps(zmm1_15, _mm_shuffle_ps(zmm1_15, zmm1_15, 0x4e))
                            float zmm4_14[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_15, zmm1_15, 0x39), zmm1_15)
                            zmm1_15 = _mm_rsqrt_ps(zmm4_14)
                            float zmm3_10[0x4] = _mm_mul_ps(zmm4_14, zmm6_6)
                            float zmm2_15[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_6, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_15, zmm1_15), zmm3_10)), 
                                    zmm1_15), 
                                zmm1_15)
                            zmm6_6 = _mm_sub_ps(zmm6_6, 
                                _mm_mul_ps(_mm_mul_ps(zmm2_15, zmm2_15), zmm3_10))
                            uint32_t zmm0_20[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_14, 2)
                            zmm6_6 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_6, zmm2_15), zmm2_15), 
                                    zmm5_10) ^ data_143f2b8a0, 
                                zmm0_20) ^ data_143f2b8a0
                            var_c88 = zmm6_6
                            var_388 = zmm6_6
                            float var_378_2[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_aa8_1.d, var_aa8_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_aa8_1:4.d, zmm14_2)[0].q)
                    else
                        if (rax_51 != 2)
                            goto label_141aa8b2b
                        
                        sub_140ad7d70(rax_50, &var_388, &var_4d8)
                    
                    sub_1422527c0(*(*(arg1 + 0x218) + (r14_10 << 3)), &var_388)
                
                rsi_8 += 0x20
                rbx_9 = &rbx_9[8]
            while (rsi_8 != r15_10)
        
        sub_141ad4ea0(arg1, &var_508, &var_4d8)
        void var_9f8
        sub_141ad6900(&var_9f8, *(arg1 + 0x121), arg1 + 0x2b8, &var_508, &var_4d8)
        float (* var_ce8_3)[0x4]
        var_ce8_3.d = *(arg1 + 0x1fc)
        sub_142252c50(*(arg1 + 0x1e8), *(arg1 + 0x1f0), *(arg1 + 0x1f4), *(arg1 + 0x1f8), 
            var_ce8_3.d, *(arg1 + 0x200), *(arg1 + 0x204))
        var_ce8_3.d = *(arg1 + 0x130)
        sub_142252c50(*(arg1 + 0x1e8), *(arg1 + 0x124), *(arg1 + 0x128), *(arg1 + 0x12c), 
            var_ce8_3.d, *(arg1 + 0x134), *(arg1 + 0x138))
        result = sub_142253670(*(arg1 + 0x1e8), var_c98, 0x3d088889, data_1439dbe38, &var_9f8)
    
    void* i_2 = *(arg1 + 0x208)
    
    for (void* r15_13 = (sx.q(*(arg1 + 0x210)) << 5) + i_2; i_2 != r15_13; i_2 += 0x20)
        int64_t r14_11 = sx.q(*(i_2 + 0x14))
        result = *(arg1 + 0x238)
        
        if ((*((r14_11 << 6) + result + 0x30) & 1) != 0)
            float var_3e8[0x4]
            sub_14224f610(*(*(arg1 + 0x218) + (r14_11 << 3)), &var_3e8)
            float var_3d8[0x4]
            float var_3c8[0x4]
            float zmm2_17[0x4]
            float zmm3_11[0x4]
            float zmm4_15[0x4]
            float zmm5_11[0x4]
            
            if ((*(arg1 + 0x123) & 0x10) != 0)
                int64_t rax_62 = *(arg1 + 0x238)
                int64_t rbx_11 = r14_11 << 6
                
                if (*(rbx_11 + rax_62 + 0x1c) == 2 && *(rbx_11 + rax_62 + 0x20) == 2
                        && *(rbx_11 + rax_62 + 0x24) == 2)
                    int64_t rcx_88 = sx.q(*(i_2 + 0x18))
                    zmm1_1 = data_143dbb0d0
                    float var_2f8[0x4] = data_143dbb0c0
                    float var_2d8_1[0x4] = data_143dbb0e0
                    float var_2e8_1[0x4] = zmm1_1
                    
                    if (rcx_88.d != 0xffffffff)
                        void var_148
                        int128_t* rax_64 =
                            sub_14224f610(*(*(arg1 + 0x218) + (rcx_88 << 3)), &var_148)
                        var_2f8 = *rax_64
                        var_2e8_1 = rax_64[1]
                        var_2d8_1 = rax_64[2]
                    
                    float var_298[0x4]
                    float zmm14_3[0x4]
                    zmm10_1, zmm14_3 = sub_140ad7d70(&var_3e8, &var_298, &var_2f8)
                    int64_t rax_65 = *(arg1 + 0x238)
                    float var_288[0x4]
                    var_288[0] = var_288[0] * var_288[0]
                    zmm2_17 = _mm_shuffle_ps(var_288, var_288, 0x55)
                    zmm3_11 = *(rbx_11 + rax_65 + 0x2c)
                    zmm2_17[0] = zmm2_17[0] * zmm2_17[0]
                    zmm1_1 = _mm_shuffle_ps(var_288, var_288, 0xaa)
                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                    zmm2_17[0] = zmm2_17[0] + var_288[0]
                    zmm2_17[0] = zmm2_17[0] + zmm1_1[0]
                    zmm5_11 = _mm_sqrt_ss(0, zmm2_17[0])
                    zmm5_11[0] = zmm5_11[0] - zmm3_11[0]
                    
                    if (not(_mm_and_ps(zmm5_11, zmm10_1)[0] <= 9.99999975e-05f)
                            && not(zmm5_11[0] <= zmm3_11[0]))
                        if (zmm5_11[0] <= 9.99999975e-05f)
                            zmm3_11 = zmm14_3
                        label_141aa8e05:
                            zmm1_1 = data_143f2b8d0
                            zmm2_17 = zmm3_11
                            zmm13_1 = _mm_unpacklo_ps(zmm3_11, zmm3_11[0].q)
                            zmm3_11 = var_2f8
                            float var_278[0x4]
                            zmm0_1 = _mm_min_ps(var_278, var_2d8_1)
                            zmm13_1 = _mm_unpacklo_ps(zmm13_1, 
                                _mm_unpacklo_ps(zmm2_17, zmm14_3[0].q)[0].q)
                            zmm0_1 = _mm_cmpeq_ps(zmm0_1, zmm1_1, 1)
                            zmm13_1 = _mm_mul_ps(zmm13_1, var_288)
                            float var_c38_3[0x4] = zmm1_1
                            var_288 = zmm13_1
                            
                            if (_mm_movemask_ps(zmm0_1) == 0)
                                zmm2_17 = var_298
                                zmm0_1 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0)
                                zmm6_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_17, zmm2_17, 0x1b), zmm0_1)
                                zmm1_1 = _mm_shuffle_ps(zmm2_17, zmm2_17, 0x4e)
                                zmm13_1 = _mm_mul_ps(zmm13_1, var_2d8_1)
                                zmm6_1 = __mulps_xmmps_memps(zmm6_1, data_143f2b850)
                                zmm4_15 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0xff)
                                zmm15_1 = _mm_mul_ps(var_278, var_2d8_1)
                                zmm0_1 = _mm_mul_ps(zmm4_15, zmm2_17)
                                zmm2_17 = _mm_shuffle_ps(zmm2_17, zmm2_17, 0xb1)
                                zmm6_1 = _mm_add_ps(zmm6_1, zmm0_1)
                                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm3_11, zmm3_11, 0x55))
                                zmm2_17 =
                                    _mm_mul_ps(zmm2_17, _mm_shuffle_ps(zmm3_11, zmm3_11, 0xaa))
                                zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
                                zmm0_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
                                zmm2_17 = __mulps_xmmps_memps(zmm2_17, data_143f2b830)
                                zmm6_1 = _mm_add_ps(zmm6_1, zmm1_1)
                                zmm1_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xd2)
                                zmm6_1 = _mm_add_ps(zmm6_1, zmm2_17)
                                zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0xd2)
                                zmm0_1 = _mm_mul_ps(zmm0_1, zmm2_17)
                                zmm3_11 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0xc9)
                                zmm1_1 = _mm_sub_ps(_mm_mul_ps(zmm1_1, zmm3_11), zmm0_1)
                                zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                                zmm4_15 = _mm_mul_ps(zmm4_15, zmm1_1)
                                zmm5_11 = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2), zmm3_11)
                                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                                zmm4_15 = _mm_add_ps(zmm4_15, zmm13_1)
                                zmm5_11 = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(zmm5_11, _mm_mul_ps(zmm0_1, zmm2_17)), 
                                        zmm4_15), 
                                    var_2e8_1)
                            else
                                zmm11_1 = data_143f2b810
                                zmm1_1 = _mm_add_ps(zmm3_11, zmm3_11)
                                zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 4)
                                zmm5_11 = _mm_shuffle_ps(var_2d8_1, var_2d8_1, 0xc9)
                                _mm_mul_ps(var_278, var_2d8_1)
                                zmm2_17 = _mm_mul_ps(zmm2_17, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                                zmm4_15 = _mm_mul_ps(zmm1_1, zmm3_11)
                                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                                zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xff), zmm1_1)
                                zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                                    _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                                zmm12_1 = _mm_add_ps(zmm3_11, zmm2_17)
                                zmm2_17 = _mm_sub_ps(zmm2_17, zmm3_11)
                                zmm3_11 = var_298
                                zmm1_1 = _mm_sub_ps(zmm11_1, zmm0_1)
                                zmm12_1 = _mm_mul_ps(zmm12_1, var_2d8_1)
                                zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_17)
                                zmm1_1 = _mm_mul_ps(zmm1_1, var_2d8_1)
                                zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 4)
                                zmm1_1 = __andps_xmmxud_memxud(zmm1_1, data_143f2b820)
                                zmm0_1 = _mm_shuffle_ps(zmm5_11, zmm1_1, 0x32)
                                zmm10_1 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zmm12_1, zmm1_1, 0), zmm0_1, 0x82)
                                zmm0_1 = _mm_shuffle_ps(zmm12_1, zmm1_1, 0x31)
                                zmm8_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_1, 0x10), 
                                    zmm0_1, 0x88)
                                zmm12_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12_1, zmm5_11, 0x12), 
                                    zmm1_1, 0xe8)
                                zmm1_1 = _mm_add_ps(zmm3_11, zmm3_11)
                                zmm11_1[0].q = var_2e8_1 u>> 0x40
                                zmm9_1 = _mm_shuffle_ps(var_2e8_1, zmm11_1, 0xc4)
                                float var_5c8_1[0x4] = zmm10_1
                                float var_5b8_1[0x4] = zmm8_1
                                float var_5a8_1[0x4] = zmm12_1
                                float var_598_1[0x4] = zmm9_1
                                zmm4_15 = _mm_mul_ps(zmm1_1, zmm3_11)
                                zmm2_17 = _mm_mul_ps(zmm2_17, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                                zmm5_11 = _mm_shuffle_ps(var_278, var_278, 0xc9)
                                zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xff), zmm1_1)
                                zmm7_1 = _mm_add_ps(zmm3_11, zmm2_17)
                                zmm2_17 = _mm_sub_ps(zmm2_17, zmm3_11)
                                zmm7_1 = _mm_mul_ps(zmm7_1, var_278)
                                zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                                    _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                                zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_17)
                                zmm1_1 = __andps_xmmxud_memxud(
                                    __mulps_xmmps_memps(_mm_sub_ps(zmm11_1, zmm0_1), var_278), 
                                    data_143f2b820)
                                zmm3_11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7_1, zmm1_1, 0), 
                                    _mm_shuffle_ps(zmm5_11, zmm1_1, 0x32), 0x82)
                                zmm0_1 = _mm_shuffle_ps(zmm7_1, zmm1_1, 0x31)
                                zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0x55)
                                zmm4_15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_1, 0x10), 
                                    zmm0_1, 0x88)
                                float var_588_1[0x4] = zmm3_11
                                zmm2_17 = _mm_mul_ps(zmm2_17, zmm8_1)
                                zmm11_1[0].q = zmm13_1 u>> 0x40
                                zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm11_1, 0xc4)
                                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0), zmm10_1)
                                zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7_1, zmm5_11, 0x12), 
                                    zmm1_1, 0xe8)
                                zmm1_1 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0xaa)
                                zmm2_17 = _mm_add_ps(zmm2_17, zmm0_1)
                                zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xff), zmm9_1)
                                zmm1_1 = _mm_mul_ps(zmm1_1, zmm12_1)
                                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0), zmm10_1)
                                zmm2_17 = _mm_add_ps(zmm2_17, zmm1_1)
                                float var_578_1[0x4] = zmm4_15
                                float var_568_1[0x4] = zmm7_1
                                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xaa), zmm12_1)
                                zmm2_17 = _mm_add_ps(zmm2_17, zmm3_11)
                                float var_558_1[0x4] = zmm13_1
                                zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x55), zmm8_1)
                                float var_a38[0x4] = zmm2_17
                                zmm2_17 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0x55), zmm8_1)
                                zmm3_11 = _mm_add_ps(zmm3_11, zmm0_1)
                                zmm4_15 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xff), zmm9_1)
                                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0), zmm10_1)
                                zmm3_11 = _mm_add_ps(zmm3_11, zmm1_1)
                                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa), zmm12_1)
                                zmm2_17 = _mm_add_ps(zmm2_17, zmm0_1)
                                zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                                zmm3_11 = _mm_add_ps(zmm3_11, zmm4_15)
                                zmm7_1 = _mm_mul_ps(zmm7_1, zmm9_1)
                                zmm0_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0)
                                zmm2_17 = _mm_add_ps(zmm2_17, zmm1_1)
                                zmm0_1 = _mm_mul_ps(zmm0_1, zmm10_1)
                                float var_a28_1[0x4] = zmm3_11
                                zmm1_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa)
                                zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x55), zmm8_1)
                                zmm2_17 = _mm_add_ps(zmm2_17, zmm7_1)
                                zmm1_1 = _mm_mul_ps(zmm1_1, zmm12_1)
                                zmm13_1 = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
                                zmm3_11 = _mm_add_ps(zmm3_11, zmm0_1)
                                zmm13_1 = _mm_mul_ps(zmm13_1, zmm9_1)
                                int96_t var_a08_1 =
                                    _mm_add_ps(_mm_add_ps(zmm3_11, zmm1_1), zmm13_1)[0].12
                                int64_t zmm14_4
                                zmm11_1, zmm14_4, zmm15_1 = sub_1407740e0(&var_a38, 0x322bcc77)
                                float zmm6_7[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_c38_3, zmm15_1, 2), 
                                    data_143f2b8c0 ^ zmm11_1) ^ data_143f2b8c0
                                void var_9a8
                                int64_t* rax_67 = sub_14173efa0(&var_a38, &var_9a8, 1)
                                float zmm1_18 = zmm6_7[0]
                                float zmm0_23 = zmm6_7[0]
                                zmm6_7[0] = zmm6_7[0] f* *rax_67
                                zmm1_18 = zmm1_18 f* *(rax_67 + 4)
                                zmm0_23 = zmm0_23 f* rax_67[1].d
                                var_a38[0] = zmm6_7[0]
                                var_a38[1] = zmm1_18
                                var_a38[2] = zmm0_23
                                void var_960
                                float* rax_68 = sub_14173efa0(&var_a38, &var_960, 2)
                                float zmm2_18[0x4] = _mm_shuffle_ps(zmm6_7, zmm6_7, 0x55)
                                zmm1_18 = zmm2_18[0] * *rax_68
                                float zmm0_24 = zmm2_18[0] * rax_68[1]
                                zmm2_18[0] = zmm2_18[0] * rax_68[2]
                                var_a28_1[0] = zmm1_18
                                var_a28_1[1] = zmm0_24
                                var_a28_1[2] = zmm2_18[0]
                                void var_984
                                int64_t* rax_69 = sub_14173efa0(&var_a38, &var_984, 3)
                                zmm6_7 = _mm_shuffle_ps(zmm6_7, zmm6_7, 0xaa)
                                zmm1_18 = zmm6_7[0] f* *rax_69
                                float zmm0_25 = zmm6_7[0] f* *(rax_69 + 4)
                                zmm6_7[0] = zmm6_7[0] f* rax_69[1].d
                                zmm2_17[0] = zmm1_18
                                zmm2_17[1] = zmm0_25
                                zmm2_17[2] = zmm6_7[0]
                                sub_14077e4a0(&var_c88, &var_a38)
                                zmm5_11 = var_c88
                                zmm6_1 = data_143f2b8b0
                                float zmm1_19[0x4] = _mm_mul_ps(zmm5_11, zmm5_11)
                                var_cb8_1.d = 0x322bcc77
                                zmm1_19 =
                                    _mm_add_ps(zmm1_19, _mm_shuffle_ps(zmm1_19, zmm1_19, 0x4e))
                                zmm4_15 =
                                    _mm_add_ps(_mm_shuffle_ps(zmm1_19, zmm1_19, 0x39), zmm1_19)
                                zmm1_19 = _mm_rsqrt_ps(zmm4_15)
                                zmm3_11 = _mm_mul_ps(zmm4_15, zmm6_1)
                                float zmm2_19[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_1, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1_19, zmm1_19), zmm3_11)), 
                                        zmm1_19), 
                                    zmm1_19)
                                zmm6_1 = _mm_sub_ps(zmm6_1, 
                                    _mm_mul_ps(_mm_mul_ps(zmm2_19, zmm2_19), zmm3_11))
                                float zmm0_26[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_15, 2)
                                zmm6_1 = _mm_and_ps(
                                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_19), zmm2_19), 
                                        zmm5_11) ^ data_143f2b8a0, 
                                    zmm0_26) ^ data_143f2b8a0
                                zmm5_11 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_a08_1.d, var_a08_1:8.d[0].q), 
                                    _mm_unpacklo_ps(var_a08_1:4.d, zmm14_4)[0].q)
                                var_c88 = zmm6_1
                            
                            var_3e8 = zmm6_1
                            var_3d8 = zmm5_11
                            var_3c8 = zmm15_1
                            sub_142253090(*(*(arg1 + 0x218) + (r14_11 << 3)), &var_3e8)
                        else
                            zmm3_11[0] = zmm3_11[0] / zmm5_11[0]
                            
                            if (not(zmm3_11[0] >= 0.899999976f))
                                goto label_141aa8e05
            
            uint32_t rcx_98 = zx.d(*(arg1 + 0x121))
            
            if (rcx_98 == 0)
            label_141aa9933:
                zmm13_1 = var_3c8
                zmm7_1 = var_3d8
                zmm6_1 = var_3e8
            else if (rcx_98 == 1)
                float var_118[0x3][0x4]
                float (* rax_74)[0x4] = sub_140ad7d70(&var_3e8, &var_118, &var_508)
                zmm6_1 = *rax_74
                zmm7_1 = rax_74[1]
                zmm13_1 = rax_74[2]
            else
                if (rcx_98 != 2)
                    goto label_141aa9933
                
                zmm1_1 = data_143f2b8d0
                float var_c38_4[0x4] = zmm1_1
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_3c8, zmm0), zmm1_1, 1)) == 0)
                    zmm4_15 = var_4d8
                    zmm2_17 = var_3e8
                    zmm0_1 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0)
                    zmm1_1 = _mm_shuffle_ps(zmm2_17, zmm2_17, 0x4e)
                    zmm6_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_17, zmm2_17, 0x1b), zmm0_1)
                    zmm3_11 = _mm_mul_ps(var_3d8, zmm0)
                    zmm5_11 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xff)
                    zmm6_1 = __mulps_xmmps_memps(zmm6_1, data_143f2b850)
                    zmm0_1 = _mm_mul_ps(zmm5_11, zmm2_17)
                    zmm2_17 = _mm_shuffle_ps(zmm2_17, zmm2_17, 0xb1)
                    zmm13_1 = _mm_mul_ps(var_3c8, zmm0)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm0_1)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm4_15, zmm4_15, 0x55))
                    zmm2_17 = _mm_mul_ps(zmm2_17, _mm_shuffle_ps(zmm4_15, zmm4_15, 0xaa))
                    zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
                    zmm0_1 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0xc9)
                    zmm2_17 = __mulps_xmmps_memps(zmm2_17, data_143f2b830)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm1_1)
                    zmm1_1 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0xd2)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm2_17)
                    zmm2_17 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xd2)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm2_17)
                    zmm4_15 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xc9)
                    zmm1_1 = _mm_sub_ps(_mm_mul_ps(zmm1_1, zmm4_15), zmm0_1)
                    zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm5_11 = _mm_mul_ps(zmm5_11, zmm1_1)
                    zmm7_1 = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2), zmm4_15)
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                    zmm5_11 = _mm_add_ps(zmm5_11, zmm3_11)
                    zmm7_1 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm7_1, _mm_mul_ps(zmm0_1, zmm2_17)), zmm5_11), zmm1)
                else
                    zmm3_11 = var_4d8
                    zmm11_1 = data_143f2b810
                    zmm1_1 = _mm_add_ps(zmm3_11, zmm3_11)
                    zmm5_11 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
                    zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 4)
                    _mm_mul_ps(var_3c8, zmm0)
                    zmm2_17 = _mm_mul_ps(zmm2_17, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm4_15 = _mm_mul_ps(zmm1_1, zmm3_11)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xff), zmm1_1)
                    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                        _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                    zmm12_1 = _mm_add_ps(zmm3_11, zmm2_17)
                    zmm2_17 = _mm_sub_ps(zmm2_17, zmm3_11)
                    zmm3_11 = var_3e8
                    zmm1_1 = _mm_sub_ps(zmm11_1, zmm0_1)
                    zmm12_1 = _mm_mul_ps(zmm12_1, zmm0)
                    zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_17)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm0)
                    zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 4)
                    zmm1_1 = __andps_xmmxud_memxud(zmm1_1, data_143f2b820)
                    zmm0_1 = _mm_shuffle_ps(zmm5_11, zmm1_1, 0x32)
                    zmm10_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12_1, zmm1_1, 0), zmm0_1, 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm12_1, zmm1_1, 0x31)
                    zmm8_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_1, 0x10), zmm0_1, 0x88)
                    zmm12_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12_1, zmm5_11, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = _mm_add_ps(zmm3_11, zmm3_11)
                    zmm11_1[0].q = zmm1 u>> 0x40
                    zmm9_1 = _mm_shuffle_ps(zmm1, zmm11_1, 0xc4)
                    zmm5_11 = _mm_shuffle_ps(var_3c8, var_3c8, 0xc9)
                    float var_948_1[0x4] = zmm10_1
                    float var_938_1[0x4] = zmm8_1
                    float var_928_1[0x4] = zmm12_1
                    zmm4_15 = _mm_mul_ps(zmm1_1, zmm3_11)
                    zmm2_17 = _mm_mul_ps(zmm2_17, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xff), zmm1_1)
                    zmm0_1 = _mm_add_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x1a), 
                        _mm_shuffle_ps(zmm4_15, zmm4_15, 1))
                    float var_918_1[0x4] = zmm9_1
                    zmm7_1 = _mm_add_ps(zmm3_11, zmm2_17)
                    zmm2_17 = _mm_sub_ps(zmm2_17, zmm3_11)
                    zmm1_1 = _mm_sub_ps(zmm11_1, zmm0_1)
                    zmm7_1 = _mm_mul_ps(zmm7_1, var_3c8)
                    zmm5_11 = _mm_mul_ps(zmm5_11, zmm2_17)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, var_3c8), data_143f2b820)
                    zmm3_11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7_1, zmm1_1, 0), 
                        _mm_shuffle_ps(zmm5_11, zmm1_1, 0x32), 0x82)
                    zmm0_1 = _mm_shuffle_ps(zmm7_1, zmm1_1, 0x31)
                    zmm2_17 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0x55)
                    zmm4_15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_11, zmm1_1, 0x10), zmm0_1, 0x88)
                    float var_908_1[0x4] = zmm3_11
                    zmm2_17 = _mm_mul_ps(zmm2_17, zmm8_1)
                    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7_1, zmm5_11, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xaa), zmm12_1)
                    zmm11_1[0].q = var_3d8 u>> 0x40
                    zmm5_11 = _mm_shuffle_ps(var_3d8, zmm11_1, 0xc4)
                    zmm0_1 = _mm_shuffle_ps(zmm3_11, zmm3_11, 0)
                    zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm3_11, zmm3_11, 0xff), zmm9_1)
                    float var_8f8_1[0x4] = zmm4_15
                    float var_8d8_1[0x4] = zmm5_11
                    float var_8e8_1[0x4] = zmm7_1
                    zmm2_17 = _mm_add_ps(zmm2_17, _mm_mul_ps(zmm0_1, zmm10_1))
                    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0), zmm10_1)
                    zmm2_17 = _mm_add_ps(zmm2_17, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0xaa), zmm12_1)
                    zmm2_17 = _mm_add_ps(zmm2_17, zmm3_11)
                    zmm3_11 = _mm_mul_ps(_mm_shuffle_ps(zmm4_15, zmm4_15, 0x55), zmm8_1)
                    zmm4_15 = _mm_shuffle_ps(zmm4_15, zmm4_15, 0xff)
                    float var_a78[0x4] = zmm2_17
                    zmm2_17 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
                    zmm3_11 = _mm_add_ps(zmm3_11, zmm0_1)
                    zmm2_17 = _mm_mul_ps(zmm2_17, zmm8_1)
                    zmm4_15 = _mm_mul_ps(zmm4_15, zmm9_1)
                    zmm0_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0)
                    zmm3_11 = _mm_add_ps(zmm3_11, zmm1_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm10_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa), zmm12_1)
                    zmm3_11 = _mm_add_ps(zmm3_11, zmm4_15)
                    zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                    zmm2_17 = _mm_add_ps(zmm2_17, zmm0_1)
                    zmm7_1 = _mm_mul_ps(zmm7_1, zmm9_1)
                    zmm0_1 = _mm_shuffle_ps(zmm5_11, zmm5_11, 0)
                    float var_a68_1[0x4] = zmm3_11
                    zmm3_11 = _mm_shuffle_ps(zmm5_11, zmm5_11, 0x55)
                    zmm2_17 = _mm_add_ps(zmm2_17, zmm1_1)
                    zmm3_11 = _mm_mul_ps(zmm3_11, zmm8_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_11, zmm5_11, 0xaa), zmm12_1)
                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm10_1)
                    zmm2_17 = _mm_add_ps(zmm2_17, zmm7_1)
                    zmm5_11 = _mm_mul_ps(_mm_shuffle_ps(zmm5_11, zmm5_11, 0xff), zmm9_1)
                    int96_t var_a48_1 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_11, zmm0_1), zmm1_1), zmm5_11)[0].12
                    int64_t zmm14_5
                    zmm11_1, zmm13_1, zmm14_5 = sub_1407740e0(&var_a78, 0x322bcc77)
                    float zmm6_8[0x4] =
                        _mm_and_ps(_mm_cmpeq_ps(var_c38_4, zmm13_1, 2), data_143f2b8c0 ^ zmm11_1)
                        ^ data_143f2b8c0
                    void var_978
                    int64_t* rax_71 = sub_14173efa0(&var_a78, &var_978, 1)
                    float zmm1_20 = zmm6_8[0]
                    float zmm0_28 = zmm6_8[0]
                    zmm6_8[0] = zmm6_8[0] f* *rax_71
                    zmm1_20 = zmm1_20 f* *(rax_71 + 4)
                    zmm0_28 = zmm0_28 f* rax_71[1].d
                    var_a78[0] = zmm6_8[0]
                    var_a78[1] = zmm1_20
                    var_a78[2] = zmm0_28
                    void var_96c
                    float* rax_72 = sub_14173efa0(&var_a78, &var_96c, 2)
                    float zmm2_20[0x4] = _mm_shuffle_ps(zmm6_8, zmm6_8, 0x55)
                    zmm1_20 = zmm2_20[0] * *rax_72
                    float zmm0_29 = zmm2_20[0] * rax_72[1]
                    zmm2_20[0] = zmm2_20[0] * rax_72[2]
                    var_a68_1[0] = zmm1_20
                    var_a68_1[1] = zmm0_29
                    var_a68_1[2] = zmm2_20[0]
                    void var_9b4
                    int64_t* rax_73 = sub_14173efa0(&var_a78, &var_9b4, 3)
                    zmm6_8 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0xaa)
                    zmm1_20 = zmm6_8[0] f* *rax_73
                    float zmm0_30 = zmm6_8[0] f* *(rax_73 + 4)
                    zmm6_8[0] = zmm6_8[0] f* rax_73[1].d
                    zmm2_17[0] = zmm1_20
                    zmm2_17[1] = zmm0_30
                    zmm2_17[2] = zmm6_8[0]
                    sub_14077e4a0(&var_c68, &var_a78)
                    uint32_t zmm5_12[0x4] = var_c68
                    zmm6_1 = data_143f2b8b0
                    zmm1_1 = _mm_mul_ps(zmm5_12, zmm5_12)
                    var_cb8_1.d = 0x322bcc77
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    float zmm4_16[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_16)
                    float zmm3_12[0x4] = _mm_mul_ps(zmm4_16, zmm6_1)
                    float zmm2_21[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_12)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm6_1 = _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2_21, zmm2_21), zmm3_12))
                    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_16, 2)
                    zmm6_1 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_1, zmm2_21), zmm2_21), zmm5_12)
                            ^ data_143f2b8a0, 
                        zmm0_1) ^ data_143f2b8a0
                    zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_a48_1.d, var_a48_1:8.d[0].q), 
                        _mm_unpacklo_ps(var_a48_1:4.d, zmm14_5)[0].q)
                    var_c68 = zmm6_1
            
            int32_t rax_75 = *(i_2 + 0x10)
            int64_t rbx_12 = sx.q(r12[1].d)
            int32_t rax_76 = (rbx_12 + 1).d
            r12[1].d = rax_76
            
            if (rax_76 s> *(r12 + 0xc))
                sub_1405c4fe0(r12)
            
            result = *r12
            int64_t rcx_108 = rbx_12 << 6
            *(rcx_108 + result) = rax_75.o
            *(rcx_108 + result + 0x10) = zmm6_1
            *(rcx_108 + result + 0x20) = zmm7_1
            *(rcx_108 + result + 0x30) = zmm13_1
    
    *(arg1 + 0x140) = var_508
    *(arg1 + 0x150) = var_4f8_1
    *(arg1 + 0x160) = var_4e8_1

__security_check_cookie(rax_1 ^ &var_d08)
return result
