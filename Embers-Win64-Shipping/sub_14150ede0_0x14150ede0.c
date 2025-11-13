// 函数: sub_14150ede0
// 地址: 0x14150ede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_df8
int64_t rax_1 = __security_cookie ^ &var_df8
int32_t var_d84 = 1
int32_t r8 = 0
*arg6 = data_14399f6e0
arg6[1] = data_14399f6f0
arg6[2] = data_14399f700
arg6[3] = data_14399f710
*arg8 = 1
int32_t rcx = 0
int64_t* r9_1 = *(arg1 + 8) + 0xee8
int32_t r11 = r9_1[5].d
void* r10 = &r9_1[2]
int32_t var_d88 = 0
void* var_d80 = r10
int32_t var_d78 = 0xffffffff
int64_t var_d74 = 0

if (r11 != 0)
    void* rax_3 = *(r10 + 0x10)
    
    if (rax_3 != 0)
        r10 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r10
    
    if (rdx_2 != 0)
    label_14150eef9:
        int32_t rax_10 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_d84_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_d74.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_d74.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_d74:4.d = r8
            var_d88 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10 + (rdx_3 << 2) + 4)
            var_d78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14150eef9
        
        var_d74.d = r11

int128_t zmm1 = var_d78.o
int64_t* var_cb8 = r9_1
uint64_t result = zmm1.q u>> 0x20
int128_t var_cb0 = var_d88.o
int128_t var_ca0 = zmm1

if (result.d s< r11)
    int32_t rcx_2 = var_ca0:4.d
    uint32_t zmm6[0x4] = 0x3727c5ac
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    while (true)
        void* rdi_1 = *(*r9_1 + sx.q(rcx_2) * 0x30 + 0x20)
        
        if ((*(arg1 + 0x38) & 0x10000000) != 0)
            void* rax_16 = *(rdi_1 + 0x20)
            
            if (*(rax_16 + 0x13c) == 0 && _finite(_mm_cvtps_pd((*(rax_16 + 0x40)).q).q) != 0
                    && _finite(_mm_cvtps_pd((*(rax_16 + 0x50)).q).q) != 0
                    && _finite(_mm_cvtps_pd((*(rax_16 + 0x60))[0].q).q) != 0)
                void* rax_20 = *(rdi_1 + 0x20)
                int128_t zmm0 = *(rax_20 + 0x30)
                zmm0.d = zmm0.d f* zmm0.d
                
                if (zmm0.d f>= zmm6[0])
                label_14150f016:
                    char rax_21
                    
                    if ((*(rax_20 + 0x138) & 4) != 0)
                        rax_21 = sub_14122cc00(rdi_1)
                    
                    if (((*(rax_20 + 0x138) & 4) == 0 || rax_21 == 0)
                            && sub_14123dc60(rdi_1, arg3) != 0)
                        *arg8 = *(*(rdi_1 + 0x20) + 0x139) & 1
                        char rax_24
                        uint128_t zmm9_1
                        float zmm10_1[0x4]
                        rax_24, zmm6, zmm9_1, zmm10_1 = sub_14121f000(arg1, rdi_1)
                        
                        if (rax_24 != 0)
                            uint128_t var_78_1 = zmm9_1
                            float var_88_1[0x4] = zmm10_1
                            void** var_9e8
                            sub_141475910(&var_9e8)
                            int64_t* rcx_11 = *(rdi_1 + 0x20)
                            uint128_t zmm3_1 = *(arg3 + 0x500)
                            float zmm4_1 = *(arg3 + 0x520)
                            int128_t zmm14 = *(arg3 + 0x508)
                            zmm7 = rcx_11[8].d
                            zmm8 = rcx_11[0xa].d
                            zmm9_1 = rcx_11[0xc].d
                            zmm10_1 = *(arg3 + 0x518)
                            int128_t zmm15 = *(arg3 + 0x528)
                            int128_t zmm12 = *(arg3 + 0x504)
                            zmm6 = *(arg3 + 0x514)
                            int128_t zmm13 = *(arg3 + 0x524)
                            uint32_t zmm11[0x4] = *(arg3 + 0x510)
                            zmm8[0] = zmm8[0] * zmm8[0]
                            uint128_t zmm0_1
                            zmm0_1.d = zmm7.d f* zmm7.d
                            uint128_t zmm1_1
                            zmm1_1.d = zmm9_1.d f* zmm9_1.d
                            zmm8[0] = zmm8[0] f+ zmm0_1.d
                            int32_t var_db4_1 = zmm3_1.d
                            float var_db0_1 = zmm4_1
                            zmm8[0] = zmm8[0] f+ zmm1_1.d
                            uint64_t var_d68
                            
                            if (not(zmm8[0] == 1f))
                                if (zmm8[0] >= 9.99999994e-09f)
                                    zmm0_1 = zmm8
                                    uint128_t zmm5_1 = _mm_rsqrt_ss(zmm0_1.d, zmm0_1.d)
                                    float zmm2_1[0x4] = 0x3f000000
                                    zmm3_1.d = zmm0_1.d f* 0.5f
                                    zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                    zmm1_1.d = zmm3_1.d f* zmm0_1.d
                                    zmm2_1[0] = 0.5f f- zmm1_1.d
                                    zmm0_1.d = zmm5_1.d f* zmm2_1[0]
                                    zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                    zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                    zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                    zmm4_1 = 0.5f f- zmm3_1.d
                                    zmm3_1 = var_db4_1
                                    zmm0_1.d = zmm5_1.d f* zmm4_1
                                    zmm4_1 = var_db0_1
                                    zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                    var_d68.d = zmm5_1.d
                                    zmm7.d = zmm7.d f* zmm5_1.d
                                    zmm8[0] = zmm8[0] f* zmm5_1.d
                                    zmm9_1.d = zmm9_1.d f* zmm5_1.d
                                else
                                    zmm7 = data_143dbb1f8
                                    zmm8 = data_143dbb1fc
                                    zmm9_1 = data_143dbb200
                            
                            zmm0_1.d = float.s(arg4[1])
                            zmm6[0] = zmm6[0] f* zmm8[0]
                            zmm10_1[0] = zmm10_1[0] * zmm8[0]
                            zmm11[0] = zmm11[0] f* zmm8[0]
                            zmm12.d = zmm12.d f* zmm7.d
                            zmm13.d = zmm13.d f* zmm9_1.d
                            zmm6[0] = zmm6[0] f+ zmm12.d
                            zmm14.d = zmm14.d f* zmm7.d
                            zmm15.d = zmm15.d f* zmm9_1.d
                            zmm10_1[0] = zmm10_1[0] f+ zmm14.d
                            zmm3_1.d = zmm3_1.d f* zmm7.d
                            zmm6[0] = zmm6[0] f+ zmm13.d
                            zmm11[0] = zmm11[0] f+ zmm3_1.d
                            int32_t var_da8 = zmm7.d
                            zmm10_1[0] = zmm10_1[0] f+ zmm15.d
                            float var_da4_1 = zmm8[0]
                            int32_t var_da0_1 = zmm9_1.d
                            zmm6 = _mm_and_ps(zmm6, 0x7fffffff)
                            zmm6[0] = zmm6[0] f* zmm0_1.d
                            zmm0_1.d = float.s(arg4[2])
                            zmm11[0] = zmm11[0] f+ zmm4_1 f* zmm9_1.d
                            zmm10_1 = _mm_and_ps(zmm10_1, 0x7fffffff)
                            zmm10_1[0] = zmm10_1[0] f* zmm0_1.d
                            zmm0_1.d = float.s(*arg4)
                            zmm6 = _mm_max_ss(zmm6[0], zmm10_1[0])
                            zmm11 = _mm_and_ps(zmm11, 0x7fffffff)
                            zmm11[0] = zmm11[0] f* zmm0_1.d
                            zmm6 = _mm_max_ss(zmm6[0], zmm11[0])
                            zmm6[0] = zmm6[0] f* data_1439b72b8
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(int.d(zmm6[0]) + 0x1f)
                            int32_t rax_30 = data_1439c7a78
                            int32_t r14_2 = ((temp2_1 & 0x1f) + temp3_1) & 0xffffffe0
                            int32_t var_d58_1 = r14_2
                            int32_t r13_1 = r14_2
                            int32_t var_d54_1 = r14_2
                            
                            if (r14_2 u> rax_30)
                                if (r14_2 u<= rax_30)
                                    rax_30 = r14_2
                                
                                r14_2 = 0x20
                                
                                if (rax_30 u>= 0x20)
                                    r14_2 = rax_30
                                
                                var_d58_1 = r14_2
                                r13_1 = r14_2
                                int32_t var_d54_2 = r14_2
                            
                            int32_t rax_31 = *(arg3 + 0x614)
                            uint128_t var_b88_1 = data_142d3f660
                            int64_t var_dc8_1 = 0
                            var_d68 = *(arg3 + 0x60c)
                            int64_t var_ae8_1 = 0
                            int32_t var_ad8_1 = 0
                            int64_t var_a48_1 = 0
                            int32_t var_a38_1 = 0
                            char var_a08_1 = 0
                            int16_t var_9f8_1 = 0
                            int32_t var_dd0_1 = arg5.d
                            int128_t var_b68
                            __builtin_memcpy(&var_b68, 
                                "\x00\x00\x00\x00\x00\x00\x00\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                            "00\x00\x4a", 
                                0x14)
                            int32_t var_b54_1 = 0
                            int32_t var_ad4_1 = 6
                            int32_t var_a34_1 = 8
                            int32_t var_a04_1 = 0xffffffff
                            int32_t var_a00_1 = 0x3f800000
                            int32_t var_d60_1 = rax_31
                            int32_t var_d98
                            (*(*rcx_11 + 0xc8))(zx.o(0), &var_d98, arg3, &var_d68, 0, var_dd0_1, 
                                var_dc8_1)
                            int32_t var_d8c
                            zmm0_1 = var_d8c
                            var_d68.d = zmm0_1.d
                            zmm0_1.d = zmm0_1.d f* 0.577350259f
                            int32_t var_d94
                            uint64_t var_c18 = (_mm_unpacklo_ps(var_d98 ^ 0x80000000, 
                                (var_d94 ^ 0x80000000)[0].q)).q
                            int32_t var_db4_2 = zmm0_1.d
                            int32_t var_c68_1 = zmm0_1.d
                            int32_t var_d90
                            int32_t var_c10_1 = (var_d90 ^ 0x80000000).d
                            void var_d50
                            int32_t* rax_34 = sub_140adf3c0(&var_da8, &var_d50)
                            float zmm1_2[0x4] = rax_34[2]
                            zmm1_2[0] = zmm1_2[0] * 0.0174532924f
                            float zmm0_3[0x4]
                            int32_t zmm6_1
                            int128_t zmm10_2
                            zmm0_3, zmm6_1, zmm10_2 = __libm_sse2_sincosf_(zmm1_2)
                            float zmm1_3[0x4] = *rax_34
                            var_d88.o = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
                            zmm1_3[0] = zmm1_3[0] f* zmm6_1
                            int32_t var_d28_1 = 0
                            float var_db0_2 = (zmm0_3 ^ zmm10_2)[0]
                            int64_t var_d1c_1 = 0
                            int32_t var_d0c_1 = 0
                            float zmm0_4[0x4]
                            int32_t zmm6_2
                            int512_t zmm8_1
                            int128_t zmm10_3
                            int512_t zmm12_1
                            int512_t zmm13_1
                            zmm0_4, zmm6_2, zmm8_1, zmm10_3, zmm12_1, zmm13_1 =
                                __libm_sse2_sincosf_(zmm1_3)
                            zmm12_1.o = data_142d4cc20
                            _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
                            var_cb8:4.d = 0
                            zmm8_1.o = zmm0_4
                            var_cb0:4.d = 0
                            var_ca0:0xc.d = 0
                            int32_t var_c8c_1 = 0
                            float zmm1_4[0x4] = rax_34[1]
                            zmm13_1.o = data_142d3f660
                            zmm1_4[0] = zmm1_4[0] f* zmm6_2
                            float zmm0_5[0x4]
                            float zmm7_2[0x4]
                            float zmm8_2[0x4]
                            float zmm9_3[0x4]
                            float zmm10_4[0x4]
                            float zmm12_2[0x4]
                            float zmm13_2[0x4]
                            int32_t zmm15_2
                            zmm0_5, zmm7_2, zmm8_2, zmm9_3, zmm10_4, zmm12_2, zmm13_2, zmm15_2 =
                                __libm_sse2_sincosf_(zmm1_4)
                            float zmm6_3[0x4] = var_cb8.o
                            float zmm5_2[0x4] = var_ca0
                            float zmm1_5[0x4] = zmm0_5 ^ zmm10_4
                            zmm10_4 = data_142d4cc30
                            float zmm3_2[0x4] = zmm0_5
                            int64_t var_c50_1 = 0
                            zmm5_2[0] = zmm8_2[0]
                            float zmm4_2[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 1)
                            zmm6_3[0] = zmm9_3[0]
                            float var_c58[0x4]
                            var_c58[0] = zmm4_2[0]
                            zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xd2)
                            float zmm2_2[0x4] = _mm_shuffle_ps(var_c58, var_c58, 0xe1)
                            zmm6_3[0] = zmm7_2[0]
                            zmm2_2[0] = zmm1_5[0]
                            zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xc9)
                            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xe1)
                            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                            float zmm14_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                            zmm0_5 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                            zmm1_5 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                            zmm5_2[0] = zmm9_3[0]
                            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm13_2)
                            int64_t var_c40_1 = 0
                            zmm0_5 = _mm_mul_ps(zmm0_5, zmm6_3)
                            zmm14_1 = _mm_mul_ps(zmm14_1, zmm12_2)
                            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                            zmm1_5 = _mm_mul_ps(zmm1_5, zmm5_2)
                            zmm14_1 = _mm_add_ps(zmm14_1, zmm0_5)
                            zmm8_2 = _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0x55), zmm12_2)
                            zmm14_1 = _mm_add_ps(_mm_add_ps(zmm14_1, zmm1_5), zmm2_2)
                            float var_c48[0x4]
                            var_c48[0] = zmm3_2[0]
                            zmm2_2 = _mm_shuffle_ps(var_c48, var_c48, 0xe1)
                            zmm2_2[0] = zmm4_2[0]
                            zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xe1)
                            zmm0_5 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                            zmm3_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                            zmm1_5 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm13_2)
                            zmm0_5 = _mm_mul_ps(zmm0_5, zmm6_3)
                            zmm1_5 = _mm_mul_ps(zmm1_5, zmm5_2)
                            zmm3_2 = _mm_add_ps(_mm_mul_ps(zmm3_2, zmm12_2), zmm0_5)
                            zmm0_5 = _mm_mul_ps(_mm_shuffle_ps(zmm10_4, zmm10_4, 0), zmm6_3)
                            zmm3_2 = _mm_add_ps(zmm3_2, zmm1_5)
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm10_4, zmm10_4, 0xaa), zmm5_2)
                            zmm3_2 = _mm_add_ps(zmm3_2, zmm2_2)
                            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm10_4, zmm10_4, 0x55), zmm12_2)
                            zmm10_4 = _mm_mul_ps(_mm_shuffle_ps(zmm10_4, zmm10_4, 0xff), zmm13_2)
                            zmm2_2 = _mm_add_ps(zmm2_2, zmm0_5)
                            zmm0_5 = _mm_shuffle_ps(zmm13_2, zmm13_2, 0)
                            zmm2_2 = _mm_add_ps(_mm_add_ps(zmm2_2, zmm1_5), zmm10_4)
                            zmm9_3 = data_142d4cc00
                            zmm4_2 = var_d88.o
                            zmm0_5 = _mm_mul_ps(zmm0_5, zmm6_3)
                            zmm6_3 = var_d28_1.o
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa), zmm5_2)
                            zmm5_2 = var_d1c_1:4.o
                            zmm8_2 = _mm_add_ps(zmm8_2, zmm0_5)
                            zmm7_2 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
                            zmm0_5 = _mm_mul_ps(_mm_shuffle_ps(zmm14_1, zmm14_1, 0), zmm9_3)
                            zmm8_2 = _mm_add_ps(zmm8_2, zmm1_5)
                            zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xe1)
                            zmm6_3[0] = zmm4_2[0]
                            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
                            zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xc6)
                            zmm1_5 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
                            zmm6_3[0] = zmm15_2
                            zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xc9)
                            zmm7_2 = _mm_mul_ps(zmm7_2, zmm6_3)
                            float zmm11_1[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0xff), zmm13_2)
                            zmm7_2 = _mm_add_ps(zmm7_2, zmm0_5)
                            zmm14_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xff)
                            zmm5_2[0] = var_db0_2[0]
                            zmm14_1 = _mm_mul_ps(zmm14_1, zmm13_2)
                            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
                            zmm0_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0)
                            zmm8_2 = _mm_add_ps(zmm8_2, zmm11_1)
                            zmm5_2[0] = zmm4_2[0]
                            zmm0_5 = _mm_mul_ps(zmm0_5, zmm9_3)
                            zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                            zmm4_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
                            zmm1_5 = _mm_mul_ps(zmm1_5, zmm5_2)
                            zmm4_2 = _mm_mul_ps(zmm4_2, zmm6_3)
                            var_d28_1.o = zmm6_3
                            zmm7_2 = _mm_add_ps(zmm7_2, zmm1_5)
                            var_d1c_1:4.o = zmm5_2
                            zmm1_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)
                            zmm4_2 = _mm_add_ps(zmm4_2, zmm0_5)
                            zmm1_5 = _mm_mul_ps(zmm1_5, zmm5_2)
                            zmm0_5 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                            zmm7_2 = _mm_add_ps(zmm7_2, zmm14_1)
                            zmm3_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xff), zmm13_2)
                            zmm4_2 = _mm_add_ps(zmm4_2, zmm1_5)
                            zmm0_5 = _mm_mul_ps(zmm0_5, zmm9_3)
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa), zmm5_2)
                            zmm4_2 = _mm_add_ps(zmm4_2, zmm3_2)
                            zmm3_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm13_2)
                            zmm3_2 = _mm_add_ps(_mm_mul_ps(zmm3_2, zmm6_3), zmm0_5)
                            zmm0_5 = _mm_mul_ps(_mm_shuffle_ps(zmm8_2, zmm8_2, 0), zmm9_3)
                            zmm3_2 = _mm_add_ps(zmm3_2, zmm1_5)
                            zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa), zmm5_2)
                            zmm3_2 = _mm_add_ps(zmm3_2, zmm2_2)
                            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm8_2, zmm8_2, 0x55), zmm6_3)
                            zmm8_2 = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xff)
                            zmm2_2 = _mm_add_ps(_mm_add_ps(zmm2_2, zmm0_5), zmm1_5)
                            float var_be8_1[0x4] = zmm3_2
                            zmm1_5 = 0x3f800000
                            char var_dc0_1 = 0
                            zmm1_5[0] = 1f f/ var_d8c
                            var_dc8_1.d = 0
                            var_9f8_1:1.b = 0
                            char var_a08_2 = 0
                            zmm8_2 = _mm_mul_ps(zmm8_2, zmm13_2)
                            int64_t var_bc8_1 = (_mm_unpacklo_ps(0x3f800000, zmm1_5[0].q)).q
                            float var_d48_2 = zmm1_5[0]
                            zmm2_2 = _mm_add_ps(zmm2_2, zmm8_2)
                            zmm0_5 = _mm_unpacklo_ps(0x3f800000, 0)
                            zmm1_5 = zx.o(data_143dbb1f8.q)
                            int64_t var_bbc_1 = zmm0_5.q
                            float var_bc0_1 = var_d48_2
                            float var_bd8_1[0x4] = zmm2_2
                            zmm2_2 = var_db4_2
                            int32_t var_d48_3 = 0
                            var_d80 = (_mm_unpacklo_ps(zmm2_2, zmm2_2[0].q)).q
                            var_d74:4.d = var_d68.d[0]
                            int32_t var_bb4_1 = 0
                            var_d80.d = data_143dbb200
                            zmm0_5 = var_d88.o
                            var_d74.d = var_c68_1
                            zmm0_5[0].q = zmm1_5.q
                            var_d88.o = zmm0_5
                            int32_t var_b98_1 = var_d74:4.d
                            float var_bb0_1[0x4] = zmm0_5
                            int64_t var_ba0_1 = var_d78.q
                            float var_b88_2[0x4] = zmm13_2
                            int32_t var_b78_1 = 0xc9800000
                            int32_t var_b74_1 = 0x47000000
                            float var_c08_1[0x4] = zmm7_2
                            float var_bf8_1[0x4] = zmm4_2
                            sub_1414a3420(&var_9e8, rdi_1, arg3, &var_c18, r14_2, r13_1, 
                                var_dc8_1.d, var_dc0_1)
                            
                            if (var_a48_1 != 0)
                                sub_140a74f90(var_a48_1)
                            
                            if (var_ae8_1 != 0)
                                sub_140a74f90(var_ae8_1)
                            
                            int64_t* rbx_2 = *(*(rdi_1 + 0x20) + 0x128)
                            
                            if (rbx_2 != 0)
                                void* rax_40 = *(arg1 + 8)
                                int64_t r9_4 = *rbx_2
                                var_d68 = 0
                                int64_t* rax_41 =
                                    (*(r9_4 + 0x40))(rbx_2, zx.q(*(rax_40 + 8)), &var_d68, r9_4)
                                int64_t rdx_12 = *rax_41
                                
                                if ((*(rdx_12 + 0x90))(rax_41, rdx_12) != 0)
                                    int32_t var_d28_2 = data_143f02318
                                    int32_t var_d20_1 = r13_1
                                    int32_t var_d24_1 = r14_2
                                    wchar16 const* const var_cf8_1 = u"UnknownTexture2D"
                                    int32_t rax_44 = data_143ed33e0
                                    int16_t var_d00_1 = 0
                                    int128_t var_d38 = data_143f02308
                                    var_d1c_1.d = 0
                                    var_d1c_1:4.d = 1
                                    int32_t var_d14_1 = 0x10000
                                    int16_t var_d10_1 = 1
                                    int32_t var_d0c_2 = 3
                                    int32_t var_d04_1 = 9
                                    int16_t var_cf0_1 = 1
                                    char var_cee_1 = 0
                                    void*** rax_45 =
                                        sub_141188e50(arg2, &var_d38, VolumetricFogLightFunction", 
                                        0)
                                    float zmm2_3[0x4] = data_142d4cc00
                                    float zmm3_3[0x4] = data_142d4cc20
                                    float zmm4_3[0x4] = data_142d4cc30
                                    float zmm0_7[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                                    float zmm1_6[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                                    float var_948[0x4]
                                    zmm0_7 = _mm_mul_ps(zmm0_7, var_948)
                                    *arg7 = rax_45
                                    uint128_t var_928
                                    zmm1_6 = _mm_mul_ps(zmm1_6, var_928)
                                    int32_t var_cfc_1 = 0x3f800000
                                    float zmm12_3[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                                    float zmm13_3[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                                    float zmm14_2[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                                    float var_938[0x4]
                                    zmm12_3 = _mm_mul_ps(zmm12_3, var_938)
                                    zmm13_3 = _mm_mul_ps(zmm13_3, var_938)
                                    zmm14_2 = _mm_mul_ps(zmm14_2, var_938)
                                    zmm12_3 = _mm_add_ps(zmm12_3, zmm0_7)
                                    float var_918[0x4]
                                    zmm2_3 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_918)
                                    zmm0_7 = _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0), var_948)
                                    zmm12_3 = _mm_add_ps(zmm12_3, zmm1_6)
                                    zmm1_6 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa), var_928)
                                    zmm13_3 = _mm_add_ps(zmm13_3, zmm0_7)
                                    zmm3_3 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0xff), var_918)
                                    zmm0_7 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0)
                                    zmm12_3 = _mm_add_ps(zmm12_3, zmm2_3)
                                    zmm0_7 = _mm_mul_ps(zmm0_7, var_948)
                                    zmm13_3 = _mm_add_ps(zmm13_3, zmm1_6)
                                    zmm1_6 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa), var_928)
                                    zmm14_2 = _mm_add_ps(zmm14_2, zmm0_7)
                                    zmm4_3 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0xff), var_918)
                                    zmm13_3 = _mm_add_ps(zmm13_3, zmm3_3)
                                    zmm14_2 = _mm_add_ps(_mm_add_ps(zmm14_2, zmm1_6), zmm4_3)
                                    zmm2_3 = rax_44.o
                                    int32_t var_994
                                    zmm2_3[0] = var_994
                                    *arg6 = zmm12_3
                                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xe1)
                                    int32_t var_990
                                    zmm2_3[0] = var_990[0]
                                    arg6[1] = zmm13_3
                                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                                    int32_t var_98c
                                    zmm2_3[0] = var_98c.d
                                    arg6[2] = zmm14_2
                                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                                    float zmm6_4[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                                    zmm0_7 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                                    zmm1_6 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                                    zmm6_4 = _mm_mul_ps(zmm6_4, var_938)
                                    zmm0_7 = _mm_mul_ps(zmm0_7, var_948)
                                    zmm1_6 = _mm_mul_ps(zmm1_6, var_928)
                                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                                    zmm6_4 = _mm_add_ps(zmm6_4, zmm0_7)
                                    zmm2_3 = _mm_mul_ps(zmm2_3, var_918)
                                    arg6[3] = _mm_add_ps(_mm_add_ps(zmm6_4, zmm1_6), zmm2_3)
                                    int64_t* rax_46 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
                                    int64_t* r14_3 = rax_46
                                    
                                    if (rax_46 == 0)
                                        r14_3 = nullptr
                                    else
                                        sub_14117af20(rax_46)
                                    
                                    memset(r14_3, 0, 0x90)
                                    var_d90.w = 0
                                    var_d90:2.b = 0
                                    int32_t var_d8c_1 = 0xffffffff
                                    var_d98.q = *arg7
                                    *r14_3 = var_d98.o
                                    var_d38.q = r14_3
                                    var_d38:8.q = arg3
                                    var_d28_2.q = rbx_2
                                    var_d20_1.q = var_d58_1.q
                                    var_d1c_1 = rdi_1
                                    void*** rax_49 = sub_14081d830(0xc0, *(arg2 + 8), 1, 0)
                                    void*** rbx_3 = rax_49
                                    
                                    if (rax_49 == 0)
                                        rbx_3 = nullptr
                                    else
                                        int64_t* rax_50
                                        int128_t zmm6_5
                                        rax_50, zmm6_5 = sub_1412ec240(&var_d98, r14_3)
                                        var_d88.o = *rax_50
                                        void var_db8
                                        sub_141992bd0(rbx_3, &var_db8, &var_d88, 1)
                                        *(rbx_3 + 0x40) = var_d38
                                        *rbx_3 = &data_142fbbb90
                                        *(rbx_3 + 0x50) = var_d28_2.o
                                        *(rbx_3 + 0x60) = var_d1c_1:4.o
                                        *(rbx_3 + 0x70) = zmm12_3
                                        *(rbx_3 + 0x80) = zmm13_3
                                        *(rbx_3 + 0x90) = zmm14_2
                                        *(rbx_3 + 0xa0) = zmm6_5
                                        *(rbx_3 + 0xb0) = arg1.o
                                    
                                    sub_1419968d0(arg2, rbx_3)
                            
                            result = sub_141476250(&var_9e8)
                            break
                else
                    zmm0 = *(rax_20 + 0x34)
                    zmm0.d = zmm0.d f* zmm0.d
                    
                    if (zmm0.d f>= zmm6[0])
                        goto label_14150f016
                    
                    zmm0 = *(rax_20 + 0x38)
                    zmm0.d = zmm0.d f* zmm0.d
                    
                    if (not(zmm0.d f< zmm6[0]))
                        goto label_14150f016
        
        var_ca0.d &= not.d(var_cb0:4.d)
        sub_14059bdd0(&var_cb0)
        result = var_cb0:8.q
        rcx_2 = var_ca0:4.d
        
        if (rcx_2 s>= *(result + 0x18))
            break
        
        r9_1 = var_cb8

__security_check_cookie(rax_1 ^ &var_df8)
return result
