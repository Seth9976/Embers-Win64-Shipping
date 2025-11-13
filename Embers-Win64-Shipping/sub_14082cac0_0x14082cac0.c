// 函数: sub_14082cac0
// 地址: 0x14082cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_468
int64_t rax_1 = __security_cookie ^ &var_468
int64_t* r15 = arg6
uint64_t result = *(arg1 + 8)
void* rcx = r15[0x34]
int64_t* var_428 = r15

if (result != 0 && rcx != 0)
    void* r12_1 = *(result + 0x18)
    void* var_348_1 = r12_1
    
    if (*(result + 0x10) != 0)
        r12_1 = *(r12_1 + 0x140)
        var_348_1 = r12_1
    
    if (r12_1 != 0 && *(arg1 + 0x208) != 0 && *(r12_1 + 0xb4) != 0 && *(r12_1 + 0xb0) != 0
            && data_14396f028 != 0 && data_1439c7a0c != 0)
        void* r10_1 = arg5[0x1c]
        void* var_f0_1 = nullptr
        int32_t var_e8_1 = 0
        int32_t var_e4_1 = 8
        int32_t rcx_1 = *(r12_1 + 0xb0)
        int64_t rdi_1 = 0
        void* rcx_2 = result + 0x20
        void* rax_2 = *(result + 0x60)
        void* rbx_1 = rcx_2
        int64_t r14
        r14.b = 0
        void* var_328_1 = r10_1
        char var_437_1 = 0
        
        if (rax_2 != 0)
            rbx_1 = rax_2
        
        int64_t rsi_1 = sx.q(*(rcx_2 + 0x48)) << 3
        uint64_t rsi_2 = rsi_1 u>> 3
        
        if (rbx_1 u> rsi_1 + rbx_1)
            rsi_2 = 0
        
        int64_t* rdx
        
        if (rsi_2 != 0)
            do
                int64_t* rcx_3 = *rbx_1
                uint64_t rdx_1 = zx.q(*(arg1 + 0xac))
                int64_t var_208 = 0
                int64_t* rax_6 = (*(*rcx_3 + 0x40))(rcx_3, rdx_1, &var_208)
                int64_t rdx_2 = *rax_6
                int32_t rax_7
                rax_7, rdx = (*(rdx_2 + 0x1d8))(rax_6, rdx_2)
                rbx_1 += 8
                rax_7.b = rax_7 u> 1
                rdi_1 += 1
                r14.b |= rax_7.b
            while (rdi_1 != rsi_2)
            
            r15 = var_428
            r10_1 = var_328_1
            var_437_1 = r14.b
        
        char rax_8 = *(arg1 + 0x220)
        char var_438_1
        
        if (rax_8 == 0 || (r14.b == 0 && (*(arg1 + 0x224) & 2) != 0))
            var_438_1 = 0
        else
            var_438_1 = 1
        
        void* rcx_5 = arg1 + 0xb0
        void* rax_9 = *(rcx_5 + 0x100)
        rdx.b = rax_8 - 3 u<= 1
        char var_435_1 = rdx.b
        
        if (rax_9 != 0)
            rcx_5 = rax_9
        
        *(rcx_5 + 0x7c) &= rdx.b
        void* var_2c8
        int128_t zmm6
        
        if (*(arg1 + 0xa4) == 0)
            if (data_14396fef8 == 0)
                void var_128
                int64_t* rax_11
                rax_11, zmm6 = sub_141996f30(r10_1, &var_128, (sx.q(*(r12_1 + 0x20)) u>> 2).d)
                var_2c8 = rax_11[2]
                memcpy(*rax_11, *(r12_1 + 0x18), *(r12_1 + 0x20))
            else
                void var_158
                int64_t* rax_10
                rax_10, zmm6 = sub_14083fae0(arg1, &var_158, r10_1, r12_1)
                var_2c8 = rax_10[2]
        
        int64_t rdi_2 = sx.q(sub_14082fce0(arg1))
        int32_t var_430_1 = rdi_2.d
        void* r14_1 = *(**(arg1 + 0x208) + (rdi_2 << 3))
        void* var_408_1 = r14_1
        void var_110
        
        if (*(arg1 + 0xa4) == 1)
            int64_t rdi_3 = sx.q(*(r14_1 + 0x30))
            int64_t rbx_2 = sx.q(var_e8_1)
            
            if (rdi_3.d s> rbx_2.d)
                int32_t r14_3 = rdi_3.d - rbx_2.d
                int32_t rax_13 = rbx_2.d + r14_3
                var_e8_1 = rax_13
                
                if (rax_13 s> var_e4_1)
                    sub_14083a280(&var_110, rbx_2.d)
                
                void* rcx_12 = &var_110
                
                if (var_f0_1 != 0)
                    rcx_12 = var_f0_1
                
                memset(rcx_12 + (rbx_2 << 2), 0, sx.q(r14_3) << 2)
            else if (rdi_3.d s< rbx_2.d)
                int32_t r14_4 = rbx_2.d
                int32_t r14_5 = r14_4 - rdi_3.d
                
                if (r14_4 != rdi_3.d)
                    int32_t rcx_15 = rbx_2.d - r14_5
                    
                    if (rcx_15 != rdi_3.d)
                        void* r10_2 = &var_110
                        
                        if (var_f0_1 != 0)
                            r10_2 = var_f0_1
                        
                        memmove(r10_2 + (rdi_3 << 2), r10_2 + (sx.q(r14_5 + rdi_3.d) << 2), 
                            (rcx_15 - rdi_3.d) << 2)
                        rbx_2 = zx.q(var_e8_1)
                    
                    var_e8_1 = rbx_2.d - r14_5
                    sub_14083aa80(&var_110)
            
            if (rdi_3.d s<= 0)
                rdi_2 = zx.q(rdi_2.d)
            else
                int64_t rdi_4 = 0
                
                do
                    int64_t rcx_20 = *(*(arg1 + 0x210) + rdi_2 * 0x10)
                    int32_t rax_18 = sub_14081faa0(rcx + 0x30, *(r12_1 + 0x48), 
                        *(rcx_20 + (rdi_4 << 3)), *(rcx_20 + (rdi_4 << 3) + 4))
                    void* rcx_22 = &var_110
                    
                    if (var_f0_1 != 0)
                        rcx_22 = var_f0_1
                    
                    *(rcx_22 + (rdi_4 << 2)) = rax_18
                    rdi_4 += 1
                while (rdi_4 s< rdi_3)
                
                r15 = var_428
                rdi_2 = zx.q(var_430_1)
            
            r14_1 = var_408_1
        
        int64_t* r9_2 = arg2
        result = nullptr
        int32_t var_410_1 = 0
        int32_t r8_10 = 0
        int32_t result_1 = 0
        
        if (r9_2[1].d s> 0)
            int32_t r10_3 = arg4
            int64_t rdx_10 = 0
            int128_t var_48_1 = zmm6
            int64_t rcx_23 = 0
            float zmm7[0x4]
            float var_58_1[0x4] = zmm7
            float zmm8[0x4]
            float var_68_1[0x4] = zmm8
            int128_t zmm9
            int128_t var_78_1 = zmm9
            int128_t zmm10
            int128_t var_88_1 = zmm10
            int128_t zmm11
            int128_t var_98_1 = zmm11
            float zmm12[0x4]
            float var_a8_1[0x4] = zmm12
            int128_t zmm13
            int128_t var_b8_1 = zmm13
            int128_t zmm14
            int128_t var_c8_1 = zmm14
            int128_t zmm15
            int128_t var_d8_1 = zmm15
            int64_t var_340_1 = 0
            int64_t var_330_1 = 0
            
            do
                if (test_bit(r10_3, result.d))
                    void* rax_20 = *(*r9_2 + (rcx_23 << 3))
                    int64_t* rbx_5
                    
                    if (rdx_10 s< 0 || r8_10 s>= *(arg1 + 0x200))
                        int64_t* rax_22 = j_sub_140a82f30(0x258)
                        rbx_5 = rax_22
                        
                        if (rax_22 == 0)
                            rbx_5 = nullptr
                        else
                            sub_14081b000(rax_22, 3, 4)
                            *rbx_5 = &data_142dd6fe0
                            __builtin_memset(&rbx_5[0x2b], 0, 0x30)
                            rbx_5[0x39].d = 0
                            *(rbx_5 + 0x1cc) = 4
                            __builtin_memset(&rbx_5[0x3a], 0, 0x40)
                            rbx_5[0x42] = -1
                            rbx_5[0x43].d = 0xffffffff
                            *(rbx_5 + 0x21c) = 0
                            rbx_5[0x44].d = 0xffffffff
                            __builtin_memset(&rbx_5[0x46], 0, 0x14)
                            rbx_5[0x49] = 0
                            rbx_5[0x4a].d = 0
                        
                        void* rdi_5 = arg1 + 0x1e8
                        int64_t rsi_5 = sx.q(*(rdi_5 + 0x18))
                        int32_t rax_23 = (rsi_5 + 1).d
                        *(rdi_5 + 0x18) = rax_23
                        
                        if (rax_23 s> *(rdi_5 + 0x1c))
                            sub_1408092e0(rdi_5, rsi_5.d)
                        
                        void* rax_24 = *(rdi_5 + 0x10)
                        
                        if (rax_24 != 0)
                            rdi_5 = rax_24
                        
                        *(rdi_5 + (rsi_5 << 3)) = rbx_5
                        rbx_5[0x44].d = var_430_1
                        int64_t rax_26 = *rbx_5
                        *(rbx_5 + 0x14c) = 2
                        (*(rax_26 + 0x28))(rbx_5)
                        sub_14083e000(arg1, rbx_5, r14_1)
                    else
                        void* rcx_24 = arg1 + 0x1e8
                        void* rax_21 = *(rcx_24 + 0x10)
                        
                        if (rax_21 != 0)
                            rcx_24 = rax_21
                        
                        var_410_1 = r8_10 + 1
                        rbx_5 = *(rcx_24 + (rdx_10 << 3))
                        var_340_1 = rdx_10 + 1
                        
                        if (rbx_5[0x44].d != rdi_2.d)
                            sub_14083e000(arg1, rbx_5, r14_1)
                            rbx_5[0x44].d = rdi_2.d
                    
                    char var_436 = 0
                    char* var_170_1 = &var_436
                    void*** (* var_178)() = j_sub_140597fc0
                    void*** rax_28
                    float zmm6_1[0x4]
                    rax_28, zmm6_1 =
                        sub_14081d830(0x18, sub_140a756e0(&var_178, &data_143958018) + 0x10, 1, 0)
                    void*** var_358_1 = rax_28
                    void*** rsi_6 = rax_28
                    
                    if (rax_28 == 0)
                        rsi_6 = nullptr
                        var_358_1 = nullptr
                    else
                        *rsi_6 = &data_142dd8f38
                        rsi_6[1] = 0
                        rsi_6[2] = 0
                    
                    int64_t r14_7 = sx.q(arg5[0x18].d)
                    int32_t rax_29 = (r14_7 + 1).d
                    arg5[0x18].d = rax_29
                    
                    if (rax_29 s> *(arg5 + 0xc4))
                        zmm6_1 = sub_14083a310(&arg5[0x17], r14_7.d)
                    
                    *(arg5[0x17] + (r14_7 << 3)) = rsi_6
                    rsi_6[1] = rbx_5
                    int32_t var_2b8
                    memset(&var_2b8, 0, 0xa0)
                    void* r8_14 = *(arg1 + 0x1b0)
                    void* rcx_34 = arg1 + 0xb0
                    int32_t r9_4 = *(arg1 + 0xa0) & 1
                    int32_t rdx_17 = data_14396fef8
                    var_2b8 = r9_4
                    
                    if (r8_14 != 0)
                        rcx_34 = r8_14
                    
                    int32_t var_290_1 = 0
                    int32_t var_28c_1 = (*(arg3 + 0x34)).d
                    int32_t rax_31
                    
                    if (rdx_17 == 0)
                        rax_31 = *rcx_34
                    else
                        rax_31 = *(rcx_34 + 4)
                    
                    int32_t var_288_1 = rax_31
                    int32_t rax_32
                    
                    if (rdx_17 == 0)
                        rax_32 = *(rcx_34 + 0x10)
                    else
                        rax_32 = *(rcx_34 + 0x14)
                    
                    int32_t var_284_1 = rax_32
                    int32_t rax_33
                    
                    if (rdx_17 == 0)
                        rax_33 = *(rcx_34 + 0x20)
                    else
                        rax_33 = *(rcx_34 + 0x24)
                    
                    int32_t var_280_1 = rax_33
                    int32_t rax_34
                    
                    if (rdx_17 == 0)
                        rax_34 = *(rcx_34 + 0x30)
                    else
                        rax_34 = *(rcx_34 + 0x34)
                    
                    int32_t var_278_1 = rax_34
                    int32_t rax_35
                    
                    if (rdx_17 == 0)
                        rax_35 = *(rcx_34 + 0x40)
                    else
                        rax_35 = *(rcx_34 + 0x44)
                    
                    int32_t var_27c_1 = rax_35
                    int32_t rax_36
                    
                    if (rdx_17 == 0)
                        rax_36 = *(rcx_34 + 0x60)
                    else
                        rax_36 = *(rcx_34 + 0x64)
                    
                    int32_t var_258_1 = rax_36
                    int32_t rax_37
                    
                    if (rdx_17 == 0)
                        rax_37 = *(rcx_34 + 0x50)
                    else
                        rax_37 = *(rcx_34 + 0x54)
                    
                    int32_t var_254_1 = rax_37
                    int32_t rax_38
                    
                    if (rdx_17 == 0)
                        rax_38 = *(rcx_34 + 0x80)
                    else
                        rax_38 = *(rcx_34 + 0x84)
                    
                    int32_t var_26c_1 = rax_38
                    int32_t rax_39
                    
                    if (rdx_17 == 0)
                        rax_39 = *(rcx_34 + 0x90)
                    else
                        rax_39 = *(rcx_34 + 0x94)
                    
                    int32_t var_268_1 = rax_39
                    void* rcx_35 = arg1 + 0xb0
                    
                    if (r8_14 != 0)
                        rcx_35 = r8_14
                    
                    int32_t rax_40
                    
                    if (rdx_17 == 0)
                        rax_40 = *(rcx_35 + 0xa0)
                    else
                        rax_40 = *(rcx_35 + 0xa4)
                    
                    int32_t var_264_1 = rax_40
                    int32_t rax_41
                    
                    if (rdx_17 == 0)
                        rax_41 = *(rcx_35 + 0xb0)
                    else
                        rax_41 = *(rcx_35 + 0xb4)
                    
                    int32_t var_260_1 = rax_41
                    int32_t rax_42
                    
                    if (rdx_17 == 0)
                        rax_42 = *(rcx_35 + 0xc0)
                    else
                        rax_42 = *(rcx_35 + 0xc4)
                    
                    int32_t var_25c_1 = rax_42
                    int32_t rax_43
                    
                    if (rdx_17 == 0)
                        rax_43 = *(rcx_35 + 0xd0)
                    else
                        rax_43 = *(rcx_35 + 0xd4)
                    
                    int32_t var_250_1 = rax_43
                    int32_t var_270_1 = *(arg1 + 0x240)
                    int32_t var_274_1 = 0xffffffff
                    int128_t* rax_45
                    int32_t zmm1_2
                    float zmm2[0x4]
                    
                    if (r9_4 == 0)
                        zmm2 = r15[0x17].d
                        int32_t var_308
                        rax_45 = &var_308
                        zmm1_2 = *(r15 + 0xb4)
                        var_308 = r15[0x16].d.d
                        int32_t var_304_1 = zmm1_2
                        float var_300_1 = zmm2[0]
                        int32_t var_2fc_1 = 0x3f800000
                    else
                        uint128_t var_168
                        rax_45 = &var_168
                        var_168 = data_142d3f660
                    
                    int32_t rcx_36 = *(arg1 + 0x224)
                    float zmm3[0x4] = *(arg1 + 0x228)
                    zmm1_2 = *(arg1 + 0x22c)
                    uint128_t var_248_1 = *rax_45
                    uint128_t zmm0_2
                    zmm0_2.d = zmm6_1.d f/ zmm3[0]
                    int32_t var_238_1 = rcx_36 u>> 3 & 1
                    uint32_t var_234_1 = zx.d(*(arg1 + 0x221))
                    int32_t var_220_1 = *(arg1 + 0x238)
                    int32_t var_230_1 = rcx_36 u>> 2 & 1
                    uint32_t var_21c_1 = zx.d(*(arg1 + 0x23c))
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    temp0_1[0] = zmm1_2
                    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                    temp0_2[0] = zmm0_2.d
                    zmm0_2 = zx.o(*(arg1 + 0x230))
                    zmm6_1[0] = zmm6_1[0] f/ zmm1_2
                    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
                    temp0_3[0] = zmm6_1[0]
                    uint64_t var_228_1 = zmm0_2.q
                    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                    float var_2a8_1[0x4] = temp0_4
                    void* rbx_6 = rsi_6[1]
                    float var_378_1[0x4] = temp0_4
                    sub_1405d16e0(rbx_6 + 0x248, nullptr)
                    *(rbx_6 + 0x250) = 0xffffffff
                    char rdx_18 = 0
                    int32_t rcx_40 = -1
                    int64_t* rbx_7 = nullptr
                    int32_t r8_15 = 0
                    int64_t* var_3d8 = nullptr
                    int32_t rdi_7 = -1
                    int32_t var_3f8 = 0
                    char var_3f4_1 = 0
                    void* var_3e8 = nullptr
                    int32_t var_3e0_1 = 0
                    int32_t var_3d0_1 = 0xffffffff
                    void* var_3b0 = nullptr
                    int32_t var_3a8_1 = -1
                    int32_t var_3a0_1 = 0xffffffff
                    int32_t var_398_1 = 0
                    int32_t var_3f0_1 = 0xffffffff
                    int32_t var_420
                    float var_388
                    
                    if (var_438_1 != 0)
                        rdx_18 = *(arg1 + 0x220)
                        int32_t rcx_41 = 0x94
                        
                        if (var_437_1 != 0)
                            rcx_41 = 0xb4
                        
                        var_3f8 = rcx_1
                        r8_15 = rcx_1
                        char var_3f4_2 = rdx_18
                        int32_t rax_52
                        rax_52.b = data_143ce83a0 != 0
                        void* rax_54 = *(arg1 + 0x1b0)
                        int32_t var_398_2 = rcx_41 | (rax_52 + 1)
                        void* rcx_43 = arg1 + 0xb0
                        uint64_t var_3cc
                        
                        if (var_435_1 == 0)
                            rdi_7 = 0
                            
                            if (rax_54 != 0)
                                rcx_43 = rax_54
                            
                            if (data_14396fef8 == 0)
                                rcx_40 = *rcx_43
                            else
                                rcx_40 = *(rcx_43 + 4)
                            
                            bool cond:14_1 = (*(arg1 + 0xa0) & 1) == 0
                            int32_t var_3f0_3 = rcx_40
                            var_3cc = *(rax_20 + 0x60c)
                            uint128_t zmm0_3 = *(rax_20 + 0x368)
                            float zmm1_3[0x4] = *(rax_20 + 0x358)
                            zmm2 = *(rax_20 + 0x348)
                            var_420 = zmm0_3.d
                            var_388 = zmm1_3[0]
                            float var_434_1 = zmm2[0]
                            float var_3c0_1 = zmm2[0]
                            float var_3bc_1 = zmm1_3[0]
                            int32_t var_3b8_2 = zmm0_3.d
                            
                            if (not(cond:14_1))
                                zmm1_3 = var_3cc:4.d
                                zmm2 = *(rax_20 + 0x614)
                                float zmm4_1[0x4] = r15[0x11].d
                                zmm7 = *(r15 + 0x8c)
                                int32_t zmm5_1 = *(r15 + 0xac)
                                zmm12 = r15[0x10].d
                                zmm9 = r15[0x12].d
                                zmm10 = r15[0x14].d
                                zmm11 = r15[0x16].d
                                zmm13 = r15[0x13].d
                                zmm14 = r15[0x15].d
                                int32_t zmm6_2 = *(r15 + 0xbc)
                                int32_t var_2ec_1 = 0x3f800000
                                float var_2f8[0x4]
                                var_2f8[0] = var_3cc.d.d
                                float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
                                float temp0_6[0x4] = _mm_shuffle_ps(var_2f8, var_2f8, 0xe1)
                                temp0_6[0] = zmm1_3[0]
                                int32_t var_2dc_1 = 0
                                float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
                                float var_2e8[0x4]
                                var_2e8[0] = var_434_1.d
                                temp0_7[0] = zmm2[0]
                                float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
                                var_2f8 = temp0_8
                                zmm0_3 = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_8, temp0_8, 0x55), *(r15 + 0x1c0))
                                int64_t var_368_1 = 0
                                float temp0_12[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_8, temp0_8, 0), *(r15 + 0x1b0))
                                int32_t var_360_1 = 0
                                float temp0_14[0x4] = __mulps_xmmps_memps(
                                    _mm_shuffle_ps(temp0_8, temp0_8, 0xff), *(r15 + 0x1e0))
                                float temp0_15[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
                                float temp0_16[0x4] = _mm_add_ps(temp0_12, zmm0_3)
                                float temp0_17[0x4] = __mulps_xmmps_memps(temp0_15, *(r15 + 0x1d0))
                                float temp0_18[0x4] = _mm_shuffle_ps(var_2e8, var_2e8, 0xe1)
                                temp0_18[0] = var_388.d
                                var_378_1 = zmm4_1
                                zmm4_1 = *(r15 + 0x9c)
                                float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_14)
                                zmm2 = *(r15 + 0xb4)
                                temp0_5[0] = zmm4_1[0]
                                float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
                                temp0_20[0] = var_420.d
                                float temp0_21[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
                                float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
                                temp0_21[0] = zmm5_1
                                float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_16)
                                var_368_1.o = temp0_22
                                zmm1_3 = *(r15 + 0xa4)
                                var_2e8 = temp0_22
                                float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
                                var_3cc.d = temp0_23[0]
                                zmm0_3 = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
                                float var_1f8_1[0x4] = temp0_23
                                float var_3c4_2 = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)[0]
                                zmm3 = *(r15 + 0x84)
                                float temp0_27[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                var_3cc:4.d = zmm0_3.d
                                temp0_27[0] = (*(r15 + 0x94)).d
                                float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc6)
                                temp0_28[0] = zmm1_3[0]
                                float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x27)
                                temp0_29[0] = zmm2[0]
                                float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x39)
                                float var_1c8_1[0x4] = temp0_30
                                float temp0_31[0x4] = _mm_mul_ps(temp0_24, temp0_30)
                                zmm3 = var_368_1.o
                                float temp0_32[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                                zmm15 = r15[0x17].d
                                zmm0_3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                float temp0_34[0x4] = _mm_shuffle_ps(var_378_1, var_378_1, 0xe1)
                                float temp0_35[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xe1)
                                temp0_34[0] = zmm13.d
                                temp0_35[0] = zmm9.d
                                float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc6)
                                float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
                                temp0_36[0] = zmm14.d
                                float temp0_38[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                                temp0_37[0] = zmm10.d
                                float temp0_39[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x27)
                                float temp0_40[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x27)
                                temp0_39[0] = zmm15.d
                                float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x27)
                                temp0_40[0] = zmm6_2
                                temp0_41[0] = zmm11.d
                                float temp0_42[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x39)
                                float temp0_43[0x4] = _mm_mul_ps(temp0_38, temp0_42)
                                float temp0_44[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x39)
                                float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x39)
                                zmm0_3 = _mm_mul_ps(zmm0_3, temp0_45)
                                float temp0_47[0x4] = _mm_mul_ps(temp0_32, temp0_44)
                                float var_1a8_1[0x4] = temp0_44
                                zmm0_3 = _mm_add_ps(zmm0_3, temp0_31)
                                float var_1d8_1[0x4] = temp0_45
                                float var_1b8_1[0x4] = temp0_42
                                float temp0_50[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_43, temp0_47), zmm0_3)
                                float var_3c0_2 = temp0_50[0]
                                zmm0_3 = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)
                                var_368_1.o = temp0_50
                                float var_3b8_3 = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)[0]
                                int32_t var_3bc_2 = zmm0_3.d
                        else
                            rdi_7 = 7
                            
                            if (rax_54 != 0)
                                rcx_43 = rax_54
                            
                            if (data_14396fef8 == 0)
                                rcx_40 = *(rcx_43 + 0x70)
                            else
                                rcx_40 = *(rcx_43 + 0x74)
                            
                            int32_t var_3f0_2 = rcx_40
                            __builtin_memset(&var_3cc, 0, 0x14)
                            int32_t var_3b8_1 = 0x3f800000
                    
                    if (*(arg1 + 0xa4) != 0)
                        if (rdx_18 != 0 && rcx_40 != 0xffffffff)
                            var_3f8 = *(r12_1 + 0xb0)
                            void* rax_63 = *(r12_1 + 0x60)
                            var_3e8 = rax_63
                            
                            if (rax_63 != 0)
                                *(rax_63 + 8) += 1
                                rbx_7 = var_3d8
                            
                            uint32_t var_3e0_3 = *(r12_1 + 0xb8) u>> 2
                            int64_t* rax_66 = *(rcx + 0x50)
                            var_3d8 = rax_66
                            
                            if (rax_66 != 0)
                                rax_66[1].d += 1
                            
                            if (rbx_7 != 0)
                                rbx_7[1].d -= 1
                                
                                if (rbx_7[1].d == 1)
                                    char rax_68
                                    
                                    if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                                        rax_68 = sub_1405949a0()
                                    
                                    if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_68 != 0))
                                        (**rbx_7)(rbx_7, 1)
                                    else
                                        bool z_1
                                        
                                        if (0 == *(rbx_7 + 0xc))
                                            *(rbx_7 + 0xc) = 1
                                            z_1 = true
                                        else
                                            *(rbx_7 + 0xc)
                                            z_1 = false
                                        
                                        if (z_1)
                                            sub_1405dcc10(&data_143f02390, rbx_7)
                            
                            int32_t var_3d0_2 = *(r12_1 + 0x48)
                            
                            if (sub_140820100(rcx, &var_3f8) != 0)
                                void* rbx_12 = rsi_6[1]
                                sub_1405d16e0(rbx_12 + 0x248, var_3b0)
                                *(rbx_12 + 0x250) = var_3a8_1
                        
                        void* rdx_29 = *(r12_1 + 0x60)
                        
                        if (rdx_29 == 0)
                            TEB* gsbase
                            
                            if (data_143ce3ed0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer
                                    + (zx.q(data_14401b1a0) << 3))))
                                _Init_thread_header(&data_143ce3ed0)
                                
                                if (data_143ce3ed0 == 0xffffffff)
                                    sub_1408123e0(&data_143ce3e90, 0xd, 
                                        NiagaraRenderer::DummyFloat")
                                    atexit(sub_142cb4fa0)
                                    _Init_thread_footer(&data_143ce3ed0)
                            
                            void* rdx_31 = data_143ce3ec0
                            void* var_320 = rdx_31
                            
                            if (rdx_31 != 0)
                                *(rdx_31 + 8) += 1
                                rdx_31 = var_320
                            
                            void* rbx_14 = rsi_6[1]
                            sub_1405d16e0(rbx_14 + 0x238, rdx_31)
                            *(rbx_14 + 0x240) = 0
                            sub_1405ec8a0(&var_320)
                        else
                            void* rbx_13 = rsi_6[1]
                            int32_t rdi_13 = *(r12_1 + 0xb8)
                            sub_1405d16e0(rbx_13 + 0x238, rdx_29)
                            *(rbx_13 + 0x240) = rdi_13 u>> 2
                    else
                        void* r14_9
                        
                        if (rdx_18 == 0 || rcx_40 == 0xffffffff)
                            r14_9 = var_2c8
                        else
                            int32_t rax_56 = data_14397f958
                            char rax_57
                            
                            if (rax_56 s>= 0 && r8_15 s>= rax_56)
                                rax_57 = sub_14074a1e0(*(rcx + 0x14))
                            
                            if (rax_56 s< 0 || r8_15 s< rax_56 || rax_57 == 0)
                                void var_140
                                int64_t* rax_61 = sub_1419971e0(var_328_1, &var_140, rcx_1)
                                void* zmm1_4 = rax_61[2]
                                int128_t var_190 = *rax_61
                                int32_t var_448
                                var_448.q = &var_190
                                sub_14083e110(arg1, &var_3f8, rdi_7, r12_1, var_448)
                                void* rdx_24 = zmm1_4
                                void* var_198 = rdx_24
                                
                                if (rdx_24 != 0)
                                    *(rdx_24 + 8) += 1
                                    rdx_24 = zmm1_4
                                
                                void* rbx_10 = rsi_6[1]
                                sub_1405d16e0(rbx_10 + 0x248, rdx_24)
                                *(rbx_10 + 0x250) = 0
                                sub_1405ec8a0(&var_198)
                                r14_9 = var_2c8
                            else
                                var_3f8 = rcx_1
                                r14_9 = var_2c8
                                sub_1405d16e0(&var_3e8, r14_9)
                                uint32_t var_3e0_2 = *(r12_1 + 0xb8) u>> 2
                                
                                if (sub_140820100(rcx, &var_3f8) != 0)
                                    void* rbx_9 = rsi_6[1]
                                    sub_1405d16e0(rbx_9 + 0x248, var_3b0)
                                    *(rbx_9 + 0x250) = var_3a8_1
                        
                        uint32_t rdi_9
                        
                        if (data_14396fef8 == 0)
                            rdi_9 = *(r12_1 + 0xb8) u>> 2
                        else
                            rdi_9 = *(r12_1 + 0xb0)
                        
                        void* var_218 = r14_9
                        
                        if (r14_9 != 0)
                            *(r14_9 + 8) += 1
                        
                        void* rbx_11 = rsi_6[1]
                        sub_1405d16e0(rbx_11 + 0x238, r14_9)
                        *(rbx_11 + 0x240) = rdi_9
                        sub_1405ec8a0(&var_218)
                    
                    int64_t* rcx_60 = data_143f0f180
                    int64_t* var_318
                    (*(*rcx_60 + 0xf8))(rcx_60, &var_318, &var_2b8, &data_143ce8c10, 1, 1, 
                        var_438_1, var_430_1)
                    int64_t* rax_76 = var_318
                    var_428 = rax_76
                    
                    if (rax_76 != 0)
                        rax_76[1].d += 1
                        int64_t* rbx_15 = var_318
                        
                        if (rbx_15 != 0)
                            rbx_15[1].d -= 1
                            
                            if (rbx_15[1].d == 1)
                                char rax_78
                                
                                if (rbx_15[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_78 = sub_1405949a0()
                                
                                if (rbx_15[2].b != 0 || (data_143f0f1d0 == 0 && rax_78 != 0))
                                    (**rbx_15)(rbx_15, 1)
                                else
                                    bool z_2
                                    
                                    if (0 == *(rbx_15 + 0xc))
                                        *(rbx_15 + 0xc) = 1
                                        z_2 = true
                                    else
                                        *(rbx_15 + 0xc)
                                        z_2 = false
                                    
                                    if (z_2)
                                        sub_1405dcc10(&data_143f02390, rbx_15)
                        
                        rax_76 = var_428
                    
                    int64_t* rbx_16
                    
                    if (&rsi_6[2] != &var_428)
                        rbx_16 = rsi_6[2]
                        rsi_6[2] = rax_76
                        
                        if (rbx_16 != 0)
                            rbx_16[1].d -= 1
                            
                            if (rbx_16[1].d == 1)
                                if (rbx_16[2].b != 0)
                                    (**rbx_16)(rbx_16, 1)
                                else
                                    char rax_82
                                    
                                    if (data_143f0f1d0 == 0)
                                        rax_82 = sub_1405949a0()
                                    
                                    if (data_143f0f1d0 == 0 && rax_82 != 0)
                                        (**rbx_16)(rbx_16, 1)
                                    else
                                        bool z_3
                                        
                                        if (0 == *(rbx_16 + 0xc))
                                            *(rbx_16 + 0xc) = 1
                                            z_3 = true
                                        else
                                            *(rbx_16 + 0xc)
                                            z_3 = false
                                        
                                        if (z_3)
                                            sub_1405dcc10(&data_143f02390, rbx_16)
                    else if (rax_76 != 0)
                        rax_76[1].d -= 1
                        
                        if (rax_76[1].d == 1)
                            rbx_16 = var_428
                            
                            if (rbx_16[2].b != 0)
                                (**rbx_16)(rbx_16, 1)
                            else
                                char rax_84
                                
                                if (data_143f0f1d0 == 0)
                                    rax_84 = sub_1405949a0()
                                
                                if (data_143f0f1d0 == 0 && rax_84 != 0)
                                    (**rbx_16)(rbx_16, 1)
                                else
                                    bool z_4
                                    
                                    if (0 == *(rbx_16 + 0xc))
                                        *(rbx_16 + 0xc) = 1
                                        z_4 = true
                                    else
                                        *(rbx_16 + 0xc)
                                        z_4 = false
                                    
                                    if (z_4)
                                        sub_1405dcc10(&data_143f02390, var_428)
                    rsi_6[1][0x45] = rsi_6[2]
                    int64_t rbx_17 = sx.q(*(var_408_1 + 0x30))
                    sub_1419c6730()
                    var_378_1[0].q = rbx_17
                    int32_t rdx_36 = 0
                    int64_t i = 0
                    int32_t var_434_2 = 0
                    
                    if (rbx_17.d s> 0)
                        void* r8_19 = var_408_1 + 0x10
                        int64_t rcx_65 = 0
                        var_388.q = r8_19
                        var_420.q = 0
                        
                        do
                            void* rax_88 = *(r8_19 + 0x18)
                            void* rsi_7 = r8_19
                            
                            if (rax_88 != 0)
                                rsi_7 = rax_88
                            
                            void* rsi_8 = rsi_7 + rcx_65
                            void* rcx_66 = rcx_2
                            void* rax_89 = *(rcx_66 + 0x40)
                            
                            if (rax_89 != 0)
                                rcx_66 = rax_89
                            
                            int64_t r12_2 = *(rcx_66 + (i << 3))
                            
                            if (*(rsi_8 + 8) != 0 && r12_2 != 0)
                                int64_t* rax_90 = sub_140820290(arg5)
                                rax_90[0xf] = var_358_1[1]
                                rax_90[0x11] = 0
                                *(rax_90 + 0x9c) ^= (zx.d(*(r15 + 0x35)) ^ *(rax_90 + 0x9c)) & 1
                                int32_t rcx_72 = *(rax_90 + 0x9c)
                                int32_t rdx_41 = (((zx.d(*(r15 + 0x39)) * 2) ^ rcx_72) & 4) ^ rcx_72
                                *(rax_90 + 0x9c) = rdx_41
                                int32_t rbx_22 =
                                    ((zx.d(*(r15 + 0x39)) << 0x19 ^ rdx_41) & 0x4000000) ^ rdx_41
                                *(rax_90 + 0x9c) = rbx_22
                                int64_t* rbx_23 = rax_90
                                *(rax_90 + 0x9c) = ((zx.d(sub_14082c3b0(r15, rax_20)) << 0xd
                                    ^ rbx_22) & 0xe000) ^ rbx_22
                                int64_t* rax_98 = rax_90[0xd]
                                
                                if (rax_98 != 0)
                                    rbx_23 = rax_98
                                
                                int64_t rax_101
                                
                                if (((*(arg1 + 0xa0) u>> 2).b & 1) == 0)
                                    rax_101 = sub_140765120(r15)
                                else
                                    rax_101 = r15[0x28]
                                
                                *rbx_23 = rax_101
                                rbx_23[9].d = rcx_1
                                rbx_23[8].d = 0
                                rbx_23[0xa] = 0
                                *(rax_90 + 0x9c) &= 0xffffe07f
                                rax_90[0x10] = r12_2
                                rbx_23[2] = var_408_1 + 0x178
                                rbx_23[8].d = *(rsi_8 + 4)
                                *(rbx_23 + 0x44) = *(rsi_8 + 8)
                                
                                if (i s>= 0 && var_434_2 s< var_e8_1)
                                    *(rbx_23 + 0x44) = 0
                                    void* rcx_75 = &var_110
                                    
                                    if (var_f0_1 != 0)
                                        rcx_75 = var_f0_1
                                    
                                    rbx_23[7].d = *(rcx_75 + (i << 2))
                                    rbx_23[6] = *(rcx + 0x100)
                                
                                *(rax_90 + 0x9c) |= 0x10000
                                *(rax_90 + 0x9c) = zx.d(sub_14076deb0(r15)) << 0x11
                                    | (*(rax_90 + 0x9c) & 0xfffdffff)
                                sub_1422dd2a0(arg5, result_1, rax_90)
                                rdx_36 = var_434_2
                                r8_19 = var_388.q
                            
                            rdx_36 += 1
                            rcx_65 = var_420.q + 0x18
                            var_434_2 = rdx_36
                            i += 1
                            var_420.q = rcx_65
                        while (i s< var_378_1[0].q)
                        
                        r12_1 = var_348_1
                    
                    sub_1405ec8a0(&var_3b0, rdx_36)
                    sub_1405ec8a0(&var_3d8)
                    sub_1405ec8a0(&var_3e8)
                    result = zx.q(result_1)
                    rdx_10 = var_340_1
                    rcx_23 = var_330_1
                    r8_10 = var_410_1
                    r9_2 = arg2
                    r10_3 = arg4
                
                r14_1 = var_408_1
                result = zx.q(result.d + 1)
                rdi_2 = zx.q(var_430_1)
                rcx_23 += 1
                result_1 = result.d
                var_330_1 = rcx_23
            while (result.d s< r9_2[1].d)
        
        if (var_f0_1 != 0)
            result = sub_140a74f90(var_f0_1)

__security_check_cookie(rax_1 ^ &var_468)
return result
