// 函数: sub_141a9aad0
// 地址: 0x141a9aad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t rax_2 = data_143f393d0
int64_t* r12 = arg3
sub_140b34200("AnimDynamicsEval", rax_2)
int64_t r14 = data_143f2b910
int32_t rsi = *(*arg2 + 0x5e8)
char rax_4 = data_143de5480
int64_t rcx
int32_t i_1

if (rax_4 == 0)
    i_1 = 0
    rcx = 0
else
    i_1 = 0
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax_4 = data_143de5480
    rcx.b = cond:0_1

int32_t rdx_1 = *(r14 + (rcx << 2))

if (rdx_1 s< 0)
    rsi.b = 1
else
    rsi.b = rsi == rdx_1

int64_t r14_1 = data_143f2b940
int64_t rcx_1

if (rax_4 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

if (*(r14_1 + (rcx_1 << 2)) == 1 && rsi.b != 0)
    float zmm14[0x4] = zx.o(0)
    int32_t* var_330
    float var_1f8[0x4]
    float var_1c8[0x4]
    float var_118[0x4]
    float zmm0_1[0x4]
    float zmm2[0x4]
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm8[0x4]
    float zmm9[0x4]
    float zmm10[0x4]
    float zmm11[0x4]
    float zmm12[0x4]
    float zmm13[0x4]
    float zmm15[0x4]
    
    if (*(arg1 + 0x242) != *(arg1 + 0x241))
        int64_t* r14_2 = *(arg1 + 0x3b8)
        void* r13_1 = &r14_2[sx.q(*(arg1 + 0x3c0))]
        
        while (r14_2 != r13_1)
            int128_t* rsi_1 = *r14_2
            
            if (rsi_1 == 0)
                break
            
            zmm0_1 = rsi_1[1]
            void* rax_9 = *arg2
            zmm2 = data_14399f66c
            char r8 = *(arg1 + 0x242)
            float temp0_1[0x4] = _mm_unpacklo_ps(*rsi_1, (*(rsi_1 + 8))[0].q)
            var_1f8 = zmm0_1
            float var_1e8_1[0x4] =
                _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(*(rsi_1 + 4), zmm14[0].q)[0].q)
            var_330 = rax_9 + 0x10
            float var_1d8_1[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                _mm_unpacklo_ps(zmm2, zmm14[0].q)[0].q)
            sub_141ab9f70(arg1, &var_1c8, r8, arg2, &var_1f8, var_330, rax_9 + 0x70)
            char r8_1 = *(arg1 + 0x241)
            var_1f8 = var_1c8
            float var_1a8[0x4]
            float var_1d8_2[0x4] = var_1a8
            int128_t var_1b8
            int128_t var_1e8_2 = var_1b8
            float (* rax_11)[0x4]
            rax_11, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_141abbf90(arg1, &var_118, r8_1, arg2, &var_1f8)
            r14_2 = &r14_2[1]
            zmm2 = rax_11[1]
            zmm0_1 = *rax_11
            float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            rsi_1[1] = zmm0_1
            float var_2a0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *rsi_1 = (_mm_unpacklo_ps(zmm2, temp0_7[0].q)).q
            *(rsi_1 + 8) = var_2a0_1
    
    if (*(arg1 + 0x243) != 0)
        zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141abd580(arg1, arg2)
        *(arg1 + 0x243) = 0
    
    bool cond:2_1 = *(arg1 + 0x3b0) s<= 0
    uint64_t r14_3 = arg2[3]
    uint64_t var_2d8 = r14_3
    float zmm1_1[0x4]
    
    if (not(cond:2_1))
        do
            int64_t rdx_5 = sx.q(*(arg1 + 0x3b0))
            int64_t* rsi_2 = *(*(arg1 + 0x3a8) + (rdx_5 << 3) - 8)
            *(arg1 + 0x3b0) = (rdx_5 - 1).d
            
            if (rsi_2 != 0 && sub_141ea6180(&rsi_2[0x3a], r14_3) != 0)
                int32_t rax_16 = rsi_2[0x3b].d
                int32_t rdx_7
                
                if (rax_16 s>= 0)
                    rdx_7 = *(rsi_2 + 0x1dc)
                else
                    int32_t rcx_7 = rax_16 * 2
                    
                    if ((rcx_7 & 0xfffffffe) == 0xfffffffe)
                        rdx_7 = -1
                    else
                        rdx_7 = *(*(r14_3 + 0x80) + (sx.q(rcx_7) s>> 1 << 2))
                
                int64_t r13_2 = sx.q(rdx_7)
                
                if (arg2[4][r13_2] == 0)
                    sub_141a98300(&arg2[1], rdx_7)
                
                int64_t rax_21 = arg2[1]
                char r8_2 = *(arg1 + 0x241)
                int64_t rcx_13 = r13_2 * 6
                zmm1_1 = *(rax_21 + (rcx_13 << 3) + 0x10)
                var_1c8 = *(rax_21 + (rcx_13 << 3))
                float var_1b8_1[0x4] = zmm1_1
                float var_1a8_1[0x4] = *(rax_21 + (rcx_13 << 3) + 0x20)
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_141abbf90(arg1, &var_118, r8_2, arg2, &var_1c8)
                r14_3 = var_2d8
                float var_108[0x4]
                float var_2a0_2 = _mm_shuffle_ps(var_108, var_108, 0xaa)[0]
                *rsi_2 = (_mm_unpacklo_ps(var_108, _mm_shuffle_ps(var_108, var_108, 0x55)[0].q)).q
                *(rsi_2 + 0x10) = var_118
                rsi_2[1].d = var_2a0_2
                rsi_2[4] = data_143dbb1f8.q
                rsi_2[5].d = data_143dbb200
                *(rsi_2 + 0x2c) = data_143dbb1f8.q
                *(rsi_2 + 0x34) = data_143dbb200
        while (*(arg1 + 0x3b0) s> 0)
    
    float var_48_1[0x4] = zmm6
    float var_58_1[0x4] = zmm7
    float var_68_1[0x4] = zmm8
    float var_78_1[0x4] = zmm9
    float var_88_1[0x4] = zmm10
    int64_t var_2b8
    uint64_t var_2a8
    uint64_t var_248
    uint64_t var_238[0x2]
    void*** (* var_208)()
    float zmm3[0x4]
    float zmm4_1[0x4]
    float zmm5_1[0x4]
    
    if ((*(arg1 + 0x244) & 4) != 0 && not((*(arg1 + 0x388))[0] f>= *(arg1 + 0x380)))
        int32_t var_2d0_1 = 0xbf800000
        var_2d8 = nullptr
        uint64_t* rax_25
        rax_25, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141ad0610(arg1, &var_248, arg2, &var_2d8)
        void* r13_3 = arg1 + 0x428
        *r13_3 = *rax_25
        int32_t rax_26 = rax_25[1].d
        uint128_t zmm0_3 = zx.o(*(arg1 + 0x224))
        var_2a8 = zmm0_3.q
        bool cond:5_1 = _mm_and_ps(zmm0_3, 0x7fffffff).d f> 9.99999975e-05f
        *(r13_3 + 8) = rax_26
        int32_t rax_27 = *(arg1 + 0x22c)
        
        if (cond:5_1)
        label_141a9af79:
            uint64_t* rax_28
            rax_28, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_141ad0610(arg1, &var_2d8, arg2, &var_2a8)
            var_2a8 = *rax_28
            int32_t var_2a0_4 = rax_28[1].d
        else
            if (_mm_and_ps(var_2a8:4.d, 0x7fffffff).d f> 9.99999975e-05f)
                goto label_141a9af79
            
            if (not(_mm_and_ps(rax_27, 0x7fffffff).d f<= 9.99999975e-05f))
                goto label_141a9af79
        
        char var_2c8 = 0
        char* var_200_1 = &var_2c8
        var_208 = j_sub_141a7e490
        void* rax_30 = sub_140a756e0(&var_208, &data_1439dbe70)
        int32_t rdx_11 = *(rax_30 + 0x18)
        *(rax_30 + 0x18) = 0
        
        if (*(rax_30 + 0x1c) != rdx_11)
            sub_1405c5570(rax_30 + 0x10, rdx_11)
        
        int32_t* r14_4 = *(arg1 + 0x418)
        uint64_t r9_6 = &r14_4[sx.q(*(arg1 + 0x420))]
        var_2d8 = r9_6
        
        if (r14_4 != r9_6)
            do
                int64_t rax_32 = sx.q(*r14_4)
                
                if (rax_32.d s>= 0 && rax_32.d s< *(arg1 + 0x3c0))
                    int64_t r13_4 = sx.q(*(rax_30 + 0x18))
                    var_248 = rax_32
                    var_238[0] = *(arg1 + 0x3b8)
                    int32_t rax_34 = (r13_4 + 1).d
                    *(rax_30 + 0x18) = rax_34
                    
                    if (rax_34 s> *(rax_30 + 0x1c))
                        sub_1405a4d70(rax_30 + 0x10)
                        r9_6 = var_2d8
                    
                    *(*(rax_30 + 0x10) + (r13_4 << 3)) = *(var_238[0] + (var_248 << 3))
                
                r14_4 = &r14_4[1]
            while (r14_4 != r9_6)
            
            r13_3 = arg1 + 0x428
        
        bool cond:6_1 = *(arg1 + 0x241) == 2
        var_2b8 = 0
        int32_t var_2b0_1 = 0
        
        if (not(cond:6_1))
            zmm2 = *(arg1 + 0xe0)
            void* rax_37 = *arg2
            zmm1_1 = 0x3f800000
            zmm1_1[0] = 1f f/ *(arg1 + 0x380)
            zmm10 = *(rax_37 + 0x20)
            var_118 = *(rax_37 + 0x10)
            zmm10[0] = zmm10[0] - zmm2[0]
            float var_f8_1[0x4] = *(rax_37 + 0x30)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            temp0_17[0] = temp0_17[0] - temp0_16[0]
            zmm10[0] = zmm10[0] * zmm1_1[0]
            float temp0_18[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            float temp0_19[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            temp0_18[0] = temp0_18[0] - temp0_19[0]
            temp0_17[0] = temp0_17[0] * zmm1_1[0]
            var_2d8.d = (zmm10 ^ 0x80000000)[0]
            temp0_18[0] = temp0_18[0] * zmm1_1[0]
            var_2d8:4.d = (temp0_17 ^ 0x80000000)[0]
            float var_240_1 = temp0_18[0]
            float var_2d0_2 = (temp0_18 ^ 0x80000000)[0]
            uint64_t* rax_38
            int64_t zmm6_1
            float zmm7_1[0x4]
            float zmm8_1
            float zmm10_1
            rax_38, zmm6_1, zmm7_1, zmm8_1, zmm10_1 = sub_141ad0610(arg1, &var_238, arg2, &var_2d8)
            float zmm2_1 = *(arg1 + 0x1a4) f* *(rax_38 + 4)
            float zmm3_1 = *(arg1 + 0x1a8) f* rax_38[1].d
            zmm8_1 = zmm8_1 f/ *(arg1 + 0x380)
            float zmm0_5[0x4] = var_2b8.d
            float zmm4_2 = *(arg1 + 0x43c)
            zmm0_5[0] = zmm0_5[0] + *(arg1 + 0x1a0) f* *rax_38
            float zmm1_3 = var_2b8:4.d + zmm2_1
            zmm2_1 = *(arg1 + 0x434) - zmm7_1[0]
            var_2b8.d = zmm0_5[0]
            zmm0_5 = var_2b0_1
            zmm0_5[0] = zmm0_5[0] + zmm3_1
            zmm3_1 = *(arg1 + 0x438) f- zmm6_1.d
            float var_2b0_2 = zmm0_5[0]
            *(arg1 + 0x434) = (_mm_unpacklo_ps(zmm7_1, zmm6_1)).q
            *(arg1 + 0x43c) = var_240_1
            var_2d8.d = zmm2_1 * zmm8_1
            float var_2d0_3 = (zmm4_2 - zmm10_1) * zmm8_1
            var_2d8:4.d = zmm3_1 * zmm8_1
            var_2b8:4.d = zmm1_3
            uint64_t* rax_40
            rax_40, zmm9, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_141ad0610(arg1, &var_248, arg2, &var_2d8)
            zmm3 = *(arg1 + 0x198)
            zmm4_1 = *rax_40
            zmm4_1[0] = zmm4_1[0] f* *(arg1 + 0x194)
            zmm3[0] = zmm3[0] f* *(rax_40 + 4)
            zmm0_1 = zx.o(*(arg1 + 0x1ac))
            zmm5_1 = *(arg1 + 0x19c)
            zmm5_1[0] = zmm5_1[0] f* rax_40[1].d
            int32_t rax_41 = *(arg1 + 0x1b4)
            zmm1_1 = *(arg1 + 0x1b0)
            zmm2 = *(arg1 + 0x1b4) ^ zmm9
            zmm5_1[0] = zmm5_1[0] + var_2b0_2
            zmm4_1[0] = zmm4_1[0] f+ var_2b8.d
            zmm3[0] = zmm3[0] f+ var_2b8:4.d
            var_2d8 = zmm0_1.q
            zmm1_1 ^= zmm9
            zmm0_1 = *(arg1 + 0x1ac) ^ zmm9
            
            if (not(zmm5_1[0] < zmm2[0]))
                zmm2 = __minss_xmmss_memss(zmm5_1[0], rax_41)
            
            if (not(zmm3[0] < zmm1_1[0]))
                zmm1_1 = __minss_xmmss_memss(zmm3[0], var_2d8:4.d)
            
            if (not(zmm4_1[0] < zmm0_1[0]))
                zmm0_1 = __minss_xmmss_memss(zmm4_1[0], var_2d8.d)
            
            var_2b8.d = zmm0_1[0]
            var_2b8:4.d = zmm1_1[0]
            float var_2b0_3 = zmm2[0]
        
        int64_t r14_5 = data_143f2b958
        int64_t rcx_23
        
        if (data_143de5480 == 0)
            rcx_23 = 0
        else
            rcx_23.b = GetCurrentThreadId() != data_143de5470
        
        if (*(r14_5 + (rcx_23 << 2)) != 1)
            *(arg1 + 0x380) = __minss_xmmss_memss((*(arg1 + 0x380))[0], *(arg1 + 0x38c))[0]
            sub_141ad3570(arg1, arg2)
            zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141e2d7f0(*(arg1 + 0x380), rax_30 + 0x10, 
                arg1 + 0x3c8, arg1 + 0x3d8, arg1 + 0x3e8, r13_3, &var_2a8, &var_2b8, 
                *(arg1 + 0x1bc), *(arg1 + 0x1c0))
        else
            zmm0_1 = *(*arg2 + 0xc4)
            zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0x390)
            
            if (zmm0_1[0] >= zmm14[0])
                zmm6 = __minss_xmmss_memss(zmm0_1[0], *(arg1 + 0x38c))
            else
                zmm6 = zmm14
            
            zmm2 = *(arg1 + 0x384)
            zmm3 = *(arg1 + 0x380)
            zmm2[0] = zmm2[0] * zmm0_1[0]
            zmm2[0] = zmm2[0] + zmm3[0]
            zmm2[0] = zmm2[0] / zmm6[0]
            int32_t i_4 = int.d(zmm2[0])
            int32_t i_3
            
            if (i_4 s>= 0)
                i_3 = *(arg1 + 0x394)
                
                if (i_4 s< i_3)
                    i_3 = i_4
            else
                i_3 = 0
            
            zmm2[0] = zmm2[0] + zmm3[0]
            float temp0_25[0x4] = _mm_cvtepi32_ps(zx.o(i_3))
            temp0_25[0] = temp0_25[0] * zmm6[0]
            zmm2[0] = zmm2[0] - temp0_25[0]
            
            if (zmm2[0] >= zmm14[0])
                zmm2 = __minss_xmmss_memss(zmm2[0], 0x3daaaaab)
            else
                zmm2 = zmm14
            
            *(arg1 + 0x384) = zmm2[0]
            *(arg1 + 0x380) = zmm6[0]
            
            if (i_3 s> 0)
                uint64_t i_2 = zx.q(i_3)
                uint64_t i
                
                do
                    zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141e2d7f0(sub_141ad3570(arg1, arg2), 
                        rax_30 + 0x10, arg1 + 0x3c8, arg1 + 0x3d8, arg1 + 0x3e8, r13_3, &var_2a8, 
                        &var_2b8, *(arg1 + 0x1bc), *(arg1 + 0x1c0))
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                r12 = arg3
                i_1 = 0
    
    if ((*(arg1 + 0x244) & 8) != 0)
        bool cond:4_1 = *(arg1 + 0x410) s<= 0
        void* rdx_19 = arg2[3]
        var_238[0] = rdx_19
        
        if (not(cond:4_1))
            float var_98_1[0x4] = zmm11
            uint64_t rcx_27 = 0
            float var_a8_1[0x4] = zmm12
            int32_t* rsi_4 = nullptr
            float var_b8_1[0x4] = zmm13
            float var_d8_1[0x4] = zmm15
            var_248 = 0
            var_2d8 = 0
            
            do
                int64_t r14_6 = *(arg1 + 0x398)
                void* r13_6 = *(arg1 + 0x408) + rcx_27
                
                if (sub_141ea6180(r13_6, rdx_19) != 0)
                    int32_t rax_49 = *(r13_6 + 8)
                    uint64_t r9_11 = var_238[0]
                    float var_298
                    
                    if (rax_49 s>= 0)
                        var_298 = *(r13_6 + 0xc)
                    else
                        int32_t rcx_29 = rax_49 * 2
                        
                        if ((rcx_29 & 0xfffffffe) == 0xfffffffe)
                            var_298 = -nanf
                        else
                            var_298 = *(*(r9_11 + 0x80) + (sx.q(rcx_29) s>> 1 << 2))
                    
                    bool cond:10_1 = *(arg1 + 0x250) == 0
                    zmm12 = *(rsi_4 + r14_6 + 0x18)
                    zmm13 = *(rsi_4 + r14_6 + 0x10)
                    zmm11 = *(rsi_4 + r14_6 + 0x14)
                    int64_t rax_54 = *(arg1 + 0x3f8)
                    uint64_t rcx_33 = var_248
                    zmm5_1 = *(rsi_4 + r14_6 + 0x1c)
                    zmm1_1 = zx.o(*(rax_54 + rcx_33))
                    int32_t rax_55 = *(rax_54 + rcx_33 + 8)
                    var_2a8 = zmm1_1.q
                    zmm3 = var_2a8.d
                    zmm12[0] = zmm12[0] * zmm3[0]
                    zmm10 = rax_55
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    zmm12[0] = zmm12[0] * temp0_28[0]
                    zmm11[0] = zmm11[0] * zmm10[0]
                    zmm13[0] = zmm13[0] * temp0_28[0]
                    zmm11[0] = zmm11[0] - zmm12[0]
                    zmm13[0] = zmm13[0] * zmm10[0]
                    zmm12[0] = zmm12[0] - zmm13[0]
                    zmm11[0] = zmm11[0] * zmm3[0]
                    zmm11[0] = zmm11[0] + zmm11[0]
                    zmm13[0] = zmm13[0] - zmm11[0]
                    zmm12[0] = zmm12[0] * zmm11[0]
                    zmm12[0] = zmm12[0] + zmm12[0]
                    zmm5_1[0] = zmm5_1[0] * zmm11[0]
                    zmm13[0] = zmm13[0] + zmm13[0]
                    zmm11[0] = zmm11[0] * zmm11[0]
                    zmm5_1[0] = zmm5_1[0] + zmm3[0]
                    zmm12[0] = zmm12[0] * zmm12[0]
                    zmm5_1[0] = zmm5_1[0] * zmm12[0]
                    zmm11[0] = zmm11[0] * zmm13[0]
                    zmm5_1[0] = zmm5_1[0] + temp0_28[0]
                    zmm5_1[0] = zmm5_1[0] * zmm13[0]
                    zmm11[0] = zmm11[0] - zmm12[0]
                    zmm13[0] = zmm13[0] * zmm12[0]
                    zmm13[0] = zmm13[0] * zmm13[0]
                    zmm5_1[0] = zmm5_1[0] + zmm10[0]
                    zmm13[0] = zmm13[0] - zmm11[0]
                    zmm11[0] = zmm11[0] + zmm5_1[0]
                    zmm12[0] = zmm12[0] - zmm13[0]
                    zmm0_1 = *(rsi_4 + r14_6 + 0x10)
                    float var_198[0x4] = zmm0_1
                    var_1c8 = zmm0_1
                    zmm0_1 = data_14399f670
                    zmm13[0] = zmm13[0] + zmm5_1[0]
                    zmm11[0] = zmm11[0] f+ *(rsi_4 + r14_6)
                    zmm12[0] = zmm12[0] + zmm5_1[0]
                    zmm13[0] = zmm13[0] f+ *(rsi_4 + r14_6 + 8)
                    zmm12[0] = zmm12[0] f+ *(rsi_4 + r14_6 + 4)
                    float var_1b8_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, zmm13[0].q), 
                        _mm_unpacklo_ps(zmm12, zmm14[0].q)[0].q)
                    float var_1a8_2[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(data_14399f668, zmm0_1[0].q), 
                        _mm_unpacklo_ps(data_14399f66c, zmm14[0].q)[0].q)
                    float var_288
                    float var_148[0x4]
                    float var_138[0x4]
                    float var_128[0x4]
                    
                    if (not(cond:10_1))
                        zmm8 = data_143dbb0d0
                        zmm13 = data_143dbb0c0
                        zmm15 = data_143dbb0e0
                        var_208.o = zmm8
                        int32_t var_218
                        sub_141ea4020(r9_11, &var_218, &var_298)
                        int64_t rdx_21 = sx.q(var_218)
                        
                        if (rdx_21.d != 0xffffffff)
                            if (arg2[4][rdx_21] == 0)
                                sub_141a98300(&arg2[1], rdx_21.d)
                            
                            int64_t rax_57 = arg2[1]
                            char r8_11 = *(arg1 + 0x241)
                            int64_t rcx_38 = rdx_21 * 6
                            zmm1_1 = *(rax_57 + (rcx_38 << 3) + 0x10)
                            var_118 = *(rax_57 + (rcx_38 << 3))
                            float var_108_1[0x4] = zmm1_1
                            float var_f8_2[0x4] = *(rax_57 + (rcx_38 << 3) + 0x20)
                            sub_141abbf90(arg1, &var_148, r8_11, arg2, &var_118)
                            zmm8 = var_138
                            zmm13 = var_148
                            zmm15 = var_128
                            var_208.o = zmm8
                        
                        zmm6 = *(arg1 + 0x2b0)
                        zmm7 = data_143f2b8d0
                        int32_t rax_58 = *(arg1 + 0x2cc)
                        zmm9 = data_143f2b850
                        zmm10 = data_143f2b840
                        zmm11 = data_143f2b830
                        var_2b8 = *(arg1 + 0x2c4)
                        int32_t var_2b0_4 = rax_58
                        uint32_t temp0_37 =
                            _mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm6, zmm15), zmm7, 1))
                        int64_t* var_228
                        var_228.o = zmm7
                        zmm14 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                        float var_284
                        uint32_t var_280
                        
                        if (temp0_37 == 0)
                            zmm3 = *(arg1 + 0x290)
                            zmm5_1 = *(arg1 + 0x2a0)
                            float temp0_167[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
                            float temp0_168[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                            float temp0_170[0x4] =
                                _mm_mul_ps(temp0_167, _mm_shuffle_ps(zmm13, zmm13, 0))
                            float temp0_171[0x4] = _mm_mul_ps(zmm3, zmm14)
                            float temp0_172[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                            float temp0_173[0x4] = _mm_mul_ps(temp0_170, zmm9)
                            float temp0_174[0x4] = _mm_mul_ps(zmm5_1, zmm15)
                            float temp0_175[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                            float temp0_176[0x4] = _mm_add_ps(temp0_173, temp0_171)
                            float temp0_177[0x4] = _mm_mul_ps(zmm6, zmm15)
                            float temp0_179[0x4] =
                                _mm_mul_ps(temp0_168, _mm_shuffle_ps(zmm13, zmm13, 0x55))
                            float temp0_181[0x4] =
                                _mm_mul_ps(temp0_172, _mm_shuffle_ps(zmm13, zmm13, 0xaa))
                            float temp0_182[0x4] = _mm_mul_ps(temp0_179, zmm10)
                            float temp0_183[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xc9)
                            float temp0_184[0x4] = _mm_mul_ps(temp0_181, zmm11)
                            float temp0_185[0x4] = _mm_add_ps(temp0_176, temp0_182)
                            float temp0_186[0x4] = _mm_mul_ps(temp0_183, temp0_175)
                            float var_1d8_4[0x4] = temp0_177
                            float temp0_187[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                            float temp0_188[0x4] = _mm_add_ps(temp0_185, temp0_184)
                            float temp0_190[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0xd2), temp0_187)
                            var_1f8 = temp0_188
                            float temp0_191[0x4] = _mm_sub_ps(temp0_190, temp0_186)
                            float temp0_192[0x4] = _mm_add_ps(temp0_191, temp0_191)
                            float temp0_194[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_192, temp0_192, 0xd2), temp0_187)
                            float temp0_195[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xc9)
                            float temp0_196[0x4] = _mm_mul_ps(zmm14, temp0_192)
                            float temp0_197[0x4] = _mm_mul_ps(temp0_195, temp0_175)
                            float temp0_198[0x4] = _mm_add_ps(temp0_196, temp0_174)
                            float var_1e8_4[0x4] = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(temp0_194, temp0_197), temp0_198), zmm8)
                        else
                            zmm10 = data_143f2b810
                            float temp0_39[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
                            float temp0_40[0x4] = _mm_add_ps(zmm13, zmm13)
                            _mm_mul_ps(zmm6, zmm15)
                            float temp0_42[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                            float temp0_44[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0x29), temp0_39)
                            float temp0_45[0x4] = _mm_mul_ps(temp0_40, zmm13)
                            float temp0_47[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0x12), zmm14)
                            float temp0_50[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_45, temp0_45, 0x1a), 
                                _mm_shuffle_ps(temp0_45, temp0_45, 1))
                            zmm3 = *(arg1 + 0x290)
                            float temp0_51[0x4] = _mm_add_ps(temp0_47, temp0_44)
                            float temp0_52[0x4] = _mm_sub_ps(temp0_44, temp0_47)
                            float temp0_53[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                            float temp0_54[0x4] = _mm_mul_ps(temp0_51, zmm15)
                            float temp0_55[0x4] = _mm_mul_ps(temp0_42, temp0_52)
                            zmm1_1 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(zmm10, temp0_50), zmm15), data_143f2b820)
                            float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, zmm1_1, 0x32)
                            float temp0_61[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1_1, 0), temp0_59, 0x82)
                            float temp0_62[0x4] = _mm_shuffle_ps(temp0_54, zmm1_1, 0x31)
                            float temp0_64[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_55, zmm1_1, 0x10), temp0_62, 0x88)
                            float temp0_66[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_54, temp0_55, 0x12), zmm1_1, 0xe8)
                            float temp0_67[0x4] = _mm_add_ps(zmm3, zmm3)
                            zmm10[0].q = zmm8 u>> 0x40
                            float temp0_68[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                            float temp0_69[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            float temp0_70[0x4] = _mm_mul_ps(zmm3, temp0_67)
                            float temp0_72[0x4] =
                                _mm_mul_ps(temp0_53, _mm_shuffle_ps(temp0_67, temp0_67, 0x29))
                            float temp0_74[0x4] =
                                _mm_mul_ps(temp0_69, _mm_shuffle_ps(temp0_67, temp0_67, 0x12))
                            float temp0_75[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                            float temp0_76[0x4] = _mm_add_ps(temp0_74, temp0_72)
                            float temp0_77[0x4] = _mm_sub_ps(temp0_72, temp0_74)
                            float temp0_78[0x4] = _mm_mul_ps(temp0_76, zmm6)
                            float temp0_81[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_70, temp0_70, 0x1a), 
                                _mm_shuffle_ps(temp0_70, temp0_70, 1))
                            float temp0_82[0x4] = _mm_mul_ps(temp0_75, temp0_77)
                            zmm1_1 = __andps_xmmxud_memxud(
                                __mulps_xmmps_memps(_mm_sub_ps(zmm10, temp0_81), zmm6), 
                                data_143f2b820)
                            float temp0_86[0x4] = _mm_shuffle_ps(temp0_82, zmm1_1, 0x32)
                            float temp0_88[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_78, zmm1_1, 0), temp0_86, 0x82)
                            float temp0_89[0x4] = _mm_shuffle_ps(temp0_78, zmm1_1, 0x31)
                            float temp0_91[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_82, zmm1_1, 0x10), temp0_89, 0x88)
                            float temp0_92[0x4] = _mm_shuffle_ps(temp0_78, temp0_82, 0x12)
                            zmm5_1 = *(arg1 + 0x2a0)
                            float temp0_93[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0x55)
                            float temp0_94[0x4] = _mm_shuffle_ps(temp0_92, zmm1_1, 0xe8)
                            float temp0_96[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xaa), temp0_66)
                            float temp0_97[0x4] = _mm_mul_ps(temp0_93, temp0_64)
                            zmm10[0].q = zmm5_1 u>> 0x40
                            float temp0_98[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
                            float temp0_99[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0)
                            float temp0_101[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xff), temp0_68)
                            float temp0_103[0x4] =
                                _mm_add_ps(temp0_97, _mm_mul_ps(temp0_99, temp0_61))
                            float temp0_105[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0), temp0_61)
                            float temp0_106[0x4] = _mm_add_ps(temp0_103, temp0_96)
                            float temp0_108[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0xaa), temp0_66)
                            float temp0_109[0x4] = _mm_add_ps(temp0_106, temp0_101)
                            float temp0_111[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0x55), temp0_64)
                            float temp0_112[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xff)
                            var_288.o = temp0_109
                            float temp0_113[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0x55)
                            float temp0_114[0x4] = _mm_add_ps(temp0_111, temp0_105)
                            float temp0_115[0x4] = _mm_mul_ps(temp0_113, temp0_64)
                            float temp0_116[0x4] = _mm_mul_ps(temp0_112, temp0_68)
                            float temp0_117[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0)
                            float temp0_118[0x4] = _mm_add_ps(temp0_114, temp0_108)
                            float temp0_119[0x4] = _mm_mul_ps(temp0_117, temp0_61)
                            float temp0_121[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xaa), temp0_66)
                            float temp0_122[0x4] = _mm_add_ps(temp0_118, temp0_116)
                            float temp0_123[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0xff)
                            float temp0_124[0x4] = _mm_add_ps(temp0_115, temp0_119)
                            float temp0_125[0x4] = _mm_mul_ps(temp0_123, temp0_68)
                            float temp0_126[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0)
                            int96_t var_278_1 = temp0_122[0].12
                            float temp0_127[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)
                            float temp0_128[0x4] = _mm_add_ps(temp0_124, temp0_121)
                            float temp0_129[0x4] = _mm_mul_ps(temp0_127, temp0_64)
                            float temp0_131[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xaa), temp0_66)
                            float temp0_132[0x4] = _mm_mul_ps(temp0_126, temp0_61)
                            float temp0_133[0x4] = _mm_add_ps(temp0_128, temp0_125)
                            float temp0_135[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xff), temp0_68)
                            float temp0_136[0x4] = _mm_add_ps(temp0_129, temp0_132)
                            int96_t var_268_1 = temp0_133[0].12
                            int96_t var_258_1 =
                                _mm_add_ps(_mm_add_ps(temp0_136, temp0_131), temp0_135)[0].12
                            zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_288, 0x322bcc77)
                            float zmm2_2[0x4] = var_288
                            uint32_t zmm0_8[0x4] = var_280
                            float zmm4_3[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_228.o, zmm12, 2), 
                                data_143f2b8c0 ^ zmm10) ^ data_143f2b8c0
                            zmm2_2[0] = zmm2_2[0] * zmm4_3[0]
                            float zmm1_4 = var_284 * zmm4_3[0]
                            zmm0_8[0] = zmm0_8[0] f* zmm4_3[0]
                            var_288 = zmm2_2[0]
                            float temp0_141[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                            var_280 = zmm0_8[0]
                            zmm0_8 = var_278_1:8.d
                            zmm0_8[0] = zmm0_8[0] f* temp0_141[0]
                            var_284 = zmm1_4
                            zmm1_4 = var_278_1:4.d * temp0_141[0]
                            float zmm3_2 = var_278_1.d * temp0_141[0]
                            zmm2_2 = var_268_1.d
                            float temp0_142[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                            var_278_1:8.d = zmm0_8[0]
                            zmm0_8 = var_268_1:8.d
                            var_278_1:4.d = zmm1_4
                            zmm0_8[0] = zmm0_8[0] f* temp0_142[0]
                            zmm2_2[0] = zmm2_2[0] * temp0_142[0]
                            zmm1_4 = var_268_1:4.d * temp0_142[0]
                            var_268_1:8.d = zmm0_8[0]
                            var_278_1.d = zmm3_2
                            var_268_1.d = zmm2_2[0]
                            var_268_1:4.d = zmm1_4
                            uint32_t var_178[0x4]
                            sub_14077e4a0(&var_178, &var_288)
                            zmm5_1 = var_178
                            zmm6 = data_143f2b8b0
                            zmm7 = data_143f2b8d0
                            zmm8 = var_208.o
                            zmm9 = data_143f2b850
                            zmm10 = data_143f2b840
                            zmm11 = data_143f2b830
                            float temp0_143[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                            var_228.d = 0x322bcc77
                            float var_1d8_3[0x4] = zmm12
                            float temp0_145[0x4] =
                                _mm_add_ps(temp0_143, _mm_shuffle_ps(temp0_143, temp0_143, 0x4e))
                            float temp0_147[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_145, temp0_145, 0x39), temp0_145)
                            float temp0_148[0x4] = _mm_rsqrt_ps(temp0_147)
                            float temp0_149[0x4] = _mm_mul_ps(temp0_147, zmm6)
                            float temp0_154[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_148, temp0_148), temp0_149)), 
                                    temp0_148), 
                                temp0_148)
                            float temp0_157[0x4] = _mm_sub_ps(zmm6, 
                                _mm_mul_ps(_mm_mul_ps(temp0_154, temp0_154), temp0_149))
                            float temp0_159[0x4] = _mm_cmpeq_ps(
                                _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_147, 2)
                            var_228.o = zmm7
                            float temp0_161[0x4] =
                                _mm_add_ps(_mm_mul_ps(temp0_157, temp0_154), temp0_154)
                            float temp0_162[0x4] = _mm_unpacklo_ps(var_258_1:4.d, 0)
                            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_161, zmm5_1) ^ data_143f2b8a0, 
                                temp0_159) ^ data_143f2b8a0
                            float var_1e8_3[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_258_1.d, var_258_1:8.d[0].q), temp0_162[0].q)
                            var_178 = zmm6
                            var_1f8 = zmm6
                        
                        zmm12 = *(arg1 + 0x280)
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm15), zmm7, 1)) == 0)
                            zmm2 = *(arg1 + 0x260)
                            zmm4_1 = *(arg1 + 0x270)
                            float temp0_333[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                            float temp0_334[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                            float temp0_336[0x4] =
                                _mm_mul_ps(temp0_333, _mm_shuffle_ps(zmm13, zmm13, 0))
                            float temp0_337[0x4] = _mm_mul_ps(zmm14, zmm2)
                            float temp0_338[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                            float temp0_339[0x4] = _mm_mul_ps(temp0_336, zmm9)
                            float temp0_340[0x4] = _mm_mul_ps(zmm4_1, zmm15)
                            float temp0_341[0x4] = _mm_mul_ps(zmm12, zmm15)
                            float temp0_342[0x4] = _mm_add_ps(temp0_339, temp0_337)
                            float temp0_344[0x4] =
                                _mm_mul_ps(temp0_334, _mm_shuffle_ps(zmm13, zmm13, 0x55))
                            float temp0_346[0x4] =
                                _mm_mul_ps(temp0_338, _mm_shuffle_ps(zmm13, zmm13, 0xaa))
                            float temp0_347[0x4] = _mm_mul_ps(temp0_344, zmm10)
                            float temp0_348[0x4] = _mm_shuffle_ps(temp0_340, temp0_340, 0xc9)
                            float temp0_349[0x4] = _mm_mul_ps(temp0_346, zmm11)
                            var_128 = temp0_341
                            float temp0_351[0x4] =
                                _mm_add_ps(_mm_add_ps(temp0_342, temp0_347), temp0_349)
                            float temp0_352[0x4] = _mm_shuffle_ps(temp0_340, temp0_340, 0xd2)
                            var_148 = temp0_351
                            float temp0_353[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                            float temp0_354[0x4] = _mm_mul_ps(temp0_348, temp0_353)
                            float temp0_355[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                            float temp0_357[0x4] =
                                _mm_sub_ps(_mm_mul_ps(temp0_352, temp0_355), temp0_354)
                            float temp0_358[0x4] = _mm_add_ps(temp0_357, temp0_357)
                            float temp0_359[0x4] = _mm_mul_ps(zmm14, temp0_358)
                            float temp0_361[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_358, temp0_358, 0xd2), temp0_355)
                            float temp0_362[0x4] = _mm_shuffle_ps(temp0_358, temp0_358, 0xc9)
                            float temp0_363[0x4] = _mm_add_ps(temp0_359, temp0_340)
                            var_138 = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(temp0_361, _mm_mul_ps(temp0_362, temp0_353)), 
                                    temp0_363), 
                                zmm8)
                        else
                            zmm9 = data_143f2b810
                            float temp0_205[0x4] = _mm_add_ps(zmm13, zmm13)
                            float temp0_206[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                            float temp0_207[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                            _mm_mul_ps(zmm12, zmm15)
                            float temp0_209[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0x29)
                            float temp0_210[0x4] = _mm_mul_ps(temp0_205, zmm13)
                            float temp0_212[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0x12), zmm14)
                            float temp0_214[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 4), temp0_209)
                            float temp0_217[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_210, temp0_210, 0x1a), 
                                _mm_shuffle_ps(temp0_210, temp0_210, 1))
                            float temp0_218[0x4] = _mm_add_ps(temp0_212, temp0_214)
                            float temp0_219[0x4] = _mm_sub_ps(temp0_214, temp0_212)
                            float temp0_220[0x4] = _mm_sub_ps(zmm9, temp0_217)
                            float temp0_221[0x4] = _mm_mul_ps(temp0_218, zmm15)
                            float temp0_222[0x4] = _mm_mul_ps(temp0_206, temp0_219)
                            zmm13 = var_208.o
                            zmm1_1 =
                                __andps_xmmxud_memxud(_mm_mul_ps(temp0_220, zmm15), data_143f2b820)
                            float temp0_225[0x4] = _mm_shuffle_ps(temp0_222, zmm1_1, 0x32)
                            float temp0_227[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_221, zmm1_1, 0), temp0_225, 0x82)
                            float temp0_228[0x4] = _mm_shuffle_ps(temp0_221, zmm1_1, 0x31)
                            float temp0_229[0x4] = _mm_shuffle_ps(temp0_221, temp0_222, 0x12)
                            float temp0_231[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_222, zmm1_1, 0x10), temp0_228, 0x88)
                            float temp0_232[0x4] = _mm_shuffle_ps(temp0_229, zmm1_1, 0xe8)
                            zmm1_1 = *(arg1 + 0x260)
                            zmm9[0].q = zmm13 u>> 0x40
                            float temp0_233[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                            float temp0_234[0x4] = _mm_shuffle_ps(zmm13, zmm9, 0xc4)
                            float temp0_235[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                            float temp0_236[0x4] = _mm_mul_ps(temp0_233, zmm1_1)
                            float temp0_238[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0x29), temp0_235)
                            float temp0_239[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                            float temp0_240[0x4] = _mm_shuffle_ps(temp0_236, temp0_236, 0x1a)
                            float temp0_242[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0x12), temp0_239)
                            float temp0_244[0x4] =
                                _mm_add_ps(temp0_240, _mm_shuffle_ps(temp0_236, temp0_236, 1))
                            float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_238)
                            float temp0_246[0x4] = _mm_sub_ps(temp0_238, temp0_242)
                            float temp0_247[0x4] = _mm_sub_ps(zmm9, temp0_244)
                            float temp0_248[0x4] = _mm_mul_ps(temp0_245, zmm12)
                            float temp0_249[0x4] = _mm_mul_ps(temp0_207, temp0_246)
                            zmm1_1 =
                                __andps_xmmxud_memxud(_mm_mul_ps(temp0_247, zmm12), data_143f2b820)
                            float temp0_252[0x4] = _mm_shuffle_ps(temp0_249, zmm1_1, 0x32)
                            float temp0_254[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_248, zmm1_1, 0), temp0_252, 0x82)
                            float temp0_255[0x4] = _mm_shuffle_ps(temp0_248, zmm1_1, 0x31)
                            float temp0_257[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_249, zmm1_1, 0x10), temp0_255, 0x88)
                            float temp0_258[0x4] = _mm_shuffle_ps(temp0_248, temp0_249, 0x12)
                            zmm5_1 = *(arg1 + 0x270)
                            float temp0_259[0x4] = _mm_shuffle_ps(temp0_254, temp0_254, 0x55)
                            float temp0_260[0x4] = _mm_shuffle_ps(temp0_258, zmm1_1, 0xe8)
                            float temp0_262[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_254, temp0_254, 0xaa), temp0_232)
                            float temp0_263[0x4] = _mm_mul_ps(temp0_259, temp0_231)
                            zmm9[0].q = zmm5_1 u>> 0x40
                            float temp0_264[0x4] = _mm_shuffle_ps(zmm5_1, zmm9, 0xc4)
                            float temp0_265[0x4] = _mm_shuffle_ps(temp0_254, temp0_254, 0)
                            float temp0_267[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_254, temp0_254, 0xff), temp0_234)
                            float temp0_269[0x4] =
                                _mm_add_ps(temp0_263, _mm_mul_ps(temp0_265, temp0_227))
                            float temp0_271[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_257, temp0_257, 0), temp0_227)
                            float temp0_272[0x4] = _mm_add_ps(temp0_269, temp0_262)
                            float temp0_274[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_257, temp0_257, 0xaa), temp0_232)
                            float temp0_275[0x4] = _mm_add_ps(temp0_272, temp0_267)
                            float temp0_277[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_257, temp0_257, 0x55), temp0_231)
                            float temp0_278[0x4] = _mm_shuffle_ps(temp0_257, temp0_257, 0xff)
                            var_288.o = temp0_275
                            float temp0_279[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0x55)
                            float temp0_280[0x4] = _mm_add_ps(temp0_277, temp0_271)
                            float temp0_281[0x4] = _mm_mul_ps(temp0_279, temp0_231)
                            float temp0_282[0x4] = _mm_mul_ps(temp0_278, temp0_234)
                            float temp0_283[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0)
                            float temp0_284[0x4] = _mm_add_ps(temp0_280, temp0_274)
                            float temp0_285[0x4] = _mm_mul_ps(temp0_283, temp0_227)
                            float temp0_287[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_260, temp0_260, 0xaa), temp0_232)
                            float temp0_288[0x4] = _mm_add_ps(temp0_284, temp0_282)
                            float temp0_289[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0xff)
                            float temp0_290[0x4] = _mm_add_ps(temp0_281, temp0_285)
                            float temp0_291[0x4] = _mm_mul_ps(temp0_289, temp0_234)
                            float temp0_292[0x4] = _mm_shuffle_ps(temp0_264, temp0_264, 0x55)
                            int96_t var_278_2 = temp0_288[0].12
                            float temp0_293[0x4] = _mm_shuffle_ps(temp0_264, temp0_264, 0)
                            float temp0_294[0x4] = _mm_add_ps(temp0_290, temp0_287)
                            float temp0_295[0x4] = _mm_mul_ps(temp0_293, temp0_227)
                            float temp0_297[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_264, temp0_264, 0xaa), temp0_232)
                            float temp0_298[0x4] = _mm_mul_ps(temp0_292, temp0_231)
                            float temp0_299[0x4] = _mm_add_ps(temp0_294, temp0_291)
                            float temp0_301[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_264, temp0_264, 0xff), temp0_234)
                            float temp0_302[0x4] = _mm_add_ps(temp0_295, temp0_298)
                            int96_t var_268_2 = temp0_299[0].12
                            int96_t var_258_2 =
                                _mm_add_ps(_mm_add_ps(temp0_302, temp0_297), temp0_301)[0].12
                            int128_t zmm9_1
                            float zmm11_1[0x4]
                            zmm9_1, zmm11_1 = sub_1407740e0(&var_288, 0x322bcc77)
                            float zmm2_3[0x4] = var_288
                            uint32_t zmm0_9[0x4] = var_280
                            float zmm4_4[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_228.o, zmm11_1, 2), 
                                data_143f2b8c0 ^ zmm9_1) ^ data_143f2b8c0
                            zmm2_3[0] = zmm2_3[0] * zmm4_4[0]
                            float zmm1_5 = var_284 * zmm4_4[0]
                            zmm0_9[0] = zmm0_9[0] f* zmm4_4[0]
                            var_288 = zmm2_3[0]
                            float temp0_307[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
                            var_280 = zmm0_9[0]
                            zmm0_9 = var_278_2:8.d
                            zmm0_9[0] = zmm0_9[0] f* temp0_307[0]
                            var_284 = zmm1_5
                            zmm1_5 = var_278_2:4.d * temp0_307[0]
                            float zmm3_3 = var_278_2.d * temp0_307[0]
                            zmm2_3 = var_268_2.d
                            float temp0_308[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa)
                            var_278_2:8.d = zmm0_9[0]
                            zmm0_9 = var_268_2:8.d
                            var_278_2:4.d = zmm1_5
                            zmm0_9[0] = zmm0_9[0] f* temp0_308[0]
                            zmm2_3[0] = zmm2_3[0] * temp0_308[0]
                            zmm1_5 = var_268_2:4.d * temp0_308[0]
                            var_268_2:8.d = zmm0_9[0]
                            var_278_2.d = zmm3_3
                            var_268_2.d = zmm2_3[0]
                            var_268_2:4.d = zmm1_5
                            uint32_t var_168[0x4]
                            sub_14077e4a0(&var_168, &var_288)
                            float zmm5_2[0x4] = var_168
                            float zmm6_3[0x4] = data_143f2b8b0
                            float temp0_309[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                            var_228.d = 0x322bcc77
                            var_128 = zmm11_1
                            float temp0_311[0x4] =
                                _mm_add_ps(temp0_309, _mm_shuffle_ps(temp0_309, temp0_309, 0x4e))
                            float temp0_313[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_311, temp0_311, 0x39), temp0_311)
                            float temp0_314[0x4] = _mm_rsqrt_ps(temp0_313)
                            float temp0_315[0x4] = _mm_mul_ps(temp0_313, zmm6_3)
                            float temp0_320[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_3, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_314, temp0_314), temp0_315)), 
                                    temp0_314), 
                                temp0_314)
                            float temp0_323[0x4] = _mm_sub_ps(zmm6_3, 
                                _mm_mul_ps(_mm_mul_ps(temp0_320, temp0_320), temp0_315))
                            float temp0_325[0x4] = _mm_cmpeq_ps(
                                _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_313, 2)
                            float temp0_327[0x4] =
                                _mm_add_ps(_mm_mul_ps(temp0_323, temp0_320), temp0_320)
                            float temp0_328[0x4] = _mm_unpacklo_ps(var_258_2:4.d, 0)
                            zmm6_3 = _mm_and_ps(_mm_mul_ps(temp0_327, zmm5_2) ^ data_143f2b8a0, 
                                temp0_325) ^ data_143f2b8a0
                            var_138 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_258_2.d, var_258_2:8.d[0].q), temp0_328[0].q)
                            var_168 = zmm6_3
                            var_148 = zmm6_3
                        
                        zmm1_1 = *(arg1 + 0x2dc)
                        char rax_61 = *(arg1 + 0x2d0)
                        var_198 = var_198
                        int32_t var_310
                        var_310.q = &var_2b8
                        int32_t var_318
                        var_318.b = *(arg1 + 0x2c0)
                        uint128_t* var_320
                        var_320.d = (*(arg1 + 0x374))[0]
                        uint128_t* var_328
                        var_328.b = *(arg1 + 0x370)
                        var_330.b = *(arg1 + 0x2e4)
                        float var_158[0x4]
                        sub_141acba80(&var_158, &var_198, &var_148, &var_1f8, arg1 + 0x2e8, 
                            var_330.b, var_328.b, var_320.d, var_318.b, var_310, rax_61, 
                            (*(arg1 + 0x2d4))[0], (*(arg1 + 0x2d8))[0], zmm1_1[0], 
                            (*(arg1 + 0x2e0))[0])
                        var_1c8 = var_158
                    
                    void* rax_65 = *arg2
                    zmm14 = sub_141ab9f70(arg1, &var_148, *(arg1 + 0x241), arg2, &var_1c8, 
                        rax_65 + 0x10, rax_65 + 0x70)
                    int64_t r14_7 = sx.q(r12[1].d)
                    zmm6 = var_148
                    var_288 = var_298
                    int32_t rax_68 = (r14_7 + 1).d
                    r12[1].d = rax_68
                    
                    if (rax_68 s> *(r12 + 0xc))
                        sub_1405c4fe0(r12)
                    
                    int64_t rax_69 = *r12
                    int64_t rcx_50 = r14_7 << 6
                    *(rcx_50 + rax_69) = var_288.o
                    *(rcx_50 + rax_69 + 0x10) = zmm6
                    *(rcx_50 + rax_69 + 0x20) = var_138
                    *(rcx_50 + rax_69 + 0x30) = var_128
                
                uint64_t rcx_51 = var_2d8
                i_1 += 1
                var_248 += 0xc
                rcx_27 = rcx_51 + 0x10
                rdx_19 = var_238[0]
                rsi_4 = &rsi_4[0x7c]
                var_2d8 = rcx_27
            while (i_1 s< *(arg1 + 0x410))
    
    *(arg1 + 0x242) = *(arg1 + 0x241)
    void* rax_71 = *arg2
    *(arg1 + 0xd0) = *(rax_71 + 0x10)
    *(arg1 + 0xe0) = *(rax_71 + 0x20)
    *(arg1 + 0xf0) = *(rax_71 + 0x30)
    void* rax_72 = *arg2
    *(arg1 + 0x100) = *(rax_72 + 0x70)
    *(arg1 + 0x110) = *(rax_72 + 0x80)
    *(arg1 + 0x120) = *(rax_72 + 0x90)

int64_t result = sub_140b38680("AnimDynamicsEval", rax_2)
__security_check_cookie(rax_1 ^ &var_358)
return result
