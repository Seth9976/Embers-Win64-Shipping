// 函数: sub_141fb4080
// 地址: 0x141fb4080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_538
int64_t var_e8 = __security_cookie ^ &var_538
void* rdi = arg5
void var_188
void* r8 = &var_188
int64_t i_6 = 2
int64_t i_7 = 2
int64_t* r14 = arg2
int32_t r15 = arg4
void* var_488 = rdi
int64_t i

do
    *(r8 - 0x20) = 0
    void* rcx = r8 - 0x10
    *(r8 - 0x18) = 0
    *r8 = 0
    *(r8 + 8) = 0
    *(r8 + 0xc) = 0x80
    void* rax_2 = *r8
    r8 += 0x60
    
    if (rax_2 != 0)
        rcx = rax_2
    
    *rcx = 0
    *(rcx + 8) = 0
    *(r8 - 0x50) = 0xffffffff
    *(r8 - 0x4c) = 0
    *(r8 - 0x40) = 0
    *(r8 - 0x38) = 0
    *(r8 - 0x30) = 0xffffffff
    *(r8 - 0x2c) = 0
    *(r8 - 0x28) = 0
    i = i_7
    i_7 -= 1
while (i != 1)
char var_f0 = 1
void var_f8
sub_140d3a3a0(&var_f8, sub_140d3c6e0(arg1 + 0x238))
float i_1 = 0f
float i_5 = 0f

if (r14[1].d s> 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int64_t rdx_1 = 0
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4] = 0x3f800000
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4] = 0x3f000000
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    int64_t var_410_1 = 0
    
    do
        if (test_bit(r15, i_1))
            void* rcx_3 = rdi + 0x50
            void* r14_1 = *(*r14 + (rdx_1 << 3))
            void* rax_5 = *(rcx_3 + 0x10)
            
            if (rax_5 != 0)
                rcx_3 = rax_5
            
            int64_t* r12_1 = *(rcx_3 + (rdx_1 << 3))
            float var_510
            float i_3
            bool var_500
            int32_t var_4f8
            float i_4
            char var_4e8
            float i_8
            char var_4d8
            (*(*r12_1 + 0x20))(r12_1, 0, zx.q(*(arg1 + 0x158)), 0, 0, var_510, i_3, var_500, 
                var_4f8, i_4, var_4e8, i_8, var_4d8)
            void* j = *(arg1 + 0x150)
            zmm9 = zx.o(0)
            float zmm0_1
            
            for (void* rdi_3 = (sx.q(*(arg1 + 0x158)) << 5) + j; j != rdi_3; j += 0x20)
                void var_2b8
                sub_140acc920(&var_2b8, j + 0x18)
                zmm0_1 = *(j + 0x1c)
                var_500 = zmm0_1 > zmm9[0]
                i_3 = zmm9[0]
                var_510 = zmm0_1
                (*(*r12_1 + 0x30))(r12_1, j, j + 0xc, &var_2b8, 0, var_510, i_3, var_500)
            
            int32_t j_1 = 0
            
            if (*(arg1 + 0x168) s> 0)
                int64_t rdi_4 = 0
                
                do
                    int32_t* rbx_1 = *(arg1 + 0x160) + rdi_4
                    void var_2a8
                    sub_140acc920(&var_2a8, &rbx_1[6])
                    i_3 = zmm9[0]
                    var_510.b = 0
                    char var_518_1
                    var_518_1.d = rbx_1[7]
                    zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                        sub_142298cd0(r12_1, rbx_1, &rbx_1[3], &var_2a8, var_518_1, var_510.b, i_3)
                    j_1 += 1
                    rdi_4 += 0x20
                while (j_1 s< *(arg1 + 0x168))
            
            int32_t r9_2 =
                (*(*r12_1 + 0x20))(r12_1, 0, zx.q(*(arg1 + 0x178) * 5), 0, 0, var_510, i_3, var_500)
            int32_t* rdi_5 = *(arg1 + 0x170)
            void* r14_3 = sx.q(*(arg1 + 0x178)) * 0x1c + rdi_5
            char var_518_2
            float var_468
            float var_458
            float var_448
            float var_438
            float zmm4_1[0x4]
            float zmm5_1[0x4]
            
            if (rdi_5 != r14_3)
                zmm13 = 0x41000000
                float (* rbx_2)[0x4] = &rdi_5[5]
                
                do
                    zmm6 = (*rbx_2)[-2]
                    zmm6[0] = zmm6[0] f- *rdi_5
                    zmm5_1 = (*rbx_2)[-1]
                    zmm5_1[0] = zmm5_1[0] - rbx_2[-1][0]
                    zmm4_1 = *rbx_2
                    zmm4_1[0] = zmm4_1[0] - (*rbx_2)[-3]
                    zmm0_1 = zmm6[0] * zmm6[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm0_1
                    zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                    zmm7 = _mm_sqrt_ss(zx.o(0)[0], zmm5_1[0])
                    zmm8[0] = zmm8[0] / zmm7[0]
                    zmm0_1 = zmm8[0] * zmm6[0]
                    zmm8[0] = zmm8[0] * zmm5_1[0]
                    zmm8[0] = zmm8[0] * zmm4_1[0]
                    float var_478 = zmm0_1
                    float var_474_1 = zmm8[0]
                    float var_470_1 = zmm8[0]
                    float var_3a0
                    float var_390
                    int128_t zmm6_1
                    float zmm7_1[0x4]
                    int128_t zmm8_1
                    int128_t zmm9_1
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ad6430(&var_478, &var_3a0, &var_390)
                    var_468 = var_478
                    float var_464_1 = var_474_1
                    float var_460_1 = var_470_1
                    var_458 = var_3a0
                    float var_39c
                    float var_454_1 = var_39c
                    float var_398
                    float var_450_1 = var_398
                    var_448 = var_390
                    float var_38c
                    float var_444_1 = var_38c
                    float var_388
                    float var_440_1 = var_388
                    var_438 = *rdi_5
                    float var_434_1 = rbx_2[-1][0]
                    float var_430_1 = (*rbx_2)[-3]
                    int32_t var_45c_1 = 0
                    int32_t var_44c_1 = 0
                    int32_t var_43c_1 = 0
                    int32_t var_42c_1 = 0x3f800000
                    void var_298
                    sub_140acc920(&var_298, &(*rbx_2)[1])
                    i_3 = zmm9_1.d
                    var_510.b = 0
                    var_518_2.d = zmm13[0]
                    r9_2, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 = sub_142298f60(r12_1, &var_468, 
                        &var_298, zmm7_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11, zmm12, 
                        zmm13, var_518_2, var_510.b, i_3)
                    rdi_5 = &rdi_5[7]
                    rbx_2 = &(*rbx_2)[7]
                while (rdi_5 != r14_3)
                
                zmm13 = 0x3f000000
            
            int64_t rdi_6 = 0
            int32_t j_2 = 0
            
            if (*(arg1 + 0x198) s> 0)
                do
                    int32_t* rbx_4 = *(arg1 + 0x190) + rdi_6
                    void var_288
                    sub_140acc920(&var_288, &rbx_4[3])
                    r9_2 = sub_14229cc60(r12_1, rbx_4, rbx_4[4], &var_288, 0)
                    j_2 += 1
                    rdi_6 += 0x14
                while (j_2 s< *(arg1 + 0x198))
            
            int32_t* j_3 = *(arg1 + 0x180)
            void* rbx_5 = &j_3[sx.q(*(arg1 + 0x188)) * 6]
            void* var_408 = rbx_5
            int32_t var_4bc
            float var_498[0x4]
            int64_t var_1a8
            int32_t var_1a0
            int32_t var_174
            void var_170
            void* var_168
            int32_t var_160
            void var_158
            char var_150
            float zmm1_1[0x4]
            
            for (; j_3 != rbx_5; j_3 = &j_3[6])
                int32_t rax_13 = *(arg1 + 0x230)
                
                if (rax_13 == 2 || rax_13 == 1)
                    void var_278
                    sub_140acc920(&var_278, &j_3[5])
                    int32_t temp2_1 = *(arg1 + 0x230)
                    zmm1_1 = j_3[3]
                    var_4d8 = 1
                    int32_t rax_11 = 0
                    i_8 = zmm9[0]
                    
                    if (temp2_1 == 2)
                        rax_11 = 2
                    
                    int64_t var_380 = 0
                    int32_t var_378_1 = 0x3f800000
                    int32_t var_374 = 0
                    int64_t var_370_1 = 0x3f800000
                    int32_t rax_12 = 0x10
                    
                    if (temp2_1 == 2)
                        rax_12 = 9
                    
                    int64_t var_368 = 0x3f800000
                    int32_t var_360_1 = 0
                    var_4e8.d = _mm_cvtepi32_ps(zx.o(rax_11)).d
                    i_4.b = 0
                    var_4f8 = rax_12
                    var_500.d = j_3[4].d
                    i_3 = zmm1_1[0]
                    var_510.q = &var_278
                    var_518_2.q = &var_380
                    r9_2, zmm8, zmm9, zmm11, zmm12, zmm13 = sub_14229c260(r12_1, j_3, &var_368, 
                        &var_374, var_518_2, var_510, i_3, var_500, var_4f8, i_4.b, var_4e8, i_8, 
                        var_4d8)
                    rax_13 = *(arg1 + 0x230)
                
                if ((rax_13 & 0xfffffffd) == 0)
                    char var_4b8 = j_3[5].b
                    char var_4b7_1 = *(j_3 + 0x15)
                    char var_4b6_1 = *(j_3 + 0x16)
                    char var_4b5_1 = *(arg1 + 0x234)
                    void var_208
                    var_498 = *sub_140acc920(&var_208, &var_4b8)
                    int64_t r10_2 = sx.q(sub_140b212b0(&var_498, 0x10, 0))
                    var_4bc = r10_2.d
                    int64_t rcx_33
                    
                    if (var_1a0 == var_174)
                    label_141fb472c:
                        void*** r14_4
                        
                        if (var_150 == 0)
                        label_141fb485d:
                            char var_4c7 = 0
                            char* var_308_1 = &var_4c7
                            void*** (* var_310)() = j_sub_140597fc0
                            void*** rax_29 = sub_14081d830(0x1b0, 
                                sub_140a756e0(&var_310, &data_143958018) + 0x10, 1, 0)
                            r14_4 = rax_29
                            
                            if (rax_29 == 0)
                                r14_4 = nullptr
                            else
                                int32_t var_3f4_1 = 0
                                void var_330
                                int32_t rcx_36 = *sub_140b5e500(&var_330, 0x3e)
                                int64_t* rcx_37 = *(data_143f5b298 + 0x388)
                                int64_t rax_33 = (*(*rcx_37 + 0x280))(rcx_37)
                                sub_142118c70(r14_4)
                                float zmm0_7[0x4] = var_498
                                *r14_4 = &data_142e0eff8
                                r14_4[0x35] = rcx_36.q
                                r14_4[0x32] = rax_33
                                *(r14_4 + 0x198) = zmm0_7
                        else
                            if (sub_140d3e110(&var_158) == 0)
                                goto label_141fb485d
                            
                            char var_4c8 = 0
                            char* var_318_1 = &var_4c8
                            void*** (* var_320)() = j_sub_140597fc0
                            void*** rax_23 = sub_14081d830(0x1b0, 
                                sub_140a756e0(&var_320, &data_143958018) + 0x10, 1, 0)
                            r14_4 = rax_23
                            
                            if (rax_23 == 0)
                                r14_4 = nullptr
                            else
                                int64_t* rax_24 = sub_140d3c6e0(&var_158)
                                void var_2c0
                                int64_t* rax_25 = sub_140b58170(&var_2c0, "GizmoColor", 1)
                                int64_t rdx_17 = *rax_24
                                int64_t rbx_6 = *rax_25
                                int64_t rax_26 = (*(rdx_17 + 0x280))(rax_24, rdx_17)
                                sub_142118c70(r14_4)
                                float zmm0_6[0x4] = var_498
                                r14_4[0x32] = rax_26
                                *r14_4 = &data_142e0eff8
                                r14_4[0x35] = rbx_6
                                *(r14_4 + 0x198) = zmm0_6
                        
                        var_498[0].q = r14_4
                        sub_140bd26e0(&var_1a8, &var_4bc, &var_498)
                        rcx_33 = var_498[0].q
                        rbx_5 = var_408
                    else
                        void* rdx_14 = &var_170
                        
                        if (var_168 != 0)
                            rdx_14 = var_168
                        
                        int32_t rax_20 = *(rdx_14 + ((sx.q(var_160 - 1) & r10_2) << 2))
                        int32_t rcx_24 = rax_20
                        
                        if (rax_20 == 0xffffffff)
                            goto label_141fb472c
                        
                        int64_t r8_10 = var_1a8
                        
                        while (true)
                            int64_t r9_5 = sx.q(rcx_24) * 3
                            
                            if (*(r8_10 + (r9_5 << 3)) == r10_2.d)
                                break
                            
                            rcx_24 = *(r8_10 + (r9_5 << 3) + 0x10)
                            
                            if (rcx_24 == 0xffffffff)
                                goto label_141fb472c
                        
                        if (rcx_24 == 0xffffffff)
                            goto label_141fb472c
                        
                        void* rcx_32
                        
                        if (rax_20 == 0xffffffff)
                        label_141fb4842:
                            rcx_32 = nullptr
                        else
                            int64_t rdx_18
                            
                            while (true)
                                rdx_18 = sx.q(rax_20) * 3
                                
                                if (*(r8_10 + (rdx_18 << 3)) == r10_2.d)
                                    break
                                
                                rax_20 = *(r8_10 + (rdx_18 << 3) + 0x10)
                                
                                if (rax_20 == 0xffffffff)
                                    goto label_141fb4842_1
                            
                            rcx_32 = r8_10 + (rdx_18 << 3)
                            
                            if (rax_20 == 0xffffffff)
                            label_141fb4842_1:
                                rcx_32 = nullptr
                        
                        int64_t* rax_27 = rcx_32 + 8
                        
                        if (rcx_32 == 0)
                            rax_27 = nullptr
                        
                        rcx_33 = *rax_27
                    
                    var_4e8.q = var_488
                    i_4 = i_1
                    var_4f8.b = 0
                    var_500.q = rcx_33
                    i_3 = 2.24207754e-44f
                    var_510 = j_3[4][0]
                    var_518_2.d = j_3[3][0]
                    int64_t var_35c = 0
                    int32_t var_354_1 = 0x3f800000
                    int32_t var_350 = 0
                    int64_t var_34c_1 = 0x3f800000
                    int64_t var_3d8 = 0x3f800000
                    int32_t var_3d0_1 = 0
                    r9_2, zmm8, zmm9, zmm11, zmm12, zmm13 = sub_14229f8f0(j_3, &var_3d8, &var_350, 
                        &var_35c, var_518_2, var_510, i_3, var_500, var_4f8.b, i_4, var_4e8)
            
            float (* r13)[0x4] = *(arg1 + 0x1a0)
            void* rbx_10 = &r13[sx.q(*(arg1 + 0x1a8)) * 5]
            var_408 = rbx_10
            float var_428[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (r13 != rbx_10)
                char* r15_1 = r13 + 0x1e
                
                do
                    int32_t rax_38 = *(arg1 + 0x230)
                    
                    if (rax_38 == 2 || rax_38 == 1)
                        void var_268
                        sub_140acc920(&var_268, &r15_1[-2])
                        zmm1_1 = *(r15_1 + 2)
                        bool cond:4_1 = *(arg1 + 0x230) == 2
                        var_500 = true
                        zmm3 = _mm_add_ps(zmm1_1, zmm1_1)
                        i_3 = zmm9[0]
                        int32_t rax_37 = 0
                        float zmm0_8[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                        
                        if (cond:4_1)
                            rax_37 = 2
                        
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0_8)
                        zmm4_1 = _mm_mul_ps(zmm3, zmm1_1)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), 
                            _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff))
                        zmm1_1 = *(r15_1 + 0x22)
                        zmm0_8 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                        zmm5_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                        zmm0_8 = _mm_add_ps(zmm0_8, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                        zmm4_1 = data_143f3d230
                        zmm6 = _mm_add_ps(zmm3, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm3)
                        zmm3 = _mm_sub_ps(zmm4_1, zmm0_8)
                        zmm6 = _mm_mul_ps(zmm6, zmm1_1)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(zmm3, zmm1_1), data_143f3d240)
                        zmm0_8 = _mm_shuffle_ps(zmm5_1, zmm3, 0x32)
                        zmm1_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 0), zmm0_8, 0x82)
                        zmm0_8 = _mm_shuffle_ps(zmm6, zmm3, 0x31)
                        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm3, 0x10), zmm0_8, 0x88)
                        zmm0_8 = *(r15_1 + 0x12)
                        zmm4_1[0].q = zmm0_8 u>> 0x40
                        var_438.o = _mm_shuffle_ps(zmm0_8, zmm4_1, 0xc4)
                        zmm0_8 = _mm_cvtepi32_ps(zx.o(rax_37))
                        zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm5_1, 0x12), zmm3, 0xe8)
                        var_510 = zmm0_8[0]
                        var_468.o = zmm1_1
                        var_458.o = zmm2
                        var_448.o = zmm6
                        r9_2, zmm9 =
                            sub_14229b0c0(r12_1, &var_468, r13, &var_268, 0, var_510, i_3, var_500)
                        rax_38 = *(arg1 + 0x230)
                    
                    if ((rax_38 & 0xfffffffd) == 0)
                        char var_4b4 = r15_1[-2]
                        char var_4b3_1 = r15_1[-1]
                        char var_4b2_1 = *r15_1
                        char var_4b1_1 = *(arg1 + 0x234)
                        void var_1f8
                        var_498 = *sub_140acc920(&var_1f8, &var_4b4)
                        int64_t r10_3 = sx.q(sub_140b212b0(&var_498, 0x10, 0))
                        var_4bc = r10_3.d
                        int64_t r8_17
                        
                        if (var_1a0 == var_174)
                        label_141fb4bcf:
                            void*** r14_5
                            
                            if (var_150 == 0)
                            label_141fb4cfd:
                                char var_4c5 = 0
                                char* var_2e8_1 = &var_4c5
                                void*** (* var_2f0)() = j_sub_140597fc0
                                void*** rax_54 = sub_14081d830(0x1b0, 
                                    sub_140a756e0(&var_2f0, &data_143958018) + 0x10, 1, 0)
                                r14_5 = rax_54
                                
                                if (rax_54 == 0)
                                    r14_5 = nullptr
                                else
                                    int32_t var_3ec_1 = 0
                                    void var_32c
                                    int32_t rcx_60 = *sub_140b5e500(&var_32c, 0x3e)
                                    int64_t* rcx_61 = *(data_143f5b298 + 0x388)
                                    int64_t rax_58 = (*(*rcx_61 + 0x280))(rcx_61)
                                    sub_142118c70(r14_5)
                                    float zmm0_11[0x4] = var_498
                                    *r14_5 = &data_142e0eff8
                                    r14_5[0x35] = rcx_60.q
                                    r14_5[0x32] = rax_58
                                    *(r14_5 + 0x198) = zmm0_11
                            else
                                if (sub_140d3e110(&var_158) == 0)
                                    goto label_141fb4cfd
                                
                                char var_4c6 = 0
                                char* var_2f8_1 = &var_4c6
                                void*** (* var_300)() = j_sub_140597fc0
                                void*** rax_48 = sub_14081d830(0x1b0, 
                                    sub_140a756e0(&var_300, &data_143958018) + 0x10, 1, 0)
                                r14_5 = rax_48
                                
                                if (rax_48 == 0)
                                    r14_5 = nullptr
                                else
                                    int64_t* rax_49 = sub_140d3c6e0(&var_158)
                                    void var_210
                                    int64_t* rax_50 = sub_140b58170(&var_210, "GizmoColor", 1)
                                    int64_t rdx_28 = *rax_49
                                    int64_t rbx_11 = *rax_50
                                    int64_t rax_51 = (*(rdx_28 + 0x280))(rax_49, rdx_28)
                                    sub_142118c70(r14_5)
                                    float zmm0_10[0x4] = var_498
                                    r14_5[0x32] = rax_51
                                    *r14_5 = &data_142e0eff8
                                    r14_5[0x35] = rbx_11
                                    *(r14_5 + 0x198) = zmm0_10
                            
                            var_498[0].q = r14_5
                            sub_140bd26e0(&var_1a8, &var_4bc, &var_498)
                            r8_17 = var_498[0].q
                            rbx_10 = var_408
                        else
                            void* rdx_25 = &var_170
                            
                            if (var_168 != 0)
                                rdx_25 = var_168
                            
                            int32_t rax_45 = *(rdx_25 + ((sx.q(var_160 - 1) & r10_3) << 2))
                            int32_t rcx_49 = rax_45
                            
                            if (rax_45 == 0xffffffff)
                                goto label_141fb4bcf
                            
                            int64_t r8_16 = var_1a8
                            
                            while (true)
                                int64_t r9_8 = sx.q(rcx_49) * 3
                                
                                if (*(r8_16 + (r9_8 << 3)) == r10_3.d)
                                    break
                                
                                rcx_49 = *(r8_16 + (r9_8 << 3) + 0x10)
                                
                                if (rcx_49 == 0xffffffff)
                                    goto label_141fb4bcf
                            
                            if (rcx_49 == 0xffffffff)
                                goto label_141fb4bcf
                            
                            void* rcx_57
                            
                            if (rax_45 == 0xffffffff)
                            label_141fb4ce2:
                                rcx_57 = nullptr
                            else
                                int64_t rdx_29
                                
                                while (true)
                                    rdx_29 = sx.q(rax_45) * 3
                                    
                                    if (*(r8_16 + (rdx_29 << 3)) == r10_3.d)
                                        break
                                    
                                    rax_45 = *(r8_16 + (rdx_29 << 3) + 0x10)
                                    
                                    if (rax_45 == 0xffffffff)
                                        goto label_141fb4ce2_1
                                
                                rcx_57 = r8_16 + (rdx_29 << 3)
                                
                                if (rax_45 == 0xffffffff)
                                label_141fb4ce2_1:
                                    rcx_57 = nullptr
                            
                            int64_t* rax_52 = rcx_57 + 8
                            
                            if (rcx_57 == 0)
                                rax_52 = nullptr
                            
                            r8_17 = *rax_52
                        
                        zmm12 = *r13
                        zmm8 = *(r15_1 - 0xe)
                        zmm11 = *(r15_1 - 0x1a)
                        zmm9 = *(r15_1 - 0xa)
                        zmm8[0] = zmm8[0] - zmm11[0]
                        zmm7 = *(r15_1 - 0x12)
                        zmm11[0] = zmm11[0] + zmm8[0]
                        zmm10 = *(r15_1 - 0x16)
                        zmm7[0] = zmm7[0] - zmm12[0]
                        zmm12[0] = zmm12[0] + zmm7[0]
                        zmm8[0] = zmm8[0] * zmm13[0]
                        zmm7[0] = zmm7[0] * zmm13[0]
                        float var_3c8_1 = zmm8[0]
                        zmm1_1 = *(r15_1 + 2)
                        float var_3cc = zmm7[0]
                        zmm3 = _mm_add_ps(zmm1_1, zmm1_1)
                        zmm9[0] = zmm9[0] - zmm10[0]
                        zmm10[0] = zmm10[0] + zmm9[0]
                        zmm9[0] = zmm9[0] * zmm13[0]
                        zmm13 = data_143f3d230
                        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x29)
                        float var_3c4_1 = zmm9[0]
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1_1, zmm1_1, 4))
                        zmm4_1 = _mm_mul_ps(zmm3, zmm1_1)
                        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1_1)
                        zmm1_1 = *(r15_1 + 0x22)
                        float zmm0_9[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                        zmm5_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 1)
                        zmm15 = _mm_add_ps(zmm3, zmm2)
                        zmm0_9 = _mm_add_ps(zmm0_9, zmm4_1)
                        zmm2 = _mm_sub_ps(zmm2, zmm3)
                        zmm15 = _mm_mul_ps(zmm15, zmm1_1)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                        zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm13, zmm0_9), zmm1_1), 
                            data_143f3d240)
                        zmm0_9 = _mm_shuffle_ps(zmm5_1, zmm2, 0x32)
                        zmm1_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm2, 0), zmm0_9, 0x82)
                        zmm0_9 = _mm_shuffle_ps(zmm15, zmm2, 0x31)
                        zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm5_1, 0x12), zmm2, 0xe8)
                        zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm2, 0x10), zmm0_9, 0x88)
                        var_428 = zmm15
                        zmm15 = *(r15_1 + 0x12)
                        zmm13[0].q = zmm15 u>> 0x40
                        zmm15 = _mm_shuffle_ps(zmm15, zmm13, 0xc4)
                        zmm12[0] = zmm12[0] * 0.5f
                        zmm11[0] = zmm11[0] * 0.5f
                        zmm10[0] = zmm10[0] * 0.5f
                        zmm13[0].q = zx.o(0) u>> 0x40
                        var_498 = zmm1_1
                        zmm3 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
                        zmm6 = var_428
                        zmm2 = _mm_unpacklo_ps(zmm11, 0)
                        zmm1_1 = _mm_add_ps(zmm3, zmm3)
                        zmm4_1 = _mm_shuffle_ps(zmm3, zmm3, 4)
                        zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm12, zmm10[0].q), zmm2[0].q)
                        zmm0_9 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29)
                        zmm2 = _mm_mul_ps(zmm1_1, zmm3)
                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm0_9)
                        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                        zmm0_9 = _mm_shuffle_ps(zmm2, zmm2, 0x1a)
                        zmm3 = _mm_mul_ps(zmm3, zmm1_1)
                        zmm0_9 = _mm_add_ps(zmm0_9, _mm_shuffle_ps(zmm2, zmm2, 1))
                        zmm13[0].q = zmm8 u>> 0x40
                        zmm8 = _mm_shuffle_ps(zmm8, zmm13, 0xc4)
                        zmm7 = _mm_add_ps(zmm3, zmm4_1)
                        zmm4_1 = _mm_sub_ps(zmm4_1, zmm3)
                        zmm1_1 = __andps_xmmxud_memxud(_mm_sub_ps(zmm13, zmm0_9), data_143f3d240)
                        zmm0_9 = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x32)
                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1_1, 0), zmm0_9, 0x82)
                        zmm0_9 = _mm_shuffle_ps(zmm7, zmm1_1, 0x31)
                        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                        zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0x10), zmm0_9, 0x88)
                        zmm0_9 = _mm_shuffle_ps(zmm3, zmm3, 0)
                        zmm2 = _mm_mul_ps(zmm2, zmm14)
                        zmm7 = _mm_shuffle_ps(zmm7, zmm4_1, 0x12)
                        zmm4_1 = var_498
                        zmm7 = _mm_shuffle_ps(zmm7, zmm1_1, 0xe8)
                        zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                        zmm0_9 = _mm_mul_ps(zmm0_9, zmm4_1)
                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm6)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                        zmm2 = _mm_add_ps(zmm2, zmm0_9)
                        zmm3 = _mm_mul_ps(zmm3, zmm15)
                        zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm4_1)
                        zmm2 = _mm_add_ps(zmm2, zmm1_1)
                        zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm6)
                        zmm2 = _mm_add_ps(zmm2, zmm3)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm14)
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        var_468.o = zmm2
                        zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                        zmm3 = _mm_add_ps(zmm3, zmm0_9)
                        zmm5_1 = _mm_mul_ps(zmm5_1, zmm15)
                        zmm2 = _mm_mul_ps(zmm2, zmm14)
                        zmm0_9 = _mm_shuffle_ps(zmm7, zmm7, 0)
                        zmm3 = _mm_add_ps(zmm3, zmm1_1)
                        zmm0_9 = _mm_mul_ps(zmm0_9, zmm4_1)
                        zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm6)
                        var_458.o = _mm_add_ps(zmm3, zmm5_1)
                        zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0_9), zmm1_1)
                        var_510.q = var_488
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0x55), zmm14)
                        var_518_2.d = i_5
                        zmm0_9 = _mm_shuffle_ps(zmm8, zmm8, 0)
                        zmm1_1 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                        zmm0_9 = _mm_mul_ps(zmm0_9, zmm4_1)
                        zmm1_1 = _mm_mul_ps(zmm1_1, zmm6)
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                        zmm3 = _mm_add_ps(zmm3, zmm0_9)
                        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                        zmm7 = _mm_mul_ps(zmm7, zmm15)
                        zmm8 = _mm_mul_ps(zmm8, zmm15)
                        zmm3 = _mm_add_ps(zmm3, zmm1_1)
                        var_448.o = _mm_add_ps(zmm2, zmm7)
                        var_438.o = _mm_add_ps(zmm3, zmm8)
                        r9_2, zmm9, zmm11, zmm12 = sub_14229e880(&var_468, &var_3cc, r8_17, 0, 
                            zmm10, zmm11, zmm12, var_518_2, var_510)
                        zmm13 = 0x3f000000
                    
                    r13 = &r13[5]
                    r15_1 = &r15_1[0x50]
                while (r13 != rbx_10)
                
                zmm8 = 0x3f800000
            
            int128_t* j_4 = *(arg1 + 0x1d0)
            int64_t rax_62 = sx.q(*(arg1 + 0x1d8))
            int64_t var_340 = 0
            int64_t var_338_1 = 0
            
            for (; j_4 != &j_4[rax_62 * 5]; j_4 = &j_4[5])
                int32_t rax_65 = *(arg1 + 0x230)
                
                if (rax_65 == 2 || rax_65 == 1)
                    void var_250
                    sub_140acc920(&var_250, j_4 + 0x48)
                    int32_t temp3_1 = *(arg1 + 0x230)
                    int32_t rax_63 = 0
                    var_4e8 = 1
                    
                    if (temp3_1 == 2)
                        rax_63 = 2
                    
                    i_4 = zmm9[0]
                    float rax_64 = 2.24207754e-44f
                    
                    if (temp3_1 == 2)
                        rax_64 = 1.26116862e-44f
                    
                    var_4f8 = _mm_cvtepi32_ps(zx.o(rax_63)).d
                    var_500 = false
                    i_3.q = &var_250
                    var_510 = rax_64
                    var_518_2.d = (*(j_4 + 0x44)).d
                    r9_2, zmm8, zmm9, zmm11, zmm12, zmm13 = sub_14229be50(r12_1, &var_340, j_4, 
                        r9_2, var_518_2, var_510, i_3.b, var_500, var_4f8, i_4.b)
                    rax_65 = *(arg1 + 0x230)
                
                if ((rax_65 & 0xfffffffd) == 0)
                    char var_4b0 = *(j_4 + 0x48)
                    char var_4af_1 = *(j_4 + 0x49)
                    char var_4ae_1 = *(j_4 + 0x4a)
                    char var_4ad_1 = *(arg1 + 0x234)
                    void var_1e8
                    var_408.o = *sub_140acc920(&var_1e8, &var_4b0)
                    int64_t r10_4 = sx.q(sub_140b212b0(&var_408, 0x10, 0))
                    var_4bc = r10_4.d
                    int64_t rcx_82
                    int64_t r8_22
                    
                    if (var_1a0 == var_174)
                    label_141fb526b:
                        void*** r14_6
                        
                        if (var_150 == 0)
                        label_141fb539d:
                            char var_4c3 = 0
                            char* var_2c8_1 = &var_4c3
                            void*** (* var_2d0)() = j_sub_140597fc0
                            void*** rax_81 = sub_14081d830(0x1b0, 
                                sub_140a756e0(&var_2d0, &data_143958018) + 0x10, 1, 0)
                            r14_6 = rax_81
                            
                            if (rax_81 == 0)
                                r14_6 = nullptr
                            else
                                int32_t var_3e4_1 = 0
                                void var_328
                                int32_t rcx_85 = *sub_140b5e500(&var_328, 0x3e)
                                int64_t* rcx_86 = *(data_143f5b298 + 0x388)
                                int64_t rax_85 = (*(*rcx_86 + 0x280))(rcx_86)
                                sub_142118c70(r14_6)
                                int128_t zmm0_15 = var_408.o
                                *r14_6 = &data_142e0eff8
                                r14_6[0x35] = rcx_85.q
                                r14_6[0x32] = rax_85
                                *(r14_6 + 0x198) = zmm0_15
                        else
                            if (sub_140d3e110(&var_158) == 0)
                                goto label_141fb539d
                            
                            char var_4c4 = 0
                            char* var_2d8_1 = &var_4c4
                            void*** (* var_2e0)() = j_sub_140597fc0
                            void*** rax_75 = sub_14081d830(0x1b0, 
                                sub_140a756e0(&var_2e0, &data_143958018) + 0x10, 1, 0)
                            r14_6 = rax_75
                            
                            if (rax_75 == 0)
                                r14_6 = nullptr
                            else
                                int64_t* rax_76 = sub_140d3c6e0(&var_158)
                                void var_258
                                int64_t* rax_77 = sub_140b58170(&var_258, "GizmoColor", 1)
                                int64_t rdx_39 = *rax_76
                                int64_t rbx_13 = *rax_77
                                int64_t rax_78 = (*(rdx_39 + 0x280))(rax_76, rdx_39)
                                sub_142118c70(r14_6)
                                int128_t zmm0_14 = var_408.o
                                r14_6[0x32] = rax_78
                                *r14_6 = &data_142e0eff8
                                r14_6[0x35] = rbx_13
                                *(r14_6 + 0x198) = zmm0_14
                        
                        var_498[0].q = r14_6
                        r8_22 = sub_140bd26e0(&var_1a8, &var_4bc, &var_498)
                        rcx_82 = var_498[0].q
                    else
                        void* rdx_36 = &var_170
                        
                        if (var_168 != 0)
                            rdx_36 = var_168
                        
                        int32_t rax_72 = *(rdx_36 + ((sx.q(var_160 - 1) & r10_4) << 2))
                        int32_t rcx_73 = rax_72
                        
                        if (rax_72 == 0xffffffff)
                            goto label_141fb526b
                        
                        r8_22 = var_1a8
                        
                        while (true)
                            int64_t r9_9 = sx.q(rcx_73) * 3
                            
                            if (*(r8_22 + (r9_9 << 3)) == r10_4.d)
                                break
                            
                            rcx_73 = *(r8_22 + (r9_9 << 3) + 0x10)
                            
                            if (rcx_73 == 0xffffffff)
                                goto label_141fb526b
                        
                        if (rcx_73 == 0xffffffff)
                            goto label_141fb526b
                        
                        void* rcx_81
                        
                        if (rax_72 == 0xffffffff)
                        label_141fb5382:
                            rcx_81 = nullptr
                        else
                            int64_t rdx_40
                            
                            while (true)
                                rdx_40 = sx.q(rax_72) * 3
                                
                                if (*(r8_22 + (rdx_40 << 3)) == r10_4.d)
                                    break
                                
                                rax_72 = *(r8_22 + (rdx_40 << 3) + 0x10)
                                
                                if (rax_72 == 0xffffffff)
                                    goto label_141fb5382_1
                            
                            rcx_81 = r8_22 + (rdx_40 << 3)
                            
                            if (rax_72 == 0xffffffff)
                            label_141fb5382_1:
                                rcx_81 = nullptr
                        
                        int64_t* rax_79 = rcx_81 + 8
                        
                        if (rcx_81 == 0)
                            rax_79 = nullptr
                        
                        rcx_82 = *rax_79
                    
                    var_500.q = var_488
                    i_3 = i_5
                    var_510.b = 0
                    var_518_2.q = rcx_82
                    r9_2, zmm8, zmm9, zmm11, zmm12, zmm13 = sub_14229f520(j_4, j_4[4].d, r8_22, 
                        0x10, *(j_4 + 0x44), var_518_2, var_510.b, i_3, var_500)
            
            for (int32_t j_5 = 0; j_5 s>= 0; j_5 += 1)
                if (j_5 s>= *(arg1 + 0x1b8))
                    break
                
                int64_t rdi_13 = sx.q(j_5) * 5
                
                if (r14_1 != 0)
                    char rax_91
                    rax_91, zmm8, zmm9, zmm11, zmm12, zmm13 = sub_141f8d780(r14_1 + 0xbf0, 
                        *(arg1 + 0x1b0) + 4 + (rdi_13 << 2), &data_143dbb1f8)
                    
                    if (rax_91 != 0)
                        int32_t rax_92 = *(arg1 + 0x230)
                        
                        if (rax_92 == 2 || rax_92 == 1)
                            int64_t rax_93 = *(arg1 + 0x1b0)
                            char var_4ab_1 = *(rax_93 + (rdi_13 << 2) + 0x11)
                            char var_4aa_1 = *(rax_93 + (rdi_13 << 2) + 0x12)
                            char var_4ac = *(rax_93 + (rdi_13 << 2) + 0x10)
                            char var_4a9_1 = 0xff
                            void var_240
                            sub_140acc920(&var_240, &var_4ac)
                            int64_t rcx_94 = *(arg1 + 0x1b0)
                            var_4f8.b = 1
                            int32_t rax_95 = 0
                            var_500.d = zmm9[0]
                            zmm3 = *(rcx_94 + (rdi_13 << 2))
                            
                            if (*(arg1 + 0x230) == 2)
                                rax_95 = 2
                            
                            i_3 = _mm_cvtepi32_ps(zx.o(rax_95)).d
                            var_510.b = 0
                            var_518_2.d = 0x14
                            zmm8, zmm11, zmm12, zmm13 = sub_14229cae0(r12_1, 
                                rcx_94 + 4 + (rdi_13 << 2), &var_240, zmm3, var_518_2, var_510.b, 
                                i_3, var_500, var_4f8.b)
                            rax_92 = *(arg1 + 0x230)
                        
                        if ((rax_92 & 0xfffffffd) == 0)
                            int64_t rax_96 = *(arg1 + 0x1b0)
                            char rcx_96 = *(rax_96 + (rdi_13 << 2) + 0x11)
                            char rdx_49 = *(rax_96 + (rdi_13 << 2) + 0x12)
                            char var_4a8 = *(rax_96 + (rdi_13 << 2) + 0x10)
                            char var_4a7_1 = rcx_96
                            char var_4a6_1 = rdx_49
                            char var_4a5_1 = *(arg1 + 0x234)
                            void var_1d8
                            float (* rax_99)[0x4] = sub_140acc920(&var_1d8, &var_4a8)
                            int64_t rbx_15 = *(arg1 + 0x1b0)
                            var_428 = *rax_99
                            float zmm0_17[0x4] = *(rbx_15 + (rdi_13 << 2))
                            float var_3c0 = zmm0_17[0]
                            float var_3bc_1 = zmm0_17[0]
                            float var_3b8_1 = zmm0_17[0]
                            var_4f8.q = var_488
                            var_500.d = i_5
                            i_3.b = 0
                            var_510.b = 0
                            var_518_2.q = sub_141fa88a0(&var_1a8, &var_428)
                            zmm8, zmm11, zmm12, zmm13 = sub_1422a1910(rbx_15 + 4 + (rdi_13 << 2), 
                                &var_3c0, 0x14, 7, var_518_2, var_510.b, i_3.b, var_500, var_4f8)
            
            zmm10 = zx.o(0)
            
            for (int32_t j_6 = 0; j_6 s>= 0; j_6 += 1)
                if (j_6 s>= *(arg1 + 0x1f8))
                    break
                
                if (r14_1 != 0)
                    int128_t* rdi_14 = sx.q(j_6) * 0x3c
                    char rax_102
                    rax_102, zmm8, zmm10, zmm11, zmm12, zmm13 =
                        sub_141f8d780(r14_1 + 0xbf0, *(arg1 + 0x1f0) + 4 + rdi_14, &data_143dbb1f8)
                    
                    if (rax_102 != 0)
                        int32_t rax_103 = *(arg1 + 0x230)
                        
                        if (rax_103 == 2 || rax_103 == 1)
                            void* rax_104 = *(arg1 + 0x1f0)
                            zmm9 = *(rdi_14 + rax_104)
                            zmm6 = *(rdi_14 + rax_104 + 0x30)
                            float zmm4_2 = zmm9[0]
                            zmm7 = *(rdi_14 + rax_104 + 0x34)
                            float zmm5_2 = zmm9[0]
                            zmm3 = *(rdi_14 + rax_104 + 0x14)
                            zmm3[0] = zmm3[0] - zmm9[0]
                            zmm5_2 = zmm5_2 * zmm7[0]
                            zmm4_2 = zmm4_2 * zmm6[0] f+ *(rdi_14 + rax_104 + 4)
                            zmm3 = _mm_max_ss(zmm3[0], zmm8[0])
                            zmm8 = *(rdi_14 + rax_104 + 0x38)
                            zmm5_2 = zmm5_2 f+ *(rdi_14 + rax_104 + 8)
                            zmm0_1 = zmm8[0]
                            zmm9[0] = zmm9[0] * zmm8[0]
                            zmm3[0] = zmm3[0] + zmm3[0]
                            zmm9[0] = zmm9[0] f+ *(rdi_14 + rax_104 + 0xc)
                            zmm6[0] = zmm6[0] * zmm3[0]
                            zmm7[0] = zmm7[0] * zmm3[0]
                            zmm6[0] = zmm6[0] + zmm4_2
                            zmm0_1 = zmm0_1 * zmm3[0]
                            zmm7[0] = zmm7[0] + zmm5_2
                            zmm0_1 = zmm0_1 + zmm9[0]
                            zmm6[0] = zmm6[0] - zmm4_2
                            zmm7[0] = zmm7[0] - zmm5_2
                            zmm0_1 = zmm0_1 - zmm9[0]
                            zmm6[0] = zmm6[0] * zmm6[0]
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm7[0] = zmm7[0] + zmm6[0]
                            zmm7[0] = zmm7[0] + zmm0_1 * zmm0_1
                            zmm2 = _mm_sqrt_ss(0, zmm7[0])
                            zmm2[0] = zmm2[0] * zmm13[0]
                            zmm0_1 = zmm2[0] * zmm6[0]
                            zmm2[0] = zmm2[0] * zmm7[0]
                            zmm2[0] = zmm2[0] * zmm8[0]
                            zmm2[0] = zmm2[0] + zmm5_2
                            zmm2[0] = zmm2[0] + zmm9[0]
                            float var_3b0 = zmm0_1 + zmm4_2
                            float var_3ac_1 = zmm2[0]
                            float var_3a8_1 = zmm2[0]
                            void var_230
                            sub_140acc920(&var_230, rax_104 + 0x10 + rdi_14)
                            void* rdx_58 = *(arg1 + 0x1f0)
                            int32_t rax_105 = 0
                            int32_t temp4_1 = *(arg1 + 0x230)
                            var_4d8 = 1
                            
                            if (temp4_1 == 2)
                                rax_105 = 2
                            
                            i_8 = zmm10[0]
                            zmm1_1 = *(rdi_14 + rdx_58)
                            int32_t rax_106 = 0x10
                            
                            if (temp4_1 == 2)
                                rax_106 = 9
                            
                            var_4e8.d = _mm_cvtepi32_ps(zx.o(rax_105)).d
                            i_4.b = 0
                            var_4f8 = rax_106
                            var_500.d = (*(rdi_14 + rdx_58 + 0x14)).d
                            i_3 = zmm1_1[0]
                            var_510.q = &var_230
                            var_518_2.q = rdx_58 + 0x30 + rdi_14
                            zmm10, zmm11, zmm12, zmm13 = sub_14229b5c0(r12_1, &var_3b0, 
                                rdx_58 + 0x18 + rdi_14, rdx_58 + 0x24 + rdi_14, var_518_2, var_510, 
                                i_3, var_500, var_4f8, i_4.b, var_4e8, i_8, var_4d8)
                            rax_103 = *(arg1 + 0x230)
                        
                        if ((rax_103 & 0xfffffffd) == 0)
                            void var_220
                            sub_140acc920(&var_220, *(arg1 + 0x1f0) + 0x10 + rdi_14)
                            int64_t rax_107 = *(arg1 + 0x1f0)
                            char rcx_108 = *(rdi_14 + rax_107 + 0x11)
                            char rdx_63 = *(rdi_14 + rax_107 + 0x12)
                            char var_4a4 = *(rdi_14 + rax_107 + 0x10)
                            char var_4a3_1 = rcx_108
                            char var_4a2_1 = rdx_63
                            char var_4a1_1 = *(arg1 + 0x234)
                            void var_1c8
                            float (* rax_110)[0x4] = sub_140acc920(&var_1c8, &var_4a4)
                            void* rbx_16 = *(arg1 + 0x1f0)
                            var_428 = *rax_110
                            var_4d8.q = var_488
                            i_8 = i_5
                            var_4e8 = 0
                            i_4.b = 0
                            var_4f8.q = sub_141fa88a0(&var_1a8, &var_428)
                            var_500.d = 0x10
                            i_3 = *(rdi_14 + rbx_16 + 0x14)
                            var_510 = *(rdi_14 + rbx_16)
                            var_518_2.q = &var_220
                            zmm10, zmm11, zmm12, zmm13 = sub_14229efa0(rbx_16 + 4 + rdi_14, 
                                rbx_16 + 0x18 + rdi_14, rbx_16 + 0x24 + rdi_14, 
                                rbx_16 + 0x30 + rdi_14, var_518_2, var_510, i_3, var_500, 
                                var_4f8.b, i_4.b, var_4e8, i_8)
                
                zmm8 = 0x3f800000
            
            void* rdi_15 = *(arg1 + 0x1e0)
            i_1 = i_5
            void* r15_3 = rdi_15 + sx.q(*(arg1 + 0x1e8)) * 0x28
            
            if (rdi_15 != r15_3)
                void* rbx_17 = rdi_15 + 0x22
                
                do
                    var_510.q = 0
                    sub_141fd6cc0(&var_468, *(r14_1 + 0x1548), 1, 0, 0, var_510)
                    sub_141fdaff0(&var_468, rdi_15)
                    sub_141fdaba0(&var_468, rbx_17 - 0x12)
                    char var_4a0 = *(rbx_17 - 2)
                    char var_49f_1 = *(rbx_17 - 1)
                    char var_49e_1 = *rbx_17
                    char var_49d_1 = *(arg1 + 0x234)
                    void var_1b8
                    float (* rax_117)[0x4] = sub_140acc920(&var_1b8, &var_4a0)
                    int64_t rax_118 = 0
                    
                    if (*(rbx_17 + 1) == 0xff)
                        rax_118 = 0x60
                    
                    var_428 = *rax_117
                    var_500.q = var_488
                    i_3 = i_1
                    var_510.b = 0
                    zmm8, zmm10, zmm11, zmm12, zmm13 = sub_141fe3230(&var_468, &data_14399f6e0, 
                        sub_141fa88a0(&var_1a8 + rax_118, &var_428), 0, 0, var_510.b, i_3, var_500)
                    sub_141fd8140(&var_468)
                    rdi_15 += 0x28
                    rbx_17 += 0x28
                while (rdi_15 != r15_3)
            
            int64_t rcx_121 = var_340
            
            if (rcx_121 != 0)
                sub_140a74f90(rcx_121)
            
            r15 = arg4
            r14 = arg2
            rdx_1 = var_410_1
            rdi = var_488
        
        i_1 += 1
        rdx_1 += 1
        i_5 = i_1
        var_410_1 = rdx_1
    while (i_1 s< r14[1].d)
    
    i_6 = 2

int64_t* rdi_16 = &var_e8
void* result
int64_t i_2

do
    rdi_16 -= 0x60
    result = sub_1405ae080(rdi_16)
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
__security_check_cookie(var_e8 ^ &var_538)
return result
