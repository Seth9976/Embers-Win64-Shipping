// 函数: sub_142685120
// 地址: 0x142685120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
float i = 0f
float i_1 = 0f

if (arg2[1].d s<= 0)
    return 

int64_t* rcx = arg2
int64_t rdx = 0
int32_t rax = 1
void* r15_1 = arg5
float zmm6[0x4] = 0x41c80000
float zmm9[0x4] = zx.o(0)
float zmm10[0x4] = 0x41200000
int128_t zmm14 = 0x40000000
int128_t zmm15 = 0x42c80000
uint128_t zmm7
uint128_t var_58_1 = zmm7
float zmm8[0x4]
float var_68_1[0x4] = zmm8
float zmm11[0x4]
float var_98_1[0x4] = zmm11
float zmm12[0x4]
float var_a8_1[0x4] = zmm12
int128_t zmm13
int128_t var_b8_1 = zmm13
int64_t var_2f8_1 = 0
int32_t var_354_1 = 1

do
    if ((arg4 & rax) != 0)
        void* rcx_1 = r15_1 + 0x50
        void* r13_1 = *(*arg2 + (rdx << 3))
        void* rax_3 = *(rcx_1 + 0x10)
        
        if (rax_3 != 0)
            rcx_1 = rax_3
        
        int64_t* r14_1 = *(rcx_1 + (rdx << 3))
        void* rcx_2 = *(arg1 + 0x250)
        char var_3a8
        char var_390
        void* var_388
        int32_t var_350
        void* var_348
        int64_t var_33c
        uint128_t zmm0
        float zmm1[0x4]
        float zmm2[0x4]
        
        if (rcx_2 != 0)
            void* rax_4 = *(rcx_2 + 0x130)
            int32_t* rax_5
            
            if (rax_4 == 0)
                int32_t var_250_1 = data_143dbb200
                uint64_t var_258
                rax_5 = &var_258
                var_258 = data_143dbb1f8.q
            else
                zmm1 = *(rax_4 + 0x1d0)
                float var_2c8
                rax_5 = &var_2c8
                var_2c8 = zmm1[0]
                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                float var_2c0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                int32_t var_2c4_1 = zmm0.d
            
            int32_t rax_7 = rax_5[2]
            zmm2 = *(arg1 + 0x248)
            zmm1 = *(arg1 + 0x244)
            uint64_t var_368 = *rax_5
            zmm0 = *(rcx_2 + 0x290)
            zmm2[0] = zmm2[0] f+ *(rcx_2 + 0x298)
            zmm1[0] = zmm1[0] f+ *(rcx_2 + 0x294)
            zmm0.d = zmm0.d f+ *(arg1 + 0x240)
            float var_308_1 = zmm2[0]
            float var_30c_1 = zmm1[0]
            int32_t var_310 = zmm0.d
            int32_t rax_8
            
            if ((*(rcx_2 + 0x29c) & 1) == 0)
                int32_t var_36c_1 = 0x78ff0000
                rax_8 = 0x78ff0000
            else
                int32_t var_370_1 = 0x7800ff00
                rax_8 = 0x7800ff00
            
            int32_t var_358 = rax_8
            int32_t var_300 = data_14399f848
            char var_378
            char* var_210_1 = &var_378
            int32_t var_320 = 0x41a00000
            int32_t var_31c_1 = 0x41a00000
            int32_t var_318_1 = 0x41a00000
            var_378 = 0
            void*** (* var_218)() = j_sub_140597fc0
            void* rax_10 = sub_140a756e0(&var_218, &data_143958018)
            void*** rdi_3 = (*(rax_10 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_11 = &rdi_3[0x36]
            
            if (rax_11 u> *(rax_10 + 0x18))
                sub_140b0e3d0(rax_10 + 0x10, 0x1c0)
                rdi_3 = (*(rax_10 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_11 = &rdi_3[0x36]
            
            *(rax_10 + 0x10) = rax_11
            
            if (rdi_3 != 0)
                int128_t var_1a0
                sub_140acc920(&var_1a0, &var_358)
                int32_t var_2dc_1 = 0
                void var_268
                int32_t rcx_7 = *sub_140b5e500(&var_268, 0x3e)
                int64_t* rcx_8 = *(data_143f5b298 + 0x388)
                int64_t rax_15 = (*(*rcx_8 + 0x280))(rcx_8)
                sub_142118c70(rdi_3)
                rdi_3[0x32] = rax_15
                *rdi_3 = &data_142e0eff8
                int128_t zmm0_1 = var_1a0
                rdi_3[0x35] = rcx_7.q
                *(rdi_3 + 0x198) = zmm0_1
            
            var_388 = r15_1
            var_390.d = i
            var_3a8.q = rdi_3
            int32_t zmm9_1 =
                sub_1422a1910(&var_310, &var_320, 0xa, 7, var_3a8, 0, 0, var_390, var_388)
            void var_190
            sub_140acc920(&var_190, &data_14399f630)
            float zmm6_1[0x4] = var_368.d
            float zmm3_1[0x4] = rax_7
            int64_t zmm5_1 = var_368:4.d
            zmm3_1[0] = zmm3_1[0] f+ var_318_1
            zmm3_1[0] = zmm3_1[0] f- var_318_1
            zmm6_1[0] = zmm6_1[0] f- var_320
            zmm6_1[0] = zmm6_1[0] f+ var_320
            float var_1d4_1 = zmm3_1[0]
            int64_t zmm7_1 = zmm5_1
            zmm5_1.d = zmm5_1.d f- var_31c_1
            zmm7_1.d = zmm7_1.d f+ var_31c_1
            var_348.d = zmm3_1[0]
            var_350.q = (_mm_unpacklo_ps(zmm6_1, zmm5_1)).q
            var_348 = (_mm_unpacklo_ps(zmm6_1, zmm7_1)).q
            var_3a8.d = zmm9_1
            var_33c.d = var_1d4_1
            var_33c:4.b = 1
            float zmm9_2[0x4]
            float zmm10_1[0x4]
            zmm9_2, zmm10_1 = sub_14229ae30(r14_1, &var_350, &var_190, 0, var_3a8, zmm9_1, 0)
            float zmm11_1[0x4] = var_310
            float zmm12_1[0x4] = var_30c_1
            float zmm6_2[0x4] = zmm11_1
            zmm6_2[0] = zmm6_2[0] f- var_368.d
            float zmm13_1[0x4] = var_308_1
            uint128_t zmm7_2
            zmm7_2.d = zmm12_1.d f- var_368:4.d
            float zmm8_2[0x4] = zmm13_1
            zmm8_2[0] = zmm8_2[0] f- rax_7
            zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
            uint128_t zmm2_1
            zmm2_1.d = zmm7_2.d f* zmm7_2.d
            zmm8_2[0] = zmm8_2[0] * zmm8_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm6_2[0]
            zmm2_1.d = zmm2_1.d f+ zmm8_2[0]
            float zmm0_3[0x4]
            
            if (not(zmm2_1.d f== 1f))
                if (zmm2_1.d f>= 9.99999994e-09f)
                    zmm0_3 = zmm2_1
                    float temp0_5[0x4] = _mm_rsqrt_ss(zmm0_3[0], zmm0_3[0])
                    zmm0_3[0] = zmm0_3[0] * 0.5f
                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                    zmm0_3[0] = zmm0_3[0] * temp0_5[0]
                    zmm2_1.d = 0.5f - zmm0_3[0]
                    temp0_5[0] = temp0_5[0] f* zmm2_1.d
                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                    zmm0_3[0] = zmm0_3[0] * temp0_5[0]
                    temp0_5[0] = temp0_5[0] * (0.5f - zmm0_3[0])
                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                    temp0_5[0] = temp0_5[0] * zmm6_2[0]
                    temp0_5[0] = temp0_5[0] f* zmm7_2.d
                    temp0_5[0] = temp0_5[0] * zmm8_2[0]
                    zmm6_2 = temp0_5
                    zmm7_2 = temp0_5
                    zmm8_2 = temp0_5
                else
                    zmm6_2 = data_143dbb1f8
                    zmm7_2 = data_143dbb1fc
                    zmm8_2 = data_143dbb200
            
            zmm0_3 = var_320
            zmm6_2[0] = zmm6_2[0] * zmm0_3[0]
            zmm7_2.d = zmm7_2.d f* zmm0_3[0]
            zmm8_2[0] = zmm8_2[0] * zmm0_3[0]
            zmm11_1[0] = zmm11_1[0] - zmm6_2[0]
            zmm12_1[0] = zmm12_1[0] f- zmm7_2.d
            zmm13_1[0] = zmm13_1[0] - zmm8_2[0]
            float var_2f0 = zmm11_1[0]
            float var_2ec_1 = zmm12_1[0]
            float var_2e8_1 = zmm13_1[0]
            void var_130
            sub_140acc920(&var_130, &var_358)
            var_3a8 = 0
            (*(*r14_1 + 0x30))(r14_1, &var_2f0, &var_368, &var_130, 0, 0x40200000, zmm9_2[0], 0)
            void var_180
            sub_140acc920(&var_180, &var_358)
            var_390 = 0
            var_3a8.q = &var_180
            float zmm9_3 = sub_142297ff0(r14_1, &var_2f0, &var_368, 0x41a00000, zmm6_2, zmm7_2, 
                zmm8_2, zmm9_2, zmm10_1, 0x40200000, zmm12_1, var_3a8, 0, 0)
            void var_170
            sub_140acc920(&var_170, &data_14399f640)
            float zmm6_3[0x4] = var_368.d
            zmm2 = rax_7
            int64_t zmm5_3 = var_368:4.d
            int32_t* rax_21 = *(arg1 + 0x250) + 0x278
            int64_t zmm7_3 = zmm5_3
            var_3a8.d = zmm9_3
            zmm2[0] = zmm2[0] f+ rax_21[2]
            zmm6_3[0] = zmm6_3[0] f- *rax_21
            zmm5_3.d = zmm5_3.d f- rax_21[1]
            zmm6_3[0] = zmm6_3[0] f+ *rax_21
            zmm2[0] = zmm2[0] f- rax_21[2]
            zmm7_3.d = zmm7_3.d f+ rax_21[1]
            float var_1bc_1 = zmm2[0]
            var_350.q = (_mm_unpacklo_ps(zmm6_3, zmm5_3)).q
            var_348.d = zmm2[0]
            var_348 = (_mm_unpacklo_ps(zmm6_3, zmm7_3)).q
            var_33c.d = var_1bc_1
            var_33c:4.b = 1
            zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                sub_14229ae30(r14_1, &var_350, &var_170, 0, var_3a8, zmm9_3, 0)
            
            if (data_143b515c8.d f!= *(arg1 + 0x324) || data_143b515cc.d f!= *(arg1 + 0x328)
                    || not(data_143b515d0.d f== *(arg1 + 0x32c)))
                void var_160
                sub_140acc920(&var_160, &var_300)
                var_390 = 0
                var_3a8 = 0
                (*(*r14_1 + 0x30))(r14_1, arg1 + 0x324, &var_368, &var_160, 0, zmm11[0], zmm9[0], 0)
            
            zmm6 = 0x41c80000
        
        char rcx_24 = (*(arg1 + 0x24c)).b
        float var_3a0
        
        if ((rcx_24 & 1) == 0 || *(arg1 + 0x2d8) == *(arg1 + 0x304))
            int32_t j = 1
            
            if (*(arg1 + 0x278) s> 1)
                do
                    int64_t rdx_11 = *(arg1 + 0x270)
                    int64_t rdi_6 = sx.q(j) * 3
                    var_3a8 = 0
                    int64_t rbx_3 = sx.q(j - 1) * 3
                    (*(*r14_1 + 0x30))(r14_1, rdx_11 + (rbx_3 << 2), rdx_11 + (rdi_6 << 2), 
                        &data_14399f5f0, 0, zmm14.d, zmm9[0], 0, var_388)
                    int64_t rax_29 = *(arg1 + 0x270)
                    var_390 = 0
                    var_3a0.b = 0
                    var_3a8.q = &data_14399f5f0
                    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_142297ff0(r14_1, 
                        rax_29 + (rdi_6 << 2), rax_29 + (rbx_3 << 2), zmm6, zmm6, zmm7, zmm8, zmm9, 
                        zmm10, zmm11, zmm12, &data_14399f5f0, 0, zmm14.d.b)
                    j += 1
                while (j s< *(arg1 + 0x278))
                
                rcx_24 = (*(arg1 + 0x24c)).b
            
            r15_1 = arg5
        
        void* var_248
        
        if ((rcx_24 & 2) != 0)
            if (*(arg1 + 0x2c8) != 0)
                char var_377 = 0
                char* var_200_1 = &var_377
                void*** (* var_208)() = j_sub_140597fc0
                void* rax_30 = sub_140a756e0(&var_208, &data_143958018)
                void*** rdi_9 = (*(rax_30 + 0x10) + 0xf) & 0xfffffffffffffff0
                void* rax_31 = &rdi_9[0x36]
                
                if (rax_31 u> *(rax_30 + 0x18))
                    sub_140b0e3d0(rax_30 + 0x10, 0x1c0)
                    rdi_9 = (*(rax_30 + 0x10) + 0xf) & 0xfffffffffffffff0
                    rax_31 = &rdi_9[0x36]
                
                *(rax_30 + 0x10) = rax_31
                
                if (rdi_9 != 0)
                    int128_t var_150
                    sub_140acc920(&var_150, &data_143b515d8)
                    int32_t var_2d4_1 = 0
                    void var_260
                    int32_t rcx_29 = *sub_140b5e500(&var_260, 0x3e)
                    int64_t* rcx_30 = *(data_143f5b298 + 0x388)
                    int64_t rax_35 = (*(*rcx_30 + 0x280))(rcx_30)
                    sub_142118c70(rdi_9)
                    rdi_9[0x32] = rax_35
                    *rdi_9 = &data_142e0eff8
                    int128_t zmm0_5 = var_150
                    rdi_9[0x35] = rcx_29.q
                    *(rdi_9 + 0x198) = zmm0_5
                
                var_3a0.q = 0
                sub_141fd6cc0(&var_350, *(r13_1 + 0x1548), 1, 0, 0, nullptr)
                sub_141fdaff0(&var_350, arg1 + 0x2b0)
                sub_141fdaba0(&var_350, arg1 + 0x2c0)
                uint8_t r9_2 = *(arg1 + 0x36)
                
                if ((r9_2 & 4) == 0)
                label_142685a32:
                    r9_2 u>>= 4
                else
                    int64_t* r10_1 = *(arg1 + 0x70)
                    int64_t* rcx_35 = r10_1
                    void* rdx_17 = &r10_1[sx.q(*(arg1 + 0x78))]
                    
                    if (r10_1 == rdx_17)
                    label_142685a32_1:
                        r9_2 u>>= 4
                    else
                        while (*rcx_35 != *(r13_1 + 0x240))
                            rcx_35 = &rcx_35[1]
                            
                            if (rcx_35 == rdx_17)
                                goto label_142685a32_2
                        
                        if (((rcx_35 - r10_1) s>> 3).d == 0xffffffff)
                        label_142685a32_2:
                            r9_2 u>>= 4
                        else
                            r9_2 = *(arg1 + 0x37)
                
                var_390.q = r15_1
                var_3a0.b = 0
                var_3a8 = 0
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                    sub_141fe3230(&var_350, &data_14399f6e0, rdi_9, r9_2 & 7, 0, 0, i, var_390)
                sub_141fd8140(&var_350)
            
            if (*(arg1 + 0x2a8) != 0)
                char var_376 = 0
                char* var_1f0_1 = &var_376
                void*** (* var_1f8)() = j_sub_140597fc0
                void* rax_38 = sub_140a756e0(&var_1f8, &data_143958018)
                void*** rdi_14 = (*(rax_38 + 0x10) + 0xf) & 0xfffffffffffffff0
                void* rax_39 = &rdi_14[0x36]
                
                if (rax_39 u> *(rax_38 + 0x18))
                    sub_140b0e3d0(rax_38 + 0x10, 0x1c0)
                    rdi_14 = (*(rax_38 + 0x10) + 0xf) & 0xfffffffffffffff0
                    rax_39 = &rdi_14[0x36]
                
                *(rax_38 + 0x10) = rax_39
                
                if (rdi_14 != 0)
                    int128_t var_140
                    sub_140acc920(&var_140, &data_143b515d4)
                    int32_t var_2cc_1 = 0
                    void var_25c
                    int32_t rcx_42 = *sub_140b5e500(&var_25c, 0x3e)
                    int64_t* rcx_43 = *(data_143f5b298 + 0x388)
                    int64_t rax_43 = (*(*rcx_43 + 0x280))(rcx_43)
                    sub_142118c70(rdi_14)
                    rdi_14[0x32] = rax_43
                    *rdi_14 = &data_142e0eff8
                    int128_t zmm0_6 = var_140
                    rdi_14[0x35] = rcx_42.q
                    *(rdi_14 + 0x198) = zmm0_6
                
                var_3a0.q = 0
                sub_141fd6cc0(&var_248, *(r13_1 + 0x1548), 1, 0, 0, nullptr)
                sub_141fdaff0(&var_248, arg1 + 0x290)
                sub_141fdaba0(&var_248, arg1 + 0x2a0)
                uint8_t r9_3 = *(arg1 + 0x36)
                
                if ((r9_3 & 4) == 0)
                label_142685bf2:
                    r9_3 u>>= 4
                else
                    int64_t* r10_2 = *(arg1 + 0x70)
                    int64_t* rcx_48 = r10_2
                    void* rdx_21 = &r10_2[sx.q(*(arg1 + 0x78))]
                    
                    if (r10_2 == rdx_21)
                    label_142685bf2_1:
                        r9_3 u>>= 4
                    else
                        while (*rcx_48 != *(r13_1 + 0x240))
                            rcx_48 = &rcx_48[1]
                            
                            if (rcx_48 == rdx_21)
                                goto label_142685bf2_2
                        
                        if (((rcx_48 - r10_2) s>> 3).d == 0xffffffff)
                        label_142685bf2_2:
                            r9_3 u>>= 4
                        else
                            r9_3 = *(arg1 + 0x37)
                
                var_390.q = r15_1
                var_3a0.b = 0
                var_3a8 = 0
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                    sub_141fe3230(&var_248, &data_14399f6e0, rdi_14, r9_3 & 7, 0, 0, i, var_390)
                sub_141fd8140(&var_248)
        
        int32_t rcx_51 = 0
        int32_t var_34c_1 = 1
        var_350 = 0
        int32_t r10_3 = *(arg1 + 0x2f8)
        void* r9_4 = arg1 + 0x2e0
        int32_t r8_11 = 0
        var_348 = r9_4
        int32_t var_340_1 = 0xffffffff
        var_33c = 0
        
        if (r10_3 != 0)
            void* rax_46 = *(r9_4 + 0x10)
            
            if (rax_46 != 0)
                r9_4 = rax_46
            
            int32_t temp0_8
            int32_t temp1_1
            temp0_8:temp1_1 = sx.q(r10_3 - 1)
            int32_t rdx_24 = *r9_4
            
            if (rdx_24 != 0)
            label_142685cb9:
                int32_t rax_53 = neg.d(rdx_24) & rdx_24
                uint64_t rflags_1
                int32_t temp0_9
                temp0_9, rflags_1 = _bit_scan_reverse(rax_53)
                int32_t var_34c_2 = rax_53
                int32_t rax_54
                
                if (rax_53 == 0)
                    rax_54 = 0x20
                else
                    rax_54 = 0x1f - temp0_9
                
                var_33c.d = r8_11 - rax_54 + 0x1f
                
                if (r8_11 - rax_54 + 0x1f s> r10_3)
                    var_33c.d = r10_3
            else
                while (true)
                    int64_t rdx_25 = sx.q(rcx_51)
                    r8_11 += 0x20
                    rcx_51 += 1
                    var_33c:4.d = r8_11
                    var_350 = rcx_51
                    
                    if (rdx_25.d s>= (temp1_1 + (temp0_8 & 0x1f)) s>> 5)
                        break
                    
                    rdx_24 = *(r9_4 + (rdx_25 << 2) + 4)
                    var_340_1 = 0xffffffff
                    
                    if (rdx_24 != 0)
                        goto label_142685cb9
                
                var_33c.d = r10_3
        
        zmm2 = var_340_1.o
        var_248 = arg1 + 0x2d0
        float var_230_1[0x4] = zmm2
        zmm1 = var_350.o
        uint128_t var_290 = var_248.o
        uint32_t rax_57 = (zmm2[0].q u>> 0x20).d
        uint64_t var_270_1 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
        float var_280_1[0x4] = zmm1
        
        if (rax_57 s< r10_3)
            float j_1 = var_280_1[3]
            
            do
                int32_t rdx_26 = *(arg1 + 0x24c)
                void* rbx_9 = sx.q(j_1) * 0x38 + *var_290.q
                int32_t rax_60 = data_14399f640
                int32_t var_374 = rax_60
                
                if ((rdx_26.b & 1) != 0)
                    if ((*(rbx_9 + 0x2c) & 2) != 0)
                        rax_60 = data_14399f638
                    
                    var_374 = rax_60
                
                int32_t rdx_27 = rdx_26 & 4
                
                if (rdx_27 != 0)
                    char rax_61 = 0x40
                    
                    if ((*(rbx_9 + 0x2c) & 4) != 0)
                        rax_61 = -1
                    
                    var_374:3.b = rax_61
                
                int64_t rax_62 = sx.q(*(rbx_9 + 0x28))
                void* rcx_58
                
                if (rax_62.d == 0xffffffff)
                    rcx_58 = rbx_9
                else
                    rcx_58 = rax_62 * 0x38 + *(arg1 + 0x2d0)
                
                uint64_t var_2b8 = *(rcx_58 + 8)
                int32_t var_2b0_1 = *(rcx_58 + 0x10)
                float var_398
                void* r9_5
                
                if (rdx_27 == 0 || (*(rbx_9 + 0x2c) & 4) != 0)
                    void var_120
                    sub_140acc920(&var_120, &var_374)
                    var_390 = 1
                    r9_5 = &var_120
                    var_398 = zmm9[0]
                    var_3a0 = zmm14.d
                else
                    void var_f0
                    sub_140acc920(&var_f0, &var_374)
                    var_390 = 0
                    r9_5 = &var_f0
                    var_398 = zmm9[0]
                    var_3a0 = zmm9[0]
                
                var_3a8 = 0
                (*(*r14_1 + 0x30))(r14_1, rbx_9 + 8, &var_2b8, r9_5, 0, var_3a0, var_398, var_390, 
                    var_388)
                float zmm3[0x4]
                
                if ((*(rbx_9 + 0x2c) & 8) != 0)
                    void var_110
                    sub_140acc920(&var_110, &var_374)
                    zmm3 = *(rbx_9 + 8)
                    zmm1 = *(rbx_9 + 0x10)
                    zmm2 = *(rbx_9 + 0xc)
                    zmm1[0] = zmm1[0] + zmm10[0]
                    var_3a0 = zmm9[0]
                    int64_t zmm4_2 = zmm2[0].q
                    var_3a8.d = zmm9[0]
                    zmm3[0] = zmm3[0] - zmm10[0]
                    var_33c:4.b = 1
                    zmm2[0] = zmm2[0] - zmm10[0]
                    float var_1a4_1 = zmm1[0]
                    zmm3[0] = zmm3[0] + zmm10[0]
                    zmm1[0] = zmm1[0] - zmm10[0]
                    zmm4_2.d = zmm4_2.d f+ zmm10[0]
                    var_350.q = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
                    var_348.d = zmm1[0]
                    var_348 = (_mm_unpacklo_ps(zmm3, zmm4_2)).q
                    var_33c.d = var_1a4_1
                    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                        sub_14229ae30(r14_1, &var_350, &var_110, 0, 0, var_3a0, 0)
                
                if ((*(arg1 + 0x24c) & 4) != 0 && (*(rbx_9 + 0x2c) & 4) != 0)
                    void var_100
                    sub_140acc920(&var_100, &data_14399f63c)
                    zmm3 = *(rbx_9 + 0x10)
                    zmm2 = *(rbx_9 + 8)
                    zmm1 = *(rbx_9 + 0xc)
                    int64_t rax_67 = *r14_1
                    var_390 = 0
                    zmm0.d = zmm3.d f+ zmm15.d
                    zmm3[0] = zmm3[0] + zmm10[0]
                    var_398 = zmm9[0]
                    var_3a0 = zmm9[0]
                    float var_2a8 = zmm2[0]
                    float var_2a4_1 = zmm1[0]
                    int32_t var_2a0_1 = zmm0.d
                    float var_29c = zmm2[0]
                    float var_298_1 = zmm1[0]
                    float var_294_1 = zmm3[0]
                    var_3a8 = 0
                    (*(rax_67 + 0x30))(r14_1, &var_29c, &var_2a8, &var_100, 0, var_3a0, var_398, 0)
                
                var_280_1[2] &= not.d(var_290:0xc.d)
                sub_14059bdd0(&var_290:8)
                j_1 = var_280_1[3]
            while (j_1 s< *(var_280_1[0].q + 0x18))
            
            i = i_1
        
        arg4 = arg_20
        rcx = arg2
        r15_1 = arg5
        rdx = var_2f8_1
        rax = var_354_1
    
    i += 1
    rax = rol.d(rax, 1)
    rdx += 1
    i_1 = i
    var_354_1 = rax
    var_2f8_1 = rdx
while (i s< rcx[1].d)
