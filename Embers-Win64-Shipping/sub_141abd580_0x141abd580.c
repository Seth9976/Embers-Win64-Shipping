// 函数: sub_141abd580
// 地址: 0x141abd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t zmm10
uint128_t var_88 = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
uint128_t zmm12
uint128_t var_a8 = zmm12
uint128_t zmm13
uint128_t var_b8 = zmm13
void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
uint32_t rcx = zx.d(*(arg1 + 0x243))
uint64_t* r12 = arg2
int32_t* var_498
uint64_t var_488
uint32_t var_178[0x4]
void var_118

if (rcx == 1)
    int64_t rsi_1 = 0
    *(arg1 + 0x224) = data_143dbb1f8.q
    *(arg1 + 0x22c) = data_143dbb200
    int32_t* r15_6 = *(arg1 + 0x418)
    uint64_t r14_4 = sx.q(*(arg1 + 0x420)) << 2 u>> 2
    
    if (r15_6 u> &r15_6[sx.q(*(arg1 + 0x420))])
        r14_4 = 0
    
    if (r14_4 != 0)
        int128_t* rdx_34 = arg1 + 0xd0
        
        do
            int64_t rax_83 = sx.q(*r15_6)
            int64_t rcx_77 = rax_83 * 3
            uint64_t* rbx_22 = rax_83 * 0x1f0 + *(arg1 + 0x398)
            int64_t rax_84 = *(arg1 + 0x3f8)
            zmm12 = rbx_22[3].d
            uint128_t zmm1 = zx.o(*(rax_84 + (rcx_77 << 2)))
            zmm13 = rbx_22[2].d
            zmm10 = *(rbx_22 + 0x14)
            int32_t rax_85 = *(rax_84 + (rcx_77 << 2) + 8)
            uint128_t zmm5 = *(rbx_22 + 0x1c)
            var_498 = zmm1.q
            zmm6 = zmm10
            uint128_t zmm3 = var_498.d
            zmm7.d = zmm12.d f* zmm3.d
            zmm11 = rax_85
            zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            uint128_t zmm0
            zmm0.d = zmm12.d f* zmm8.d
            zmm9.d = zmm10.d f* zmm11[0]
            uint128_t zmm4
            zmm4.d = zmm13.d f* zmm8.d
            zmm9.d = zmm9.d f- zmm0.d
            zmm0.d = zmm13.d f* zmm11[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm0.d = zmm10.d f* zmm3.d
            zmm9.d = zmm9.d f+ zmm9.d
            zmm4.d = zmm4.d f- zmm0.d
            zmm0 = zmm12
            zmm12.d = zmm12.d f* zmm9.d
            zmm7.d = zmm7.d f+ zmm7.d
            zmm1.d = zmm5.d f* zmm9.d
            zmm4.d = zmm4.d f+ zmm4.d
            zmm10.d = zmm10.d f* zmm9.d
            zmm3.d = zmm3.d f+ zmm1.d
            zmm0.d = zmm0.d f* zmm7.d
            uint128_t zmm2
            zmm2.d = zmm5.d f* zmm7.d
            zmm6.d = zmm6.d f* zmm4.d
            zmm8.d = zmm8.d f+ zmm2.d
            zmm5.d = zmm5.d f* zmm4.d
            zmm6.d = zmm6.d f- zmm0.d
            zmm0 = zmm13
            zmm13.d = zmm13.d f* zmm7.d
            zmm0.d = zmm0.d f* zmm4.d
            zmm11[0] = zmm11[0] f+ zmm5.d
            zmm6.d = zmm6.d f+ zmm3.d
            zmm13.d = zmm13.d f- zmm10.d
            zmm12.d = zmm12.d f- zmm0.d
            var_178 = *(rbx_22 + 0x10)
            zmm6.d = zmm6.d f+ *rbx_22
            zmm13.d = zmm13.d f+ zmm11[0]
            zmm12.d = zmm12.d f+ zmm8.d
            zmm13.d = zmm13.d f+ rbx_22[1].d
            zmm12.d = zmm12.d f+ *(rbx_22 + 4)
            zmm3 = _mm_unpacklo_ps(zmm6, zmm13.q)
            zmm0 = _mm_unpacklo_ps(zmm12, 0)
            zmm2 = data_14399f66c
            uint128_t var_168_1 = _mm_unpacklo_ps(zmm3, zmm0.q)
            uint128_t var_158_1 = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670.q), _mm_unpacklo_ps(zmm2, 0).q)
            int128_t* rax_86 =
                sub_141ab9f70(arg1, &var_118, *(arg1 + 0x241), r12, &var_178, rdx_34, arg1 + 0x100)
            char r8_7 = *(arg1 + 0x241)
            int128_t zmm1_5 = rax_86[1]
            var_178 = *rax_86
            int128_t var_168_2 = zmm1_5
            uint32_t var_158_2[0x4] = rax_86[2]
            float (* rax_87)[0x4] = sub_141abbf90(arg1, &var_118, r8_7, r12, &var_178)
            zmm11 = rax_87[1]
            zmm0 = *rax_87
            *(rbx_22 + 0x10) = zmm0
            *(rbx_22 + 0xf0) = zmm0
            *(rbx_22 + 0xd0) = zmm0
            zmm4 = *(rbx_22 + 0x14)
            zmm9 = rbx_22[3].d
            zmm1 = zmm4
            zmm10 = rbx_22[2].d
            int64_t rcx_80 = sx.q(*r15_6) * 3
            int64_t rax_89 = *(arg1 + 0x3f8)
            zmm0 = zx.o(*(rax_89 + (rcx_80 << 2)))
            int32_t rax_90 = *(rax_89 + (rcx_80 << 2) + 8)
            var_488 = zmm0.q
            zmm5 = var_488.d
            zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm3.d = zmm5.d f* zmm9.d
            zmm0.d = zmm7.d f* zmm9.d
            zmm8 = rax_90
            zmm2.d = zmm7.d f* zmm10.d
            zmm6.d = zmm8.d f* zmm4.d
            zmm6.d = zmm6.d f- zmm0.d
            zmm0.d = zmm8.d f* zmm10.d
            zmm3.d = zmm3.d f- zmm0.d
            zmm0.d = zmm5.d f* zmm4.d
            zmm6.d = zmm6.d f+ zmm6.d
            zmm2.d = zmm2.d f- zmm0.d
            zmm0 = zmm9
            zmm3.d = zmm3.d f+ zmm3.d
            zmm9.d = zmm9.d f* zmm6.d
            zmm4.d = zmm4.d f* zmm6.d
            zmm2.d = zmm2.d f+ zmm2.d
            zmm0.d = zmm0.d f* zmm3.d
            zmm1.d = zmm1.d f* zmm2.d
            zmm1.d = zmm1.d f- zmm0.d
            zmm0.d = zmm10.d f* zmm2.d
            zmm10.d = zmm10.d f* zmm3.d
            zmm9.d = zmm9.d f- zmm0.d
            zmm0 = *(rbx_22 + 0x1c)
            zmm6.d = zmm6.d f* zmm0.d
            zmm3.d = zmm3.d f* zmm0.d
            zmm10.d = zmm10.d f- zmm4.d
            zmm2.d = zmm2.d f* zmm0.d
            zmm5.d = zmm5.d f+ zmm6.d
            zmm7.d = zmm7.d f+ zmm3.d
            zmm8.d = zmm8.d f+ zmm2.d
            zmm1.d = zmm1.d f+ zmm5.d
            zmm9.d = zmm9.d f+ zmm7.d
            zmm10.d = zmm10.d f+ zmm8.d
            zmm0.d = zmm11.d f- zmm1.d
            zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
            rdx_34 = arg1 + 0xd0
            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
            zmm1.d = zmm1.d f- zmm9.d
            zmm11[0] = zmm11[0] f- zmm10.d
            r15_6 = &r15_6[1]
            rsi_1 += 1
            zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
            float var_420_2 = zmm11[0]
            *rbx_22 = zmm0.q
            rbx_22[1].d = var_420_2
        while (rsi_1 != r14_4)
    
    goto label_141abe7a6

uint64_t result

if (rcx != 2)
label_141abe7a6:
    *(arg1 + 0x243) = 0
    uint64_t rax_92 = *r12
    *(arg1 + 0xd0) = *(rax_92 + 0x10)
    *(arg1 + 0xe0) = *(rax_92 + 0x20)
    *(arg1 + 0xf0) = *(rax_92 + 0x30)
    result = *r12
    *(arg1 + 0x100) = *(result + 0x70)
    *(arg1 + 0x110) = *(result + 0x80)
    *(arg1 + 0x120) = *(result + 0x90)
else
    sub_141ad0020(arg1)
    int64_t* r12_1 = r12[3]
    var_498 = nullptr
    int32_t var_48c_1 = 0
    var_488 = 0
    int32_t var_47c_1 = 0
    int32_t var_490_1 = 1
    int64_t* rcx_4 = &var_498
    int64_t* var_478_1
    int32_t* var_458_1
    int64_t* rcx_11
    int32_t r15_1
    
    if (sub_141ea6180(arg1 + 0x150, r12_1) == 0)
        int32_t rbx_7 = *(arg1 + 0x148)
        sub_1405a4cf0(rcx_4)
        int32_t* rax_14 = var_498
        var_458_1 = rax_14
        int32_t var_480_2 = 1
        *rax_14 = (rbx_7 * 2) s>> 1
        sub_1405a4d70(&var_488)
        rcx_11 = var_488
        r15_1 = var_490_1
        var_478_1 = rcx_11
        *rcx_11 = *(arg1 + 0x140)
    label_141abd7f5:
        int32_t rdx_5
        
        if (r15_1 s> *(arg1 + 0x3a4))
            rcx_11, rdx_5 = sub_141acb9d0(arg1 + 0x398, r15_1)
        
        zmm10 = zx.o(0)
        int64_t rax_17 = sx.q(r15_1 - 1)
        int64_t var_410_1 = rax_17
        
        if (rax_17 s>= 0)
            void* r15_2 = arg1 + 0x160
            int64_t temp3_1
            
            do
                void* var_438 = nullptr
                int32_t var_430_1 = 0
                int64_t var_148
                int64_t* rax_18 = sub_141e2ba30(&var_148, r15_2)
                int32_t i_3 = var_430_1 + 1
                
                if (i_3 s> 0)
                    sub_1405c4f50(&var_438)
                
                int64_t* rdx_14 = sx.q(var_430_1) * 0x30 + var_438
                *rdx_14 = 0
                *rdx_14 = *rax_18
                __builtin_memset(rax_18, 0, 0x20)
                rdx_14[1].d = rax_18[1].d
                *(rdx_14 + 0xc) = *(rax_18 + 0xc)
                rdx_14[2] = 0
                rdx_14[2] = rax_18[2]
                rdx_14[3].d = rax_18[3].d
                *(rdx_14 + 0x1c) = *(rax_18 + 0x1c)
                rdx_14[4].d = rax_18[4].d
                *(rdx_14 + 0x24) = *(rax_18 + 0x24)
                *(rdx_14 + 0x2c) = *(rax_18 + 0x2c)
                int64_t var_138
                
                if (var_138 != 0)
                    sub_140a74f90(var_138)
                
                int64_t rcx_20 = var_148
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                int64_t var_448 = 0
                int32_t var_440_1 = 0x7fffffff
                int32_t var_43c_1 = 0xffffffff
                var_448 = var_478_1[var_410_1]
                sub_141ea5640(&var_448, r12_1)
                float rax_46
                int64_t rcx_41
                int64_t rdx_22
                void* rbx_13
                float zmm1_1[0x4]
                
                if (*(arg1 + 0x410) s<= 0)
                    int64_t rbx_14 = sx.q(*(arg1 + 0x400))
                    int32_t rax_50 = (rbx_14 + 1).d
                    *(arg1 + 0x400) = rax_50
                    
                    if (rax_50 s> *(arg1 + 0x404))
                        sub_140638a00(arg1 + 0x3f8)
                    
                    rcx_41 = *(arg1 + 0x3f8)
                    rdx_22 = rbx_14 * 3
                    rbx_13 = arg1 + 0x408
                    *(rcx_41 + (rdx_22 << 2)) = *(arg1 + 0x16c)
                    rax_46 = *(arg1 + 0x174)
                else
                    int32_t rdx_16
                    
                    if (var_440_1 s>= 0)
                        rdx_16 = var_43c_1
                    else
                        int32_t rcx_23 = var_440_1 * 2
                        
                        if ((rcx_23 & 0xfffffffe) == 0xfffffffe)
                            rdx_16 = -1
                        else
                            rdx_16 = *(r12_1[0x10] + (sx.q(rcx_23) s>> 1 << 2))
                    
                    int64_t rbx_12 = sx.q(rdx_16)
                    
                    if (*(rbx_12 + arg2[4]) == 0)
                        sub_141a98300(&arg2[1], rdx_16)
                    
                    int64_t rax_35 = arg2[1]
                    char r8_1 = *(arg1 + 0x241)
                    int64_t rcx_28 = rbx_12 * 6
                    zmm1_1 = *(rax_35 + (rcx_28 << 3) + 0x10)
                    uint128_t var_3f8 = *(rax_35 + (rcx_28 << 3))
                    float var_3e8_1[0x4] = zmm1_1
                    uint128_t var_3d8_1 = *(rax_35 + (rcx_28 << 3) + 0x20)
                    sub_141abbf90(arg1, &var_118, r8_1, arg2, &var_3f8)
                    rbx_13 = arg1 + 0x408
                    int64_t rcx_30 = *rbx_13
                    int64_t rax_37 = sx.q(*(rbx_13 + 8)) * 2
                    int32_t rdx_18 = *(rcx_30 + (rax_37 << 3) - 8)
                    int32_t rdx_19
                    
                    if (rdx_18 s>= 0)
                        rdx_19 = *(rcx_30 + (rax_37 << 3) - 4)
                    else
                        int32_t rcx_31 = rdx_18 * 2
                        
                        if ((rcx_31 & 0xfffffffe) == 0xfffffffe)
                            rdx_19 = -1
                        else
                            rdx_19 = *(r12_1[0x10] + (sx.q(rcx_31) s>> 1 << 2))
                    
                    int64_t rcx_34 = sx.q(rdx_19)
                    int32_t var_468_1
                    var_468_1.q = rcx_34
                    
                    if (*(rcx_34 + arg2[4]) == 0)
                        sub_141a98300(&arg2[1], rdx_19)
                        rcx_34 = var_468_1.q
                    
                    int64_t rax_43 = arg2[1]
                    char r8_2 = *(arg1 + 0x241)
                    int64_t rcx_37 = rcx_34 * 6
                    int128_t zmm1_2 = *(rax_43 + (rcx_37 << 3) + 0x10)
                    int128_t var_3c8 = *(rax_43 + (rcx_37 << 3))
                    int128_t var_3b8_1 = zmm1_2
                    int128_t var_3a8_1 = *(rax_43 + (rcx_37 << 3) + 0x20)
                    float zmm6_1[0x4]
                    int64_t zmm10_1
                    int32_t zmm11_1
                    uint128_t zmm15_1
                    zmm6_1, zmm10_1, zmm11_1, zmm15_1 =
                        sub_141abbf90(arg1, &var_148, r8_2, arg2, &var_3c8)
                    float zmm5_1[0x4] = var_148.o
                    float zmm7_1[0x4] = *(arg1 + 0x16c)
                    uint128_t zmm8_1 = *(arg1 + 0x170)
                    uint128_t zmm9_1 = *(arg1 + 0x174)
                    zmm1_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    float var_128[0x4]
                    zmm6_1 = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7_1 ^ zmm6_1, (zmm9_1 ^ zmm6_1).q), 
                            _mm_unpacklo_ps(zmm8_1 ^ zmm6_1, zmm10_1).q), 
                        var_128)
                    float zmm3_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    uint128_t zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9), zmm3_1)
                    float zmm4_1[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), zmm1_1), zmm0_2)
                    zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm4_1)
                    uint128_t zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm1_1)
                    zmm0_2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                    zmm5_1 = _mm_add_ps(zmm5_1, zmm6_1)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm3_1)
                    zmm3_1 = var_138.o
                    zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_2)
                    float var_108[0x4]
                    zmm0_2 = _mm_shuffle_ps(var_108, var_108, 0x55)
                    zmm1_1[0] = zmm1_1[0] f- zmm0_2.d
                    zmm0_2 = _mm_shuffle_ps(var_108, var_108, 0xaa)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm5_1)
                    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                    var_468_1.o = _mm_add_ps(zmm2_1, zmm3_1)
                    zmm2_1.d = zmm3_1.d f- var_108[0]
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                    zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
                    zmm0_2.d = zmm7_1.d f* zmm7_1[0]
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                    zmm1_1[0] = zmm1_1[0] f+ zmm2_1.d
                    zmm2_1.d = zmm8_1.d f* zmm8_1.d
                    zmm1_1[0] = zmm1_1[0] + zmm3_1[0]
                    zmm6_1 = _mm_sqrt_ss(0, zmm1_1[0])
                    zmm6_1[0] = zmm6_1[0] f* zmm15_1.d
                    zmm1_1 = zmm9_1
                    zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                    zmm1_1[0] = zmm1_1[0] f* zmm9_1.d
                    zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                    
                    if (zmm2_1.d f>= zmm11_1)
                        if (not(zmm2_1.d f!= 1f))
                            zmm0_2 = zx.o(*(arg1 + 0x16c))
                            zmm1_1 = *(arg1 + 0x174)
                            var_488 = zmm0_2.q
                            zmm3_1 = var_488.d
                            zmm2_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                        else if (zmm2_1.d f>= zmm11_1)
                            zmm5_1 = zx.o(0)
                            zmm5_1[0] = zmm15_1.d
                            zmm3_1 = zmm2_1
                            zmm4_1 = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0])
                            zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                            zmm0_2.d = zmm4_1.d f* zmm4_1[0]
                            zmm3_1[0] = zmm3_1[0] f* zmm0_2.d
                            zmm2_1.d = zmm5_1.d f- zmm3_1[0]
                            zmm0_2.d = zmm4_1.d f* zmm2_1.d
                            zmm4_1[0] = zmm4_1[0] f+ zmm0_2.d
                            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                            zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                            zmm5_1[0] = zmm5_1[0] - zmm3_1[0]
                            zmm0_2.d = zmm4_1.d f* zmm5_1[0]
                            zmm4_1[0] = zmm4_1[0] f+ zmm0_2.d
                            zmm1_1 = zmm4_1
                            float var_468_3 = zmm4_1[0]
                            zmm3_1 = zmm1_1
                            zmm0_2.d = zmm1_1.d f* zmm8_1.d
                            zmm3_1[0] = zmm3_1[0] * zmm7_1[0]
                            zmm2_1 = zmm0_2
                            zmm1_1[0] = zmm1_1[0] f* zmm9_1.d
                        else
                            zmm3_1 = data_143dbb1f8
                            zmm2_1 = data_143dbb1fc
                            zmm1_1 = data_143dbb200
                        
                        int32_t rcx_42 = *(arg1 + 0x400)
                        zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
                        zmm2_1.d = zmm2_1.d f* zmm6_1[0]
                        zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
                        *(arg1 + 0x400) = rcx_42 + 1
                        float var_428_1 = zmm3_1[0]
                        int32_t var_424_1 = zmm2_1.d
                        float var_420_1 = zmm1_1[0]
                        
                        if (rcx_42 + 1 s> *(arg1 + 0x404))
                            sub_140638a00(arg1 + 0x3f8)
                        
                        rcx_41 = *(arg1 + 0x3f8)
                        rdx_22 = sx.q(rcx_42) * 3
                        rax_46 = var_420_1
                        *(rcx_41 + (rdx_22 << 2)) = var_428_1.q
                    else
                        int32_t rcx_39 = *(arg1 + 0x400)
                        zmm0_2.d = var_468_1.d f- var_108[0]
                        int32_t var_464
                        zmm1_1 = var_464
                        int32_t var_408_1 = zmm0_2.d
                        zmm0_2 = _mm_shuffle_ps(var_108, var_108, 0x55)
                        zmm1_1[0] = zmm1_1[0] f- zmm0_2.d
                        int32_t var_460
                        zmm2_1.d = var_460.d f- _mm_shuffle_ps(var_108, var_108, 0xaa)[0]
                        *(arg1 + 0x400) = rcx_39 + 1
                        float var_404_1 = zmm1_1[0]
                        float var_400_1 = zmm2_1.d
                        
                        if (rcx_39 + 1 s> *(arg1 + 0x404))
                            sub_140638a00(arg1 + 0x3f8)
                        
                        rcx_41 = *(arg1 + 0x3f8)
                        rdx_22 = sx.q(rcx_39) * 3
                        rax_46 = var_400_1
                        *(rcx_41 + (rdx_22 << 2)) = var_408_1.q
                
                *(rcx_41 + (rdx_22 << 2) + 8) = rax_46
                int32_t rcx_45 = *(rbx_13 + 8)
                *(rbx_13 + 8) = rcx_45 + 1
                
                if (rcx_45 + 1 s> *(rbx_13 + 0xc))
                    sub_1405a4f90(rbx_13)
                
                *(*rbx_13 + sx.q(rcx_45) * 0x10) = var_448.o
                int32_t rdx_26
                
                if (var_440_1 s>= 0)
                    rdx_26 = var_43c_1
                else
                    int32_t rcx_50 = var_440_1 * 2
                    
                    if ((rcx_50 & 0xfffffffe) == 0xfffffffe)
                        rdx_26 = -1
                    else
                        rdx_26 = *(r12_1[0x10] + (sx.q(rcx_50) s>> 1 << 2))
                
                int64_t rbx_15 = sx.q(rdx_26)
                
                if (*(rbx_15 + arg2[4]) == 0)
                    sub_141a98300(&arg2[1], rdx_26)
                
                int64_t rax_58 = arg2[1]
                char r8_3 = *(arg1 + 0x241)
                int64_t rcx_55 = rbx_15 * 6
                zmm1_1 = *(rax_58 + (rcx_55 << 3) + 0x10)
                uint128_t var_398 = *(rax_58 + (rcx_55 << 3))
                float var_388_1[0x4] = zmm1_1
                uint128_t var_378_1 = *(rax_58 + (rcx_55 << 3) + 0x20)
                float zmm6_2[0x4] = sub_141abbf90(arg1, &var_178, r8_3, arg2, &var_398)
                float zmm9_2[0x4] = var_178
                float zmm3_2[0x4] = *(arg1 + 0x16c) ^ zmm6_2
                float zmm8_2[0x4] = *(arg1 + 0x170) ^ zmm6_2
                float zmm13_1[0x4] = *(arg1 + 0x174) ^ zmm6_2
                float zmm10_2[0x4] = _mm_shuffle_ps(zmm9_2, zmm9_2, 0x55)
                zmm13_1[0] = zmm13_1[0] * zmm10_2[0]
                zmm8_2[0] = zmm8_2[0] * zmm9_2[0]
                float zmm4_2[0x4] = _mm_shuffle_ps(zmm9_2, zmm9_2, 0xaa)
                zmm8_2[0] = zmm8_2[0] * zmm4_2[0]
                zmm3_2[0] = zmm3_2[0] * zmm4_2[0]
                zmm13_1[0] = zmm13_1[0] - zmm8_2[0]
                float zmm2_2[0x4] = _mm_shuffle_ps(zmm9_2, zmm9_2, 0xff)
                zmm13_1[0] = zmm13_1[0] * zmm9_2[0]
                zmm13_1[0] = zmm13_1[0] + zmm13_1[0]
                zmm3_2[0] = zmm3_2[0] - zmm13_1[0]
                zmm3_2[0] = zmm3_2[0] * zmm10_2[0]
                float zmm1_3 = zmm13_1[0]
                zmm8_2[0] = zmm8_2[0] - zmm3_2[0]
                zmm1_3 = zmm1_3 * zmm2_2[0]
                zmm3_2[0] = zmm3_2[0] + zmm3_2[0]
                zmm1_3 = zmm1_3 + zmm3_2[0]
                zmm8_2[0] = zmm8_2[0] + zmm8_2[0]
                zmm13_1[0] = zmm13_1[0] * zmm4_2[0]
                zmm13_1[0] = zmm13_1[0] * zmm10_2[0]
                zmm3_2[0] = zmm3_2[0] * zmm4_2[0]
                zmm8_2[0] = zmm8_2[0] * zmm10_2[0]
                zmm8_2[0] = zmm8_2[0] - zmm3_2[0]
                zmm8_2[0] = zmm8_2[0] * zmm9_2[0]
                zmm8_2[0] = zmm8_2[0] * zmm2_2[0]
                zmm8_2[0] = zmm8_2[0] + zmm1_3
                zmm1_3 = zmm3_2[0]
                zmm13_1[0] = zmm13_1[0] - zmm8_2[0]
                zmm1_3 = zmm1_3 * zmm2_2[0]
                zmm3_2[0] = zmm3_2[0] * zmm9_2[0]
                zmm8_2[0] = zmm8_2[0] + zmm13_1[0]
                zmm1_3 = zmm1_3 + zmm8_2[0]
                float var_168[0x4]
                float zmm0_4[0x4] = _mm_shuffle_ps(var_168, var_168, 0x55)
                zmm8_2[0] = zmm8_2[0] + var_168[0]
                zmm3_2[0] = zmm3_2[0] - zmm13_1[0]
                float zmm5_2[0x4] = _mm_shuffle_ps(var_168, var_168, 0xaa)
                zmm13_1[0] = zmm13_1[0] + zmm1_3
                zmm3_2[0] = zmm3_2[0] + zmm8_2[0]
                zmm13_1[0] = zmm13_1[0] + zmm0_4[0]
                zmm3_2[0] = zmm3_2[0] + zmm5_2[0]
                zmm2_2 = _mm_unpacklo_ps(zmm13_1, 0)
                zmm3_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_2, zmm3_2[0].q), zmm2_2[0].q)
                var_498.d = zmm3_2[0]
                zmm0_4 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
                var_168 = zmm3_2
                float var_490_3 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)[0]
                var_498:4.d = zmm0_4[0]
                void var_368
                int512_t zmm6_3
                int512_t zmm11_3
                uint32_t zmm14_1[0x4]
                int32_t zmm15_2
                zmm6_3, zmm10, zmm11_3, zmm14_1, zmm15_2 =
                    sub_141e122a0(&var_368, &var_438, &var_498)
                uint32_t zmm1_4[0x4] = var_178
                uint32_t rcx_58 = zx.d(*(arg1 + 0x240))
                char var_1bc_1 = rcx_58.b
                int64_t var_188_1 = 0
                uint32_t var_198_1[0x4] = var_448.o
                uint32_t var_358_1[0x4] = zmm1_4
                uint32_t var_278_1[0x4] = zmm1_4
                uint32_t var_298_1[0x4] = zmm1_4
                
                if (rcx_58 == 1)
                    uint32_t var_1b8_3 = (*(arg1 + 0x220))[0]
                else
                    uint32_t zmm0_5[0x4]
                    uint32_t zmm2_3[0x4]
                    
                    if (rcx_58 == 2)
                        zmm0_5 = *r15_2
                        zmm2_3 = _mm_and_ps(*(r15_2 + 4), zmm14_1)
                        zmm1_4 = *(r15_2 + 8)
                        zmm0_5 = _mm_and_ps(zmm0_5, zmm14_1)
                        zmm2_3 = _mm_min_ss(zmm2_3[0], zmm0_5[0])
                        zmm1_4 = _mm_and_ps(zmm1_4, zmm14_1)
                        zmm2_3 = _mm_min_ss(zmm2_3[0], zmm1_4[0])
                        zmm2_3[0] = zmm2_3[0] f* zmm15_2
                        uint32_t var_1b8_2 = zmm2_3[0]
                    else if (rcx_58 == 3)
                        zmm0_5 = *r15_2
                        zmm2_3 = _mm_and_ps(*(r15_2 + 4), zmm14_1)
                        zmm1_4 = *(r15_2 + 8)
                        zmm0_5 = _mm_and_ps(zmm0_5, zmm14_1)
                        zmm2_3 = _mm_max_ss(zmm2_3[0], zmm0_5[0])
                        zmm1_4 = _mm_and_ps(zmm1_4, zmm14_1)
                        zmm2_3 = _mm_max_ss(zmm2_3[0], zmm1_4[0])
                        zmm2_3[0] = zmm2_3[0] f* zmm15_2
                        uint32_t var_1b8_1 = zmm2_3[0]
                
                char rax_59 = *(arg1 + 0x244)
                
                if ((rax_59 & 0x10) != 0)
                    uint32_t var_220_1 = (*(arg1 + 0xc8))[0]
                    char var_224_1 = 1
                
                if ((rax_59 & 0x40) != 0)
                    uint32_t var_228_1 = (*(arg1 + 0xcc))[0]
                    char var_22c_1 = 1
                
                uint8_t rcx_61 = *(arg1 + 0x245)
                uint32_t var_21c_1 = (*(arg1 + 0x178))[0]
                uint8_t var_218_1 = rcx_61 u>> 1 & 1
                int32_t var_20c_1 = *(arg1 + 0x184)
                int64_t var_214_1 = *(arg1 + 0x17c)
                uint8_t var_248_1 = rcx_61 & 1
                int32_t rbx_16
                
                if (*(arg1 + 0x3a0) s<= 0)
                    rbx_16 = *(arg1 + 0x3a0)
                else
                    rbx_16 = *(arg1 + 0x3a0)
                    int64_t var_188_2 = sx.q(rbx_16 - 1) * 0x1f0 + *(arg1 + 0x398)
                
                *(arg1 + 0x3a0) = rbx_16 + 1
                
                if (rbx_16 + 1 s> *(arg1 + 0x3a4))
                    sub_141acb7b0(arg1 + 0x398)
                
                sub_141a8f8d0(sx.q(rbx_16) * 0x1f0 + *(arg1 + 0x398), &var_368)
                int64_t rbx_17 = sx.q(*(arg1 + 0x420))
                int32_t r15_4 = *(arg1 + 0x3a0) - 1
                int32_t rax_67 = (rbx_17 + 1).d
                *(arg1 + 0x420) = rax_67
                
                if (rax_67 s> *(arg1 + 0x424))
                    sub_1405a4cf0(arg1 + 0x418)
                
                *(*(arg1 + 0x418) + (rbx_17 << 2)) = r15_4
                void var_1b0
                rcx_11, rdx_5 = sub_14180c130(&var_1b0)
                int32_t i_2 = i_3
                void* rbx_18 = var_438
                
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_68 = *(rbx_18 + 0x10)
                        
                        if (rcx_68 != 0)
                            sub_140a74f90(rcx_68)
                        
                        rcx_11 = *rbx_18
                        
                        if (rcx_11 != 0)
                            rcx_11, rdx_5 = sub_140a74f90(rcx_11)
                        
                        rbx_18 += 0x30
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    rbx_18 = var_438
                
                if (rbx_18 != 0)
                    rcx_11, rdx_5 = sub_140a74f90(rbx_18)
                
                temp3_1 = var_410_1
                var_410_1 -= 1
                r15_2 = arg1 + 0x160
                zmm6_3.o = 0x80000000
                zmm11_3.o = 0x322bcc77
            while (temp3_1 - 1 s>= 0)
        
        *(arg1 + 0x3c0) = 0
        
        if (*(arg1 + 0x3c4) != 0)
            rcx_11, rdx_5 = sub_1405c5570(arg1 + 0x3b8, 0)
        
        int64_t i_1 = *(arg1 + 0x398)
        
        for (int64_t r12_5 = sx.q(*(arg1 + 0x3a0)) * 0x1f0 + i_1; i_1 != r12_5; i_1 += 0x1f0)
            int64_t r15_5 = sx.q(*(arg1 + 0x3c0))
            int32_t rax_70 = (r15_5 + 1).d
            *(arg1 + 0x3c0) = rax_70
            
            if (rax_70 s> *(arg1 + 0x3c4))
                sub_1405a4d70(arg1 + 0x3b8)
            
            *(*(arg1 + 0x3b8) + (r15_5 << 3)) = i_1
        
        if (*(arg1 + 0x1c4) == 0 || *(arg1 + 0x1c8) f- *(arg1 + 0x1d4) f!= zmm10.d)
            rdx_5.b = 0
        else
            rdx_5.b = 1
        
        if (*(arg1 + 0x1c5) == 0 || *(arg1 + 0x1cc) f- *(arg1 + 0x1d8) f!= zmm10.d)
            rcx_11.b = 0
        else
            rcx_11.b = 1
        
        int64_t rax_69
        
        if (*(arg1 + 0x1c6) == 0 || *(arg1 + 0x1d0) f- *(arg1 + 0x1dc) f!= zmm10.d)
            rax_69.b = 0
        else
            rax_69.b = 1
        
        if (rdx_5.b == 0 || rcx_11.b == 0 || rax_69.b == 0)
            rax_69.b = 0
        else
            rax_69.b = 1
        
        *(arg1 + 0x1c7) = rax_69.b
        int64_t* rax_71 = sub_142565030()
        void* rcx_72 = rax_71[0x23]
        int32_t rax_76
        
        if (rcx_72 != 0)
        label_141abe35a:
            *(arg1 + 0x388) = *(rcx_72 + 0xb8)
            *(arg1 + 0x38c) = *(rcx_72 + 0xc0)
            *(arg1 + 0x390) = *(rcx_72 + 0xc8)
            rax_76 = *(rcx_72 + 0xcc)
        else
            (*(*rax_71 + 0x390))(rax_71)
            rcx_72 = rax_71[0x23]
            
            if (rcx_72 != 0)
                goto label_141abe35a
            
            *(arg1 + 0x388) = 0
            rax_76 = 4
            *(arg1 + 0x38c) = 0x3d088889
            *(arg1 + 0x390) = 0x3c888889
        
        r12 = arg2
        *(arg1 + 0x394) = rax_76
        int32_t var_490_4 = 0xbf800000
        var_498 = nullptr
        uint64_t* rax_77 = sub_141ad0610(arg1, &var_488, r12, &var_498)
        *(arg1 + 0x428) = *rax_77
        *(arg1 + 0x430) = rax_77[1].d
        
        if (var_478_1 != 0)
            sub_140a74f90(var_478_1)
        
        if (var_458_1 != 0)
            sub_140a74f90(var_458_1)
        
        goto label_141abe7a6
    
    int32_t rbx_1 = *(arg1 + 0x158)
    sub_1405a4cf0(rcx_4)
    int32_t* r13_1 = var_498
    var_458_1 = r13_1
    int32_t var_480_1 = 1
    *r13_1 = (rbx_1 * 2) s>> 1
    sub_1405a4d70(&var_488)
    int64_t* rcx_6 = var_488
    var_478_1 = rcx_6
    *rcx_6 = *(arg1 + 0x150)
    int32_t rax_4 = sub_141ea4040(r12_1, (*(arg1 + 0x158) * 2) s>> 1)
    r15_1 = var_490_1
    int32_t r14_1 = rax_4
    
    if (rax_4 s<= 0)
        rcx_11 = var_478_1
    else
        while (true)
            int64_t rbx_4 = sx.q(r15_1)
            r15_1 = (rbx_4 + 1).d
            
            if (r15_1 s> var_48c_1)
                sub_1405a4cf0(&var_498)
                r13_1 = var_498
                var_458_1 = r13_1
            
            r13_1[rbx_4] = r14_1
            int64_t r13_2 = sx.q(var_480_1)
            int32_t rax_7 = (r13_2 + 1).d
            var_480_1 = rax_7
            int64_t rbx_6 = *(*(r12_1[9] + 0x20) + sx.q(r14_1) * 0xc)
            
            if (rax_7 s<= var_47c_1)
                rcx_11 = var_478_1
            else
                sub_1405a4d70(&var_488)
                rcx_11 = var_488
                var_478_1 = rcx_11
            
            rcx_11[r13_2] = rbx_6
            
            if (r14_1 == (*(arg1 + 0x148) * 2) s>> 1)
                break
            
            int32_t rax_11 = sub_141ea4040(r12_1, r14_1)
            r13_1 = var_458_1
            r14_1 = rax_11
            
            if (rax_11 s<= 0)
                rcx_11 = var_478_1
                break
        
        r13_1 = var_458_1
    
    result = zx.q((*(arg1 + 0x148) * 2) s>> 1)
    
    if (r14_1 == result.d)
        goto label_141abd7f5
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    if (r13_1 != 0)
        result = sub_140a74f90(r13_1)

__security_check_cookie(rax_1 ^ &var_4d8)
return result
