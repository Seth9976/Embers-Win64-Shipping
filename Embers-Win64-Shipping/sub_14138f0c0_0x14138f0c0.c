// 函数: sub_14138f0c0
// 地址: 0x14138f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = arg5
void var_518
int64_t rax_1 = __security_cookie ^ &var_518
uint128_t* result = arg1
int64_t* r12 = arg3[0x290]
int64_t* rsi = arg4
int32_t rdi_1 = sbb.d(arg5.d, arg5.d, *(arg4 + 0x9a) != 0) & 0xa
int64_t var_3f8_1
__builtin_memset(&var_3f8_1, 0, 0x18)
int32_t var_4d4 = rdi_1
void* rax_4 = &r12[sx.q(arg3[0x291].d)]
void* var_4e8 = nullptr
int64_t var_4e0 = 0
int64_t* var_410 = r12
void* r15 = nullptr
uint128_t zmm6

if (r12 != rax_4)
    uint128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    
    do
        int64_t* rbx = *r12
        
        if (rbx != 0)
            int64_t var_358 = rbx[3]
            int16_t* var_490
            sub_140b63b70(&var_358, &var_490)
            uint128_t zmm1_1 = *(rsi + 0x20)
            int16_t var_80_1 = 0x100
            int64_t var_128
            __builtin_memset(&var_128, 0, 0x19)
            int64_t var_88_1 = 0
            uint64_t var_2c8_1 = rsi[6]
            int32_t var_100_1 = _mm_bsrli_si128(zmm1_1, 8).d
            uint64_t var_2a8_1 = rsi[0xf]
            uint128_t var_2d8_1 = zmm1_1
            int64_t var_108_1 = zmm1_1.q
            int64_t rax_7 = _mm_bsrli_si128(zmm1_1, 8).q
            zmm1_1 = *(rsi + 0x68)
            uint32_t var_fc_1 = (rax_7 u>> 0x20).d
            int32_t var_f8_1 = var_2c8_1.d
            uint32_t var_f4_1 = (var_2c8_1 u>> 0x20).d
            uint128_t temp0_3 = _mm_bsrli_si128(zmm1_1, 8)
            uint128_t var_2b8_1 = zmm1_1
            int64_t var_f0_1 = zmm1_1.q
            int64_t rax_12 = _mm_bsrli_si128(zmm1_1, 8).q
            int32_t var_e8_1 = temp0_3.d
            zmm1_1 = *(rsi + 0x38)
            uint32_t var_e4_1 = (rax_12 u>> 0x20).d
            int32_t var_e0_1 = var_2a8_1.d
            uint32_t var_dc_1 = (var_2a8_1 u>> 0x20).d
            uint64_t var_288_1 = rsi[9]
            uint128_t var_298_1 = zmm1_1
            int64_t var_d8_1 = zmm1_1.q
            int64_t rax_17 = _mm_bsrli_si128(zmm1_1, 8).q
            uint128_t temp0_6 = _mm_bsrli_si128(zmm1_1, 8)
            zmm1_1 = *(rsi + 0x50)
            uint32_t var_cc_1 = (rax_17 u>> 0x20).d
            int32_t var_c8_1 = var_288_1.d
            uint32_t var_c4_1 = (var_288_1 u>> 0x20).d
            int32_t var_d0_1 = temp0_6.d
            uint64_t var_268_1 = rsi[0xc]
            uint128_t var_278_1 = zmm1_1
            int64_t var_c0_1 = zmm1_1.q
            int64_t rax_22 = _mm_bsrli_si128(zmm1_1, 8).q
            uint128_t temp0_8 = _mm_bsrli_si128(zmm1_1, 8)
            zmm1_1 = *(rsi + 0x80)
            uint32_t var_b4_1 = (rax_22 u>> 0x20).d
            int32_t var_b0_1 = var_268_1.d
            uint32_t var_ac_1 = (var_268_1 u>> 0x20).d
            int32_t var_b8_1 = temp0_8.d
            uint64_t var_248_1 = rsi[0x12]
            uint128_t var_258_1 = zmm1_1
            int64_t var_a8_1 = zmm1_1.q
            uint32_t var_9c_1 = (_mm_bsrli_si128(zmm1_1, 8).q u>> 0x20).d
            int32_t var_98_1 = var_248_1.d
            char var_4f0_1 = 0
            uint32_t var_94_1 = (var_248_1 u>> 0x20).d
            int32_t var_a0_1 = _mm_bsrli_si128(zmm1_1, 8).d
            int32_t var_90_1 = rdi_1
            void var_190
            int128_t* rax_32 = sub_14134ba20(&var_190, arg2, arg3, &var_128, rbx, var_4f0_1)
            int64_t rbx_2 = rbx[3]
            int64_t rcx_6 = *rax_32
            int64_t var_3f8_2 = rcx_6
            int32_t rcx_7 = *(rax_32 + 8)
            int128_t var_3f0_1
            var_3f0_1.d = rcx_7
            int32_t rcx_8 = *(rax_32 + 0xc)
            var_3f0_1:4.d = rcx_8
            int32_t rcx_9 = rax_32[1].d
            int32_t rax_33 = *(rax_32 + 0x14)
            var_3f0_1:0xc.d = rax_33
            var_3f0_1:8.d = rcx_9
            int64_t* rcx_14
            
            if (arg3[0x299].d == *(arg3 + 0x14f4))
            label_14138f4cd:
                rcx_14 = nullptr
            else
                int32_t rax_36 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                void* r8_1 = &arg3[0x29f]
                void* rcx_11 = *(r8_1 + 8)
                
                if (rcx_11 != 0)
                    r8_1 = rcx_11
                
                int32_t rax_38 = *(r8_1 + (((sx.q(arg3[0x2a1].d) - 1) & sx.q(rax_36)) << 2))
                
                if (rax_38 == 0xffffffff)
                label_14138f4cd_1:
                    rcx_14 = nullptr
                else
                    while (true)
                        rcx_14 = (sx.q(rax_38) << 5) + arg3[0x298]
                        
                        if (*rcx_14 == rbx_2)
                            break
                        
                        rax_38 = rcx_14[3].d
                        
                        if (rax_38 == 0xffffffff)
                            goto label_14138f4cd_2
                    
                    if (rax_38 == 0xffffffff)
                    label_14138f4cd_2:
                        rcx_14 = nullptr
            
            void* rax_39 = &rcx_14[1]
            
            if (rcx_14 == 0)
                rax_39 = nullptr
            
            if (rax_39 != 0)
                int64_t rbx_3 = *rax_39
                
                if (rbx_3 != 0)
                    int64_t* rax_40 = sub_14081d830(0x10, arg2[1], 1, 0)
                    rax_40[1] = 0
                    *rax_40 = rcx_6
                    uint64_t var_1f8_1 = var_3f0_1:8.q
                    int64_t var_1f0_1 = rbx_3
                    void*** rax_42 = sub_14081d830(0x58, arg2[1], 1, 0)
                    void*** rbx_4 = rax_42
                    
                    if (rax_42 == 0)
                        rbx_4 = nullptr
                    else
                        void var_1b0
                        int64_t* rax_43
                        int128_t zmm6_1
                        rax_43, zmm6_1 = sub_14137a890(&var_1b0, rax_40)
                        int128_t var_228 = *rax_43
                        void var_4d8
                        sub_141992bd0(rbx_4, &var_4d8, &var_228, 4)
                        *(rbx_4 + 0x38) = zmm6_1
                        *rbx_4 = &data_142f6e160
                        *(rbx_4 + 0x48) = var_1f8_1.o
                    
                    sub_1419968d0(arg2, rbx_4)
            
            int32_t var_488
            
            if (rsi[0x13].b != 0)
                int16_t* rsi_1 = nullptr
                int16_t* rdi_3 = var_490
                int64_t var_178
                __builtin_memset(&var_178, 0, 0x2c)
                int32_t var_14c_1 = 0x80
                int32_t var_148_1 = 0xffffffff
                int32_t var_144_1 = 0
                int64_t var_138_1 = 0
                int32_t var_130_1 = 0
                int64_t var_408 = 0
                int32_t var_400_1 = var_488
                
                if (var_488 != 0)
                    sub_1405a4c70(&var_408, var_488, 0)
                    memcpy(var_408, rdi_3, var_488 * 2)
                else
                    int32_t var_3fc_1 = 0
                
                void var_1e8
                sub_140b2f3e0(&var_1e8, &var_408)
                int64_t var_4d0 = 0
                int32_t var_4c8_1 = 0
                sub_1405947f0(&var_4d0, 9)
                int32_t rax_44 = var_4c8_1 + 9
                var_4c8_1 = rax_44
                
                if (rax_44 s> 0)
                    sub_140594770(&var_4d0)
                
                UnDecorator::getReferenceType(var_4d0, u"material", 0x12)
                sub_14077ad70(&var_178, &var_4d0, &var_1e8)
                int64_t rcx_25 = var_4d0
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                int64_t var_1d8
                
                if (var_1d8 != 0)
                    sub_140a74f90(var_1d8)
                
                int16_t* rdx_17
                
                if (arg3[0x297].d == 0)
                    rdx_17 = &data_142d40450
                else
                    rdx_17 = arg3[0x296]
                
                int16_t* var_4a0
                zmm6, zmm7 = sub_140b3b600(&var_4a0, rdx_17, &var_178)
                int16_t* rdx_18
                
                if (arg3[0x297].d == 0)
                    rdx_18 = &data_142d40450
                else
                    rdx_18 = arg3[0x296]
                
                int16_t* const rcx_28 = &data_142d40450
                int32_t var_498
                
                if (var_498 != 0)
                    rcx_28 = var_4a0
                
                int32_t rax_45
                int32_t rdx_19
                rax_45, rdx_19 = sub_140a54510(rcx_28, rdx_18)
                
                if (rax_45 == 0)
                    int32_t rbx_6 = arg3[0x297].d
                    int64_t rdi_4 = arg3[0x296]
                    int16_t* var_4c0 = nullptr
                    sub_1405a4c70(&var_4c0, sbb.d(rdx_19, rdx_19, rbx_6 != 0) + 2 + rbx_6, 0)
                    memcpy(var_4c0, rdi_4, rbx_6 * 2)
                    sub_140a20ba0(&var_4c0, &data_142d99650, 1)
                    int16_t* rdi_5 = var_4c0
                    int16_t* var_450_1 = rdi_5
                    var_4c0 = nullptr
                    int32_t var_448_1 = rbx_6
                    int32_t var_4b4
                    int32_t var_444_1 = var_4b4
                    int32_t var_4b8_1
                    var_4b8_1.q = 0
                    uint64_t var_480
                    int32_t rbx_7
                    int32_t r12_2
                    
                    if (rbx_6 s> 1)
                        int32_t rbx_9
                        
                        if (var_488 == 0)
                            rbx_9 = 0
                        else
                            rbx_9 = var_488 - 1
                        
                        int32_t rdx_26
                        
                        if (rbx_6 == 0)
                            rdx_26 = rbx_6 + 1
                        
                        if (rbx_6 != 0 || rbx_9 == 0)
                            rdx_26 = 0
                        
                        int16_t* var_4b0 = rdi_5
                        int32_t rdx_28 = rdx_26 + rbx_9 + rbx_6
                        int64_t var_450_2 = 0
                        rdi_5 = nullptr
                        
                        if (rdx_28 s> var_4b4)
                            sub_1405947f0(&var_4b0, rdx_28)
                        
                        sub_140a20ba0(&var_4b0, var_490, rbx_9)
                        rsi_1 = var_4b0
                        rbx_7 = rbx_6
                        r12_2 = var_4b4
                        var_4b0 = nullptr
                        int32_t var_4a8_1
                        var_4a8_1.q = 0
                    else
                        rbx_7 = var_488
                        int16_t* r12_1 = var_490
                        var_480 = 0
                        
                        if (rbx_7 != 0)
                            sub_1405a4c70(&var_480, rbx_7, 0)
                            rsi_1 = var_480
                            memcpy(rsi_1, r12_1, rbx_7 * 2)
                            int32_t var_474
                            r12_2 = var_474
                        else
                            r12_2 = 0
                    
                    int16_t* rcx_37 = var_4a0
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    var_4a0 = rsi_1
                    rsi_1 = nullptr
                    var_480 = 0
                    var_498 = rbx_7
                    int32_t var_494_1 = r12_2
                    int32_t var_478
                    var_478.q = 0
                    
                    if (rdi_5 != 0)
                        sub_140a74f90(rdi_5)
                
                sub_140a20ba0(&var_4a0, u".png", 4)
                uint128_t var_3a8_1 = zmm6
                uint64_t var_398_1 = zmm7.q
                sub_142090dd0()
                void* rbx_10 = &data_143a2e330
                
                if (data_143a2e3a0 != 0)
                    if (data_143de5438 != 0)
                        int32_t rdx_30 = data_143a2e344
                        int32_t r8_12 = data_143a2e348
                        int32_t r9_2 = data_143a2e340
                        
                        if ((data_143a2e34c - rdx_30) * (r8_12 - r9_2) != 0)
                            var_398_1:4.d = data_143a2e34c
                            var_3a8_1:8.d = r9_2
                            var_3a8_1:0xc.d = rdx_30
                            var_398_1.d = r8_12
                            zmm7 = zx.o(var_398_1)
                    
                    int64_t* rax_52
                    int128_t zmm6_2
                    rax_52, zmm6_2 = sub_14081d830(0x10, arg2[1], 1, 0)
                    rax_52[1] = 0
                    *rax_52 = zmm6_2.q
                    int16_t* rax_53 = var_4a0
                    void* var_388_1 = &data_143a2e330
                    uint64_t var_370_1 = zmm7.q
                    int16_t* var_368 = nullptr
                    int32_t var_360_1 = var_498
                    int128_t var_380_1 = zmm6_2
                    
                    if (var_498 != 0)
                        sub_1405a4c70(&var_368, var_498, 0)
                        rsi_1 = var_368
                        memcpy(rsi_1, rax_53, var_498 * 2)
                        zmm7 = zx.o(var_370_1)
                        rbx_10 = var_388_1
                    else
                        int32_t var_35c_1 = var_498
                    
                    void*** rax_54 = sub_14081d830(0x68, arg2[1], 1, 0)
                    void*** rdi_7 = rax_54
                    
                    if (rax_54 == 0)
                        rdi_7 = nullptr
                    else
                        void var_1a0
                        int64_t* rax_55
                        int128_t zmm6_3
                        rax_55, zmm6_3 = sub_14137a890(&var_1a0, rax_52)
                        int128_t var_218 = *rax_55
                        void var_4d7
                        sub_141992bd0(rdi_7, &var_4d7, &var_218, 4)
                        *rdi_7 = &data_142f6e170
                        *(rdi_7 + 0x40) = zmm6_3
                        rdi_7[7] = rbx_10
                        rdi_7[0xa] = zmm7.q
                        sub_140596d10(&rdi_7[0xb], &var_368)
                        rsi_1 = var_368
                    
                    sub_1419968d0(arg2, rdi_7)
                    
                    if (rsi_1 != 0)
                        sub_140a74f90(rsi_1)
                
                int16_t* rcx_50 = var_4a0
                
                if (rcx_50 != 0)
                    sub_140a74f90(rcx_50)
                
                int32_t var_130_2 = 0
                
                if (var_138_1 != 0)
                    sub_140a74f90(var_138_1)
                
                sub_1407464c0(&var_178)
                rsi = arg4
                r12 = var_410
            
            if (*(rsi + 0x99) != 0)
                int32_t var_41c_1 = 0
                wchar16 const* const var_440 = u"MaterialHalfSize"
                int64_t var_438_1 = rcx_6
                int32_t var_430_1 = rcx_7
                int32_t var_42c_1 = rcx_8
                int32_t var_428_1 = rcx_9
                int32_t var_424_1 = rax_33
                int16_t var_420_1 = 0x100
                int64_t var_340
                sub_1413060b0(&var_340, arg2, arg3, &var_440)
                int64_t var_3c8
                __builtin_memset(&var_3c8, 0, 0x11)
                var_440 = u"MaterialQuarterSize"
                int64_t var_438_2 = var_340
                int32_t var_338
                int32_t var_430_2 = var_338
                int32_t var_334
                int32_t var_42c_2 = var_334
                int32_t var_330
                int32_t var_428_2 = var_330
                int32_t var_32c
                int32_t var_424_2 = var_32c
                void var_208
                int128_t* rax_66 = sub_1413060b0(&var_208, arg2, arg3, &var_440)
                int16_t* const rdx_41 = &data_142d40450
                
                if (var_488 != 0)
                    rdx_41 = var_490
                
                int64_t rax_67 = *rax_66
                int32_t var_3d8_1 = *(rax_66 + 8)
                int32_t var_3d4_1 = *(rax_66 + 0xc)
                int32_t rax_70 = rax_66[1].d
                int32_t var_3cc_1 = *(rax_66 + 0x14)
                void var_238
                int64_t* rax_72 = sub_140b58260(&var_238, rdx_41, 1)
                sub_141ea17d0()
                void var_1c8
                int64_t* rax_74 = sub_140ac6680(sub_141ea3870(&data_143a2d550, &var_1c8, *rax_72))
                
                if (&var_3c8 != rax_74)
                    int32_t rbx_12 = rax_74[1].d
                    int64_t rdi_8 = *rax_74
                    int64_t var_3c0_1
                    var_3c0_1.d = rbx_12
                    
                    if (rbx_12 != 0)
                        sub_1405a4c70(&var_3c8, rbx_12, 0)
                        memcpy(var_3c8, rdi_8, rbx_12 * 2)
                
                int64_t* var_1c0
                
                if (var_1c0 != 0)
                    var_1c0[1].d -= 1
                    
                    if (var_1c0[1].d == 1)
                        (**var_1c0)(var_1c0)
                        int32_t rax_77 = *(var_1c0 + 0xc)
                        *(var_1c0 + 0xc) -= 1
                        
                        if (rax_77 == 1)
                            (*(*var_1c0 + 8))(var_1c0, 1)
                    
                    r15 = var_4e8
                
                int64_t rbx_14 = sx.q(var_4e0.d)
                int32_t rax_79 = (rbx_14 + 1).d
                var_4e0.d = rax_79
                
                if (rax_79 s> var_4e0:4.d)
                    sub_1405c4f50(&var_4e8)
                    r15 = var_4e8
                
                int128_t* rbx_17 = rbx_14 * 0x30 + r15
                *rbx_17 = rax_67.o
                rbx_17[1].q = rax_70.q
                sub_140596d10(rbx_17 + 0x18, &var_3c8)
                int64_t rcx_64 = var_3c8
                char var_3b8
                *(rbx_17 + 0x28) = var_3b8
                
                if (rcx_64 != 0)
                    sub_140a74f90(rcx_64)
            
            int16_t* rcx_65 = var_490
            
            if (rcx_65 != 0)
                sub_140a74f90(rcx_65)
            
            rdi_1 = var_4d4
        else
            int64_t rbx_1 = sx.q(var_4e0.d)
            int32_t rax_5 = (rbx_1 + 1).d
            var_4e0.d = rax_5
            
            if (rax_5 s> var_4e0:4.d)
                sub_1405c4f50(&var_4e8)
                r15 = var_4e8
            
            void* rcx_3 = rbx_1 * 0x30 + r15
            __builtin_memset(rcx_3, 0, 0x29)
            *(rcx_3 + 0x28) = 0
        
        r12 = &r12[1]
        var_410 = r12
    while (r12 != rax_4)
    
    result = arg1
    zmm6 = var_58_1

int32_t i_2 = var_4e0.d

if (*(rsi + 0x99) == 0)
    *result = *(rsi + 0x20)
    result[1].q = rsi[6]
    
    if (i_2 != 0)
        void* rbx_19 = r15 + 0x18
        int32_t i
        
        do
            int64_t rcx_68 = *rbx_19
            
            if (rcx_68 != 0)
                sub_140a74f90(rcx_68)
            
            rbx_19 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = arg1
else
    int64_t var_328 = *rsi
    int32_t var_320_1 = rsi[1].d
    int32_t var_31c_1 = *(rsi + 0xc)
    int32_t var_318_1 = rsi[2].d
    int32_t var_314_1 = *(rsi + 0x14)
    char var_310_1 = rsi[3].b
    int64_t var_308_1 = rsi[4]
    int32_t var_300_1 = rsi[5].d
    int32_t var_2fc_1 = *(rsi + 0x2c)
    int32_t var_2f8_1 = rsi[6].d
    int32_t i_3 = i_2
    int32_t var_2f4_1 = *(rsi + 0x34)
    uint128_t var_2f0_1 = r15.o
    sub_14138e2c0(result, arg2, arg3, &var_328, zmm6)
    
    if (i_2 != 0)
        int64_t* rbx_18 = r15 + 0x18
        int32_t i_1
        
        do
            int64_t rcx_67 = *rbx_18
            
            if (rcx_67 != 0)
                sub_140a74f90(rcx_67)
            
            rbx_18 = &rbx_18[6]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        result = arg1

if (r15 != 0)
    sub_140a74f90(r15)

__security_check_cookie(rax_1 ^ &var_518)
return result
