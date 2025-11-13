// 函数: sub_1414d4c20
// 地址: 0x1414d4c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int64_t* r13 = arg3
uint32_t rdx = arg4 * 3
uint32_t var_338 = rdx
int32_t i = 0
int32_t i_1 = 0
void* r8 = &data_143ec4da8
void* r9 = &data_143ec4dd0
void* var_2f0 = &data_143ec4da8
void* var_2e8 = &data_143ec4dd0
int64_t result

do
    void* rcx = *(r8 + 0x18)
    int128_t zmm1 = data_142d3f5a0
    int64_t rdx_1 = sx.q(rdx + i)
    void* rax_3 = r8
    
    if (rcx != 0)
        rax_3 = rcx
    
    void* rcx_1 = r9
    void* r8_1 = *(rax_3 + (rdx_1 << 3))
    void* rax_4 = *(r9 + 0x18)
    
    if (rax_4 != 0)
        rcx_1 = rax_4
    
    int64_t rax_5 = *(r8_1 + 8)
    void* rcx_2 = *(rcx_1 + (rdx_1 << 3))
    int64_t var_1b0_1 = *(rcx_2 + 8)
    int32_t var_f0_1 = 0
    int32_t var_ec
    __builtin_memset(&var_ec, 0xff, 0x14)
    int128_t var_d8_1 = zmm1
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x1a)
    int64_t var_1c8 = rax_5
    int64_t var_1c0_1 = 0
    int32_t var_1b8_1 = 0xffffffff
    int16_t var_1b4_1 = 0x500
    int64_t var_1a8_1 = 0
    int32_t var_1a0_1 = 0xffffffff
    int16_t var_19c_1 = 0x500
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x11)
    int32_t var_f4_1 = 0
    void var_198
    memset(&var_198, 0, 0x90)
    int32_t j_7 = 0
    int64_t* rax_6 = &var_1c8
    int64_t rcx_5 = 0
    uint64_t r15_1 = 0
    
    while (*rax_6 != 0)
        j_7 += 1
        rcx_5 += 1
        rax_6 = &rax_6[3]
        
        if (rcx_5 s>= 8)
            break
    
    uint128_t var_a8
    
    if (j_7 != 0)
        int128_t* rdx_2 = &var_a8
        uint64_t j_6 = zx.q(j_7)
        int64_t* rax_7 = &var_1c8
        uint64_t j
        
        do
            int64_t rcx_6 = *rax_7
            
            if (rcx_6 != 0)
                r15_1 = zx.q(r15_1.d + 1)
                *rdx_2 = rcx_6
                rdx_2 += 8
            
            rax_7 = &rax_7[3]
            j = j_6
            j_6 -= 1
        while (j != 1)
    
    int64_t r14_1 = var_108
    
    if (r14_1 != 0 && ((var_f4_1.b & 0xf) == 2 || (var_f4_1.b & 0xf0) == 0x20))
        void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_9[4]
        
        if (rax_10 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_9[4]
        
        *(arg1 + 0x30) = rax_10
        int64_t* rax_11 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_11 = rcx_9
        *(arg1 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142f115e8
        rcx_9[2].d = var_f4_1
        rcx_9[3] = r14_1
    
    uint32_t rdx_3 = (r15_1 << 3).d
    int64_t r14_2 = sx.q(rdx_3)
    int64_t* rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = rbx_4 + r14_2
    
    if (rax_13 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, rdx_3 + 8)
        rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = rbx_4 + r14_2
    
    *(arg1 + 0x30) = rax_13
    int64_t j_5 = sx.q(r15_1.d)
    
    if (r15_1.d s> 0)
        int64_t* rcx_14 = rbx_4
        int64_t j_1
        
        do
            *rcx_14 = *(&var_a8 - rbx_4 + rcx_14)
            rcx_14 = &rcx_14[1]
            j_1 = j_5
            j_5 -= 1
        while (j_1 != 1)
    
    void*** rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_17[5]
    
    if (rax_15 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_17[5]
    
    *(arg1 + 0x30) = rax_15
    void** rax_16 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_16 = rcx_17
    *(arg1 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    rcx_17[3] = rbx_4
    *rcx_17 = &data_142d549c8
    rcx_17[2].d = r15_1.d
    rcx_17[4].d = 1
    int64_t rbx_9 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_18 = rbx_9 + 0x38
    
    if (rax_18 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x3a)
        rbx_9 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_18 = rbx_9 + 0x38
    
    *(arg1 + 0x30) = rax_18
    wchar16 const* const rcx_22 = u"InjectTranslucentLightArray"
    wchar16 const j_2
    
    do
        j_2 = *rcx_22
        *(rbx_9 - u"InjectTranslucentLightArray" + rcx_22) = j_2
        rcx_22 = &rcx_22[1]
    while (j_2 != 0)
    void*** rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_25[0x27]
    
    if (rax_19 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_25[0x27]
    
    *(arg1 + 0x30) = rax_19
    void**** rax_20 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_20 = rcx_25
    *(arg1 + 8) = &rcx_25[1]
    sub_1405d11b0(rcx_25, &var_1c8, rbx_9)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_1c8)
    int64_t var_b8
    *(arg1 + 0x178) = var_b8:7.b
    uint64_t rax_23 = zx.q(*(arg1 + 0xa0))
    *(arg1 + 0x179) = 0
    int32_t r14_3 = 0
    *(arg1 + 0x1c4) = 1
    int64_t var_218
    __builtin_memset(&var_218, 0, 0x2c)
    int64_t var_1e8_1 = 0
    int32_t var_1e0_1 = 0
    int16_t var_1dc_1 = 0
    char var_1da_1 = 0
    int16_t var_1d8_1 = 0
    int32_t var_21c_1 = rax_23.d
    int128_t var_278
    __builtin_memset(&var_278, 0, 0x30)
    int128_t var_230_1 = zx.o(0)
    
    if (rax_23.d != 0)
        do
            uint64_t rbx_13 = zx.q(r14_3)
            uint64_t r15_2 = rbx_13 * 3
            int64_t* rcx_30 = *(arg1 + (r15_2 << 3) + 0xa8)
            
            if (rcx_30 == 0)
                *(&var_218 + rbx_13) = 0
                rax_23.b = 0
            else
                *(&var_218 + rbx_13) = *(rcx_30 + 0x3c)
                int64_t var_210
                *(&var_210 + (rbx_13 << 2)) = rcx_30[8].d
                int64_t rax_27 = (*(*rcx_30 + 0x10))()
                
                if (rax_27 != 0)
                    var_1dc_1:1.b = 1
                
                if (rax_27 == 0 || *(rax_27 + 0x68) u<= 1)
                    var_1dc_1:1.b = 0
                
                rax_23 = zx.q(*(&var_218 + rbx_13))
            
            if (rax_23.b != 0)
                var_1e0_1.w = *(*(arg1 + (r15_2 << 3) + 0xa8) + 0x38)
            
            r14_3 += 1
        while (r14_3 u< var_21c_1)
    
    int64_t* rcx_32 = *(arg1 + 0x168)
    int32_t var_1f0_1
    
    if (rcx_32 == 0)
        var_1f0_1 = 0
    else
        var_1f0_1 = *(rcx_32 + 0x3c)
        var_1f0_1 = rcx_32[8].d
        void* rax_31 = (*(*rcx_32 + 0x10))()
        
        if (rax_31 == 0 || *(rax_31 + 0x68) u<= 1)
            var_1dc_1:1.b = 0
        else
            var_1dc_1:1.b = 1
    
    var_1e8_1.b = *(arg1 + 0x170)
    var_1e8_1:1.b = *(arg1 + 0x171)
    var_1e8_1:2.b = *(arg1 + 0x172)
    var_1e8_1:3.b = *(arg1 + 0x173)
    var_1e8_1:4.d = *(arg1 + 0x174)
    
    if (var_1f0_1 != 0)
        var_1e0_1.w = *(*(arg1 + 0x168) + 0x38)
    
    var_1e0_1:2.b = *(arg1 + 0x178)
    var_1e0_1:3.b = *(arg1 + 0x179)
    char var_1da_2 = *(arg1 + 0x17a)
    int64_t var_240_1 = data_14395da18
    int64_t var_238_1 = data_14395d9e8
    int32_t var_220_1 = 1
    int32_t j_4 = 0
    int128_t var_98
    
    if (r13[1].d s> 0)
        int64_t* rax_43 = nullptr
        int64_t* var_358_1 = nullptr
        int32_t j_3
        
        do
            int64_t r14_4 = *r13
            void* r15_3 = *(rax_43 + r14_4)
            int64_t* rcx_34 = *(r15_3 + 0x20)
            char rax_45 = (*(*rcx_34 + 0x30))(rcx_34)
            int64_t* rcx_35 = *(r15_3 + 0x20)
            char r13_1 = *(rcx_35 + 0x13c)
            int64_t r8_4 = *rcx_35
            int64_t* rbx_12
            rbx_12.b = r13_1 == 0
            void var_298
            sub_1414c4670(&var_a8, (*(r8_4 + 0x10))(rcx_35, &var_298, r8_4), arg2, i_1, rbx_12.b)
            
            if (var_a8:0xc.d s> var_a8.d && var_98.d s> var_a8:4.d && var_98:4.d s> var_a8:8.d)
                int128_t var_2c8
                sub_1419a2ec0(arg2[0xa2a], &var_2c8, &data_143f5e630, 0)
                int64_t* rcx_38 = arg2[0xa2a]
                int128_t var_348 = var_2c8
                void var_288
                void** rax_50 = sub_1419a2ec0(rcx_38, &var_288, &data_143f5e530, 0)
                int64_t* rdx_13 = &var_278
                void* rcx_39 = *rax_50
                int64_t var_320_1 = rax_50[1]
                void* var_328 = rcx_39
                float zmm6_1
                char var_3b8_1
                
                if (r13_1 != 0)
                    int64_t var_248_2 = data_1439b7258
                    int64_t* rax_57 = *(var_358_1 + r14_4 + 8)
                    int64_t* r9_3 = *(var_358_1 + r14_4 + 0x18)
                    char var_380_2 = rax_45
                    char var_388_2 = *(var_358_1 + r14_4 + 0x10)
                    
                    if (rax_57 == 0)
                        void** var_390_3 = &var_328
                        var_3b8_1.q = r15_3
                        zmm6_1 = sub_1414bb170(arg1, rdx_13, arg2, r9_3, var_3b8_1, nullptr, 
                            0xffffffff, i_1.b, &var_348)
                    else
                        void** var_390_2 = &var_328
                        var_3b8_1.q = r15_3
                        zmm6_1 = sub_1414baec0(arg1, rdx_13, arg2, r9_3, var_3b8_1, rax_57, 
                            0xffffffff, i_1.b, &var_348)
                else
                    int64_t var_248_1 = data_1439b7240
                    int64_t* rcx_40 = *(var_358_1 + r14_4 + 8)
                    int64_t* r9_2 = *(var_358_1 + r14_4 + 0x18)
                    char var_380_1 = r13_1
                    char var_388_1 = *(var_358_1 + r14_4 + 0x10)
                    void** var_390_1 = &var_328
                    int128_t* var_398_1 = &var_348
                    char rax_54 = i_1.b
                    
                    if (rcx_40 == 0)
                        var_3b8_1.q = r15_3
                        zmm6_1 = sub_1414bb640(arg1, rdx_13, arg2, r9_2, var_3b8_1, nullptr, 
                            0xffffffff, rax_54)
                    else
                        var_3b8_1.q = r15_3
                        zmm6_1 = sub_1414bb420(arg1, rdx_13, arg2, r9_2, var_3b8_1, rcx_40, 
                            *(rcx_40 + 0x534), rax_54)
                int32_t rax_59 = sub_1414ccda0()
                int32_t rdx_14 = var_a8.d
                int32_t rcx_47 = var_a8:4.d
                void* r12_1 = var_2c8.q
                uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_59))
                uint64_t r14_5 = zx.q(*(r12_1 + 0x11c))
                int32_t var_2dc_1 = rax_59
                float zmm3_1 = zmm6_1 f/ zmm0_3.d
                int32_t rax_62 = var_a8:0xc.d
                float zmm2_1 = zmm6_1 f/ _mm_cvtepi32_ps(zx.o((rax_59.q u>> 0x20).d)).d
                zmm0_3.d = _mm_cvtepi32_ps(zx.o(rax_62 - rdx_14)).d f* zmm3_1
                uint128_t zmm1_2
                zmm1_2.d = _mm_cvtepi32_ps(zx.o(rdx_14)).d f* zmm3_1
                int32_t var_318 = zmm0_3.d
                zmm0_3 = _mm_cvtepi32_ps(zx.o(var_98.d - rcx_47))
                
                if (r14_5.d u>= 0x10)
                    r14_5 = 0x10
                
                int32_t var_310_1 = zmm1_2.d
                zmm0_3.d = zmm0_3.d f* zmm2_1
                int32_t var_314_1 = zmm0_3.d
                zmm0_3.d = _mm_cvtepi32_ps(zx.o(rcx_47)).d f* zmm2_1
                int32_t var_30c_1 = zmm0_3.d
                uint32_t var_370
                
                if (r14_5.d != 0)
                    uint32_t r13_2 = zx.d(*(r12_1 + 0x11a))
                    rbx_12 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                    var_370 = zx.d(*(r12_1 + 0x118))
                    var_348.q = *(arg1 + 0x188)
                    void* rax_68 = rbx_12 + r14_5
                    
                    if (rax_68 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, (r14_5 + 0x10).d)
                        rbx_12 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                        rax_68 = rbx_12 + r14_5
                    
                    *(arg1 + 0x30) = rax_68
                    memcpy(rbx_12, &var_318, r14_5.d)
                    void*** rcx_52 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_69 = &rcx_52[6]
                    
                    if (rax_69 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x38)
                        rcx_52 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_69 = &rcx_52[6]
                    
                    *(arg1 + 0x30) = rax_69
                    void**** rax_70 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_70 = rcx_52
                    *(arg1 + 8) = &rcx_52[1]
                    rcx_52[1] = 0
                    *rcx_52 = &data_142d549d8
                    rcx_52[2] = var_348.q
                    rcx_52[4].d = var_370
                    rcx_52[3] = rbx_12
                    *(rcx_52 + 0x24) = r13_2
                    rcx_52[5].d = r14_5.d
                
                uint64_t r14_6 = zx.q(*(r12_1 + 0x122))
                
                if (r14_6.d u>= 4)
                    r14_6 = 4
                
                if (r14_6.d != 0)
                    uint32_t r13_3 = zx.d(*(r12_1 + 0x120))
                    uint32_t r12_2 = zx.d(*(r12_1 + 0x11e))
                    rbx_12 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                    var_348.q = *(arg1 + 0x188)
                    void* rax_75 = rbx_12 + r14_6
                    
                    if (rax_75 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, (r14_6 + 0x10).d)
                        rbx_12 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                        rax_75 = rbx_12 + r14_6
                    
                    *(arg1 + 0x30) = rax_75
                    memcpy(rbx_12, &var_a8:8, r14_6.d)
                    void*** rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_76 = &rcx_60[6]
                    
                    if (rax_76 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x38)
                        rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_76 = &rcx_60[6]
                    
                    *(arg1 + 0x30) = rax_76
                    void** rax_77 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_77 = rcx_60
                    *(arg1 + 8) = &rcx_60[1]
                    rcx_60[1] = 0
                    *rcx_60 = &data_142d549d8
                    rcx_60[2] = var_348.q
                    rcx_60[3] = rbx_12
                    rcx_60[4].d = r12_2
                    *(rcx_60 + 0x24) = r13_3
                    rcx_60[5].d = r14_6.d
                
                if (rcx_39 != 0)
                    uint64_t r14_7 = zx.q(*(rcx_39 + 0x11c))
                    var_370 = var_a8:8.d
                    
                    if (r14_7.d u>= 4)
                        r14_7 = 4
                    
                    if (r14_7.d != 0)
                        int64_t rax_81 = *(arg1 + 0x1a8)
                        uint32_t r12_3 = zx.d(*(rcx_39 + 0x11a))
                        uint32_t r13_4 = zx.d(*(rcx_39 + 0x118))
                        rbx_12 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                        void* rax_82 = r14_7 + rbx_12
                        
                        if (rax_82 u> *(arg1 + 0x38))
                            sub_140b0e3d0(arg1 + 0x30, (r14_7 + 0x10).d)
                            rbx_12 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
                            rax_82 = r14_7 + rbx_12
                        
                        *(arg1 + 0x30) = rax_82
                        memcpy(rbx_12, &var_370, r14_7.d)
                        void*** rcx_69 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_83 = &rcx_69[6]
                        
                        if (rax_83 u> *(arg1 + 0x38))
                            sub_140b0e3d0(arg1 + 0x30, 0x38)
                            rcx_69 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_83 = &rcx_69[6]
                        
                        *(arg1 + 0x30) = rax_83
                        void**** rax_84 = *(arg1 + 8)
                        *(arg1 + 0x14) += 1
                        *rax_84 = rcx_69
                        *(arg1 + 8) = &rcx_69[1]
                        rcx_69[1] = 0
                        *rcx_69 = &data_142d549d8
                        rcx_69[2] = rax_81
                        rcx_69[3] = rbx_12
                        rcx_69[4].d = r13_4
                        *(rcx_69 + 0x24) = r12_3
                        rcx_69[5].d = r14_7.d
                
                uint128_t var_2b8 = var_a8
                uint64_t var_2a8_1 = var_98.q
                sub_14243f510(arg1, &var_2b8)
            
            j_3 = j_4 + 1
            r13 = arg3
            rax_43 = &var_358_1[4]
            j_4 = j_3
            var_358_1 = rax_43
        while (j_3 s< r13[1].d)
        i = i_1
    
    void*** rcx_77 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_88 = &rcx_77[2]
    
    if (rax_88 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x18)
        rcx_77 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_88 = &rcx_77[2]
    
    *(arg1 + 0x30) = rax_88
    *(arg1 + 0x14) += 1
    int64_t* rax_89 = *(arg1 + 8)
    int128_t zmm1_1 = data_142d3f800
    var_a8 = data_142d57d10
    *rax_89 = rcx_77
    uint128_t zmm0_1 = data_142d57920
    *(arg1 + 8) = &rcx_77[1]
    rcx_77[1] = 0
    *rcx_77 = &data_142d549b8
    *(arg1 + 0x1c4) = 0
    *(arg1 + 0x178) = 0
    int64_t r15_4 = *(r8_1 + 0x10)
    int64_t* r14_9 = *(r8_1 + 8)
    void*** rbx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_98_1 = zmm1_1
    void* rax_91 = &rbx_28[0xa]
    
    if (rax_91 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x58)
        rbx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_91 = &rbx_28[0xa]
    
    *(arg1 + 0x30) = rax_91
    int64_t* rax_92 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_92 = rbx_28
    *(arg1 + 8) = &rbx_28[1]
    rbx_28[1] = 0
    *rbx_28 = &data_142d56628
    rbx_28[2].d = var_a8.d
    *(rbx_28 + 0x14) = var_a8:4.d
    rbx_28[3].d = var_a8:8.d
    *(rbx_28 + 0x1c) = var_a8:0xc.d
    __builtin_memset(&rbx_28[4], 0xff, 0x14)
    *(rbx_28 + 0x34) = zmm0_1:4.d
    rbx_28[7].d = zmm0_1:8.d
    *(rbx_28 + 0x3c) = zmm0_1:0xc.d
    rbx_28[8] = r14_9
    rbx_28[9] = r15_4
    
    if ((*(*r14_9 + 8))(r14_9) == 0)
        int64_t* rcx_83 = rbx_28[8]
        
        if ((*(*rcx_83 + 0x18))(rcx_83) == 0)
            int64_t* rcx_84 = rbx_28[8]
            
            if ((*(*rcx_84 + 0x20))(rcx_84) == 0)
                int64_t* rcx_85 = rbx_28[8]
                (*(*rcx_85 + 0x10))(rcx_85)
    
    int64_t* rcx_86 = rbx_28[9]
    
    if ((*(*rcx_86 + 8))(rcx_86) == 0)
        int64_t* rcx_87 = rbx_28[9]
        
        if ((*(*rcx_87 + 0x18))(rcx_87) == 0)
            int64_t* rcx_88 = rbx_28[9]
            
            if ((*(*rcx_88 + 0x20))(rcx_88) == 0)
                int64_t* rcx_89 = rbx_28[9]
                (*(*rcx_89 + 0x10))(rcx_89)
    
    zmm1_1 = data_142d3f800
    int64_t r15_5 = *(rcx_2 + 0x10)
    void*** rbx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t* r14_11 = *(rcx_2 + 8)
    var_a8 = data_142d57d10
    zmm0_1 = data_142d57920
    void* rax_115 = &rbx_33[0xa]
    var_98 = zmm1_1
    
    if (rax_115 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x58)
        rbx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_115 = &rbx_33[0xa]
    
    *(arg1 + 0x30) = rax_115
    int64_t* rax_116 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_116 = rbx_33
    *(arg1 + 8) = &rbx_33[1]
    rbx_33[1] = 0
    *rbx_33 = &data_142d56628
    rbx_33[2].d = var_a8.d
    *(rbx_33 + 0x14) = var_a8:4.d
    rbx_33[3].d = var_a8:8.d
    *(rbx_33 + 0x1c) = var_a8:0xc.d
    __builtin_memset(&rbx_33[4], 0xff, 0x14)
    *(rbx_33 + 0x34) = zmm0_1:4.d
    rbx_33[7].d = zmm0_1:8.d
    *(rbx_33 + 0x3c) = zmm0_1:0xc.d
    rbx_33[8] = r14_11
    rbx_33[9] = r15_5
    
    if ((*(*r14_11 + 8))(r14_11) == 0)
        int64_t* rcx_92 = rbx_33[8]
        
        if ((*(*rcx_92 + 0x18))(rcx_92) == 0)
            int64_t* rcx_93 = rbx_33[8]
            
            if ((*(*rcx_93 + 0x20))(rcx_93) == 0)
                int64_t* rcx_94 = rbx_33[8]
                (*(*rcx_94 + 0x10))(rcx_94)
    
    int64_t* rcx_95 = rbx_33[9]
    
    if ((*(*rcx_95 + 8))(rcx_95) == 0)
        int64_t* rcx_96 = rbx_33[9]
        
        if ((*(*rcx_96 + 0x18))(rcx_96) == 0)
            int64_t* rcx_97 = rbx_33[9]
            
            if ((*(*rcx_97 + 0x20))(rcx_97) == 0)
                int64_t* rcx_98 = rbx_33[9]
                (*(*rcx_98 + 0x10))(rcx_98)
    
    int64_t var_c0
    result = sub_1405d1550(&var_c0)
    r8 = var_2f0
    i += 1
    r9 = var_2e8
    rdx = var_338
    i_1 = i
while (i u< 2)

__security_check_cookie(rax_1 ^ &var_3d8)
return result
