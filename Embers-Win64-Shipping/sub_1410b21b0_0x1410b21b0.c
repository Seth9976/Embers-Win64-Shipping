// 函数: sub_1410b21b0
// 地址: 0x1410b21b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t result = __security_cookie ^ &var_4c8
int64_t result_1 = result
int64_t rdx = sx.q(*(arg1 + 0x3b0))
void* r13 = arg1

if (data_1439b5208 != 0 && data_1439b5200 != 0 && rdx.d s>= 3)
    result = sub_1410959f0((*U"1111")[rdx])
    
    if (result.b != 0 && (*(r13 + 0x3c) & 1) != 0 && (*(r13 + 0x38) & 0x1000000) != 0)
        result = sub_14139bee0()
        
        if (data_143ec5014 != 0)
            sub_140b33630("RenderIndirectCapsuleShadows")
            int64_t i_7 = sx.q(*(r13 + 0xa8))
            char rcx_2 = 0
            
            if (i_7 s> 0)
                void* rax_2 = *(r13 + 0xa0) + 0x15a8
                int64_t i
                
                do
                    if (*(rax_2 + 0x3bc8) s> 0 && *rax_2 != 0)
                        rcx_2 = 1
                    
                    rax_2 += 0x5240
                    i = i_7
                    i_7 -= 1
                while (i != 1)
                
                if (rcx_2 != 0)
                    int64_t arg_18 = arg5
                    bool c_1 = data_143e2d2e4 != 0
                    int64_t* var_430 = nullptr
                    char var_490_1 = 0
                    char var_498_1 = 1
                    int64_t rcx_3 = data_143ec4fdc
                    char var_4a0_1 = 1
                    int16_t var_2e0_1 = 0
                    int128_t var_318 = data_143f02308
                    int32_t var_304_1 = divs.dp.d(sx.q(rcx_3.d), sbb.d(arg5.d, arg5.d, c_1) + 2)
                    int32_t var_308_1 = data_143f02318
                    int32_t var_2fc_1 = 0
                    int32_t var_300_1 =
                        divs.dp.d(sx.q((rcx_3 u>> 0x20).d), sbb.d(arg5.d, arg5.d, c_1) + 2)
                    int32_t var_2f8_1 = 1
                    wchar16 const* const var_2d8_1 = u"UnknownTexture2D"
                    int32_t var_2f4_1 = 0x10000
                    int16_t var_2f0_1 = 1
                    int64_t var_2ec_1 = 0xf
                    int32_t var_2e4_1 = 0x10001
                    int16_t var_2d0_1 = 1
                    char var_2ce_1 = 0
                    int128_t zmm6_1 =
                        sub_1419a0ce0(&data_1439c9260, arg2, &var_318, &var_430, RayTracedShadows", 
                        var_4a0_1, var_498_1, var_490_1)
                    int32_t i_11 = 0
                    int64_t* rdx_4 = nullptr
                    int64_t* var_328_1 = nullptr
                    int32_t var_31c_1 = 2
                    int64_t var_338
                    
                    if (arg3 != 0)
                        i_11 = 1
                        var_338 = arg3
                    
                    if (arg4 != 0)
                        int64_t i_15 = sx.q(i_11)
                        int32_t i_13 = (i_15 + 1).d
                        i_11 = i_13
                        
                        if (i_13 s> 2)
                            sub_140bcefd0(&var_338, i_15.d)
                            rdx_4 = var_328_1
                        
                        int64_t* rcx_8 = &var_338
                        
                        if (rdx_4 != 0)
                            rcx_8 = rdx_4
                        
                        rcx_8[i_15] = arg4
                        rdx_4 = var_328_1
                    
                    int64_t var_2c8
                    
                    if (i_11 == 0)
                        void* rax_11 = data_143ec4d20
                        data_143ec4e38 = 1
                        int64_t i_16 = sx.q(i_11)
                        int64_t r14_1 = *(rax_11 + 8)
                        int32_t i_14 = (i_16 + 1).d
                        i_11 = i_14
                        
                        if (i_14 s> var_31c_1)
                            sub_140bcefd0(&var_338, i_16.d)
                        
                        int64_t* rcx_10 = &var_338
                        int128_t zmm1_1 = data_142d3f5a0
                        
                        if (var_328_1 != 0)
                            rcx_10 = var_328_1
                        
                        rcx_10[i_16] = r14_1
                        int64_t rcx_11 = *(data_143ec4d20 + 8)
                        var_2c8 = rcx_11
                        int32_t var_1f0_1 = 0
                        int32_t var_1ec
                        __builtin_memset(&var_1ec, 0xff, 0x14)
                        int128_t var_1d8_1 = zmm1_1
                        int64_t var_1c8
                        __builtin_memset(&var_1c8, 0, 0x19)
                        int64_t var_2c0_1 = 0
                        int32_t var_2b8 = 0xffffffff
                        int16_t var_2b4_1 = 0x900
                        int64_t var_208
                        __builtin_memset(&var_208, 0, 0x11)
                        int32_t var_1f4_1 = 0
                        bool var_1af_1 = *(rcx_11 + 0x38) u> 1
                        void var_2b0
                        memset(&var_2b0, 0, 0xa8)
                        int64_t rdi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                        int64_t rax_14 = rdi_3 + 0x3c
                        
                        if (rax_14 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x3e)
                            rdi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                            rax_14 = rdi_3 + 0x3c
                        
                        wchar16 const* const rcx_14 = u"IndirectCapsuleShadowsClearAO"
                        *(arg2 + 0x30) = rax_14
                        wchar16 const i_1
                        
                        do
                            i_1 = *rcx_14
                            *(rcx_14 + rdi_3 - u"IndirectCapsuleShadowsClearAO") = i_1
                            rcx_14 = &rcx_14[1]
                        while (i_1 != 0)
                        void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_15 = &rcx_17[0x27]
                        
                        if (rax_15 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x140)
                            rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_15 = &rcx_17[0x27]
                        
                        *(arg2 + 0x30) = rax_15
                        void**** rax_16 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_16 = rcx_17
                        *(arg2 + 8) = &rcx_17[1]
                        sub_1405d11b0(rcx_17, &var_2c8, rdi_3)
                        *(arg2 + 0x1c4) = 1
                        sub_1405d19b0(arg2, &var_2c8)
                        int64_t var_1b8
                        *(arg2 + 0x178) = var_1b8:7.b
                        *(arg2 + 0x179) = 0
                        *(arg2 + 0x1c4) = 1
                        sub_141096650(arg2)
                        int64_t var_1c0
                        zmm6_1 = sub_1405d1550(&var_1c0)
                        uint64_t i_10 = zx.q(i_11)
                        uint64_t r14_2 = 0
                        
                        if (i_10.d s> 0)
                            int64_t* rcx_24 = &var_338
                            int128_t* rdx_11 = &var_318
                            
                            if (var_328_1 != 0)
                                rcx_24 = var_328_1
                            
                            uint64_t i_2
                            
                            do
                                int64_t rax_20 = *rcx_24
                                
                                if (rax_20 != 0)
                                    r14_2 = zx.q(r14_2.d + 1)
                                    *rdx_11 = rax_20
                                    rdx_11 += 8
                                
                                rcx_24 = &rcx_24[1]
                                i_2 = i_10
                                i_10 -= 1
                            while (i_2 != 1)
                        
                        uint32_t rdx_12 = (r14_2 << 3).d
                        int64_t r15_1 = sx.q(rdx_12)
                        int64_t* rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_21 = rdi_8 + r15_1
                        
                        if (rax_21 u> *(arg2 + 0x38))
                            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, rdx_12 + 8)
                            rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_21 = rdi_8 + r15_1
                        
                        *(arg2 + 0x30) = rax_21
                        int64_t i_8 = sx.q(r14_2.d)
                        
                        if (r14_2.d s> 0)
                            int64_t* rcx_26 = rdi_8
                            int64_t i_3
                            
                            do
                                *rcx_26 = *(&var_318 - rdi_8 + rcx_26)
                                rcx_26 = &rcx_26[1]
                                i_3 = i_8
                                i_8 -= 1
                            while (i_3 != 1)
                        
                        void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_23 = &rcx_29[5]
                        
                        if (rax_23 u> *(arg2 + 0x38))
                            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_23 = &rcx_29[5]
                        
                        *(arg2 + 0x30) = rax_23
                        void**** rax_24 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_24 = rcx_29
                        *(arg2 + 8) = &rcx_29[1]
                        rcx_29[1] = 0
                        *rcx_29 = &data_142d549c8
                        rcx_29[2].d = r14_2.d
                        rcx_29[3] = rdi_8
                        rcx_29[4].d = 1
                        rdx_4 = var_328_1
                    
                    int32_t i_4 = 0
                    int32_t i_6 = 0
                    
                    if (*(r13 + 0xa8) s> 0)
                        int128_t var_48_1 = zmm6_1
                        int64_t rdi_11 = 0
                        uint128_t zmm7
                        uint128_t var_58_1 = zmm7
                        uint128_t zmm8
                        uint128_t var_68_1 = zmm8
                        uint128_t zmm9
                        uint128_t var_78_1 = zmm9
                        int64_t var_3d0_1 = 0
                        
                        do
                            int64_t* r15_3 = *(r13 + 0xa0) + rdi_11
                            
                            if (r15_3[0xa2e].d s> 0 && r15_3[0x2b5] != 0)
                                int32_t var_420 = 0
                                int64_t var_408
                                var_498_1.q = &var_408
                                int32_t var_428 = 0
                                int32_t var_438
                                var_4a0_1.q = &var_438
                                var_438 = 0
                                int32_t* var_4a8_2 = &var_428
                                var_408 = 0
                                sub_1410b7da0(r13, arg2, r15_3, &var_420, var_4a8_2, var_4a0_1, 
                                    var_498_1)
                                int32_t r13_1 = var_420
                                int32_t r12_1 = var_438
                                var_428 = r13_1
                                
                                if (r13_1 s> 0 || r12_1 s> 0)
                                    int32_t r10_1 = sub_1410e0370(arg2)
                                    uint128_t zmm1_2 = *(r15_3 + 0x1598)
                                    int32_t r8_5 = data_1439b520c
                                    int64_t rcx_35 = zmm1_2.q
                                    int32_t r10_2 = sbb.d(r10_1, r10_1, data_143e2d2e4 != 0)
                                    int64_t r9_2 = _mm_bsrli_si128(zmm1_2, 8).q
                                    uint128_t var_400 = zmm1_2
                                    int32_t temp0_5 = divs.dp.d(
                                        sx.q(divs.dp.d(sx.q(r9_2.d - rcx_35.d), r10_2 + 2) - 1
                                            + r8_5), 
                                        r8_5)
                                    int32_t temp0_7 = divs.dp.d(
                                        sx.q(divs.dp.d(
                                            sx.q((r9_2 u>> 0x20).d - (rcx_35 u>> 0x20).d), 
                                            r10_2 + 2) - 1 + r8_5), 
                                        r8_5)
                                    void* rdx_19 = r15_3[0x2b5]
                                    int32_t var_40c_1 = temp0_7
                                    int64_t rbx_2 = temp0_5.q
                                    var_438 = temp0_7
                                    sub_141090ce0(rbx_2, rdx_19)
                                    int64_t* r14_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    int64_t rdx_20 = *(r15_3[0x2b5] + 0xf38)
                                    void* rax_42 = &r14_5[1]
                                    var_420.q = rdx_20
                                    
                                    if (rax_42 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x10)
                                        rdx_20 = var_420.q
                                        r14_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_42 = &r14_5[1]
                                    
                                    *(arg2 + 0x30) = rax_42
                                    *r14_5 = rdx_20
                                    void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_43 = &rcx_42[6]
                                    
                                    if (rax_43 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                                        rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_43 = &rcx_42[6]
                                    
                                    *(arg2 + 0x30) = rax_43
                                    *(arg2 + 0x14) += 1
                                    int64_t var_3c8_1 = 0
                                    int64_t var_3c0_1 = 0
                                    **(arg2 + 8) = rcx_42
                                    *(arg2 + 8) = &rcx_42[1]
                                    rcx_42[1] = 0
                                    *rcx_42 = &data_142da7798
                                    rcx_42[2].d = 1
                                    rcx_42[3] = r14_5
                                    rcx_42[4] = 2
                                    rcx_42[5] = 0
                                    void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    int64_t r14_8 = *(r15_3[0x2b5] + 0xf38)
                                    void* rax_47 = &rcx_48[5]
                                    
                                    if (rax_47 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                                        rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_47 = &rcx_48[5]
                                    
                                    *(arg2 + 0x30) = rax_47
                                    int64_t* rax_48 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_48 = rcx_48
                                    *(arg2 + 8) = &rcx_48[1]
                                    rcx_48[1] = 0
                                    *rcx_48 = &data_142f115d8
                                    rcx_48[2] = r14_8
                                    *(rcx_48 + 0x18) = var_3c8_1.o
                                    var_420.q = &var_430[1]
                                    void* rax_52
                                    void* r14_9
                                    
                                    if (r13_1 s<= 0 || r12_1 s<= 0)
                                        int64_t* rcx_53 = r15_3[0xa2a]
                                        
                                        if (r13_1 s<= 0)
                                            void* var_398
                                            sub_1419a2ec0(rcx_53, &var_398, &data_143e39680, 0)
                                            void* var_390
                                            rax_52 = var_390
                                            r14_9 = var_398
                                        else
                                            void* var_3a8
                                            sub_1419a2ec0(rcx_53, &var_3a8, &data_143e38fa0, 0)
                                            void* var_3a0
                                            rax_52 = var_3a0
                                            r14_9 = var_3a8
                                    else
                                        void* var_3b8
                                        sub_1419a2ec0(r15_3[0xa2a], &var_3b8, &data_143e39d60, 0)
                                        void* var_3b0
                                        rax_52 = var_3b0
                                        r14_9 = var_3b8
                                    
                                    void* r12_2 = nullptr
                                    
                                    if (r14_9 != 0)
                                        int64_t rdx_24 = sx.q(*(r14_9 + 0x10c))
                                        int64_t* r13_2 = *(rax_52 + 0x10)
                                        int64_t rax_53 = r13_2[3]
                                        
                                        if (*(rax_53 + (rdx_24 << 3)) == 0)
                                            sub_1419ccf30(r13_2, rdx_24.d)
                                            rax_53 = r13_2[3]
                                        
                                        r12_2 = *(rax_53 + (rdx_24 << 3))
                                        r13_1 = var_428
                                    
                                    *(arg2 + 0x1b0) = r12_2
                                    sub_14198aa60(r12_2)
                                    void*** rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_54 = &rcx_58[3]
                                    
                                    if (rax_54 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_54 = &rcx_58[3]
                                    
                                    *(arg2 + 0x30) = rax_54
                                    *(arg2 + 0x14) += 1
                                    uint128_t zmm2_1 = zx.o(var_438)
                                    int64_t var_440_1 = 0
                                    **(arg2 + 8) = rcx_58
                                    *(arg2 + 8) = &rcx_58[1]
                                    rcx_58[1] = 0
                                    *rcx_58 = &data_142dd5b40
                                    rcx_58[2] = r12_2
                                    void* rdx_25 = r15_3[0x2b5]
                                    int32_t zmm0_4 = data_1439b5214
                                    void* r12_4 = var_420.q
                                    int64_t var_448_1 = var_408
                                    int64_t var_450_1 = *(rdx_25 + 0xef8)
                                    int32_t var_458_1 = r12_1
                                    int64_t var_460_1 = *(rdx_25 + 0xee8)
                                    int32_t var_468_1 = r13_1
                                    int32_t var_470_1 =
                                        sbb.d(rcx_58.d, rcx_58.d, data_143e2d2e4 != 0) + 2
                                    uint128_t* var_478_1 = &var_400
                                    uint64_t var_488_1 = (_mm_unpacklo_ps(
                                        _mm_cvtepi32_ps(zx.o(temp0_5)), _mm_cvtepi32_ps(zmm2_1).q)).q
                                    var_490_1.q = rdx_25 + 0xf30
                                    var_498_1.q = rbx_2
                                    var_4a0_1.q = r12_4
                                    sub_1410b4da0(r14_9, arg2, *(arg1 + 8), r15_3, nullptr, 
                                        var_4a0_1, var_498_1, var_490_1, var_488_1, zmm0_4)
                                    void* const var_4a8_3
                                    var_4a8_3.d = 1
                                    sub_1419cd1c0(arg2, r14_9, temp0_5, var_438, var_4a8_3.d)
                                    void* r13_3 = r15_3[0x2b5]
                                    sub_14077cfd0(r14_9 + 0x118, arg2, *(arg2 + 0x1b0))
                                    sub_14077cfd0(r14_9 + 0x12e, arg2, *(arg2 + 0x1b0))
                                    sub_14077cfd0(r14_9 + 0x120, arg2, *(arg2 + 0x1b0))
                                    int64_t var_388 = *(r12_4 + 0x10)
                                    
                                    if (r13_3 != -0xf30)
                                        int64_t var_380_1 = *(r13_3 + 0xf38)
                                    
                                    int32_t r12_5
                                    r12_5.b = r13_3 != -0xf30
                                    uint64_t r12_6 = zx.q(r12_5 + 1)
                                    int64_t* r14_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    uint64_t rdx_31 = zx.q((r12_6 << 3).d)
                                    void* rax_64 = r14_12 + rdx_31
                                    
                                    if (rax_64 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, rdx_31.d + 8)
                                        r14_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_64 = r14_12 + zx.q(rdx_31.d)
                                    
                                    *(arg2 + 0x30) = rax_64
                                    uint64_t j_2 = zx.q(r12_6.d)
                                    int64_t* rcx_70 = r14_12
                                    uint64_t j
                                    
                                    do
                                        *rcx_70 = *(&var_388 - r14_12 + rcx_70)
                                        rcx_70 = &rcx_70[1]
                                        j = j_2
                                        j_2 -= 1
                                    while (j != 1)
                                    void*** rcx_73 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_66 = &rcx_73[6]
                                    
                                    if (rax_66 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                                        rcx_73 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_66 = &rcx_73[6]
                                    
                                    *(arg2 + 0x30) = rax_66
                                    *(arg2 + 0x14) += 1
                                    **(arg2 + 8) = rcx_73
                                    *(arg2 + 8) = &rcx_73[1]
                                    rcx_73[3] = r14_12
                                    rcx_73[2].d = r12_6.d
                                    rcx_73[1] = 0
                                    rcx_73[4].d = 0
                                    rcx_73[5] = 0
                                    *rcx_73 = &data_142da7798
                                    *(rcx_73 + 0x24) = 3
                                    int64_t* r14_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    int64_t rcx_77 = var_430[3]
                                    var_408 = rcx_77
                                    void* rax_70 = &r14_17[1]
                                    
                                    if (rax_70 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x10)
                                        rcx_77 = var_408
                                        r14_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_70 = &r14_17[1]
                                    
                                    *(arg2 + 0x30) = rax_70
                                    *r14_17 = rcx_77
                                    void*** rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_71 = &rcx_81[6]
                                    
                                    if (rax_71 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                                        rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_71 = &rcx_81[6]
                                    
                                    *(arg2 + 0x30) = rax_71
                                    int64_t* r8_14 = &var_338
                                    void**** rax_72 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_72 = rcx_81
                                    *(arg2 + 8) = &rcx_81[1]
                                    *rcx_81 = &data_142da7798
                                    rcx_81[2].d = 1
                                    rcx_81[3] = r14_17
                                    rcx_81[4].d = 0
                                    *(rcx_81 + 0x24) = 1
                                    rcx_81[5] = 0
                                    rcx_81[1] = 0
                                    
                                    if (var_328_1 != 0)
                                        r8_14 = var_328_1
                                    
                                    void var_1a8
                                    sub_14108c030(&var_1a8, i_11, r8_14, 5)
                                    sub_1410e0180(arg2, &var_1a8)
                                    int64_t r14_22 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                                    int64_t rax_75 = r14_22 + 0x3e
                                    
                                    if (rax_75 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x40)
                                        r14_22 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                                        rax_75 = r14_22 + 0x3e
                                    
                                    *(arg2 + 0x30) = rax_75
                                    wchar16 const* const rcx_88 = u"UpsampleIndirectCapsuleShadows"
                                    wchar16 const j_1
                                    
                                    do
                                        j_1 = *rcx_88
                                        *(rcx_88 + r14_22 - u"UpsampleIndirectCapsuleShadows") = j_1
                                        rcx_88 = &rcx_88[1]
                                    while (j_1 != 0)
                                    void*** rcx_91 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_76 = &rcx_91[0x27]
                                    
                                    if (rax_76 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x140)
                                        rcx_91 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_76 = &rcx_91[0x27]
                                    
                                    *(arg2 + 0x30) = rax_76
                                    void**** rax_77 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_77 = rcx_91
                                    *(arg2 + 8) = &rcx_91[1]
                                    sub_1405d11b0(rcx_91, &var_1a8, r14_22)
                                    *(arg2 + 0x1c4) = 1
                                    sub_1405d19b0(arg2, &var_1a8)
                                    char var_91
                                    *(arg2 + 0x178) = var_91
                                    *(arg2 + 0x179) = 0
                                    *(arg2 + 0x1c4) = 1
                                    __builtin_memset(&var_2c8, 0, 0x30)
                                    int64_t var_26c
                                    __builtin_memset(&var_26c, 0, 0x43)
                                    int128_t var_280_1 = zx.o(0)
                                    int16_t var_228_1 = 0
                                    sub_140fdc870(arg2, &var_2c8)
                                    zmm7 = zx.o(r15_3[0x2b4].d)
                                    void*** rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    zmm8 = zx.o(*(r15_3 + 0x159c))
                                    zmm9 = zx.o(r15_3[0x2b3].d)
                                    uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o(*(r15_3 + 0x15a4)))
                                    void* rax_80 = &rcx_99[5]
                                    zmm7 = _mm_cvtepi32_ps(zmm7)
                                    zmm8 = _mm_cvtepi32_ps(zmm8)
                                    zmm9 = _mm_cvtepi32_ps(zmm9)
                                    
                                    if (rax_80 u> *(arg2 + 0x38))
                                        zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                                        rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_80 = &rcx_99[5]
                                    
                                    *(arg2 + 0x30) = rax_80
                                    *(arg2 + 0x14) += 1
                                    **(arg2 + 8) = rcx_99
                                    *(arg2 + 8) = &rcx_99[1]
                                    rcx_99[1] = 0
                                    *rcx_99 = &data_142d54998
                                    rcx_99[2].d = zmm9.d
                                    *(rcx_99 + 0x14) = zmm8.d
                                    *(rcx_99 + 0x1c) = zmm7.d
                                    rcx_99[4].d = zmm6_2.d
                                    rcx_99[3].d = 0
                                    *(rcx_99 + 0x24) = 0x3f800000
                                    int64_t var_290_1 = data_14395da18
                                    int64_t var_288_1 = data_14395d9e8
                                    int64_t rax_85 = data_1439b52f8
                                    
                                    if (i_11 s> 1)
                                        rax_85 = data_1439b5488
                                    
                                    int64_t var_298_1 = rax_85
                                    void* var_3e0
                                    sub_1419a2ec0(r15_3[0xa2a], &var_3e0, &data_143e2dbf0, 0)
                                    void* rcx_104 = var_3e0
                                    var_2c8 = data_1439c9198
                                    int64_t rax_87 = 0
                                    
                                    if (rcx_104 != 0)
                                        int64_t rdx_41 = sx.q(*(rcx_104 + 0x10c))
                                        void* var_3d8
                                        int64_t* r14_25 = *(var_3d8 + 0x10)
                                        int64_t rax_89 = r14_25[3]
                                        
                                        if (*(rax_89 + (rdx_41 << 3)) == 0)
                                            sub_1419ccf30(r14_25, rdx_41.d)
                                            rax_89 = r14_25[3]
                                        
                                        rax_87 = *(rax_89 + (rdx_41 << 3))
                                    
                                    int64_t* rcx_106 = r15_3[0xa2a]
                                    int64_t var_2c0_2 = rax_87
                                    int32_t var_270_1 = 0
                                    int64_t r9_10
                                    int128_t var_2a8_1
                                    
                                    if (i_11 s<= 1)
                                        if (data_143e2d2e4 == 0)
                                            void* var_348
                                            sub_1419a2ec0(rcx_106, &var_348, &data_143e3a410, 0)
                                            void* r13_9 = var_348
                                            int64_t rax_105 = 0
                                            
                                            if (r13_9 != 0)
                                                int64_t rdx_58 = sx.q(*(r13_9 + 0x10c))
                                                void* var_340
                                                int64_t* r14_29 = *(var_340 + 0x10)
                                                int64_t rax_107 = r14_29[3]
                                                
                                                if (*(rax_107 + (rdx_58 << 3)) == 0)
                                                    sub_1419ccf30(r14_29, rdx_58.d)
                                                    rax_107 = r14_29[3]
                                                
                                                rax_105 = *(rax_107 + (rdx_58 << 3))
                                            
                                            var_2a8_1.q = rax_105
                                            sub_1419870b0(arg2, &var_2c8, 2)
                                            var_4a0_1.q = r15_3[0x2b5] + 0xf30
                                            sub_1410b6400(var_3e0, arg2, r15_3, rbx_2, &var_400, 
                                                var_4a0_1)
                                            var_4a0_1 = 0
                                            r9_10 = sub_1410b5c60(r13_9, arg2, r15_3, &var_400, 
                                                &var_430)
                                        else
                                            void* var_358
                                            sub_1419a2ec0(rcx_106, &var_358, &data_143e3a6d0, 0)
                                            void* r13_8 = var_358
                                            int64_t rax_100 = 0
                                            
                                            if (r13_8 != 0)
                                                int64_t rdx_53 = sx.q(*(r13_8 + 0x10c))
                                                void* var_350
                                                int64_t* r14_28 = *(var_350 + 0x10)
                                                int64_t rax_102 = r14_28[3]
                                                
                                                if (*(rax_102 + (rdx_53 << 3)) == 0)
                                                    sub_1419ccf30(r14_28, rdx_53.d)
                                                    rax_102 = r14_28[3]
                                                
                                                rax_100 = *(rax_102 + (rdx_53 << 3))
                                            
                                            var_2a8_1.q = rax_100
                                            sub_1419870b0(arg2, &var_2c8, 2)
                                            var_4a0_1.q = r15_3[0x2b5] + 0xf30
                                            sub_1410b6400(var_3e0, arg2, r15_3, rbx_2, &var_400, 
                                                var_4a0_1)
                                            var_4a0_1 = 0
                                            r9_10 = sub_1410b5c60(r13_8, arg2, r15_3, &var_400, 
                                                &var_430)
                                    else if (data_143e2d2e4 == 0)
                                        void* var_368
                                        sub_1419a2ec0(rcx_106, &var_368, &data_143e3a2b0, 0)
                                        void* r13_7 = var_368
                                        int64_t rax_95 = 0
                                        
                                        if (r13_7 != 0)
                                            int64_t rdx_48 = sx.q(*(r13_7 + 0x10c))
                                            void* var_360
                                            int64_t* r14_27 = *(var_360 + 0x10)
                                            int64_t rax_97 = r14_27[3]
                                            
                                            if (*(rax_97 + (rdx_48 << 3)) == 0)
                                                sub_1419ccf30(r14_27, rdx_48.d)
                                                rax_97 = r14_27[3]
                                            
                                            rax_95 = *(rax_97 + (rdx_48 << 3))
                                        
                                        var_2a8_1.q = rax_95
                                        sub_1419870b0(arg2, &var_2c8, 2)
                                        var_4a0_1.q = r15_3[0x2b5] + 0xf30
                                        sub_1410b6400(var_3e0, arg2, r15_3, rbx_2, &var_400, 
                                            var_4a0_1)
                                        var_4a0_1 = 0
                                        r9_10 =
                                            sub_1410b5c60(r13_7, arg2, r15_3, &var_400, &var_430)
                                    else
                                        void* var_378
                                        sub_1419a2ec0(rcx_106, &var_378, &data_143e3a570, 0)
                                        void* r13_6 = var_378
                                        int64_t rax_90 = 0
                                        
                                        if (r13_6 != 0)
                                            int64_t rdx_43 = sx.q(*(r13_6 + 0x10c))
                                            void* var_370
                                            int64_t* r14_26 = *(var_370 + 0x10)
                                            int64_t rax_92 = r14_26[3]
                                            
                                            if (*(rax_92 + (rdx_43 << 3)) == 0)
                                                sub_1419ccf30(r14_26, rdx_43.d)
                                                rax_92 = r14_26[3]
                                            
                                            rax_90 = *(rax_92 + (rdx_43 << 3))
                                        
                                        var_2a8_1.q = rax_90
                                        sub_1419870b0(arg2, &var_2c8, 2)
                                        var_4a0_1.q = r15_3[0x2b5] + 0xf30
                                        sub_1410b6400(var_3e0, arg2, r15_3, rbx_2, &var_400, 
                                            var_4a0_1)
                                        var_4a0_1 = 0
                                        r9_10 =
                                            sub_1410b5c60(r13_6, arg2, r15_3, &var_400, &var_430)
                                    int64_t rbx_3 = data_1439b5440
                                    void*** rcx_125 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_110 = &rcx_125[5]
                                    
                                    if (rax_110 u> *(arg2 + 0x38))
                                        r9_10 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                                        rcx_125 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_110 = &rcx_125[5]
                                    
                                    *(arg2 + 0x30) = rax_110
                                    int64_t* rax_111 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    int32_t r14_31 = temp0_5 * var_438
                                    *rax_111 = rcx_125
                                    *(arg2 + 8) = &rcx_125[1]
                                    rcx_125[1] = 0
                                    *rcx_125 = &data_142d56618
                                    rcx_125[2].d = 0
                                    rcx_125[3] = rbx_3
                                    rcx_125[4].d = 0
                                    int64_t rbx_4 = data_1439b5458
                                    
                                    if (rbx_4 == 0)
                                        sub_140af98a0("Unknown", 0xbc8, 
                                            Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
                                            r9_10)
                                        sub_140afbb40()
                                    
                                    void*** rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_113 = &rcx_131[6]
                                    
                                    if (rax_113 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                                        rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_113 = &rcx_131[6]
                                    
                                    *(arg2 + 0x30) = rax_113
                                    int64_t* rax_114 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_114 = rcx_131
                                    *(arg2 + 8) = &rcx_131[1]
                                    rcx_131[1] = 0
                                    *rcx_131 = &data_142f11598
                                    rcx_131[2] = rbx_4
                                    rcx_131[3] = 0
                                    rcx_131[4] = 4
                                    rcx_131[5].d = 2
                                    *(rcx_131 + 0x2c) = r14_31
                                    sub_141096650(arg2)
                                    void var_a0
                                    sub_1405d1550(&var_a0)
                                    i_4 = i_6
                                    rdi_11 = var_3d0_1
                                
                                r13 = arg1
                            
                            i_4 += 1
                            rdi_11 += 0x5240
                            i_6 = i_4
                            var_3d0_1 = rdi_11
                        while (i_4 s< *(r13 + 0xa8))
                        
                        rdx_4 = var_328_1
                    
                    int64_t i_12 = sx.q(i_11)
                    int64_t* r14_32 = &var_338
                    
                    if (rdx_4 != 0)
                        r14_32 = rdx_4
                    
                    int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    int32_t rdx_62 = (i_12 << 3).d
                    int64_t r12_12 = sx.q(rdx_62)
                    void* rax_116 = rbx_7 + r12_12
                    
                    if (rax_116 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, rdx_62 + 8)
                        rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_116 = rbx_7 + r12_12
                    
                    *(arg2 + 0x30) = rax_116
                    int64_t i_9 = i_12
                    
                    if (i_12.d s> 0)
                        int64_t* rcx_138 = rbx_7
                        int64_t i_5
                        
                        do
                            *rcx_138 = *(r14_32 - rbx_7 + rcx_138)
                            rcx_138 = &rcx_138[1]
                            i_5 = i_9
                            i_9 -= 1
                        while (i_5 != 1)
                    
                    void*** rcx_141 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_118 = &rcx_141[5]
                    
                    if (rax_118 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_141 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_118 = &rcx_141[5]
                    
                    *(arg2 + 0x30) = rax_118
                    void**** rax_119 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_119 = rcx_141
                    *(arg2 + 8) = &rcx_141[1]
                    rcx_141[1] = 0
                    rcx_141[3] = rbx_7
                    *rcx_141 = &data_142d549c8
                    rcx_141[2].d = i_12.d
                    rcx_141[4].d = 0
                    
                    if (var_328_1 != 0)
                        sub_140a74f90(var_328_1)
                    
                    int64_t* rcx_146 = var_430
                    
                    if (rcx_146 != 0)
                        (*(*rcx_146 + 0x38))(rcx_146)
            
            result = sub_140b37f60("RenderIndirectCapsuleShadows")

__security_check_cookie(result_1 ^ &var_4c8)
return result
