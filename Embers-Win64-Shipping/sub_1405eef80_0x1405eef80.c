// 函数: sub_1405eef80
// 地址: 0x1405eef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_180 = -2
uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
int64_t* r14 = arg4
char rdi = arg3
int32_t r13 = 0
int32_t var_594 = 0
int64_t var_2c8
sub_140a2e390(&var_2c8, u"Stream %i\n", zx.q(arg2))
int32_t var_2c0
int32_t r8_1 = var_2c0 - 1

if (var_2c0 == 0)
    r8_1 = 0

sub_140a20ba0(r14, var_2c8, r8_1)
int64_t rcx_2 = var_2c8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* var_558 = nullptr
int32_t var_4e0 = 0
int64_t* rcx_3 = arg1[0x28]
int64_t* rbx

if ((*(*rcx_3 + 0x110))(rcx_3, zx.q(arg2), &var_4e0, &var_558, arg3) s>= 0)
    if (var_4e0 == 1)
        int64_t* rcx_5 = arg1[0x28]
        (*(*rcx_5 + 0x120))(rcx_5, zx.q(arg2))
    
    int64_t* var_568 = nullptr
    int64_t* rcx_6 = var_558
    
    if ((*(*rcx_6 + 0x110))(rcx_6, &var_568) s>= 0)
        int64_t* rcx_7 = var_568
        int64_t var_118
        
        if ((*(*rcx_7 + 0x40))(rcx_7, &var_118) s>= 0)
            int64_t var_190
            int64_t* rax_10 = sub_1405fbcb0(&var_190, &var_118)
            int16_t* const r8_4
            
            if (rax_10[1].d == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *rax_10
            
            int64_t var_2b8
            sub_140a2e390(&var_2b8, u"\tType: %s\n", r8_4)
            int32_t r15_1 = 0x30
            int32_t var_594_1 = 0x30
            int32_t var_2b0
            int32_t r8_5 = var_2b0 - 1
            
            if (var_2b0 == 0)
                r8_5 = 0
            
            sub_140a20ba0(r14, var_2b8, r8_5)
            int64_t rcx_11 = var_2b8
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            int64_t rcx_12 = var_190
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int64_t rcx_13 = var_118
            int64_t var_110
            
            if (rcx_13 != 0x10000073647561 || var_110 != 0x719b3800aa000080)
                if (rcx_13 != 0x40cb3dcde69669a0)
                    if (rcx_13 == 0x10000073646976 && var_110 == 0x719b3800aa000080)
                        goto label_1405ef1dd
                else if (var_110 == 0x16067c3808372e9e
                        || (rcx_13 == 0x10000073646976 && var_110 == 0x719b3800aa000080))
                    goto label_1405ef1dd
                
                sub_140a20ba0(r14, u"\tUnsupported stream type\n", 0x19)
                rbx.b = 0
            else
            label_1405ef1dd:
                int64_t* rcx_14 = var_558
                int32_t var_4fc
                int32_t rax_14
                int64_t r8_7
                rax_14, r8_7 = (*(*rcx_14 + 0x38))(rcx_14, &data_142d5b2b8, &var_4fc)
                int32_t rcx_15 = var_4fc
                
                if (rax_14 s< 0)
                    rcx_15 = 0
                
                var_4fc = rcx_15
                bool var_57b_1 = rcx_15 != 0
                
                if (rcx_15 != 0)
                    int64_t var_2a8
                    sub_140a2e390(&var_2a8, u"\tProtected content\n", r8_7)
                    r15_1 = 0x70
                    int32_t var_594_2 = 0x70
                    int32_t var_2a0
                    int32_t r8_8 = var_2a0 - 1
                    
                    if (var_2a0 == 0)
                        r8_8 = 0
                    
                    sub_140a20ba0(r14, var_2a8, r8_8)
                    int64_t rcx_18 = var_2a8
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                
                int32_t var_518 = 0
                int64_t* rcx_19 = var_568
                
                if ((*(*rcx_19 + 0x20))(rcx_19, &var_518) s>= 0)
                    int64_t** r12_1 = nullptr
                    int64_t** var_588_1 = nullptr
                    int64_t rsi_1 = -1
                    int32_t var_570_1 = 0xffffffff
                    void* var_4e8_1 = nullptr
                    int64_t rcx_20 = var_118
                    int64_t rdi_1
                    
                    if (rcx_20 != 0x10000073647561 || var_110 != 0x719b3800aa000080)
                        if (rcx_20 == 0x40cb3dcde69669a0 && var_110 == 0x16067c3808372e9e)
                            var_4e8_1 = arg1 + 0x14c
                            rdi_1 = sx.q(sub_1405eedf0(&arg1[0x12], 1))
                            r12_1 = rdi_1 * 0x68 + arg1[0x12]
                            goto label_1405ef39b
                        
                        if (rcx_20 == 0x11d5e45b72178c25 && var_110 == -0x540b0c2f4fffd544)
                            var_4e8_1 = &arg1[0x2a]
                            rdi_1 = sx.q(sub_1405eedf0(&arg1[0x26], 1))
                            r12_1 = rdi_1 * 0x68 + arg1[0x26]
                            goto label_1405ef39b
                        
                        if (rcx_20 == 0x10000073646976 && var_110 == 0x719b3800aa000080)
                            var_4e8_1 = arg1 + 0x154
                            rdi_1 = sx.q(sub_1405eedf0(&arg1[0x36], 1))
                            r12_1 = rdi_1 * 0x68 + arg1[0x36]
                            goto label_1405ef39b
                    else
                        var_4e8_1 = &arg1[0x29]
                        rdi_1 = sx.q(sub_1405eedf0(&arg1[0xa], 1))
                        r12_1 = rdi_1 * 0x68 + arg1[0xa]
                    label_1405ef39b:
                        var_570_1 = rdi_1.d
                        rdi = arg3
                        var_588_1 = r12_1
                    int64_t* var_4c0 = nullptr
                    int64_t* rcx_25 = var_568
                    (*(*rcx_25 + 0x38))(rcx_25, &var_4c0)
                    *(r12_1 + 0x5c) = 0xffffffff
                    char rax_29 = *(sub_1405ea680() + 0x28)
                    int32_t rbx_1 = 0
                    int32_t var_574_1 = 0
                    char* var_538
                    uint128_t var_498
                    
                    if (var_518 u> 0)
                        do
                            int64_t var_298
                            sub_140a2e390(&var_298, u"\tFormat %i\n", zx.q(rbx_1))
                            r15_1 |= 0x80
                            int32_t var_594_3 = r15_1
                            int32_t var_290
                            int32_t r8_11
                            
                            if (var_290 == 0)
                                r8_11 = 0
                            else
                                r8_11 = var_290 - 1
                            
                            sub_140a20ba0(r14, var_298, r8_11)
                            int64_t rcx_28 = var_298
                            
                            if (rcx_28 != 0)
                                sub_140a74f90(rcx_28)
                            
                            int64_t* var_590 = nullptr
                            int64_t* rcx_29 = var_568
                            
                            if ((*(*rcx_29 + 0x28))(rcx_29, zx.q(rbx_1), &var_590) s< 0)
                                sub_140a20ba0(r14, u"\t\tfailed to get media type\n", 0x1b)
                                int64_t* rcx_31 = var_590
                                
                                if (rcx_31 != 0)
                                    (*(*rcx_31 + 0x10))(rcx_31)
                            else
                                int64_t var_108
                                
                                if (var_118 != 0x40cb3dcde69669a0 || var_110 != 0x16067c3808372e9e)
                                    int64_t* rcx_34 = var_590
                                    
                                    if ((*(*rcx_34 + 0x50))(rcx_34, &data_1434cbb90, &var_108)
                                            s>= 0)
                                        goto label_1405ef4ce
                                    
                                    sub_140a20ba0(r14, u"\t\tfailed to get sub-type\n", 0x19)
                                    int64_t* rcx_36 = var_590
                                    
                                    if (rcx_36 != 0)
                                        (*(*rcx_36 + 0x10))(rcx_36)
                                else
                                    var_108 = 0
                                    int64_t var_100 = 0
                                label_1405ef4ce:
                                    int16_t* var_550
                                    sub_140600860(&var_550, &var_108)
                                    int16_t* const r8_13 = &data_142d40450
                                    int32_t var_548
                                    
                                    if (var_548 != 0)
                                        r8_13 = var_550
                                    
                                    int64_t var_288
                                    sub_140a2e390(&var_288, u"\t\tCodec: %s\n", r8_13)
                                    r15_1 |= 0x100
                                    int32_t var_594_4 = r15_1
                                    int32_t var_280
                                    int32_t r8_15
                                    
                                    if (var_280 == 0)
                                        r8_15 = 0
                                    else
                                        r8_15 = var_280 - 1
                                    
                                    sub_140a20ba0(r14, var_288, r8_15)
                                    int64_t rcx_38 = var_288
                                    
                                    if (rcx_38 != 0)
                                        sub_140a74f90(rcx_38)
                                    
                                    int64_t* var_1a8
                                    sub_1405f3fe0(&var_1a8, var_590, rax_29, rdi)
                                    int64_t* rdi_2 = var_1a8
                                    
                                    if (rdi_2 != 0)
                                        int32_t var_578_1 = 0xffffffff
                                        int64_t rcx_43 = var_118
                                        
                                        if (rcx_43 != 0x10000073647561
                                                || var_110 != 0x719b3800aa000080)
                                            if (rcx_43 == 0x40cb3dcde69669a0
                                                    && var_110 == 0x16067c3808372e9e)
                                                int64_t* rcx_65 = var_590
                                                
                                                if (rcx_65 != 0)
                                                    (*(*rcx_65 + 8))(rcx_65)
                                                
                                                (*(*rdi_2 + 8))(rdi_2)
                                                uint64_t var_408
                                                var_538 = &var_408
                                                var_408 = 0
                                                int16_t* rsi_3 = var_550
                                                int32_t var_3fc
                                                
                                                if (var_548 != 0)
                                                    sub_1405a4c70(&var_408, var_548, 0)
                                                    memcpy(var_408, rsi_3, var_548 * 2)
                                                else
                                                    __builtin_memset(&var_3fc, 0, 0x14)
                                                
                                                int64_t var_3b0_1 = 0
                                                int64_t var_3e0
                                                __builtin_memset(&var_3e0, 0, 0x18)
                                                char var_3c8_1 = 2
                                                int32_t var_3c4_1 = 0
                                                char var_3c0_1 = 2
                                                int32_t var_3bc_1 = 0
                                                rsi_1 = sx.q(r12_1[5].d)
                                                int32_t rax_59 = (rsi_1 + 1).d
                                                r12_1[5].d = rax_59
                                                
                                                if (rax_59 s> *(r12_1 + 0x2c))
                                                    sub_1405fdd60(&r12_1[4])
                                                
                                                int64_t** rdx_28 = &r12_1[4][rsi_1 * 0xe]
                                                *rdx_28 = rcx_65
                                                int64_t* var_418_2
                                                __builtin_memset(&var_418_2, 0, 0x20)
                                                rdx_28[1] = rdi_2
                                                var_538 = &rdx_28[2]
                                                var_538 = &rdx_28[2]
                                                rdx_28[2] = 0
                                                rdx_28[2] = var_408
                                                rdx_28[3].d = var_548
                                                *(rdx_28 + 0x1c) = var_3fc
                                                int64_t var_3f8
                                                rdx_28[4] = var_3f8
                                                int64_t var_3f0
                                                rdx_28[5].d = var_3f0.d
                                                *(rdx_28 + 0x2c) = var_3f0:4.o
                                                *(rdx_28 + 0x3c) = var_3e0:4.o
                                                int64_t var_3d0
                                                *(rdx_28 + 0x4c) = var_3d0:4.o
                                                *(rdx_28 + 0x5c) = var_3bc_1.o
                                                uint64_t rcx_71 = var_408
                                                
                                                if (rcx_71 != 0)
                                                    sub_140a74f90(rcx_71)
                                                
                                                int64_t* var_410_2
                                                
                                                if (var_410_2 != 0)
                                                    (*(*var_410_2 + 0x10))(var_410_2)
                                                
                                                int64_t* rcx_73 = var_418_2
                                                
                                                if (rcx_73 != 0)
                                                    (*(*rcx_73 + 0x10))(rcx_73)
                                                
                                                goto label_1405f07b0
                                            
                                            if (rcx_43 == 0x11d5e45b72178c25
                                                    && var_110 == -0x540b0c2f4fffd544)
                                                int64_t* rcx_74 = var_590
                                                
                                                if (rcx_74 != 0)
                                                    (*(*rcx_74 + 8))(rcx_74)
                                                
                                                (*(*rdi_2 + 8))(rdi_2)
                                                uint64_t var_398
                                                var_538 = &var_398
                                                var_398 = 0
                                                int16_t* rsi_4 = var_550
                                                int32_t var_38c
                                                
                                                if (var_548 != 0)
                                                    sub_1405a4c70(&var_398, var_548, 0)
                                                    memcpy(var_398, rsi_4, var_548 * 2)
                                                else
                                                    __builtin_memset(&var_38c, 0, 0x14)
                                                
                                                int64_t var_340_1 = 0
                                                int64_t var_370
                                                __builtin_memset(&var_370, 0, 0x18)
                                                char var_358_1 = 2
                                                int32_t var_354_1 = 0
                                                char var_350_1 = 2
                                                int32_t var_34c_1 = 0
                                                rsi_1 = sx.q(r12_1[5].d)
                                                int32_t rax_70 = (rsi_1 + 1).d
                                                r12_1[5].d = rax_70
                                                
                                                if (rax_70 s> *(r12_1 + 0x2c))
                                                    sub_1405fdd60(&r12_1[4])
                                                
                                                int64_t** rdx_33 = &r12_1[4][rsi_1 * 0xe]
                                                *rdx_33 = rcx_74
                                                int64_t* var_3a8_2
                                                __builtin_memset(&var_3a8_2, 0, 0x20)
                                                rdx_33[1] = rdi_2
                                                var_538 = &rdx_33[2]
                                                var_538 = &rdx_33[2]
                                                rdx_33[2] = 0
                                                rdx_33[2] = var_398
                                                rdx_33[3].d = var_548
                                                *(rdx_33 + 0x1c) = var_38c
                                                int64_t var_388
                                                rdx_33[4] = var_388
                                                int64_t var_380
                                                rdx_33[5].d = var_380.d
                                                *(rdx_33 + 0x2c) = var_380:4.o
                                                *(rdx_33 + 0x3c) = var_370:4.o
                                                int64_t var_360
                                                *(rdx_33 + 0x4c) = var_360:4.o
                                                *(rdx_33 + 0x5c) = var_34c_1.o
                                                uint64_t rcx_80 = var_398
                                                
                                                if (rcx_80 != 0)
                                                    sub_140a74f90(rcx_80)
                                                
                                                int64_t* var_3a0_2
                                                
                                                if (var_3a0_2 != 0)
                                                    (*(*var_3a0_2 + 0x10))(var_3a0_2)
                                                
                                                int64_t* rcx_82 = var_3a8_2
                                                
                                                if (rcx_82 != 0)
                                                    (*(*rcx_82 + 0x10))(rcx_82)
                                                
                                                goto label_1405f07b0
                                            
                                            if (rcx_43 != 0x10000073646976
                                                    || var_110 != 0x719b3800aa000080)
                                                goto label_1405f07b8
                                            
                                            int64_t var_e8
                                            int32_t rax_80
                                            int64_t r8_38
                                            rax_80, r8_38 =
                                                (*(*rdi_2 + 0x50))(rdi_2, &data_1434cbb90, &var_e8)
                                            
                                            if (rax_80 s>= 0)
                                                int64_t* rcx_90 = var_590
                                                int32_t var_520
                                                bool cond:5_1 =
                                                    (*(*rcx_90 + 0x38))(rcx_90, "$&3 \r", &var_520)
                                                    s< 0
                                                int32_t rax_86 = var_520
                                                
                                                if (cond:5_1)
                                                    rax_86 = 0
                                                
                                                var_520 = rax_86
                                                int64_t* rcx_91 = var_590
                                                int64_t var_1a0
                                                int32_t rax_88
                                                int64_t r8_42
                                                rax_88, r8_42 = (*(*rcx_91 + 0x40))(rcx_91, 
                                                    &data_1434cbc20, &var_1a0)
                                                int32_t r15_4
                                                
                                                if (rax_88 s< 0)
                                                    zmm9 = zx.o(0)
                                                    int64_t var_230
                                                    sub_140a2e390(&var_230, \t\tFrame Rate: n/a\n", 
                                                        r8_42)
                                                    r15_4 = r15_1 | 0x4000
                                                    int32_t var_228
                                                    int32_t r8_46 = var_228 - 1
                                                    
                                                    if (var_228 == 0)
                                                        r8_46 = 0
                                                    
                                                    sub_140a20ba0(r14, var_230, r8_46)
                                                    int64_t rcx_98 = var_230
                                                    
                                                    if (rcx_98 != 0)
                                                        sub_140a74f90(rcx_98)
                                                else
                                                    int64_t rcx_92 = var_1a0
                                                    zmm9.d = float.s(rcx_92 u>> 0x20)
                                                    uint128_t zmm0_1
                                                    zmm0_1.d = float.s(zx.q(rcx_92.d))
                                                    zmm9.d = zmm9.d f/ zmm0_1.d
                                                    int64_t var_1b8
                                                    sub_140a2e390(&var_1b8, 
                                                        \t\tFrame Rate: %g fps\n", 
                                                        _mm_cvtps_pd(zmm9.q).q)
                                                    r15_4 = r15_1 | 0x2000
                                                    int32_t var_1b0
                                                    int32_t r8_45
                                                    
                                                    if (var_1b0 == 0)
                                                        r8_45 = 0
                                                    else
                                                        r8_45 = var_1b0 - 1
                                                    
                                                    sub_140a20ba0(r14, var_1b8, r8_45)
                                                    int64_t rcx_95 = var_1b8
                                                    
                                                    if (rcx_95 != 0)
                                                        sub_140a74f90(rcx_95)
                                                
                                                zmm6 = 0xbf800000
                                                zmm7 = 0xbf800000
                                                int64_t* rcx_99 = var_590
                                                int64_t var_198
                                                
                                                if ((*(*rcx_99 + 0x40))(rcx_99, &data_1434cbc70, 
                                                        &var_198) s>= 0)
                                                    int64_t rcx_100 = var_198
                                                    zmm6.d = float.s(rcx_100 u>> 0x20)
                                                    zmm6.d = zmm6.d f/ float.s(zx.q(rcx_100.d))
                                                
                                                int64_t* rcx_101 = var_590
                                                int64_t var_238
                                                
                                                if ((*(*rcx_101 + 0x40))(rcx_101, &data_1434cbc80, 
                                                        &var_238) s>= 0)
                                                    int64_t rcx_102 = var_238
                                                    zmm7.d = float.s(rcx_102 u>> 0x20)
                                                    zmm7.d = zmm7.d f/ float.s(zx.q(rcx_102.d))
                                                
                                                uint128_t var_4d8
                                                
                                                if (zmm6.d f< 0f || zmm7.d f< 0f)
                                                    zmm8 = 1.d
                                                    zmm6 = zmm9
                                                    zmm7 = zmm9
                                                    _mm_shuffle_ps(zmm8, zmm8, 0xe1)
                                                    zmm8.d = zmm6.d
                                                    _mm_shuffle_ps(zmm8, zmm8, 0xc6)
                                                    zmm8.d = 1.d
                                                    _mm_shuffle_ps(zmm8, zmm8, 0x27)
                                                    zmm8.d = zmm7.q.d
                                                    zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x39)
                                                    var_4d8 = zmm8
                                                else
                                                    int32_t var_4b4_1 = zmm7.d
                                                    int32_t var_4a4_1 = zmm6.d
                                                    var_498.q = 1.q
                                                    var_498:8.q = 1.q
                                                    zmm8 = var_498
                                                    zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                                                    var_4d8 = zmm8
                                                    zmm6 = var_4d8:4.d
                                                
                                                int64_t var_210
                                                sub_140a2e390(&var_210, 
                                                    \t\tFrame Rate Range: %g - %g fps\n", 
                                                    fconvert.d(zmm6.d))
                                                int32_t r15_5 = r15_4 | 0x8000
                                                int32_t var_208
                                                int32_t r8_51
                                                
                                                if (var_208 == 0)
                                                    r8_51 = 0
                                                else
                                                    r8_51 = var_208 - 1
                                                
                                                int64_t r8_52 = sub_140a20ba0(r14, var_210, r8_51)
                                                int64_t rcx_105 = var_210
                                                
                                                if (rcx_105 != 0)
                                                    r8_52 = sub_140a74f90(rcx_105)
                                                
                                                char rbx_6 = var_4d8:8.b
                                                char rsi_5 = zmm8.b
                                                
                                                if (rsi_5 == 1 && rbx_6 == rsi_5
                                                        && not(zmm6.d f!= zmm7.d)
                                                        && not(zmm6.d f!= 1f))
                                                    int64_t var_200
                                                    sub_140a2e390(&var_200, 
                                                        \t\tpossibly a still image stream (may not work)"
                                                    "r8_52)
                                                    r15_5 |= 0x10000
                                                    int32_t var_1f8
                                                    int32_t r8_53 = var_1f8 - 1
                                                    
                                                    if (var_1f8 == 0)
                                                        r8_53 = 0
                                                    
                                                    r8_52 = sub_140a20ba0(r14, var_200, r8_53)
                                                    int64_t rcx_108 = var_200
                                                    
                                                    if (rcx_108 != 0)
                                                        r8_52 = sub_140a74f90(rcx_108)
                                                
                                                if (arg3 == 0 || rsi_5 != 1 || rbx_6 != rsi_5
                                                        || zmm6.d f!= zmm7.d || zmm6.d f!= 1f)
                                                    int64_t* rcx_115 = var_590
                                                    char* var_1c0
                                                    int32_t rax_110
                                                    int64_t r8_56
                                                    rax_110, r8_56 = (*(*rcx_115 + 0x40))(rcx_115, 
                                                        &data_1434cbc10, &var_1c0)
                                                    int32_t var_580_2
                                                    int32_t var_4c8_1
                                                    int64_t rbx_7
                                                    uint64_t rsi_7
                                                    char* r13_1
                                                    
                                                    if (rax_110 s< 0)
                                                        rbx_7 = data_143dbb180
                                                        int64_t var_1d0
                                                        sub_140a2e390(&var_1d0, 
                                                            \t\tDimensions: n/a\n", r8_56)
                                                        r15_1 = r15_5 | 0x80000
                                                        var_580_2 = r15_1
                                                        int32_t var_594_9 = r15_1
                                                        int32_t var_1c8
                                                        int32_t r8_60 = var_1c8 - 1
                                                        
                                                        if (var_1c8 == 0)
                                                            r8_60 = 0
                                                        
                                                        sub_140a20ba0(r14, var_1d0, r8_60)
                                                        int64_t rcx_121 = var_1d0
                                                        
                                                        if (rcx_121 != 0)
                                                            sub_140a74f90(rcx_121)
                                                        
                                                        r13_1 = zx.q(rbx_7:4.d)
                                                        var_538 = r13_1
                                                        rsi_7 = zx.q(rbx_7.d)
                                                        var_4c8_1 = rsi_7.d
                                                    else
                                                        r13_1 = var_1c0
                                                        var_538 = r13_1
                                                        rsi_7 = r13_1 u>> 0x20
                                                        var_4c8_1 = rsi_7.d
                                                        int64_t var_4f0
                                                        var_4f0.d = rsi_7.d
                                                        var_4f0:4.d = r13_1.d
                                                        int64_t var_1e0
                                                        sub_140a2e390(&var_1e0, 
                                                            \t\tDimensions: %i x %i\n", zx.q(rsi_7.d))
                                                        r15_1 = r15_5 | 0x40000
                                                        var_580_2 = r15_1
                                                        int32_t var_594_8 = r15_1
                                                        int32_t var_1d8
                                                        int32_t r8_59
                                                        
                                                        if (var_1d8 == 0)
                                                            r8_59 = 0
                                                        else
                                                            r8_59 = var_1d8 - 1
                                                        
                                                        sub_140a20ba0(r14, var_1e0, r8_59)
                                                        int64_t rcx_118 = var_1e0
                                                        
                                                        if (rcx_118 != 0)
                                                            sub_140a74f90(rcx_118)
                                                        
                                                        rbx_7 = var_4f0
                                                    
                                                    int64_t rcx_122 = var_e8
                                                    uint32_t var_560_1
                                                    int64_t var_540
                                                    int32_t var_51c_1
                                                    int64_t var_e0
                                                    
                                                    if (rcx_122 == 0x1000003231564e
                                                            && var_e0 == 0x719b3800aa000080)
                                                        uint32_t rax_115
                                                        
                                                        if (arg3 == 0)
                                                            uint32_t r8_62 =
                                                                (rsi_7 + 0xf).d & 0xfffffff0
                                                            var_560_1 = r8_62
                                                            var_540.d = r8_62
                                                            int64_t rcx_123 = var_108
                                                            
                                                            if (rcx_123 != 0x10000034363248)
                                                                if (rcx_123 != 0x4ff856223f40f4f0
                                                                        || var_100 != 0x5eee4b587aa1d8b6)
                                                                    rax_115 = (r13_1 << 1).d + r13_1.d
                                                                else
                                                                    rax_115 = ((zx.q((&r13_1[0xf]).d)
                                                                        & 0xfffffff0) * 3).d
                                                            else if (var_100 == 0x719b3800aa000080
                                                                    || (rcx_123 == 0x4ff856223f40f4f0
                                                                    && var_100 == 0x5eee4b587aa1d8b6))
                                                                rax_115 = ((zx.q((&r13_1[0xf]).d)
                                                                    & 0xfffffff0) * 3).d
                                                            else
                                                                rax_115 = (r13_1 << 1).d + r13_1.d
                                                        else
                                                            uint32_t rax_113 = rsi_7.d
                                                            var_560_1 = rax_113
                                                            var_540.d = rax_113
                                                            rax_115 = (r13_1 << 1).d + r13_1.d
                                                        
                                                        int32_t temp5_1
                                                        int32_t temp6_1
                                                        temp5_1:temp6_1 = sx.q(rax_115)
                                                        var_540:4.d = (temp6_1 - temp5_1) s>> 1
                                                        var_51c_1 = 5
                                                    else if (rcx_122 != 0x10000000000016
                                                            || var_e0 != 0x719b3800aa000080)
                                                        int32_t rax_123 = rsi_7.d
                                                        int64_t rdx_43 = var_108
                                                        
                                                        if (rdx_43 == 0x10000034363248
                                                                && var_100 == 0x719b3800aa000080)
                                                            rax_123 = (rax_123 + 0xf) & 0xfffffff0
                                                        else if (rdx_43 == 0x4ff856223f40f4f0
                                                                && var_100 == 0x5eee4b587aa1d8b6)
                                                            rax_123 = (rax_123 + 0xf) & 0xfffffff0
                                                        
                                                        int32_t temp1_1
                                                        int32_t temp2_1
                                                        temp1_1:temp2_1 = sx.q(rax_123)
                                                        var_540.d = (temp2_1 - temp1_1) s>> 1
                                                        var_540:4.d = r13_1.d
                                                        int32_t temp3_1
                                                        int32_t temp4_1
                                                        temp3_1:temp4_1 = sx.q(rax_123 * 2)
                                                        var_560_1 = (temp4_1 ^ temp3_1) - temp3_1
                                                        var_51c_1 = 8
                                                    else
                                                        var_540 = rbx_7
                                                        var_560_1 = (rsi_7 << 2).d
                                                        var_51c_1 = 4
                                                    
                                                    uint128_t var_f8 = data_1434cb1d0
                                                    int64_t* rcx_126 = var_590
                                                    int64_t r9_4 = *rcx_126
                                                    
                                                    if ((*(r9_4 + 0x50))(rcx_126, &data_1434cbc60, 
                                                            &var_f8, r9_4) s< 0)
                                                        rsi_1 = zx.q(var_578_1)
                                                    else
                                                        int64_t rcx_127 = var_f8.q
                                                        int64_t rax_131 = var_f8:8.q
                                                        int64_t** rcx_128
                                                        
                                                        if (rcx_127 == 0x11cec35605589f80
                                                                && rax_131 == 0x5a595500aa0001bf)
                                                            rcx_128 = var_588_1
                                                            int32_t r12_7 = rcx_128[5].d
                                                            int32_t r12_8 = r12_7 - 1
                                                            int64_t r15_6 = sx.q(r12_8)
                                                            
                                                            if (r12_7 - 1 s< 0)
                                                            label_1405f0640:
                                                                r12_1 = rcx_128
                                                                r15_1 = var_580_2
                                                                rsi_1 = zx.q(var_578_1)
                                                            else
                                                                void* r14_2 = r15_6 * 0x70
                                                                
                                                                while (true)
                                                                    int64_t rsi_11 = rcx_128[4]
                                                                    
                                                                    if (*(rsi_11 + r14_2 + 0x3c)
                                                                            == 0x11d0eb0af72a76a0
                                                                            && *(rsi_11 + r14_2 + 0x44)
                                                                            == -0x45e9333fffff1b54)
                                                                        if (sub_1405ed270(
                                                                                r14_2 + 0x50 + rsi_11, &var_4d8) != 0
                                                                                && *(rsi_11 + r14_2 + 0x60)
                                                                                == var_4c8_1
                                                                                && *(rsi_11 + r14_2 + 0x64) == r13_1.d)
                                                                            int16_t* rdx_47 = &data_142d40450
                                                                            
                                                                            if (var_548 != 0)
                                                                                rdx_47 = var_550
                                                                            
                                                                            int16_t* const rcx_131
                                                                            
                                                                            if (*(rsi_11 + r14_2 + 0x18) == 0)
                                                                                rcx_131 = &data_142d40450
                                                                            else
                                                                                rcx_131 = *(rsi_11 + r14_2 + 0x10)
                                                                            
                                                                            if (sub_140a54510(rcx_131, rdx_47) == 0)
                                                                                rsi_1 = zx.q(r12_8)
                                                                                r15_1 = var_580_2
                                                                                r12_1 = var_588_1
                                                                                r14 = arg4
                                                                                break
                                                                        
                                                                        rcx_128 = var_588_1
                                                                    
                                                                    r12_8 -= 1
                                                                    r14_2 -= 0x70
                                                                    int64_t temp9_1 = r15_6
                                                                    r15_6 -= 1
                                                                    
                                                                    if (temp9_1 - 1 s< 0)
                                                                        goto label_1405f0491
                                                        else if (rcx_127 != 0x11d0eb0af72a76a0
                                                            || rax_131 != -0x45e9333fffff1b54)
                                                        label_1405f0495:
                                                            r12_1 = var_588_1
                                                            r15_1 = var_580_2
                                                            rsi_1 = zx.q(var_578_1)
                                                        else
                                                            rcx_128 = var_588_1
                                                            int32_t rax_139 = rcx_128[5].d
                                                            int32_t var_508_1 = rax_139 - 1
                                                            int64_t r13_2 = sx.q(rax_139 - 1)
                                                            
                                                            if (rax_139 - 1 s< 0)
                                                                goto label_1405f0640
                                                            
                                                            int64_t** rsi_13 = r13_2 * 0x70
                                                            
                                                            while (true)
                                                                void* r14_4 = rcx_128[4]
                                                                
                                                                if (*(rsi_13 + r14_4 + 0x3c)
                                                                        == 0x11cec35605589f80
                                                                        && *(rsi_13 + r14_4 + 0x44)
                                                                        == 0x5a595500aa0001bf)
                                                                    if (sub_1405ed270(
                                                                            r14_4 + 0x50 + rsi_13, &var_4d8) != 0
                                                                            && *(rsi_13 + r14_4 + 0x60)
                                                                            == var_4c8_1
                                                                            && *(rsi_13 + r14_4 + 0x64)
                                                                            == var_538.d)
                                                                        int16_t* rdx_49 = &data_142d40450
                                                                        
                                                                        if (var_548 != 0)
                                                                            rdx_49 = var_550
                                                                        
                                                                        int16_t* const rcx_136
                                                                        
                                                                        if (*(rsi_13 + r14_4 + 0x18) == 0)
                                                                            rcx_136 = &data_142d40450
                                                                        else
                                                                            rcx_136 = *(rsi_13 + r14_4 + 0x10)
                                                                        
                                                                        if (sub_140a54510(rcx_136, rdx_49) == 0)
                                                                            int64_t* rdx_50 = *(rsi_13 + r14_4)
                                                                            int64_t* rcx_137 = var_590
                                                                            
                                                                            if (rdx_50 != rcx_137)
                                                                                if (rcx_137 != 0)
                                                                                    (*(*rcx_137 + 8))(rcx_137, rdx_50)
                                                                                    rdx_50 = *(rsi_13 + r14_4)
                                                                                
                                                                                if (rdx_50 != 0)
                                                                                    (*(*rdx_50 + 0x10))(rdx_50)
                                                                                
                                                                                *(rsi_13 + r14_4) = var_590
                                                                            
                                                                            rsi_1 = zx.q(var_508_1)
                                                                            r15_1 = var_580_2
                                                                            r12_1 = var_588_1
                                                                            r14 = arg4
                                                                            break
                                                                    
                                                                    rcx_128 = var_588_1
                                                                
                                                                var_508_1 -= 1
                                                                rsi_13 -= 0x70
                                                                int64_t temp10_1 = r13_2
                                                                r13_2 -= 1
                                                                
                                                                if (temp10_1 - 1 s< 0)
                                                                label_1405f0491:
                                                                    r14 = arg4
                                                                    goto label_1405f0495
                                                    
                                                    if (rsi_1.d != 0xffffffff)
                                                        r13 = 0
                                                    else
                                                        int64_t* rcx_132 = var_590
                                                        int64_t* var_338 = rcx_132
                                                        
                                                        if (rcx_132 != 0)
                                                            (*(*rcx_132 + 8))()
                                                        
                                                        (*(*rdi_2 + 8))(rdi_2)
                                                        uint64_t var_328
                                                        var_538 = &var_328
                                                        r13 = 0
                                                        var_328 = 0
                                                        int16_t* r14_3 = var_550
                                                        int32_t var_31c
                                                        
                                                        if (var_548 != 0)
                                                            sub_1405a4c70(&var_328, var_548, 0)
                                                            memcpy(var_328, r14_3, var_548 * 2)
                                                        else
                                                            var_31c = 0
                                                        
                                                        int64_t var_318_1 = 0
                                                        int32_t var_310_1 = 0
                                                        int32_t rax_148 = var_520
                                                        int64_t var_308_1 = var_540
                                                        uint32_t var_300_1 = var_560_1
                                                        uint128_t var_2fc_1 = var_f8
                                                        int32_t var_2ec_1 = zmm9.d
                                                        int64_t var_2d8_1 = rbx_7
                                                        int32_t var_2d0_1 = var_51c_1
                                                        int32_t var_2cc_1 = 0
                                                        rsi_1 = sx.q(r12_1[5].d)
                                                        int32_t rax_152 = (rsi_1 + 1).d
                                                        r12_1[5].d = rax_152
                                                        
                                                        if (rax_152 s> *(r12_1 + 0x2c))
                                                            sub_1405fdd60(&r12_1[4])
                                                        
                                                        int64_t** rdx_55 = &r12_1[4][rsi_1 * 0xe]
                                                        *rdx_55 = var_338
                                                        __builtin_memset(&var_338, 0, 0x20)
                                                        rdx_55[1] = rdi_2
                                                        var_538 = &rdx_55[2]
                                                        var_538 = &rdx_55[2]
                                                        rdx_55[2] = 0
                                                        rdx_55[2] = var_328
                                                        rdx_55[3].d = var_548
                                                        *(rdx_55 + 0x1c) = var_31c
                                                        rdx_55[4] = var_318_1
                                                        rdx_55[5].d = var_310_1
                                                        *(rdx_55 + 0x2c) = rax_148.o
                                                        *(rdx_55 + 0x3c) = var_2fc_1
                                                        *(rdx_55 + 0x4c) = var_2ec_1.o
                                                        *(rdx_55 + 0x5c) = zmm8
                                                        sub_1405ecad0(&var_338)
                                                        r14 = arg4
                                                    
                                                    goto label_1405f07b0
                                                
                                                int64_t var_1f0
                                                sub_140a2e390(&var_1f0, 
                                                    \t\tlikely an unsupported still image stream\n", 
                                                    r8_52)
                                                r15_1 = r15_5 | 0x20000
                                                int32_t var_594_7 = r15_1
                                                int32_t var_1e8
                                                int32_t r8_54 = var_1e8 - 1
                                                
                                                if (var_1e8 == 0)
                                                    r8_54 = 0
                                                
                                                sub_140a20ba0(r14, var_1f0, r8_54)
                                                int64_t rcx_111 = var_1f0
                                                
                                                if (rcx_111 != 0)
                                                    sub_140a74f90(rcx_111)
                                                
                                                (*(*rdi_2 + 0x10))(rdi_2)
                                                int16_t* rcx_113 = var_550
                                                
                                                if (rcx_113 != 0)
                                                    sub_140a74f90(rcx_113)
                                                
                                                int64_t* rcx_114 = var_590
                                                
                                                if (rcx_114 != 0)
                                                    (*(*rcx_114 + 0x10))(rcx_114)
                                                
                                                rbx_1 = var_574_1
                                            else
                                                int64_t var_248
                                                sub_140a2e390(&var_248, 
                                                    \t\tfailed to get sub-type", r8_38)
                                                r15_1 |= 0x1000
                                                int32_t var_594_6 = r15_1
                                                int32_t var_240
                                                int32_t r8_39 = var_240 - 1
                                                
                                                if (var_240 == 0)
                                                    r8_39 = 0
                                                
                                                sub_140a20ba0(r14, var_248, r8_39)
                                                int64_t rcx_86 = var_248
                                                
                                                if (rcx_86 != 0)
                                                    sub_140a74f90(rcx_86)
                                                
                                                (*(*rdi_2 + 0x10))(rdi_2)
                                                int16_t* rcx_88 = var_550
                                                
                                                if (rcx_88 != 0)
                                                    sub_140a74f90(rcx_88)
                                                
                                                int64_t* rcx_89 = var_590
                                                
                                                if (rcx_89 != 0)
                                                    (*(*rcx_89 + 0x10))(rcx_89)
                                        else
                                            int64_t* rcx_44 = var_590
                                            int32_t var_4f8
                                            int32_t rax_41 = (*(*rcx_44 + 0x38))(rcx_44, 
                                                &data_1434cbc00, &var_4f8)
                                            int32_t r12_6 = var_4f8
                                            
                                            if (rax_41 s< 0)
                                                r12_6 = 0x10
                                            
                                            var_4f8 = r12_6
                                            int64_t* rcx_45 = var_590
                                            int32_t var_500
                                            int32_t rax_43 = (*(*rcx_45 + 0x38))(rcx_45, 
                                                &data_1434cbbd0, &var_500)
                                            int32_t r14_1 = var_500
                                            
                                            if (rax_43 s< 0)
                                                r14_1 = 0
                                            
                                            var_500 = r14_1
                                            int64_t* rcx_46 = var_590
                                            int32_t var_504
                                            int32_t rax_45 = (*(*rcx_46 + 0x38))(rcx_46, 
                                                &data_1434cbbe0, &var_504)
                                            int32_t r15_2 = var_504
                                            
                                            if (rax_45 s< 0)
                                                r15_2 = 0
                                            
                                            var_504 = r15_2
                                            int64_t* rcx_47 = var_590
                                            
                                            if (rcx_47 != 0)
                                                (*(*rcx_47 + 8))(rcx_47)
                                            
                                            (*(*rdi_2 + 8))(rdi_2)
                                            uint64_t var_478
                                            var_538 = &var_478
                                            var_478 = 0
                                            int16_t* rsi_2 = var_550
                                            int32_t var_46c
                                            
                                            if (var_548 != 0)
                                                sub_1405a4c70(&var_478, var_548, 0)
                                                memcpy(var_478, rsi_2, var_548 * 2)
                                            else
                                                var_46c = 0
                                            
                                            int32_t var_464_1 = r14_1
                                            int64_t var_420_1 = 0
                                            int32_t var_45c_1 = 0
                                            int64_t var_450
                                            __builtin_memset(&var_450, 0, 0x18)
                                            char var_438_1 = 2
                                            int32_t var_434_1 = 0
                                            char var_430_1 = 2
                                            int32_t var_42c_1 = 0
                                            rsi_1 = sx.q(var_588_1[5].d)
                                            int32_t rax_48 = (rsi_1 + 1).d
                                            var_588_1[5].d = rax_48
                                            
                                            if (rax_48 s> *(var_588_1 + 0x2c))
                                                sub_1405fdd60(&var_588_1[4])
                                            
                                            int64_t** rdx_20 = &var_588_1[4][rsi_1 * 0xe]
                                            *rdx_20 = rcx_47
                                            int64_t* var_488_2
                                            __builtin_memset(&var_488_2, 0, 0x20)
                                            rdx_20[1] = rdi_2
                                            var_538 = &rdx_20[2]
                                            var_538 = &rdx_20[2]
                                            rdx_20[2] = 0
                                            rdx_20[2] = var_478
                                            rdx_20[3].d = var_548
                                            *(rdx_20 + 0x1c) = var_46c
                                            rdx_20[4] = r12_6.q
                                            rdx_20[5].d = r15_2
                                            *(rdx_20 + 0x2c) = var_45c_1.o
                                            *(rdx_20 + 0x3c) = var_450:4.o
                                            int64_t var_440
                                            *(rdx_20 + 0x4c) = var_440:4.o
                                            *(rdx_20 + 0x5c) = var_42c_1.o
                                            uint64_t rcx_53 = var_478
                                            
                                            if (rcx_53 != 0)
                                                sub_140a74f90(rcx_53)
                                            
                                            int64_t* var_480_2
                                            
                                            if (var_480_2 != 0)
                                                (*(*var_480_2 + 0x10))(var_480_2)
                                            
                                            int64_t* rcx_55 = var_488_2
                                            
                                            if (rcx_55 != 0)
                                                (*(*rcx_55 + 0x10))(rcx_55)
                                            
                                            int64_t var_278
                                            sub_140a2e390(&var_278, \t\tChannels: %i\n", 
                                                zx.q(r14_1))
                                            int32_t var_270
                                            int32_t r8_26
                                            
                                            if (var_270 == 0)
                                                r8_26 = 0
                                            else
                                                r8_26 = var_270 - 1
                                            
                                            r14 = arg4
                                            sub_140a20ba0(r14, var_278, r8_26)
                                            int64_t rcx_58 = var_278
                                            
                                            if (rcx_58 != 0)
                                                sub_140a74f90(rcx_58)
                                            
                                            int64_t var_268
                                            sub_140a2e390(&var_268, \t\tSample Rate: %i Hz\n", 
                                                zx.q(r15_2))
                                            int32_t var_260
                                            int32_t r8_29
                                            
                                            if (var_260 == 0)
                                                r8_29 = 0
                                            else
                                                r8_29 = var_260 - 1
                                            
                                            sub_140a20ba0(r14, var_268, r8_29)
                                            int64_t rcx_61 = var_268
                                            
                                            if (rcx_61 != 0)
                                                sub_140a74f90(rcx_61)
                                            
                                            int64_t var_258
                                            sub_140a2e390(&var_258, \t\tBits Per Sample: %i\n", 
                                                zx.q(r12_6))
                                            r15_1 |= 0xe00
                                            int32_t var_594_5 = r15_1
                                            int32_t var_250
                                            int32_t r8_32
                                            
                                            if (var_250 == 0)
                                                r8_32 = 0
                                            else
                                                r8_32 = var_250 - 1
                                            
                                            sub_140a20ba0(r14, var_258, r8_32)
                                            int64_t rcx_64 = var_258
                                            
                                            if (rcx_64 != 0)
                                                sub_140a74f90(rcx_64)
                                            
                                        label_1405f07b0:
                                            rbx_1 = var_574_1
                                        label_1405f07b8:
                                            r12_1 = var_588_1
                                            
                                            if (var_590 == var_4c0)
                                                *(r12_1 + 0x5c) = rsi_1.d
                                            
                                            (*(*rdi_2 + 0x10))(rdi_2)
                                            int16_t* rcx_145 = var_550
                                            
                                            if (rcx_145 != 0)
                                                sub_140a74f90(rcx_145)
                                            
                                            int64_t* rcx_146 = var_590
                                            
                                            if (rcx_146 != 0)
                                                (*(*rcx_146 + 0x10))(rcx_146)
                                        
                                        rsi_1 = -1
                                    else
                                        sub_140a20ba0(r14, \t\tfailed to create output type\n", 
                                            (rdi_2 + 0x1f).d)
                                        int16_t* rcx_41 = var_550
                                        
                                        if (rcx_41 != 0)
                                            sub_140a74f90(rcx_41)
                                        
                                        int64_t* rcx_42 = var_590
                                        
                                        if (rcx_42 != 0)
                                            (*(*rcx_42 + 0x10))(rcx_42)
                            
                            rbx_1 += 1
                            var_574_1 = rbx_1
                            rdi = arg3
                        while (rbx_1 u< var_518)
                    
                    if (*(r12_1 + 0x5c) == 0xffffffff)
                        int32_t rbx_8 = 0
                        
                        if (r12_1[5].d s> 0)
                            int64_t* rdi_3 = nullptr
                            
                            while (true)
                                int64_t* rcx_147 = var_568
                                int64_t r8_66 = *rcx_147
                                
                                if ((*(r8_66 + 0x30))(rcx_147, *(rdi_3 + r12_1[4]), r8_66) s>= 0)
                                    *(r12_1 + 0x5c) = rbx_8
                                    break
                                
                                rbx_8 += 1
                                rdi_3 = &rdi_3[0xe]
                                
                                if (rbx_8 s>= r12_1[5].d)
                                    rbx_8 = *(r12_1 + 0x5c)
                                    break
                        
                        if (r12_1[5].d s<= 0 || rbx_8 == 0xffffffff)
                            sub_140a20ba0(arg4, u"\tunsupported media type\n", 0x18)
                    
                    rbx = var_4e8_1
                    
                    if (*rbx == 0xffffffff && *(r12_1 + 0x5c) != 0xffffffff)
                        int64_t* rcx_150 = arg1[0x28]
                        
                        if ((*(*rcx_150 + 0x118))(rcx_150, zx.q(arg2)) s>= 0)
                            *rbx = var_570_1
                    
                    int16_t* pv_2 = nullptr
                    int32_t var_4dc = 0
                    int64_t* rcx_151 = var_558
                    
                    if ((*(*rcx_151 + 0x68))(rcx_151, &data_142d5b2a8, &pv_2, &var_4dc) s>= 0)
                        int16_t* pv = pv_2
                        
                        if (r12_1[7] != pv)
                            if (pv == 0 || *pv == 0)
                                rbx = nullptr
                            else
                                int64_t rbx_9 = -1
                                
                                do
                                    rbx_9 += 1
                                while (pv[rbx_9] != 0)
                                
                                rbx = zx.q(rbx_9.d + 1)
                            
                            r12_1[8].d = 0
                            int32_t rdx_58 = 0
                            
                            if (*(r12_1 + 0x44) != rbx.d)
                                sub_1405947f0(&r12_1[7], rbx.d)
                                rdx_58 = r12_1[8].d
                            
                            int32_t rax_169 = rdx_58 + rbx.d
                            r12_1[8].d = rax_169
                            
                            if (rax_169 s> *(r12_1 + 0x44))
                                sub_140594770(&r12_1[7])
                            
                            if (rbx.d != 0)
                                memcpy(r12_1[7], pv, rbx.d * 2)
                            
                            pv = pv_2
                        
                        CoTaskMemFree(pv)
                    
                    int64_t* rcx_156 = var_558
                    
                    if ((*(*rcx_156 + 0x68))(rcx_156, &data_142d5b2c8, &pv_2, &var_4dc) s>= 0)
                        int16_t* pv_1 = pv_2
                        
                        if (r12_1[9] != pv_1)
                            if (pv_1 == 0 || *pv_1 == 0)
                                rbx = nullptr
                            else
                                int64_t rbx_10 = -1
                                
                                do
                                    rbx_10 += 1
                                while (pv_1[rbx_10] != 0)
                                
                                rbx = zx.q(rbx_10.d + 1)
                            
                            r12_1[0xa].d = 0
                            
                            if (*(r12_1 + 0x54) != rbx.d)
                                sub_1405947f0(&r12_1[9], rbx.d)
                                r13 = r12_1[0xa].d
                            
                            int32_t rax_172 = rbx.d + r13
                            r12_1[0xa].d = rax_172
                            
                            if (rax_172 s> *(r12_1 + 0x54))
                                sub_140594770(&r12_1[9])
                            
                            if (rbx.d != 0)
                                memcpy(r12_1[9], pv_1, rbx.d * 2)
                            
                            pv_1 = pv_2
                        
                        CoTaskMemFree(pv_1)
                    
                    void var_160
                    void var_148
                    void var_130
                    int64_t* rdx_67
                    int32_t rsi_14
                    int32_t r15_9
                    
                    if (r12_1[0xa].d s> 1)
                        rdx_67 = sub_140aae420(&var_160, &r12_1[9])
                        r15_9 = r15_1 | 8
                        rsi_14 = arg2
                    else
                        void var_178
                        void* var_4b0_1 = &var_178
                        var_498 = zx.o(0)
                        int32_t var_594_10 = r15_1 | 1
                        rsi_14 = arg2
                        int64_t* rax_173 = sub_140aa1100(&var_178, rsi_14, nullptr, &var_498)
                        int32_t var_594_11 = r15_1 | 3
                        rdx_67 = sub_1405ea450(&var_148, 
                            sub_140a96390(&var_538, 
                                _vfprintf_p_l(&var_130, Unnamed Track (Stream {0})", 
                                FWmfMediaTracks")), rax_173)
                        r15_9 = r15_1 | 7
                    
                    int32_t var_594_12 = r15_9
                    int64_t rcx_168 = r12_1[1]
                    r12_1[1] = *rdx_67
                    *rdx_67 = rcx_168
                    int64_t rcx_169 = r12_1[2]
                    r12_1[2] = rdx_67[1]
                    rdx_67[1] = rcx_169
                    r12_1[3].d = rdx_67[2].d
                    
                    if ((r15_9.b & 8) != 0)
                        r15_9 &= 0xfffffff7
                        int32_t var_594_13 = r15_9
                        sub_1405970a0(&var_160)
                    
                    if ((r15_9.b & 4) != 0)
                        r15_9 &= 0xfffffffb
                        int32_t var_594_14 = r15_9
                        sub_1405970a0(&var_148)
                    
                    if ((r15_9.b & 2) != 0)
                        r15_9 &= 0xfffffffd
                        int32_t var_594_15 = r15_9
                        sub_1405970a0(&var_130)
                    
                    if ((r15_9.b & 1) != 0)
                        rbx = var_498:8.q
                        
                        if (rbx != 0)
                            rbx[1].d -= 1
                            
                            if (rbx[1].d == 1)
                                (**rbx)(rbx)
                                int32_t rdi_4 = *(rbx + 0xc)
                                *(rbx + 0xc) -= 1
                                
                                if (rdi_4 == 1)
                                    (*(*rbx + 8))(rbx, zx.q(rdi_4))
                    
                    int64_t* rcx_176 = *r12_1
                    int64_t* rax_184 = var_558
                    
                    if (rcx_176 != rax_184)
                        if (rax_184 != 0)
                            int64_t rdx_70 = *rax_184
                            (*(rdx_70 + 8))(rax_184, rdx_70)
                            rcx_176 = *r12_1
                            rax_184 = var_558
                        
                        if (rcx_176 != 0)
                            (*(*rcx_176 + 0x10))(rcx_176)
                            rax_184 = var_558
                        
                        *r12_1 = rax_184
                    
                    int64_t* rcx_178 = r12_1[6]
                    int64_t* rax_186 = var_568
                    
                    if (rcx_178 != rax_186)
                        if (rax_186 != 0)
                            int64_t rdx_71 = *rax_186
                            (*(rdx_71 + 8))(rax_186, rdx_71)
                            rcx_178 = r12_1[6]
                            rax_186 = var_568
                        
                        if (rcx_178 != 0)
                            (*(*rcx_178 + 0x10))(rcx_178)
                            rax_186 = var_568
                        
                        r12_1[6] = rax_186
                    
                    r12_1[0xb].b = var_57b_1
                    r12_1[0xc].d = rsi_14
                    rbx.b = 1
                    int64_t* rcx_179 = var_4c0
                    
                    if (rcx_179 != 0)
                        (*(*rcx_179 + 0x10))(rcx_179)
                else
                    sub_140a20ba0(r14, u"\tfailed to get track formats\n", 0x1d)
                    rbx.b = 0
        else
            sub_140a20ba0(r14, u"\tfailed to determine MajorType\n", 0x1f)
            rbx.b = 0
    else
        sub_140a20ba0(r14, u"\tno handler available\n", 0x16)
        rbx.b = 0
    
    int64_t* rcx_181 = var_568
    
    if (rcx_181 != 0)
        (*(*rcx_181 + 0x10))(rcx_181)
else
    sub_140a20ba0(r14, u"\tmissing stream descriptor\n", 0x1b)
    rbx.b = 0

int64_t* rcx_182 = var_558

if (rcx_182 != 0)
    int64_t rdx_72 = *rcx_182
    (*(rdx_72 + 0x10))(rcx_182, rdx_72)

__security_check_cookie(rax_1 ^ &var_5b8)
return zx.q(rbx.b)
