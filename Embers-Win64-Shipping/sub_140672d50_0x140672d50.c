// 函数: sub_140672d50
// 地址: 0x140672d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)
int32_t arg_10 = 0
void* rsi = nullptr
uint64_t result

if (rbx.d == 0x5c && *(arg1 + 0x54) == 0)
    *(arg1 + 0x54) = 1
    result.b = 1
    return result

char r8 = *(arg1 + 0x54)
int64_t rdx = sx.q(arg1[0xa].d)
int128_t zmm6
int128_t var_38 = zmm6
uint128_t zmm1

if (r8 != 0 || rdx.d == 1)
label_140675708:
    
    if (rdx.d u> 6)
        goto label_14067841a
    
    int64_t* rcx_586
    void**** rcx_589
    void*** r12_20
    void*** r12_21
    void*** r14_29
    void*** r14_30
    int64_t r15_27
    int64_t r15_28
    
    switch (rdx)
        case 0
            int32_t rdx_138 = arg1[9].d
            
            if (rdx_138 s<= 0)
            label_140677b80:
                arg1[0xb].d = 1
            else
                int64_t r8_45 = sx.q(*(arg1[8] + (sx.q(rdx_138) << 2) - 4))
                
                if (r8_45.d u<= 7)
                    switch (r8_45)
                        case 0
                            int64_t rcx_291
                            
                            if (rdx_138 s> 1)
                                result = sx.q(arg1[9].d)
                                rcx_291 = arg1[8]
                            
                            if (rdx_138 s> 1 && *(rcx_291 + (result << 2) - 8) == 2
                                    && *(rcx_291 + (result << 2) - 4) == 0)
                                arg1[0xa].d = 6
                                
                                if (arg1[7].d s<= 0)
                                    goto label_140677b80
                                
                                void* r15_16 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                                
                                if (r15_16 == 0 || *(r15_16 + 8) != 5)
                                    goto label_140677b80
                                
                                void*** rax_266 = j_sub_140a82f30(0x20)
                                void*** rbx_57
                                
                                if (rax_266 == 0)
                                    rbx_57 = nullptr
                                else
                                    void* rax_267 = j_sub_140a82f30(0x50)
                                    void* const rsi_16 = rax_267
                                    
                                    if (rax_267 == 0)
                                        rsi_16 = nullptr
                                    else
                                        *(rax_267 + 0x28) = 0
                                        __builtin_memset(rax_267, 0, 0x2c)
                                        *(rax_267 + 0x2c) = 0x80
                                        *(rax_267 + 0x30) = 0xffffffff
                                        __builtin_memset(rax_267 + 0x34, 0, 0x1c)
                                    
                                    void* const var_168 = rsi_16
                                    void*** var_160_1 = sub_140666aa0(rsi_16)
                                    rbx_57 = sub_140669820(rax_266, &var_168)
                                
                                void*** var_4a8 = rbx_57
                                void*** rax_270 = sub_140666ae0(rbx_57)
                                void*** r12_12 = var_4a8
                                
                                if (rax_270 != 0)
                                    rax_270[1].d += 1
                                
                                int64_t rsi_17 = sx.q(arg1[7].d)
                                int32_t rax_271 = (rsi_17 + 1).d
                                arg1[7].d = rax_271
                                
                                if (rax_271 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                void**** rax_274 = (rsi_17 << 4) + arg1[6]
                                *rax_274 = r12_12
                                rax_274[1] = rax_270
                                arg1[0xc].d += 0x30
                                void*** r12_13 = var_4a8
                                
                                if (rax_270 != 0)
                                    rax_270[1].d += 1
                                
                                int64_t r14_12 = sx.q(*(r15_16 + 0x18))
                                int32_t rax_275 = (r14_12 + 1).d
                                *(r15_16 + 0x18) = rax_275
                                
                                if (rax_275 s> *(r15_16 + 0x1c))
                                    sub_140610660(r15_16 + 0x10)
                                
                                void**** rax_278 = (r14_12 << 4) + *(r15_16 + 0x10)
                                *rax_278 = r12_13
                                rax_278[1] = rax_270
                                sub_140669d70(&var_4a8)
                            else if (rdx_138 s<= 2)
                                if (rdx_138 s<= 1)
                                    goto label_140677b80
                                
                            label_140675b04:
                                result = sx.q(arg1[9].d)
                                int64_t rcx_312 = arg1[8]
                                
                                if (*(rcx_312 + (result << 2) - 8) != 6
                                        || *(rcx_312 + (result << 2) - 4) != 0 || arg1[4] != 0)
                                    goto label_140677b80
                                
                                void* rax_292 = j_sub_140a82f30(0x50)
                                
                                if (rax_292 != 0)
                                    __builtin_memset(rax_292, 0, 0x50)
                                    rsi = sub_140669590(rax_292)
                                
                                void* const var_498 = rsi
                                void*** var_490 = sub_140666aa0(rsi)
                                
                                if (&arg1[4] != &var_498)
                                    arg1[4] = var_498
                                    var_498 = nullptr
                                    sub_14066a200(&arg1[5], &var_490)
                                
                                sub_140669d70(&var_498)
                                int64_t var_148 = arg1[4]
                                void* rax_297 = arg1[5]
                                void* var_140_1 = rax_297
                                
                                if (rax_297 != 0)
                                    *(rax_297 + 8) += 1
                                
                                void*** rax_298 = j_sub_140a82f30(0x20)
                                void*** rbx_62
                                
                                if (rax_298 == 0)
                                    rbx_62 = nullptr
                                else
                                    uint128_t zmm0_12 = var_148.o
                                    uint128_t var_48 = zmm0_12
                                    void* rcx_317 = _mm_bsrli_si128(zmm0_12, 8).q
                                    
                                    if (rcx_317 != 0)
                                        *(rcx_317 + 8) += 1
                                    
                                    rbx_62 = sub_140669820(rax_298, &var_48)
                                
                                void*** var_378 = rbx_62
                                void*** rax_300 = sub_140666ae0(rbx_62)
                                void*** r15_18 = var_378
                                
                                if (rax_300 != 0)
                                    rax_300[1].d += 1
                                
                                int64_t r14_13 = sx.q(arg1[7].d)
                                int32_t rax_301 = (r14_13 + 1).d
                                arg1[7].d = rax_301
                                
                                if (rax_301 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                void**** rax_304 = (r14_13 << 4) + arg1[6]
                                *rax_304 = r15_18
                                rax_304[1] = rax_300
                                arg1[0xc].d += 0x30
                                sub_140669d70(&var_148)
                                sub_140669d70(&var_378)
                                arg1[0xa].d = 6
                            else
                                int64_t rax_279 = sx.q(arg1[9].d)
                                int64_t rcx_300 = arg1[8]
                                
                                if (*(rcx_300 + (rax_279 << 2) - 0xc) != 0
                                        || *(rcx_300 + (rax_279 << 2) - 8) != 5
                                        || *(rcx_300 + (rax_279 << 2) - 4) != 0)
                                    goto label_140675b04
                                
                                result = zx.q(arg1[1].d)
                                int32_t rcx_301 = (result - 1).d
                                
                                if (result.d == 0)
                                    rcx_301 = 0
                                
                                if (rcx_301 s<= 0)
                                    goto label_140677b80
                                
                                arg1[0xa].d = 6
                                
                                if (arg1[7].d s<= 0)
                                    goto label_140677b80
                                
                                int64_t* r15_17 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                                
                                if (r15_17 == 0 || r15_17[1].d != 6)
                                    goto label_140677b80
                                
                                void*** rax_280 = j_sub_140a82f30(0x20)
                                void*** rbx_59
                                
                                if (rax_280 == 0)
                                    rbx_59 = nullptr
                                else
                                    void* rax_281 = j_sub_140a82f30(0x50)
                                    void* const rsi_19 = rax_281
                                    
                                    if (rax_281 == 0)
                                        rsi_19 = nullptr
                                    else
                                        *(rax_281 + 0x28) = 0
                                        __builtin_memset(rax_281, 0, 0x2c)
                                        *(rax_281 + 0x2c) = 0x80
                                        *(rax_281 + 0x30) = 0xffffffff
                                        __builtin_memset(rax_281 + 0x34, 0, 0x1c)
                                    
                                    void* const var_158 = rsi_19
                                    void*** var_150_1 = sub_140666aa0(rsi_19)
                                    rbx_59 = sub_140669820(rax_280, &var_158)
                                
                                void*** var_428 = rbx_59
                                void*** rax_284 = sub_140666ae0(rbx_59)
                                void*** r12_15 = var_428
                                
                                if (rax_284 != 0)
                                    rax_284[1].d += 1
                                
                                int64_t rsi_20 = sx.q(arg1[7].d)
                                int32_t rax_285 = (rsi_20 + 1).d
                                arg1[7].d = rax_285
                                
                                if (rax_285 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                int64_t* rax_288 = (rsi_20 << 4) + arg1[6]
                                *rax_288 = r12_15
                                rax_288[1] = rax_284
                                arg1[0xc].d += 0x30
                                uint128_t zmm0_11 = var_428.o
                                uint128_t var_a8 = zmm0_11
                                void* rax_289 = _mm_bsrli_si128(zmm0_11, 8).q
                                
                                if (rax_289 != 0)
                                    *(rax_289 + 8) += 1
                                
                                j_sub_140b746f0(*(**r15_17)(r15_17), arg1, &var_a8)
                                sub_140669d70(&var_a8)
                                sub_140669d70(&var_428)
                                arg1[1].d = 0
                        case 1
                            int64_t r8_49
                            
                            if (rdx_138 s> 1)
                                result = sx.q(arg1[9].d)
                                r8_49 = arg1[8]
                            
                            void* rax_307
                            int64_t* rcx_325
                            
                            if (rdx_138 s> 1 && *(r8_49 + (result << 2) - 8) == 0
                                    && *(r8_49 + (result << 2) - 4) == 1)
                                sub_1406793d0(&arg1[8], rdx_138 - 2, 2, 0)
                                arg1[0xa].d = 0
                                
                                if (arg1[7].d s<= 0)
                                    arg1[0xb].d = 1
                                else
                                    int64_t rdx_151 = arg1[6]
                                    int64_t r8_51 = sx.q(arg1[7].d) * 2
                                    void* var_278 = *(rdx_151 + (r8_51 << 3) - 0x10)
                                    int64_t var_270_1 = *(rdx_151 + (r8_51 << 3) - 8)
                                    *(rdx_151 + (r8_51 << 3) - 8) = 0
                                    *(rdx_151 + (r8_51 << 3) - 0x10) = 0
                                    sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                    rax_307 = var_278
                                    rcx_325 = &var_278
                                label_1406763d4:
                                    
                                    if (*(rax_307 + 8) != 6)
                                        sub_140669d70(rcx_325)
                                        arg1[0xb].d = 1
                                    else
                                        sub_140669d70(rcx_325)
                            else if (rdx_138 s<= 2)
                                arg1[0xb].d = 1
                            else
                                result = sx.q(arg1[9].d)
                                int64_t r8_52 = arg1[8]
                                
                                if (*(r8_52 + (result << 2) - 0xc) != 0
                                        || *(r8_52 + (result << 2) - 8) != 5
                                        || *(r8_52 + (result << 2) - 4) != 1)
                                    arg1[0xb].d = 1
                                else
                                    sub_1406793d0(&arg1[8], rdx_138 - 3, 3, 0)
                                    arg1[0xa].d = 0
                                    
                                    if (arg1[7].d s<= 0)
                                        arg1[0xb].d = 1
                                    else
                                        int64_t rax_308 = arg1[6]
                                        int64_t rcx_328 = sx.q(arg1[7].d) * 2
                                        void* r8_53 = *(rax_308 + (rcx_328 << 3) - 0x10)
                                        void* var_628 = r8_53
                                        void* rdx_155 = *(rax_308 + (rcx_328 << 3) - 8)
                                        
                                        if (rdx_155 != 0)
                                            *(rdx_155 + 8) += 1
                                            r8_53 = var_628
                                        
                                        if (*(r8_53 + 8) - 5 u<= 1)
                                            arg1[0xb].d = 1
                                            sub_140669d70(&var_628)
                                        else
                                            int64_t rcx_329 = arg1[6]
                                            int64_t rdx_157 = sx.q(arg1[7].d) * 2
                                            int64_t var_98 = *(rcx_329 + (rdx_157 << 3) - 0x10)
                                            int64_t var_90_1 = *(rcx_329 + (rdx_157 << 3) - 8)
                                            *(rcx_329 + (rdx_157 << 3) - 8) = 0
                                            *(rcx_329 + (rdx_157 << 3) - 0x10) = 0
                                            sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                            sub_140669d70(&var_98)
                                            
                                            if (arg1[7].d s<= 0)
                                                arg1[0xb].d = 1
                                                sub_140669d70(&var_628)
                                            else
                                                void* rbx_63 = var_628
                                                int32_t rcx_332 = *(rbx_63 + 8)
                                                int16_t* _String_60
                                                int64_t* r15_19
                                                
                                                if (rcx_332 == 1)
                                                    r15_19 = &arg1[2]
                                                    int16_t* _String_91
                                                    sub_140a35730(r15_19, &_String_91)
                                                    int16_t* _String_115 = &data_142d40450
                                                    int32_t var_130
                                                    
                                                    if (var_130 != 0)
                                                        _String_115 = _String_91
                                                    
                                                    if (sub_140a54510(_String_115, u"null") != 0)
                                                        arg1[0xb].d = 1
                                                    
                                                    _String_60 = _String_91
                                                label_140676203:
                                                    
                                                    if (_String_60 == 0)
                                                        goto label_14067620d
                                                    
                                                    sub_140a74f90(_String_60)
                                                label_14067620d:
                                                    int32_t rdx_174 = *(arg1 + 0x1c)
                                                    r15_19[1].d = 0
                                                    
                                                    if (*(r15_19 + 0xc) != rdx_174)
                                                        sub_1405947f0(r15_19, rdx_174)
                                                    
                                                    int64_t rax_336 = arg1[6]
                                                    int64_t rcx_362 = sx.q(arg1[7].d) * 2
                                                    int64_t* rbx_67 =
                                                        *(rax_336 + (rcx_362 << 3) - 0x10)
                                                    int64_t* var_268 = rbx_67
                                                    void* rdx_175 = *(rax_336 + (rcx_362 << 3) - 8)
                                                    void* var_260_1 = rdx_175
                                                    
                                                    if (rdx_175 != 0)
                                                        *(rdx_175 + 8) += 1
                                                        rbx_67 = var_268
                                                    
                                                    int32_t rax_337 = rbx_67[1].d
                                                    
                                                    if (rax_337 == 6)
                                                        int32_t rax_338 = arg1[1].d
                                                        int32_t rcx_363 = rax_338 - 1
                                                        
                                                        if (rax_338 == 0)
                                                            rcx_363 = 0
                                                        
                                                        if (rcx_363 s<= 0)
                                                            goto label_140676359
                                                        
                                                        int64_t var_418
                                                        sub_140596d10(&var_418, arg1)
                                                        int64_t var_410
                                                        int32_t rax_339 = var_410.d
                                                        
                                                        if (var_410:4.d != rax_339)
                                                            sub_1405947f0(&var_418, rax_339)
                                                        
                                                        int64_t* rcx_366 = var_268
                                                        j_sub_140b746f0(*(**rcx_366)(rcx_366), 
                                                            &var_418, &var_628)
                                                        arg1[0xc].d += var_410:4.d * 2
                                                        arg1[1].d = 0
                                                        int64_t rcx_368 = var_418
                                                        
                                                        if (rcx_368 == 0)
                                                            sub_140669d70(&var_268)
                                                            sub_140669d70(&var_628)
                                                        else
                                                            sub_140a74f90(rcx_368)
                                                            sub_140669d70(&var_268)
                                                            sub_140669d70(&var_628)
                                                    else if (rax_337 != 5)
                                                    label_140676359:
                                                        arg1[0xb].d = 1
                                                        sub_140669d70(&var_268)
                                                        sub_140669d70(&var_628)
                                                    else
                                                        int64_t rsi_22 = sx.q(rbx_67[3].d)
                                                        int32_t rax_344 = (rsi_22 + 1).d
                                                        rbx_67[3].d = rax_344
                                                        
                                                        if (rax_344 s> *(rbx_67 + 0x1c))
                                                            sub_140610660(&rbx_67[2])
                                                        
                                                        void** rcx_374 = (rsi_22 << 4) + rbx_67[2]
                                                        *rcx_374 = var_628
                                                        rcx_374[1] = rdx_155
                                                        
                                                        if (rdx_155 == 0)
                                                            sub_140669d70(&var_268)
                                                            sub_140669d70(&var_628)
                                                        else
                                                            *(rdx_155 + 8) += 1
                                                            sub_140669d70(&var_268)
                                                            sub_140669d70(&var_628)
                                                else
                                                    if (rcx_332 == 2)
                                                        r15_19 = &arg1[2]
                                                        sub_140597df0(rbx_63 + 0x10, r15_19)
                                                        int32_t rdx_172 = *(rbx_63 + 0x18)
                                                        
                                                        if (*(rbx_63 + 0x1c) != rdx_172)
                                                            sub_1405947f0(rbx_63 + 0x10, rdx_172)
                                                        
                                                        arg1[0xc].d += *(rbx_63 + 0x1c) * 2
                                                        goto label_14067620d
                                                    
                                                    if (rcx_332 == 3)
                                                        r15_19 = &arg1[2]
                                                        int16_t* _String_40
                                                        int128_t zmm0_13 =
                                                            sub_140a35730(r15_19, &_String_40)
                                                        arg_10.w = 0x65
                                                        int32_t rax_317 =
                                                            sub_14066d420(&_String_40, &arg_10)
                                                        int32_t var_540
                                                        
                                                        if (rax_317 != 0xffffffff)
                                                            int32_t rcx_342 = var_540
                                                            int32_t rdx_163 = rcx_342 - 1
                                                            
                                                            if (rcx_342 == 0)
                                                                rdx_163 = 0
                                                            
                                                            if (rdx_163 s<= rax_317 + 2)
                                                                arg1[0xb].d = 1
                                                                _String_60 = _String_40
                                                            else
                                                                int16_t* _String_73 = _String_40
                                                                int16_t* const _String_20 =
                                                                    &data_142d40450
                                                                int32_t rbx_64
                                                                int16_t* _String_102
                                                                
                                                                if (rcx_342 == 0)
                                                                    _String_102 = &data_142d40450
                                                                    rbx_64 = 0
                                                                else
                                                                    _String_102 = _String_73
                                                                    rbx_64 = rcx_342 - 1
                                                                
                                                                if (rax_317 s< 0)
                                                                    rbx_64 = 0
                                                                else if (rax_317 s< rbx_64)
                                                                    rbx_64 = rax_317
                                                                
                                                                int16_t* _String_28 = nullptr
                                                                int32_t var_670_1 = 0
                                                                
                                                                if (_String_102 != 0
                                                                        && *_String_102 != 0 && rbx_64 s> 0)
                                                                    sub_1405947f0(&_String_28, rbx_64 + 1)
                                                                    int32_t rax_322 = var_670_1 + 1 + rbx_64
                                                                    var_670_1 = rax_322
                                                                    
                                                                    if (rax_322 s> 0)
                                                                        sub_140594770(&_String_28)
                                                                    
                                                                    zmm0_13 = UnDecorator::getReferenceType(
                                                                        _String_28, _String_102, rbx_64 * 2)
                                                                    _String_28[sx.q(var_670_1) - 1] = 0
                                                                    rcx_342 = var_540
                                                                    _String_73 = _String_40
                                                                
                                                                int32_t rax_324 = rcx_342 - 1
                                                                
                                                                if (rcx_342 == 0)
                                                                    rax_324 = 0
                                                                
                                                                int32_t rdx_167
                                                                
                                                                if (rcx_342 == 0)
                                                                    rdx_167 = 0
                                                                    _String_73 = &data_142d40450
                                                                else
                                                                    rdx_167 = rcx_342 - 1
                                                                
                                                                int32_t rcx_347
                                                                
                                                                if (rax_324 - rax_317 - 1 s>= 0)
                                                                    rcx_347 = rdx_167
                                                                    
                                                                    if (rax_324 - rax_317 - 1 s< rdx_167)
                                                                        rcx_347 = rax_324 - rax_317 - 1
                                                                else
                                                                    rcx_347 = 0
                                                                
                                                                int32_t rdx_168 = 0
                                                                int16_t* _String_36 = nullptr
                                                                int32_t var_5a0_1 = 0
                                                                void* r14_15 = &_String_73[sx.q(rdx_167)
                                                                    - sx.q(rcx_347)]
                                                                int32_t rcx_350 = 0
                                                                int32_t var_59c_1 = 0
                                                                
                                                                if (r14_15 != 0 && *r14_15 != 0)
                                                                    int64_t rbx_65 = -1
                                                                    
                                                                    do
                                                                        rbx_65 += 1
                                                                    while (*(r14_15 + (rbx_65 << 1)) != 0)
                                                                    
                                                                    if (rbx_65.d + 1 s> 0)
                                                                        sub_1405947f0(&_String_36, rbx_65.d + 1)
                                                                        rcx_350 = var_59c_1
                                                                        rdx_168 = var_5a0_1
                                                                    
                                                                    int32_t rax_328 = rdx_168 + rbx_65.d + 1
                                                                    var_5a0_1 = rax_328
                                                                    
                                                                    if (rax_328 s> rcx_350)
                                                                        sub_140594770(&_String_36)
                                                                    
                                                                    zmm0_13 = UnDecorator::getReferenceType(
                                                                        _String_36, r14_15, (rbx_65.d + 1) * 2)
                                                                
                                                                char rax_329 =
                                                                    sub_140a24720(&_String_28)
                                                                char rax_330
                                                                
                                                                if (rax_329 != 0)
                                                                    rax_330 = sub_140a24720(&_String_36)
                                                                
                                                                if (rax_329 == 0 || rax_330 == 0)
                                                                    arg1[0xb].d = 1
                                                                else
                                                                    int16_t* const _String_9 =
                                                                        &data_142d40450
                                                                    
                                                                    if (var_670_1 != 0)
                                                                        _String_9 = _String_28
                                                                    
                                                                    wcstod(_String_9, nullptr)
                                                                    
                                                                    if (var_5a0_1 != 0)
                                                                        _String_20 = _String_36
                                                                    
                                                                    zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                                        _mm_cvtepi32_ps(zx.o(_wtoi(_String_20)))
                                                                            .d))
                                                                    zmm1.q = zmm1.q f* zmm0_13.q
                                                                    *(var_628 + 0x10) = zmm1.q
                                                                
                                                                int16_t* _String_61 = _String_36
                                                                
                                                                if (_String_61 != 0)
                                                                    sub_140a74f90(_String_61)
                                                                
                                                                int16_t* _String_62 = _String_28
                                                                
                                                                if (_String_62 != 0)
                                                                    sub_140a74f90(_String_62)
                                                                
                                                                _String_60 = _String_40
                                                        else if (sub_140a24720(&_String_40) == 0)
                                                            arg1[0xb].d = 1
                                                            _String_60 = _String_40
                                                        else
                                                            int16_t* _String_8 = &data_142d40450
                                                            
                                                            if (var_540 != 0)
                                                                _String_8 = _String_40
                                                            
                                                            wcstod(_String_8, nullptr)
                                                            *(var_628 + 0x10) = zmm0_13.q
                                                            _String_60 = _String_40
                                                        goto label_140676203
                                                    
                                                    if (rcx_332 == 4)
                                                        r15_19 = &arg1[2]
                                                        int16_t* _String_84
                                                        sub_140a35730(r15_19, &_String_84)
                                                        int16_t* const _String_124 = &data_142d40450
                                                        int16_t* const _String_114 = &data_142d40450
                                                        int32_t var_360
                                                        
                                                        if (var_360 != 0)
                                                            _String_114 = _String_84
                                                        
                                                        if (sub_140a54510(_String_114, true") != 0)
                                                            if (var_360 != 0)
                                                                _String_124 = _String_84
                                                            
                                                            if (sub_140a54510(_String_124, false")
                                                                    != 0)
                                                                arg1[0xb].d = 1
                                                                _String_60 = _String_84
                                                            else
                                                                *(var_628 + 0x10) = 0
                                                                _String_60 = _String_84
                                                        else
                                                            *(var_628 + 0x10) = 1
                                                            _String_60 = _String_84
                                                        
                                                        goto label_140676203
                                                    
                                                    arg1[0xb].d = 1
                                                    sub_140669d70(&var_628)
                                    
                                    if (arg1[7].d s> 0)
                                        int64_t rdx_180 = arg1[6]
                                        int64_t r8_60 = sx.q(arg1[7].d) * 2
                                        void* var_258 = *(rdx_180 + (r8_60 << 3) - 0x10)
                                        int64_t var_250_1 = *(rdx_180 + (r8_60 << 3) - 8)
                                        *(rdx_180 + (r8_60 << 3) - 8) = 0
                                        *(rdx_180 + (r8_60 << 3) - 0x10) = 0
                                        sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                        rax_307 = var_258
                                        rcx_325 = &var_258
                                        goto label_1406763d4
                                    
                                    arg1[0xb].d = 1
                            int32_t r8_61 = arg1[9].d
                            
                            if (r8_61 s<= 0 || *(arg1[8] + (sx.q(arg1[9].d) << 2) - 4) != 5)
                                goto label_140676e56
                            
                            sub_1406793d0(&arg1[8], r8_61 - 1, 1, 0)
                            arg1[0xa].d = 3
                        case 2
                            int64_t rcx_381
                            
                            if (rdx_138 s> 1)
                                result = sx.q(arg1[9].d)
                                rcx_381 = arg1[8]
                            
                            if (rdx_138 s<= 1 || *(rcx_381 + (result << 2) - 8) != 2
                                    || *(rcx_381 + (result << 2) - 4) != 2)
                                if (rdx_138 s<= 2)
                                    goto label_140677b80
                                
                                result = sx.q(arg1[9].d)
                                int64_t rcx_390 = arg1[8]
                                
                                if (*(rcx_390 + (result << 2) - 0xc) != 0
                                        || *(rcx_390 + (result << 2) - 8) != 5
                                        || *(rcx_390 + (result << 2) - 4) != 2)
                                    goto label_140677b80
                                
                                arg1[0xa].d = 5
                                result = zx.q(arg1[1].d)
                                int32_t rcx_391 = (result - 1).d
                                
                                if (result.d == 0)
                                    rcx_391 = 0
                                
                                if (rcx_391 s<= 0 || arg1[7].d s<= 0)
                                    goto label_140677b80
                                
                                int64_t* r14_18 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                                
                                if (r14_18 == 0 || r14_18[1].d != 6)
                                    goto label_140677b80
                                
                                int64_t var_238 = 0
                                int64_t var_230_1 = 0
                                void*** rax_360 = j_sub_140a82f30(0x20)
                                void*** rbx_71 = rax_360
                                
                                if (rax_360 == 0)
                                    rbx_71 = nullptr
                                else
                                    sub_140669740(rax_360, &var_238)
                                    *rbx_71 = &data_142d84d00
                                
                                void*** var_408 = rbx_71
                                void*** rax_361 = sub_140666ae0(rbx_71)
                                void*** r12_17 = var_408
                                
                                if (rax_361 != 0)
                                    rax_361[1].d += 1
                                
                                int64_t r15_22 = sx.q(arg1[7].d)
                                int32_t rax_362 = (r15_22 + 1).d
                                arg1[7].d = rax_362
                                
                                if (rax_362 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                void**** rax_365 = (r15_22 << 4) + arg1[6]
                                *rax_365 = r12_17
                                rax_365[1] = rax_361
                                arg1[0xc].d += 0x30
                                sub_140627040(&var_238)
                                uint128_t zmm0_15 = var_408.o
                                uint128_t var_88 = zmm0_15
                                void* rax_366 = _mm_bsrli_si128(zmm0_15, 8).q
                                
                                if (rax_366 != 0)
                                    *(rax_366 + 8) += 1
                                
                                j_sub_140b746f0(*(**r14_18)(r14_18), arg1, &var_88)
                                sub_140669d70(&var_88)
                                sub_140669d70(&var_408)
                                arg1[1].d = 0
                            else
                                arg1[0xa].d = 5
                                
                                if (arg1[7].d s<= 0)
                                    goto label_140677b80
                                
                                void* r14_16 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                                
                                if (r14_16 == 0 || *(r14_16 + 8) != 5)
                                    goto label_140677b80
                                
                                int64_t var_248 = 0
                                int64_t var_240_1 = 0
                                void*** rax_350 = j_sub_140a82f30(0x20)
                                void*** rbx_68 = rax_350
                                
                                if (rax_350 == 0)
                                    rbx_68 = nullptr
                                else
                                    sub_140669740(rax_350, &var_248)
                                    *rbx_68 = &data_142d84d00
                                
                                void*** var_488 = rbx_68
                                void*** rax_351 = sub_140666ae0(rbx_68)
                                void*** r12_16 = var_488
                                
                                if (rax_351 != 0)
                                    rax_351[1].d += 1
                                
                                int64_t r15_20 = sx.q(arg1[7].d)
                                int32_t rax_352 = (r15_20 + 1).d
                                arg1[7].d = rax_352
                                
                                if (rax_352 s> *(arg1 + 0x3c))
                                    sub_140610660(&arg1[6])
                                
                                void**** rax_355 = (r15_20 << 4) + arg1[6]
                                *rax_355 = r12_16
                                rax_355[1] = rax_351
                                arg1[0xc].d += 0x30
                                sub_140627040(&var_248)
                                void*** r15_21 = var_488
                                
                                if (rax_351 != 0)
                                    rax_351[1].d += 1
                                
                                int64_t r14_17 = sx.q(*(r14_16 + 0x18))
                                int32_t rax_356 = (r14_17 + 1).d
                                *(r14_16 + 0x18) = rax_356
                                
                                if (rax_356 s> *(r14_16 + 0x1c))
                                    sub_140610660(r14_16 + 0x10)
                                
                                void**** rax_359 = (r14_17 << 4) + *(r14_16 + 0x10)
                                *rax_359 = r15_21
                                rax_359[1] = rax_351
                                sub_140669d70(&var_488)
                        case 3
                            int64_t rcx_402
                            void* r14_19
                            
                            if (rdx_138 s> 1)
                                result = sx.q(arg1[9].d)
                                r14_19 = &arg1[8]
                                rcx_402 = *r14_19
                            
                            if (rdx_138 s<= 1 || *(rcx_402 + (result << 2) - 8) != 2
                                    || *(rcx_402 + (result << 2) - 4) != 3)
                                arg1[0xb].d = 1
                            label_140676e56:
                                arg1[0xa].d = 3
                                goto label_140677b87
                            
                            sub_1406793d0(r14_19, rdx_138 - 2, 2, 0)
                            arg1[0xa].d = 0
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            else
                                int64_t rax_369 = arg1[6]
                                int64_t rcx_405 = sx.q(arg1[7].d) * 2
                                void* r8_65 = *(rax_369 + (rcx_405 << 3) - 0x10)
                                void* var_618 = r8_65
                                void* rdx_194 = *(rax_369 + (rcx_405 << 3) - 8)
                                
                                if (rdx_194 != 0)
                                    *(rdx_194 + 8) += 1
                                    r8_65 = var_618
                                
                                if (*(r8_65 + 8) - 5 u<= 1)
                                    sub_140669d70(&var_618)
                                else
                                    int64_t rcx_406 = arg1[6]
                                    int64_t rdx_196 = sx.q(arg1[7].d) * 2
                                    int64_t var_78 = *(rcx_406 + (rdx_196 << 3) - 0x10)
                                    int64_t var_70_1 = *(rcx_406 + (rdx_196 << 3) - 8)
                                    *(rcx_406 + (rdx_196 << 3) - 8) = 0
                                    *(rcx_406 + (rdx_196 << 3) - 0x10) = 0
                                    sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                    sub_140669d70(&var_78)
                                    
                                    if (arg1[7].d s<= 0)
                                        arg1[0xb].d = 1
                                        sub_140669d70(&var_618)
                                    else
                                        void* rbx_73 = var_618
                                        int32_t rcx_409 = *(rbx_73 + 8)
                                        int64_t* r13_3
                                        
                                        if (rcx_409 == 1)
                                            r13_3 = &arg1[2]
                                            int16_t* var_128
                                            sub_140a35730(r13_3, &var_128)
                                            int16_t* const rcx_450 = &data_142d40450
                                            int32_t var_120
                                            
                                            if (var_120 != 0)
                                                rcx_450 = var_128
                                            
                                            if (sub_140a54510(rcx_450, u"null") != 0)
                                                arg1[0xb].d = 1
                                            
                                            int16_t* rcx_451 = var_128
                                            
                                            if (rcx_451 != 0)
                                                sub_140a74f90(rcx_451)
                                            
                                        label_140676b83:
                                            int32_t rdx_210 = *(arg1 + 0x1c)
                                            r13_3[1].d = 0
                                            
                                            if (*(r13_3 + 0xc) != rdx_210)
                                                sub_1405947f0(r13_3, rdx_210)
                                            
                                            int64_t rax_394 = arg1[6]
                                            int64_t rcx_438 = sx.q(arg1[7].d) * 2
                                            int64_t* rbx_77 = *(rax_394 + (rcx_438 << 3) - 0x10)
                                            int64_t* var_228 = rbx_77
                                            void* rdx_211 = *(rax_394 + (rcx_438 << 3) - 8)
                                            void* var_220_1 = rdx_211
                                            
                                            if (rdx_211 != 0)
                                                *(rdx_211 + 8) += 1
                                                rbx_77 = var_228
                                            
                                            int32_t rax_395 = rbx_77[1].d
                                            
                                            if (rax_395 == 6)
                                                int32_t rax_396 = arg1[1].d
                                                int32_t rcx_439 = rax_396 - 1
                                                
                                                if (rax_396 == 0)
                                                    rcx_439 = 0
                                                
                                                if (rcx_439 s<= 0)
                                                    arg1[0xb].d = 1
                                                    sub_140669d70(&var_228)
                                                    sub_140669d70(&var_618)
                                                else
                                                    int64_t var_3f8
                                                    sub_140596d10(&var_3f8, arg1)
                                                    int64_t var_3f0
                                                    int32_t rax_397 = var_3f0.d
                                                    
                                                    if (var_3f0:4.d != rax_397)
                                                        sub_1405947f0(&var_3f8, rax_397)
                                                    
                                                    int64_t* rcx_442 = var_228
                                                    j_sub_140b746f0(*(**rcx_442)(rcx_442), 
                                                        &var_3f8, &var_618)
                                                    arg1[0xc].d += var_3f0:4.d * 2
                                                    arg1[1].d = 0
                                                    int64_t rcx_444 = var_3f8
                                                    
                                                    if (rcx_444 == 0)
                                                        sub_140669d70(&var_228)
                                                        sub_140669d70(&var_618)
                                                    else
                                                        sub_140a74f90(rcx_444)
                                                        sub_140669d70(&var_228)
                                                        sub_140669d70(&var_618)
                                            else if (rax_395 != 5)
                                                arg1[0xb].d = 1
                                                sub_140669d70(&var_228)
                                                sub_140669d70(&var_618)
                                            else
                                                int64_t rsi_25 = sx.q(rbx_77[3].d)
                                                int32_t rax_405 = (rsi_25 + 1).d
                                                rbx_77[3].d = rax_405
                                                
                                                if (rax_405 s> *(rbx_77 + 0x1c))
                                                    sub_140610660(&rbx_77[2])
                                                
                                                void** rcx_457 = (rsi_25 << 4) + rbx_77[2]
                                                *rcx_457 = var_618
                                                rcx_457[1] = rdx_194
                                                
                                                if (rdx_194 == 0)
                                                    sub_140669d70(&var_228)
                                                    sub_140669d70(&var_618)
                                                else
                                                    *(rdx_194 + 8) += 1
                                                    sub_140669d70(&var_228)
                                                    sub_140669d70(&var_618)
                                        else
                                            if (rcx_409 == 2)
                                                r13_3 = &arg1[2]
                                                sub_140597df0(rbx_73 + 0x10, r13_3)
                                                int32_t rdx_216 = *(rbx_73 + 0x18)
                                                
                                                if (*(rbx_73 + 0x1c) != rdx_216)
                                                    sub_1405947f0(rbx_73 + 0x10, rdx_216)
                                                
                                                arg1[0xc].d += *(rbx_73 + 0x1c) * 2
                                                goto label_140676b83
                                            
                                            if (rcx_409 == 3)
                                                r13_3 = &arg1[2]
                                                int16_t* _String_41
                                                int128_t zmm0_16 = sub_140a35730(r13_3, &_String_41)
                                                arg_10.w = 0x65
                                                int32_t rax_378 =
                                                    sub_14066d420(&_String_41, &arg_10)
                                                int32_t var_530
                                                
                                                if (rax_378 != 0xffffffff)
                                                    int32_t rcx_421 = var_530
                                                    int32_t rdx_202 = rcx_421 - 1
                                                    
                                                    if (rcx_421 == 0)
                                                        rdx_202 = 0
                                                    
                                                    if (rdx_202 s<= rax_378 + 2)
                                                        arg1[0xb].d = 1
                                                    else
                                                        int16_t* _String_74 = _String_41
                                                        int16_t* const _String_21 = &data_142d40450
                                                        int32_t rbx_74
                                                        int16_t* _String_105
                                                        
                                                        if (rcx_421 == 0)
                                                            _String_105 = &data_142d40450
                                                            rbx_74 = 0
                                                        else
                                                            _String_105 = _String_74
                                                            rbx_74 = rcx_421 - 1
                                                        
                                                        if (rax_378 s< 0)
                                                            rbx_74 = 0
                                                        else if (rax_378 s< rbx_74)
                                                            rbx_74 = rax_378
                                                        
                                                        int16_t* _String_29 = nullptr
                                                        int32_t var_660_1 = 0
                                                        
                                                        if (_String_105 != 0 && *_String_105 != 0
                                                                && rbx_74 s> 0)
                                                            sub_1405947f0(&_String_29, rbx_74 + 1)
                                                            int32_t rax_383 = var_660_1 + 1 + rbx_74
                                                            var_660_1 = rax_383
                                                            
                                                            if (rax_383 s> 0)
                                                                sub_140594770(&_String_29)
                                                            
                                                            zmm0_16 = UnDecorator::getReferenceType(
                                                                _String_29, _String_105, rbx_74 * 2)
                                                            _String_29[sx.q(var_660_1) - 1] = 0
                                                            rcx_421 = var_530
                                                            _String_74 = _String_41
                                                        
                                                        int32_t rax_385 = rcx_421 - 1
                                                        
                                                        if (rcx_421 == 0)
                                                            rax_385 = 0
                                                        
                                                        int32_t rcx_426
                                                        
                                                        if (rcx_421 == 0)
                                                            rcx_426 = 0
                                                            _String_74 = &data_142d40450
                                                        else
                                                            rcx_426 = rcx_421 - 1
                                                        
                                                        int32_t rdx_206
                                                        
                                                        if (rax_385 - rax_378 - 1 s>= 0)
                                                            rdx_206 = rcx_426
                                                            
                                                            if (rax_385 - rax_378 - 1 s< rcx_426)
                                                                rdx_206 = rax_385 - rax_378 - 1
                                                        else
                                                            rdx_206 = 0
                                                        
                                                        int32_t rdx_207 = 0
                                                        int16_t* _String_37 = nullptr
                                                        int32_t var_590_1 = 0
                                                        void* r14_21 = &_String_74[sx.q(rcx_426)
                                                            - sx.q(rdx_206)]
                                                        int32_t rcx_429 = 0
                                                        int32_t var_58c_1 = 0
                                                        
                                                        if (r14_21 != 0 && *r14_21 != 0)
                                                            int64_t rbx_75 = -1
                                                            
                                                            do
                                                                rbx_75 += 1
                                                            while (*(r14_21 + (rbx_75 << 1)) != 0)
                                                            
                                                            if (rbx_75.d + 1 s> 0)
                                                                sub_1405947f0(&_String_37, rbx_75.d + 1)
                                                                rcx_429 = var_58c_1
                                                                rdx_207 = var_590_1
                                                            
                                                            int32_t rax_389 = rdx_207 + rbx_75.d + 1
                                                            var_590_1 = rax_389
                                                            
                                                            if (rax_389 s> rcx_429)
                                                                sub_140594770(&_String_37)
                                                            
                                                            zmm0_16 = UnDecorator::getReferenceType(
                                                                _String_37, r14_21, (rbx_75.d + 1) * 2)
                                                        
                                                        char rax_390 = sub_140a24720(&_String_29)
                                                        char rax_391
                                                        
                                                        if (rax_390 != 0)
                                                            rax_391 = sub_140a24720(&_String_37)
                                                        
                                                        if (rax_390 == 0 || rax_391 == 0)
                                                            arg1[0xb].d = 1
                                                        else
                                                            int16_t* const _String_11 =
                                                                &data_142d40450
                                                            
                                                            if (var_660_1 != 0)
                                                                _String_11 = _String_29
                                                            
                                                            wcstod(_String_11, nullptr)
                                                            
                                                            if (var_590_1 != 0)
                                                                _String_21 = _String_37
                                                            
                                                            zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                                _mm_cvtepi32_ps(zx.o(_wtoi(_String_21)))
                                                                    .d))
                                                            zmm1.q = zmm1.q f* zmm0_16.q
                                                            *(var_618 + 0x10) = zmm1.q
                                                        
                                                        int16_t* _String_63 = _String_37
                                                        
                                                        if (_String_63 != 0)
                                                            sub_140a74f90(_String_63)
                                                        
                                                        int16_t* _String_64 = _String_29
                                                        
                                                        if (_String_64 != 0)
                                                            sub_140a74f90(_String_64)
                                                else if (sub_140a24720(&_String_41) == 0)
                                                    arg1[0xb].d = 1
                                                else
                                                    int16_t* const _String_10 = &data_142d40450
                                                    
                                                    if (var_530 != 0)
                                                        _String_10 = _String_41
                                                    
                                                    wcstod(_String_10, nullptr)
                                                    *(var_618 + 0x10) = zmm0_16.q
                                                int16_t* _String_65 = _String_41
                                                
                                                if (_String_65 != 0)
                                                    sub_140a74f90(_String_65)
                                                
                                                r14_19 = &arg1[8]
                                                goto label_140676b83
                                            
                                            if (rcx_409 == 4)
                                                r13_3 = &arg1[2]
                                                int16_t* var_358
                                                sub_140a35730(r13_3, &var_358)
                                                int16_t* const rsi_24 = &data_142d40450
                                                int16_t* const rcx_415 = &data_142d40450
                                                int32_t var_350
                                                
                                                if (var_350 != 0)
                                                    rcx_415 = var_358
                                                
                                                if (sub_140a54510(rcx_415, u"true") != 0)
                                                    if (var_350 != 0)
                                                        rsi_24 = var_358
                                                    
                                                    if (sub_140a54510(rsi_24, u"false") != 0)
                                                        arg1[0xb].d = 1
                                                    else
                                                        *(var_618 + 0x10) = 0
                                                else
                                                    *(var_618 + 0x10) = 1
                                                
                                                int16_t* rcx_417 = var_358
                                                
                                                if (rcx_417 != 0)
                                                    sub_140a74f90(rcx_417)
                                                
                                                goto label_140676b83
                                            
                                            arg1[0xb].d = 1
                                            sub_140669d70(&var_618)
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            else
                                int64_t rdx_219 = arg1[6]
                                int64_t r8_72 = sx.q(arg1[7].d) * 2
                                void* var_218 = *(rdx_219 + (r8_72 << 3) - 0x10)
                                int64_t var_210_1 = *(rdx_219 + (r8_72 << 3) - 8)
                                *(rdx_219 + (r8_72 << 3) - 8) = 0
                                *(rdx_219 + (r8_72 << 3) - 0x10) = 0
                                sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                int64_t* rcx_463 = &var_218
                                
                                if (*(var_218 + 8) != 5)
                                    sub_140669d70(rcx_463)
                                    arg1[0xb].d = 1
                                else
                                    sub_140669d70(rcx_463)
                            
                            int32_t r8_73 = arg1[9].d
                            
                            if (r8_73 s<= 0 || *(*r14_19 + (sx.q(*(r14_19 + 8)) << 2) - 4) != 5)
                                goto label_140676e56
                            
                            sub_1406793d0(r14_19, r8_73 - 1, 1, 0)
                            arg1[0xa].d = 3
                        case 4
                            if (rdx_138 s<= 2)
                                if (rdx_138 s<= 1)
                                    goto label_140677b80
                                
                            label_1406774b8:
                                int64_t rax_453 = sx.q(arg1[9].d)
                                int64_t r8_81 = arg1[8]
                                
                                if (*(r8_81 + (rax_453 << 2) - 8) != 0
                                        || *(r8_81 + (rax_453 << 2) - 4) != 4)
                                    result = sx.q(arg1[9].d)
                                    int64_t r8_82 = arg1[8]
                                    
                                    if (*(r8_82 + (result << 2) - 8) != 2
                                            || *(r8_82 + (result << 2) - 4) != 4)
                                        goto label_140677b80
                                    
                                    sub_1406793d0(&arg1[8], rdx_138 - 1, 1, 0)
                                    arg1[0xa].d = 0
                                    
                                    if (arg1[7].d s<= 0)
                                        arg1[0xb].d = 1
                                        arg1[0xa].d = 5
                                    else
                                        int64_t rax_454 = arg1[6]
                                        int64_t rcx_518 = sx.q(arg1[7].d) * 2
                                        void* r8_83 = *(rax_454 + (rcx_518 << 3) - 0x10)
                                        void* var_5f8 = r8_83
                                        void* rdx_252 = *(rax_454 + (rcx_518 << 3) - 8)
                                        
                                        if (rdx_252 != 0)
                                            *(rdx_252 + 8) += 1
                                            r8_83 = var_5f8
                                        
                                        if (*(r8_83 + 8) - 5 u> 1)
                                            int64_t rcx_519 = arg1[6]
                                            int64_t rdx_254 = sx.q(arg1[7].d) * 2
                                            int64_t var_58 = *(rcx_519 + (rdx_254 << 3) - 0x10)
                                            int64_t var_50_1 = *(rcx_519 + (rdx_254 << 3) - 8)
                                            *(rcx_519 + (rdx_254 << 3) - 8) = 0
                                            *(rcx_519 + (rdx_254 << 3) - 0x10) = 0
                                            sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                            sub_140669d70(&var_58)
                                            
                                            if (arg1[7].d s<= 0)
                                                arg1[0xb].d = 1
                                            else
                                                void* rbx_83 = var_5f8
                                                int32_t rcx_522 = *(rbx_83 + 8)
                                                int16_t* _String_69
                                                void* r15_24
                                                
                                                if (rcx_522 == 1)
                                                    r15_24 = &arg1[2]
                                                    int16_t* _String_93
                                                    sub_140a35730(r15_24, &_String_93)
                                                    int16_t* _String_119 = &data_142d40450
                                                    int32_t var_100
                                                    
                                                    if (var_100 != 0)
                                                        _String_119 = _String_93
                                                    
                                                    if (sub_140a54510(_String_119, u"null") != 0)
                                                        arg1[0xb].d = 1
                                                    
                                                    _String_69 = _String_93
                                                label_1406779b3:
                                                    
                                                    if (_String_69 == 0)
                                                        goto label_1406779bd
                                                    
                                                    sub_140a74f90(_String_69)
                                                label_1406779bd:
                                                    int32_t rdx_271 = *(arg1 + 0x1c)
                                                    *(r15_24 + 8) = 0
                                                    
                                                    if (*(r15_24 + 0xc) != rdx_271)
                                                        sub_1405947f0(r15_24, rdx_271)
                                                    
                                                    int64_t rax_482 = arg1[6]
                                                    int64_t rcx_552 = sx.q(arg1[7].d) * 2
                                                    int64_t* rbx_87 =
                                                        *(rax_482 + (rcx_552 << 3) - 0x10)
                                                    int64_t* var_1f8 = rbx_87
                                                    void* rdx_272 = *(rax_482 + (rcx_552 << 3) - 8)
                                                    void* var_1f0_1 = rdx_272
                                                    
                                                    if (rdx_272 != 0)
                                                        *(rdx_272 + 8) += 1
                                                        rbx_87 = var_1f8
                                                    
                                                    int32_t rax_483 = rbx_87[1].d
                                                    
                                                    if (rax_483 == 6)
                                                        int32_t rax_484 = arg1[1].d
                                                        int32_t rcx_553 = rax_484 - 1
                                                        
                                                        if (rax_484 == 0)
                                                            rcx_553 = 0
                                                        
                                                        if (rcx_553 s<= 0)
                                                            arg1[0xb].d = 1
                                                            sub_140669d70(&var_1f8)
                                                        else
                                                            int64_t var_3d8
                                                            sub_140596d10(&var_3d8, arg1)
                                                            int64_t var_3d0
                                                            int32_t rax_485 = var_3d0.d
                                                            
                                                            if (var_3d0:4.d != rax_485)
                                                                sub_1405947f0(&var_3d8, rax_485)
                                                            
                                                            int64_t* rcx_556 = var_1f8
                                                            j_sub_140b746f0(*(**rcx_556)(rcx_556), 
                                                                &var_3d8, &var_5f8)
                                                            arg1[0xc].d += var_3d0:4.d * 2
                                                            arg1[1].d = 0
                                                            int64_t rcx_558 = var_3d8
                                                            
                                                            if (rcx_558 == 0)
                                                                sub_140669d70(&var_1f8)
                                                            else
                                                                sub_140a74f90(rcx_558)
                                                                sub_140669d70(&var_1f8)
                                                    else if (rax_483 != 5)
                                                        arg1[0xb].d = 1
                                                        sub_140669d70(&var_1f8)
                                                    else
                                                        int64_t rsi_27 = sx.q(rbx_87[3].d)
                                                        int32_t rax_490 = (rsi_27 + 1).d
                                                        rbx_87[3].d = rax_490
                                                        
                                                        if (rax_490 s> *(rbx_87 + 0x1c))
                                                            sub_140610660(&rbx_87[2])
                                                        
                                                        void** rcx_563 = (rsi_27 << 4) + rbx_87[2]
                                                        *rcx_563 = var_5f8
                                                        rcx_563[1] = rdx_252
                                                        
                                                        if (rdx_252 == 0)
                                                            sub_140669d70(&var_1f8)
                                                        else
                                                            *(rdx_252 + 8) += 1
                                                            sub_140669d70(&var_1f8)
                                                else
                                                    if (rcx_522 == 2)
                                                        r15_24 = &arg1[2]
                                                        sub_140597df0(rbx_83 + 0x10, r15_24)
                                                        int32_t rdx_269 = *(rbx_83 + 0x18)
                                                        
                                                        if (*(rbx_83 + 0x1c) != rdx_269)
                                                            sub_1405947f0(rbx_83 + 0x10, rdx_269)
                                                        
                                                        arg1[0xc].d += *(rbx_83 + 0x1c) * 2
                                                        goto label_1406779bd
                                                    
                                                    if (rcx_522 == 3)
                                                        r15_24 = &arg1[2]
                                                        int16_t* _String_43
                                                        int128_t zmm0_20 =
                                                            sub_140a35730(r15_24, &_String_43)
                                                        arg_10.w = 0x65
                                                        int32_t rax_463 =
                                                            sub_14066d420(&_String_43, &arg_10)
                                                        int32_t var_510
                                                        
                                                        if (rax_463 != 0xffffffff)
                                                            int32_t rcx_532 = var_510
                                                            int32_t rdx_260 = rcx_532 - 1
                                                            
                                                            if (rcx_532 == 0)
                                                                rdx_260 = 0
                                                            
                                                            if (rdx_260 s<= rax_463 + 2)
                                                                arg1[0xb].d = 1
                                                                _String_69 = _String_43
                                                            else
                                                                int16_t* _String_76 = _String_43
                                                                int16_t* const _String_23 =
                                                                    &data_142d40450
                                                                int32_t rbx_84
                                                                int16_t* _String_104
                                                                
                                                                if (rcx_532 == 0)
                                                                    _String_104 = &data_142d40450
                                                                    rbx_84 = 0
                                                                else
                                                                    _String_104 = _String_76
                                                                    rbx_84 = rcx_532 - 1
                                                                
                                                                if (rax_463 s< 0)
                                                                    rbx_84 = 0
                                                                else if (rax_463 s< rbx_84)
                                                                    rbx_84 = rax_463
                                                                
                                                                int16_t* _String_31 = nullptr
                                                                int32_t var_640_1 = 0
                                                                
                                                                if (_String_104 != 0
                                                                        && *_String_104 != 0 && rbx_84 s> 0)
                                                                    sub_1405947f0(&_String_31, rbx_84 + 1)
                                                                    int32_t rax_468 = var_640_1 + 1 + rbx_84
                                                                    var_640_1 = rax_468
                                                                    
                                                                    if (rax_468 s> 0)
                                                                        sub_140594770(&_String_31)
                                                                    
                                                                    zmm0_20 = UnDecorator::getReferenceType(
                                                                        _String_31, _String_104, rbx_84 * 2)
                                                                    _String_31[sx.q(var_640_1) - 1] = 0
                                                                    rcx_532 = var_510
                                                                    _String_76 = _String_43
                                                                
                                                                int32_t rax_470 = rcx_532 - 1
                                                                
                                                                if (rcx_532 == 0)
                                                                    rax_470 = 0
                                                                
                                                                int32_t rcx_537
                                                                
                                                                if (rcx_532 == 0)
                                                                    rcx_537 = 0
                                                                    _String_76 = &data_142d40450
                                                                else
                                                                    rcx_537 = rcx_532 - 1
                                                                
                                                                int32_t rdx_264
                                                                
                                                                if (rax_470 - rax_463 - 1 s>= 0)
                                                                    rdx_264 = rcx_537
                                                                    
                                                                    if (rax_470 - rax_463 - 1 s< rcx_537)
                                                                        rdx_264 = rax_470 - rax_463 - 1
                                                                else
                                                                    rdx_264 = 0
                                                                
                                                                int32_t rdx_265 = 0
                                                                int16_t* _String_39 = nullptr
                                                                int32_t var_570_1 = 0
                                                                void* r14_25 = &_String_76[sx.q(rcx_537)
                                                                    - sx.q(rdx_264)]
                                                                int32_t rcx_540 = 0
                                                                int32_t var_56c_1 = 0
                                                                
                                                                if (r14_25 != 0 && *r14_25 != 0)
                                                                    int64_t rbx_85 = -1
                                                                    
                                                                    do
                                                                        rbx_85 += 1
                                                                    while (*(r14_25 + (rbx_85 << 1)) != 0)
                                                                    
                                                                    if (rbx_85.d + 1 s> 0)
                                                                        sub_1405947f0(&_String_39, rbx_85.d + 1)
                                                                        rcx_540 = var_56c_1
                                                                        rdx_265 = var_570_1
                                                                    
                                                                    int32_t rax_474 = rdx_265 + rbx_85.d + 1
                                                                    var_570_1 = rax_474
                                                                    
                                                                    if (rax_474 s> rcx_540)
                                                                        sub_140594770(&_String_39)
                                                                    
                                                                    zmm0_20 = UnDecorator::getReferenceType(
                                                                        _String_39, r14_25, (rbx_85.d + 1) * 2)
                                                                
                                                                char rax_475 =
                                                                    sub_140a24720(&_String_31)
                                                                char rax_476
                                                                
                                                                if (rax_475 != 0)
                                                                    rax_476 = sub_140a24720(&_String_39)
                                                                
                                                                if (rax_475 == 0 || rax_476 == 0)
                                                                    arg1[0xb].d = 1
                                                                else
                                                                    int16_t* const _String_15 =
                                                                        &data_142d40450
                                                                    
                                                                    if (var_640_1 != 0)
                                                                        _String_15 = _String_31
                                                                    
                                                                    wcstod(_String_15, nullptr)
                                                                    
                                                                    if (var_570_1 != 0)
                                                                        _String_23 = _String_39
                                                                    
                                                                    zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                                        _mm_cvtepi32_ps(zx.o(_wtoi(_String_23)))
                                                                            .d))
                                                                    zmm1.q = zmm1.q f* zmm0_20.q
                                                                    *(var_5f8 + 0x10) = zmm1.q
                                                                
                                                                int16_t* _String_70 = _String_39
                                                                
                                                                if (_String_70 != 0)
                                                                    sub_140a74f90(_String_70)
                                                                
                                                                int16_t* _String_71 = _String_31
                                                                
                                                                if (_String_71 != 0)
                                                                    sub_140a74f90(_String_71)
                                                                
                                                                _String_69 = _String_43
                                                        else if (sub_140a24720(&_String_43) == 0)
                                                            arg1[0xb].d = 1
                                                            _String_69 = _String_43
                                                        else
                                                            int16_t* _String_14 = &data_142d40450
                                                            
                                                            if (var_510 != 0)
                                                                _String_14 = _String_43
                                                            
                                                            wcstod(_String_14, nullptr)
                                                            *(var_5f8 + 0x10) = zmm0_20.q
                                                            _String_69 = _String_43
                                                        goto label_1406779b3
                                                    
                                                    if (rcx_522 == 4)
                                                        r15_24 = &arg1[2]
                                                        int16_t* _String_86
                                                        sub_140a35730(r15_24, &_String_86)
                                                        int16_t* const _String_126 = &data_142d40450
                                                        int16_t* const _String_118 = &data_142d40450
                                                        int32_t var_330
                                                        
                                                        if (var_330 != 0)
                                                            _String_118 = _String_86
                                                        
                                                        if (sub_140a54510(_String_118, true") != 0)
                                                            if (var_330 != 0)
                                                                _String_126 = _String_86
                                                            
                                                            if (sub_140a54510(_String_126, false")
                                                                    != 0)
                                                                arg1[0xb].d = 1
                                                                _String_69 = _String_86
                                                            else
                                                                *(var_5f8 + 0x10) = 0
                                                                _String_69 = _String_86
                                                        else
                                                            *(var_5f8 + 0x10) = 1
                                                            _String_69 = _String_86
                                                        
                                                        goto label_1406779b3
                                                    
                                                    arg1[0xb].d = 1
                                        
                                        sub_140669d70(&var_5f8)
                                        arg1[0xa].d = 5
                                else
                                    sub_1406793d0(&arg1[8], rdx_138 - 1, 1, 0)
                                    arg1[0xa].d = 6
                            else
                                int64_t rax_412 = sx.q(arg1[9].d)
                                int64_t r8_74 = arg1[8]
                                
                                if (*(r8_74 + (rax_412 << 2) - 0xc) != 0
                                        || *(r8_74 + (rax_412 << 2) - 8) != 5
                                        || *(r8_74 + (rax_412 << 2) - 4) != 4)
                                    goto label_1406774b8
                                
                                sub_1406793d0(&arg1[8], rdx_138 - 2, 2, 0)
                                arg1[0xa].d = 0
                                
                                if (arg1[7].d s<= 0)
                                    arg1[0xb].d = 1
                                    arg1[0xa].d = 6
                                else
                                    int64_t rax_413 = arg1[6]
                                    int64_t rcx_467 = sx.q(arg1[7].d) * 2
                                    void* r8_75 = *(rax_413 + (rcx_467 << 3) - 0x10)
                                    void* var_608 = r8_75
                                    void* rdx_225 = *(rax_413 + (rcx_467 << 3) - 8)
                                    
                                    if (rdx_225 != 0)
                                        *(rdx_225 + 8) += 1
                                        r8_75 = var_608
                                    
                                    if (*(r8_75 + 8) - 5 u> 1)
                                        int64_t rcx_468 = arg1[6]
                                        int64_t rdx_227 = sx.q(arg1[7].d) * 2
                                        int64_t var_68 = *(rcx_468 + (rdx_227 << 3) - 0x10)
                                        int64_t var_60_1 = *(rcx_468 + (rdx_227 << 3) - 8)
                                        *(rcx_468 + (rdx_227 << 3) - 8) = 0
                                        *(rcx_468 + (rdx_227 << 3) - 0x10) = 0
                                        sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                        sub_140669d70(&var_68)
                                        
                                        if (arg1[7].d s<= 0)
                                            arg1[0xb].d = 1
                                        else
                                            void* rbx_78 = var_608
                                            int32_t rcx_471 = *(rbx_78 + 8)
                                            int16_t* _String_66
                                            int64_t* r15_23
                                            
                                            if (rcx_471 == 1)
                                                r15_23 = &arg1[2]
                                                int16_t* _String_92
                                                sub_140a35730(r15_23, &_String_92)
                                                int16_t* _String_117 = &data_142d40450
                                                int32_t var_110
                                                
                                                if (var_110 != 0)
                                                    _String_117 = _String_92
                                                
                                                if (sub_140a54510(_String_117, u"null") != 0)
                                                    arg1[0xb].d = 1
                                                
                                                _String_66 = _String_92
                                            label_140677341:
                                                
                                                if (_String_66 == 0)
                                                    goto label_14067734b
                                                
                                                sub_140a74f90(_String_66)
                                            label_14067734b:
                                                int32_t rdx_244 = *(arg1 + 0x1c)
                                                r15_23[1].d = 0
                                                
                                                if (*(r15_23 + 0xc) != rdx_244)
                                                    sub_1405947f0(r15_23, rdx_244)
                                                
                                                int64_t rax_441 = arg1[6]
                                                int64_t rcx_501 = sx.q(arg1[7].d) * 2
                                                int64_t* rbx_82 = *(rax_441 + (rcx_501 << 3) - 0x10)
                                                int64_t* var_208 = rbx_82
                                                void* rdx_245 = *(rax_441 + (rcx_501 << 3) - 8)
                                                void* var_200_1 = rdx_245
                                                
                                                if (rdx_245 != 0)
                                                    *(rdx_245 + 8) += 1
                                                    rbx_82 = var_208
                                                
                                                int32_t rax_442 = rbx_82[1].d
                                                
                                                if (rax_442 == 6)
                                                    int32_t rax_443 = arg1[1].d
                                                    int32_t rcx_502 = rax_443 - 1
                                                    
                                                    if (rax_443 == 0)
                                                        rcx_502 = 0
                                                    
                                                    if (rcx_502 s<= 0)
                                                        arg1[0xb].d = 1
                                                        sub_140669d70(&var_208)
                                                    else
                                                        int64_t var_3e8
                                                        sub_140596d10(&var_3e8, arg1)
                                                        int64_t var_3e0
                                                        int32_t rax_444 = var_3e0.d
                                                        
                                                        if (var_3e0:4.d != rax_444)
                                                            sub_1405947f0(&var_3e8, rax_444)
                                                        
                                                        int64_t* rcx_505 = var_208
                                                        j_sub_140b746f0(*(**rcx_505)(rcx_505), 
                                                            &var_3e8, &var_608)
                                                        arg1[0xc].d += var_3e0:4.d * 2
                                                        arg1[1].d = 0
                                                        int64_t rcx_507 = var_3e8
                                                        
                                                        if (rcx_507 == 0)
                                                            sub_140669d70(&var_208)
                                                        else
                                                            sub_140a74f90(rcx_507)
                                                            sub_140669d70(&var_208)
                                                else if (rax_442 != 5)
                                                    arg1[0xb].d = 1
                                                    sub_140669d70(&var_208)
                                                else
                                                    int64_t rsi_26 = sx.q(rbx_82[3].d)
                                                    int32_t rax_449 = (rsi_26 + 1).d
                                                    rbx_82[3].d = rax_449
                                                    
                                                    if (rax_449 s> *(rbx_82 + 0x1c))
                                                        sub_140610660(&rbx_82[2])
                                                    
                                                    void** rcx_512 = (rsi_26 << 4) + rbx_82[2]
                                                    *rcx_512 = var_608
                                                    rcx_512[1] = rdx_225
                                                    
                                                    if (rdx_225 == 0)
                                                        sub_140669d70(&var_208)
                                                    else
                                                        *(rdx_225 + 8) += 1
                                                        sub_140669d70(&var_208)
                                            else
                                                if (rcx_471 == 2)
                                                    r15_23 = &arg1[2]
                                                    sub_140597df0(rbx_78 + 0x10, r15_23)
                                                    int32_t rdx_242 = *(rbx_78 + 0x18)
                                                    
                                                    if (*(rbx_78 + 0x1c) != rdx_242)
                                                        sub_1405947f0(rbx_78 + 0x10, rdx_242)
                                                    
                                                    arg1[0xc].d += *(rbx_78 + 0x1c) * 2
                                                    goto label_14067734b
                                                
                                                if (rcx_471 == 3)
                                                    r15_23 = &arg1[2]
                                                    int16_t* _String_42
                                                    int128_t zmm0_18 =
                                                        sub_140a35730(r15_23, &_String_42)
                                                    arg_10.w = 0x65
                                                    int32_t rax_422 =
                                                        sub_14066d420(&_String_42, &arg_10)
                                                    int32_t var_520
                                                    
                                                    if (rax_422 != 0xffffffff)
                                                        int32_t rcx_481 = var_520
                                                        int32_t rdx_233 = rcx_481 - 1
                                                        
                                                        if (rcx_481 == 0)
                                                            rdx_233 = 0
                                                        
                                                        if (rdx_233 s<= rax_422 + 2)
                                                            arg1[0xb].d = 1
                                                            _String_66 = _String_42
                                                        else
                                                            int16_t* _String_75 = _String_42
                                                            int16_t* const _String_22 =
                                                                &data_142d40450
                                                            int32_t rbx_79
                                                            int16_t* _String_103
                                                            
                                                            if (rcx_481 == 0)
                                                                _String_103 = &data_142d40450
                                                                rbx_79 = 0
                                                            else
                                                                _String_103 = _String_75
                                                                rbx_79 = rcx_481 - 1
                                                            
                                                            if (rax_422 s< 0)
                                                                rbx_79 = 0
                                                            else if (rax_422 s< rbx_79)
                                                                rbx_79 = rax_422
                                                            
                                                            int16_t* _String_30 = nullptr
                                                            int32_t var_650_1 = 0
                                                            
                                                            if (_String_103 != 0
                                                                    && *_String_103 != 0 && rbx_79 s> 0)
                                                                sub_1405947f0(&_String_30, rbx_79 + 1)
                                                                int32_t rax_427 = var_650_1 + 1 + rbx_79
                                                                var_650_1 = rax_427
                                                                
                                                                if (rax_427 s> 0)
                                                                    sub_140594770(&_String_30)
                                                                
                                                                zmm0_18 = UnDecorator::getReferenceType(
                                                                    _String_30, _String_103, rbx_79 * 2)
                                                                _String_30[sx.q(var_650_1) - 1] = 0
                                                                rcx_481 = var_520
                                                                _String_75 = _String_42
                                                            
                                                            int32_t rax_429 = rcx_481 - 1
                                                            
                                                            if (rcx_481 == 0)
                                                                rax_429 = 0
                                                            
                                                            int32_t rcx_486
                                                            
                                                            if (rcx_481 == 0)
                                                                rcx_486 = 0
                                                                _String_75 = &data_142d40450
                                                            else
                                                                rcx_486 = rcx_481 - 1
                                                            
                                                            int32_t rdx_237
                                                            
                                                            if (rax_429 - rax_422 - 1 s>= 0)
                                                                rdx_237 = rcx_486
                                                                
                                                                if (rax_429 - rax_422 - 1 s< rcx_486)
                                                                    rdx_237 = rax_429 - rax_422 - 1
                                                            else
                                                                rdx_237 = 0
                                                            
                                                            int32_t rdx_238 = 0
                                                            int16_t* _String_38 = nullptr
                                                            int32_t var_580_1 = 0
                                                            void* r14_23 = &_String_75[sx.q(rcx_486)
                                                                - sx.q(rdx_237)]
                                                            int32_t rcx_489 = 0
                                                            int32_t var_57c_1 = 0
                                                            
                                                            if (r14_23 != 0 && *r14_23 != 0)
                                                                int64_t rbx_80 = -1
                                                                
                                                                do
                                                                    rbx_80 += 1
                                                                while (*(r14_23 + (rbx_80 << 1)) != 0)
                                                                
                                                                if (rbx_80.d + 1 s> 0)
                                                                    sub_1405947f0(&_String_38, rbx_80.d + 1)
                                                                    rcx_489 = var_57c_1
                                                                    rdx_238 = var_580_1
                                                                
                                                                int32_t rax_433 = rdx_238 + rbx_80.d + 1
                                                                var_580_1 = rax_433
                                                                
                                                                if (rax_433 s> rcx_489)
                                                                    sub_140594770(&_String_38)
                                                                
                                                                zmm0_18 = UnDecorator::getReferenceType(
                                                                    _String_38, r14_23, (rbx_80.d + 1) * 2)
                                                            
                                                            char rax_434 =
                                                                sub_140a24720(&_String_30)
                                                            char rax_435
                                                            
                                                            if (rax_434 != 0)
                                                                rax_435 = sub_140a24720(&_String_38)
                                                            
                                                            if (rax_434 == 0 || rax_435 == 0)
                                                                arg1[0xb].d = 1
                                                            else
                                                                int16_t* const _String_13 =
                                                                    &data_142d40450
                                                                
                                                                if (var_650_1 != 0)
                                                                    _String_13 = _String_30
                                                                
                                                                wcstod(_String_13, nullptr)
                                                                
                                                                if (var_580_1 != 0)
                                                                    _String_22 = _String_38
                                                                
                                                                zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                                    _mm_cvtepi32_ps(zx.o(_wtoi(_String_22)))
                                                                        .d))
                                                                zmm1.q = zmm1.q f* zmm0_18.q
                                                                *(var_608 + 0x10) = zmm1.q
                                                            
                                                            int16_t* _String_67 = _String_38
                                                            
                                                            if (_String_67 != 0)
                                                                sub_140a74f90(_String_67)
                                                            
                                                            int16_t* _String_68 = _String_30
                                                            
                                                            if (_String_68 != 0)
                                                                sub_140a74f90(_String_68)
                                                            
                                                            _String_66 = _String_42
                                                    else if (sub_140a24720(&_String_42) == 0)
                                                        arg1[0xb].d = 1
                                                        _String_66 = _String_42
                                                    else
                                                        int16_t* _String_12 = &data_142d40450
                                                        
                                                        if (var_520 != 0)
                                                            _String_12 = _String_42
                                                        
                                                        wcstod(_String_12, nullptr)
                                                        *(var_608 + 0x10) = zmm0_18.q
                                                        _String_66 = _String_42
                                                    goto label_140677341
                                                
                                                if (rcx_471 == 4)
                                                    r15_23 = &arg1[2]
                                                    int16_t* _String_85
                                                    sub_140a35730(r15_23, &_String_85)
                                                    int16_t* const _String_125 = &data_142d40450
                                                    int16_t* const _String_116 = &data_142d40450
                                                    int32_t var_340
                                                    
                                                    if (var_340 != 0)
                                                        _String_116 = _String_85
                                                    
                                                    if (sub_140a54510(_String_116, u"true") != 0)
                                                        if (var_340 != 0)
                                                            _String_125 = _String_85
                                                        
                                                        if (sub_140a54510(_String_125, false") != 0)
                                                            arg1[0xb].d = 1
                                                            _String_66 = _String_85
                                                        else
                                                            *(var_608 + 0x10) = 0
                                                            _String_66 = _String_85
                                                    else
                                                        *(var_608 + 0x10) = 1
                                                        _String_66 = _String_85
                                                    
                                                    goto label_140677341
                                                
                                                arg1[0xb].d = 1
                                    
                                    sub_140669d70(&var_608)
                                    arg1[0xa].d = 6
                        case 5
                            if (rdx_138 s<= 1)
                                goto label_140677b80
                            
                            result = sx.q(arg1[9].d)
                            int64_t rcx_566 = arg1[8]
                            
                            if (*(rcx_566 + (result << 2) - 8) != 0
                                    || *(rcx_566 + (result << 2) - 4) != 5)
                                goto label_140677b80
                            
                            arg1[0xa].d = 6
                            result = zx.q(arg1[3].d)
                            
                            if (result.d == 0 || result.d - 1 s<= 0)
                                goto label_140677b80
                            
                            arg1[1].d = 0
                            int32_t rax_494 = arg1[3].d
                            int32_t r8_89 = rax_494 - 1
                            
                            if (rax_494 == 0)
                                r8_89 = 0
                            
                            sub_140a20ba0(arg1, arg1[2], r8_89)
                            int32_t rdx_278 = *(arg1 + 0x1c)
                            arg1[3].d = 0
                            
                            if (*(arg1 + 0x1c) != rdx_278)
                                sub_1405947f0(&arg1[2], rdx_278)
                        case 6
                            goto label_14067841a
                        case 7
                            goto label_140677b80
            
        label_140677b87:
            
            if (arg1[0xb].d != 0)
                goto label_14067842e
            
            if (arg1[0xa].d == 0)
                sub_14067be80(arg1)
            
            goto label_14067841a
        case 1
            if (rbx.d != 0xa)
                if (r8 == 0)
                    if (*(arg1 + 0x5c) != rbx.w)
                        if (r8 == 0)
                            goto label_140678055
                        
                        goto label_140677bda
                    
                    *(arg1 + 0x5c) = 0x3f
                    arg1[0xa].d = 3
                    goto label_14067841a
                
            label_140677bda:
                
                if (rbx.d == 0x6e)
                    int32_t rdx_280 = arg1[3].d
                    int32_t rax_499
                    rax_499.b = rdx_280 s<= 0
                    int32_t rbx_89 = rdx_280 - 1
                    
                    if (rdx_280 s<= 0)
                        rbx_89 = 0
                    
                    int32_t rax_501 = rax_499 + 1 + rdx_280
                    arg1[3].d = rax_501
                    
                    if (rax_501 s> *(arg1 + 0x1c))
                        sub_140594770(&arg1[2])
                    
                    int64_t rcx_573 = sx.q(rbx_89)
                    *(arg1[2] + (rcx_573 << 1)) = 0xa
                    *(arg1[2] + (rcx_573 << 1) + 2) = 0
                    goto label_14067841a
                
                if (rbx.d != 0x74)
                    goto label_140678055
                
                int32_t rdx_279 = arg1[3].d
                int32_t rax_495
                rax_495.b = rdx_279 s<= 0
                int32_t rbx_88 = rdx_279 - 1
                
                if (rdx_279 s<= 0)
                    rbx_88 = 0
                
                int32_t rax_497 = rax_495 + 1 + rdx_279
                arg1[3].d = rax_497
                
                if (rax_497 s> *(arg1 + 0x1c))
                    sub_140594770(&arg1[2])
                
                int64_t rcx_571 = sx.q(rbx_88)
                *(arg1[2] + (rcx_571 << 1)) = 9
                *(arg1[2] + (rcx_571 << 1) + 2) = 0
                goto label_14067841a
            
        label_140678413:
            arg1[0xb].d = 1
        label_14067841a:
            
            if (arg1[0xb].d == 0)
                *(arg1 + 0x54) = 0
                result.b = 1
            else
            label_14067842e:
                int128_t var_f8 = zx.o(0)
                
                if (&arg1[4] != &var_f8)
                    arg1[4] = 0
                    sub_14066a200(&arg1[5], &var_f8:8)
                
                sub_140669d70(&var_f8)
                result.b = 0
                arg1[0xc].d = 0
        case 2
            if (rbx.d u> 0x20 || not(test_bit(0x100002600, rbx)))
                goto label_140678055
            
            result = zx.q(arg1[3].d)
            
            if (result.d == 0 || result.d - 1 s<= 0)
                goto label_140678055
            
            arg1[0xa].d = 3
            goto label_14067841a
        case 3
            if (rbx.d u> 0x20 || not(test_bit(0x100002600, rbx)))
                goto label_140678413
            
            goto label_14067841a
        case 4
            if (rbx.d u> 0x20 || not(test_bit(0x100002600, rbx)))
                goto label_140678034
            
            int32_t rax_503 = arg1[3].d
            
            if (rax_503 == 0 || rax_503 - 1 s<= 0)
                goto label_140678034
            
            arg1[0xa].d = 3
            goto label_14067841a
        case 5
            if (rbx.d u<= 0x20 && test_bit(0x100002600, rbx))
                goto label_14067841a
            
            int32_t rax_504 = (rbx - 0x22).d
            
            if (rax_504 u> 0x52)
            label_140677f75:
                
                if ((rbx - 0x30).d.w u> 9 && rbx.d != 0x2d)
                    goto label_14067841a
                
                void*** rax_526 = j_sub_140a82f30(0x18)
                void*** rsi_30 = rax_526
                
                if (rax_526 == 0)
                    rsi_30 = nullptr
                else
                    rax_526[2] = 0
                    rax_526[1].d = 3
                    *rsi_30 = &data_142d84b38
                
                void*** var_2f8 = rsi_30
                r14_30 = sub_140666ae0(rsi_30)
                r12_21 = var_2f8
                
                if (r14_30 != 0)
                    r14_30[1].d += 1
                
                r15_28 = sx.q(arg1[7].d)
                int32_t rax_528 = (r15_28 + 1).d
                arg1[7].d = rax_528
                
                if (rax_528 s> *(arg1 + 0x3c))
                    sub_140610660(&arg1[6])
                
                rcx_589 = &var_2f8
            label_140678019:
                void**** rax_531 = (r15_28 << 4) + arg1[6]
                *rax_531 = r12_21
                rax_531[1] = r14_30
                arg1[0xc].d += 0x28
                sub_140669d70(rcx_589)
                arg1[0xa].d = 4
            label_140678034:
                result = zx.q((rbx - 0x2b).d)
                
                if (result.w u> 0x3a || not(test_bit(0x400000004007fed, result)))
                    goto label_140678413
                
                goto label_140678055
            
            switch (rax_504)
                case 0, 5
                    void*** rax_519 = j_sub_140a82f30(0x20)
                    int64_t var_1e8
                    void*** r14_28
                    
                    if (rax_519 == 0)
                        r14_28 = nullptr
                    else
                        var_1e8 = 0
                        int64_t var_1e0_1 = 0
                        r14_28 = sub_1406697e0(rax_519, &var_1e8)
                        rsi = 1
                    
                    void*** var_308 = r14_28
                    void*** rax_521 = sub_140666ae0(r14_28)
                    
                    if ((rsi.b & 1) != 0)
                        int64_t rcx_584 = var_1e8
                        
                        if (rcx_584 != 0)
                            sub_140a74f90(rcx_584)
                    
                    r14_29 = rax_521
                    r12_20 = var_308
                    
                    if (r14_29 != 0)
                        r14_29[1].d += 1
                    
                    r15_27 = sx.q(arg1[7].d)
                    int32_t rax_522 = (r15_27 + 1).d
                    arg1[7].d = rax_522
                    
                    if (rax_522 s> *(arg1 + 0x3c))
                        sub_140610660(&arg1[6])
                    
                    rcx_586 = &var_308
                label_140677f4e:
                    void**** rax_525 = (r15_27 << 4) + arg1[6]
                    *rax_525 = r12_20
                    rax_525[1] = r14_29
                    arg1[0xc].d += 0x30
                    sub_140669d70(rcx_586)
                label_140677f62:
                    arg1[0xa].d = 1
                    *(arg1 + 0x5c) = rbx.w
                    goto label_14067841a
                case 1, 2, 3, 4, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                        0x20, 0x21, 0x22, 0x23, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2d, 
                        0x2e, 0x2f, 0x30, 0x31, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                        0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x45, 0x46, 0x47, 
                        0x48, 0x49, 0x4a, 0x4b, 0x4d, 0x4e, 0x4f, 0x50, 0x51
                    goto label_140677f75
                case 0x24, 0x32, 0x44, 0x52
                    void*** rax_507 = j_sub_140a82f30(0x18)
                    void*** rsi_28 = rax_507
                    
                    if (rax_507 == 0)
                        rsi_28 = nullptr
                    else
                        rax_507[2].b = 0
                        rax_507[1].d = 4
                        *rsi_28 = &data_142d84c78
                    
                    void*** var_328 = rsi_28
                    void*** rax_508 = sub_140666ae0(rsi_28)
                    void*** r12_18 = var_328
                    
                    if (rax_508 != 0)
                        rax_508[1].d += 1
                    
                    int64_t r15_25 = sx.q(arg1[7].d)
                    int32_t rax_509 = (r15_25 + 1).d
                    arg1[7].d = rax_509
                    
                    if (rax_509 s> *(arg1 + 0x3c))
                        sub_140610660(&arg1[6])
                    
                    void**** rax_512 = (r15_25 << 4) + arg1[6]
                    *rax_512 = r12_18
                    rax_512[1] = rax_508
                    arg1[0xc].d += 0x28
                    sub_140669d70(&var_328)
                    arg1[0xa].d = 2
                    goto label_140678055
                case 0x2c, 0x4c
                    void*** rax_513 = j_sub_140a82f30(0x10)
                    void*** rsi_29 = rax_513
                    
                    if (rax_513 == 0)
                        rsi_29 = nullptr
                    else
                        *rsi_29 = &data_142d84e10
                        rsi_29[1].d = 1
                    
                    void*** var_318 = rsi_29
                    void*** rax_514 = sub_140666ae0(rsi_29)
                    void*** r12_19 = var_318
                    
                    if (rax_514 != 0)
                        rax_514[1].d += 1
                    
                    int64_t r15_26 = sx.q(arg1[7].d)
                    int32_t rax_515 = (r15_26 + 1).d
                    arg1[7].d = rax_515
                    
                    if (rax_515 s> *(arg1 + 0x3c))
                        sub_140610660(&arg1[6])
                    
                    void**** rax_518 = (r15_26 << 4) + arg1[6]
                    *rax_518 = r12_19
                    rax_518[1] = rax_514
                    arg1[0xc].d += 0x20
                    sub_140669d70(&var_318)
                    arg1[0xa].d = 2
                    goto label_140678055
        case 6
            if (rbx.d u<= 0x20 && test_bit(0x100002600, rbx))
                goto label_14067841a
            
            int32_t rdx_287 = arg1[9].d
            
            if (rdx_287 s<= 0)
                goto label_14067841a
            
            if (*(arg1[8] + (sx.q(rdx_287) << 2) - 4) == 0)
                if (rbx.d == 0x27 || rbx.d == 0x22)
                    goto label_140677f62
                
                arg1[0xa].d = 2
            label_140678055:
                
                if (rbx.w == 0)
                    goto label_14067841a
                
                int32_t rdx_286 = arg1[3].d
                int32_t rax_532
                rax_532.b = rdx_286 s<= 0
                int32_t r14_31 = rdx_286 - 1
                
                if (rdx_286 s<= 0)
                    r14_31 = 0
                
                int32_t rax_534 = rax_532 + 1 + rdx_286
                arg1[3].d = rax_534
                
                if (rax_534 s> *(arg1 + 0x1c))
                    sub_140594770(&arg1[2])
                
                int64_t rcx_591 = sx.q(r14_31)
                *(arg1[2] + (rcx_591 << 1)) = rbx.w
                *(arg1[2] + (rcx_591 << 1) + 2) = 0
                goto label_14067841a
            
            if (rdx_287 s<= 1)
                goto label_14067841a
            
            result = sx.q(arg1[9].d)
            int64_t rcx_593 = arg1[8]
            
            if (*(rcx_593 + (result << 2) - 8) != 0 || *(rcx_593 + (result << 2) - 4) != 5)
                goto label_14067841a
            
            int32_t rax_536 = (rbx - 0x22).d
            
            if (rax_536 u> 0x52)
            label_14067835c:
                
                if ((rbx - 0x30).d.w u> 9 && rbx.d != 0x2d)
                    goto label_14067841a
                
                void*** rax_555 = j_sub_140a82f30(0x18)
                void*** rsi_33 = rax_555
                
                if (rax_555 == 0)
                    rsi_33 = nullptr
                else
                    rax_555[2] = 0
                    rax_555[1].d = 3
                    *rsi_33 = &data_142d84b38
                
                void*** var_2b8 = rsi_33
                r14_30 = sub_140666ae0(rsi_33)
                r12_21 = var_2b8
                
                if (r14_30 != 0)
                    r14_30[1].d += 1
                
                r15_28 = sx.q(arg1[7].d)
                int32_t rax_557 = (r15_28 + 1).d
                arg1[7].d = rax_557
                
                if (rax_557 s> *(arg1 + 0x3c))
                    sub_140610660(&arg1[6])
                
                rcx_589 = &var_2b8
                goto label_140678019
            
            switch (rax_536)
                case 0, 5
                    void*** rax_551 = j_sub_140a82f30(0x20)
                    int64_t var_1d8
                    void*** r14_34
                    
                    if (rax_551 == 0)
                        r14_34 = nullptr
                    else
                        var_1d8 = 0
                        int64_t var_1d0_1 = 0
                        r14_34 = sub_1406697e0(rax_551, &var_1d8)
                        rsi = 2
                    
                    void*** var_2c8 = r14_34
                    void*** rax_553 = sub_140666ae0(r14_34)
                    
                    if ((rsi.b & 2) != 0)
                        int64_t rcx_604 = var_1d8
                        
                        if (rcx_604 != 0)
                            sub_140a74f90(rcx_604)
                    
                    r14_29 = rax_553
                    r12_20 = var_2c8
                    
                    if (r14_29 != 0)
                        r14_29[1].d += 1
                    
                    r15_27 = sx.q(arg1[7].d)
                    int32_t rax_554 = (r15_27 + 1).d
                    arg1[7].d = rax_554
                    
                    if (rax_554 s> *(arg1 + 0x3c))
                        sub_140610660(&arg1[6])
                    
                    rcx_586 = &var_2c8
                    goto label_140677f4e
                case 1, 2, 3, 4, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                        0x20, 0x21, 0x22, 0x23, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2d, 
                        0x2e, 0x2f, 0x30, 0x31, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                        0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x45, 0x46, 0x47, 
                        0x48, 0x49, 0x4a, 0x4b, 0x4d, 0x4e, 0x4f, 0x50, 0x51
                    goto label_14067835c
                case 0x24, 0x32, 0x44, 0x52
                    void*** rax_539 = j_sub_140a82f30(0x18)
                    void*** rsi_31 = rax_539
                    
                    if (rax_539 == 0)
                        rsi_31 = nullptr
                    else
                        rax_539[2].b = 0
                        rax_539[1].d = 4
                        *rsi_31 = &data_142d84c78
                    
                    void*** var_2e8 = rsi_31
                    void*** rax_540 = sub_140666ae0(rsi_31)
                    void*** r12_22 = var_2e8
                    
                    if (rax_540 != 0)
                        rax_540[1].d += 1
                    
                    int64_t r15_29 = sx.q(arg1[7].d)
                    int32_t rax_541 = (r15_29 + 1).d
                    arg1[7].d = rax_541
                    
                    if (rax_541 s> *(arg1 + 0x3c))
                        sub_140610660(&arg1[6])
                    
                    void**** rax_544 = (r15_29 << 4) + arg1[6]
                    *rax_544 = r12_22
                    rax_544[1] = rax_540
                    arg1[0xc].d += 0x28
                    sub_140669d70(&var_2e8)
                    arg1[0xa].d = 2
                    goto label_140678055
                case 0x2c, 0x4c
                    void*** rax_545 = j_sub_140a82f30(0x10)
                    void*** rsi_32 = rax_545
                    
                    if (rax_545 == 0)
                        rsi_32 = nullptr
                    else
                        *rsi_32 = &data_142d84e10
                        rsi_32[1].d = 1
                    
                    void*** var_2d8 = rsi_32
                    void*** rax_546 = sub_140666ae0(rsi_32)
                    void*** r12_23 = var_2d8
                    
                    if (rax_546 != 0)
                        rax_546[1].d += 1
                    
                    int64_t r15_30 = sx.q(arg1[7].d)
                    int32_t rax_547 = (r15_30 + 1).d
                    arg1[7].d = rax_547
                    
                    if (rax_547 s> *(arg1 + 0x3c))
                        sub_140610660(&arg1[6])
                    
                    void**** rax_550 = (r15_30 << 4) + arg1[6]
                    *rax_550 = r12_23
                    rax_550[1] = rax_546
                    arg1[0xc].d += 0x20
                    sub_140669d70(&var_2d8)
                    arg1[0xa].d = 2
                    goto label_140678055
else
    result = zx.q((rbx - 0x2c).d)
    
    if (result.d u> 0x51)
        goto label_140675708
    
    void* r14_1
    
    switch (&__dos_header.e_magic[zx.q(jump_table_140678498[zx.q(lookup_table_1406784b4[sx.q(result
            .d)])])])
        case 0x140672dfe
            int64_t rbx_1 = sx.q(arg1[9].d)
            r14_1 = &arg1[8]
            int32_t rax_1 = (rbx_1 + 1).d
            *(r14_1 + 8) = rax_1
            
            if (rax_1 s> *(r14_1 + 0xc))
                sub_1406105e0(r14_1)
            
            *(*r14_1 + (rbx_1 << 2)) = 0
        label_140672f02:
            arg1[0xa].d = 0
            int64_t rdx_7 = sx.q(arg1[9].d)
            
            if (rdx_7.d s<= 0)
            label_1406756e0:
                arg1[0xb].d = 1
            label_1406756e7:
                
                if (arg1[0xb].d == 0 && arg1[0xa].d == 0)
                    sub_14067be80(arg1)
            else
                result = *r14_1
                int64_t r8_1 = sx.q(*(result + (sx.q(*(r14_1 + 8)) << 2) - 4))
                
                if (r8_1.d u> 7)
                    goto label_1406756e7
                
                void*** rbx_9
                int64_t* rsi_10
                bool cond:13_1
                
                switch (r8_1)
                    case 0
                        if (rdx_7.d s> 1 && *(result + (sx.q(*(r14_1 + 8)) << 2) - 8) == 2)
                            arg1[0xa].d = 6
                            
                            if (arg1[7].d s<= 0)
                                goto label_1406756e0
                            
                            void* r15_1 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                            
                            if (r15_1 == 0 || *(r15_1 + 8) != 5)
                                goto label_1406756e0
                            
                            void*** rax_7 = j_sub_140a82f30(0x20)
                            void*** rbx_7
                            
                            if (rax_7 == 0)
                                rbx_7 = nullptr
                            else
                                void* rax_8 = j_sub_140a82f30(0x50)
                                void* const rsi_1 = rax_8
                                
                                if (rax_8 == 0)
                                    rsi_1 = nullptr
                                else
                                    *(rax_8 + 0x28) = 0
                                    __builtin_memset(rax_8, 0, 0x2c)
                                    *(rax_8 + 0x2c) = 0x80
                                    *(rax_8 + 0x30) = 0xffffffff
                                    __builtin_memset(rax_8 + 0x34, 0, 0x1c)
                                
                                void* const var_1c8 = rsi_1
                                void*** rax_9 = j_sub_140a82f30(0x18)
                                
                                if (rax_9 == 0)
                                    rax_9 = nullptr
                                else
                                    rax_9[1].d = 1
                                    *(rax_9 + 0xc) = 1
                                    *rax_9 = &data_142d86160
                                    rax_9[2] = rsi_1
                                
                                void*** var_1c0_1 = rax_9
                                rbx_7 = sub_140669820(rax_7, &var_1c8)
                            
                            void*** rax_11 = j_sub_140a82f30(0x18)
                            
                            if (rax_11 == 0)
                                rax_11 = nullptr
                            else
                                rax_11[1].d = 1
                                *(rax_11 + 0xc) = 1
                                *rax_11 = &data_142d86170
                                rax_11[2] = rbx_7
                            
                            if (rax_11 != 0)
                                rax_11[1].d += 1
                            
                            int64_t rsi_2 = sx.q(arg1[7].d)
                            int32_t rax_12 = (rsi_2 + 1).d
                            arg1[7].d = rax_12
                            
                            if (rax_12 s> *(arg1 + 0x3c))
                                sub_140610660(&arg1[6])
                            
                            int64_t* rax_15 = (rsi_2 << 4) + arg1[6]
                            *rax_15 = rbx_7
                            rax_15[1] = rax_11
                            arg1[0xc].d += 0x30
                            
                            if (rax_11 != 0)
                                rax_11[1].d += 1
                            
                            int64_t r14_2 = sx.q(*(r15_1 + 0x18))
                            int32_t rax_16 = (r14_2 + 1).d
                            *(r15_1 + 0x18) = rax_16
                            
                            if (rax_16 s> *(r15_1 + 0x1c))
                                sub_140610660(r15_1 + 0x10)
                            
                            result = (r14_2 << 4) + *(r15_1 + 0x10)
                            *result = rbx_7
                            *(result + 8) = rax_11
                            rbx_9 = rax_11
                        label_140673134:
                            
                            if (rbx_9 == 0)
                                goto label_1406756e7
                            
                            rbx_9[1].d -= 1
                            
                            if (rbx_9[1].d == 1)
                                (**rbx_9)(rbx_9)
                                int32_t temp55_1 = *(rbx_9 + 0xc)
                                *(rbx_9 + 0xc) -= 1
                                
                                if (temp55_1 == 1)
                                    (*rbx_9)[1](rbx_9, 1)
                            
                            goto label_1406756e7
                        
                        if (rdx_7.d s> 2)
                            int64_t rax_21 = sx.q(*(r14_1 + 8))
                            int64_t rcx_19 = *r14_1
                            
                            if (*(rcx_19 + (rax_21 << 2) - 0xc) != 0
                                    || *(rcx_19 + (rax_21 << 2) - 8) != 5
                                    || *(rcx_19 + (rax_21 << 2) - 4) != 0)
                                goto label_1406733f4
                            
                            result = zx.q(arg1[1].d)
                            int32_t rcx_20 = (result - 1).d
                            
                            if (result.d == 0)
                                rcx_20 = 0
                            
                            if (rcx_20 s<= 0)
                                goto label_1406756e0
                            
                            arg1[0xa].d = 6
                            
                            if (arg1[7].d s<= 0)
                                goto label_1406756e0
                            
                            int64_t* r15_2 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                            
                            if (r15_2 == 0 || r15_2[1].d != 6)
                                goto label_1406756e0
                            
                            void*** rax_22 = j_sub_140a82f30(0x20)
                            void*** rbx_10
                            
                            if (rax_22 == 0)
                                rbx_10 = nullptr
                            else
                                void* rax_23 = j_sub_140a82f30(0x50)
                                void* const rsi_4 = rax_23
                                
                                if (rax_23 == 0)
                                    rsi_4 = nullptr
                                else
                                    *(rax_23 + 0x28) = 0
                                    __builtin_memset(rax_23, 0, 0x2c)
                                    *(rax_23 + 0x2c) = 0x80
                                    *(rax_23 + 0x30) = 0xffffffff
                                    __builtin_memset(rax_23 + 0x34, 0, 0x1c)
                                
                                void* const var_1b8 = rsi_4
                                void*** rax_24 = j_sub_140a82f30(0x18)
                                
                                if (rax_24 == 0)
                                    rax_24 = nullptr
                                else
                                    rax_24[1].d = 1
                                    *(rax_24 + 0xc) = 1
                                    *rax_24 = &data_142d86160
                                    rax_24[2] = rsi_4
                                
                                void*** var_1b0_1 = rax_24
                                rbx_10 = sub_140669820(rax_22, &var_1b8)
                            
                            void*** rax_26 = j_sub_140a82f30(0x18)
                            
                            if (rax_26 == 0)
                                rax_26 = nullptr
                            else
                                rax_26[1].d = 1
                                *(rax_26 + 0xc) = 1
                                *rax_26 = &data_142d86170
                                rax_26[2] = rbx_10
                            
                            if (rax_26 != 0)
                                rax_26[1].d += 1
                            
                            int64_t rsi_5 = sx.q(arg1[7].d)
                            int32_t rax_27 = (rsi_5 + 1).d
                            arg1[7].d = rax_27
                            
                            if (rax_27 s> *(arg1 + 0x3c))
                                sub_140610660(&arg1[6])
                            
                            void**** rax_30 = (rsi_5 << 4) + arg1[6]
                            *rax_30 = rbx_10
                            rax_30[1] = rax_26
                            arg1[0xc].d += 0x30
                            uint128_t zmm0_1 = rbx_10.o
                            uint128_t var_e8 = zmm0_1
                            void* rax_31 = _mm_bsrli_si128(zmm0_1, 8).q
                            
                            if (rax_31 != 0)
                                *(rax_31 + 8) += 1
                            
                            j_sub_140b746f0(*(**r15_2)(r15_2), arg1, &var_e8)
                            int64_t* rbx_12 = var_e8:8.q
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d == 1)
                                    (**rbx_12)(rbx_12)
                                    int32_t temp58_1 = *(rbx_12 + 0xc)
                                    *(rbx_12 + 0xc) -= 1
                                    
                                    if (temp58_1 == 1)
                                        (*(*rbx_12 + 8))(rbx_12, 1)
                            
                            if (rax_26 != 0)
                                rax_26[1].d -= 1
                                
                                if (rax_26[1].d == 1)
                                    (**rax_26)(rax_26)
                                    int32_t temp59_1 = *(rax_26 + 0xc)
                                    *(rax_26 + 0xc) -= 1
                                    
                                    if (temp59_1 == 1)
                                        (*rax_26)[1](rax_26, 1)
                            
                            arg1[1].d = 0
                            goto label_1406756e7
                        
                        if (rdx_7.d s<= 1)
                            goto label_1406756e0
                        
                    label_1406733f4:
                        result = sx.q(*(r14_1 + 8))
                        int64_t rcx_31 = *r14_1
                        
                        if (*(rcx_31 + (result << 2) - 8) != 6 || *(rcx_31 + (result << 2) - 4) != 0
                                || arg1[4] != 0)
                            goto label_1406756e0
                        
                        void* rax_38 = j_sub_140a82f30(0x50)
                        void* rsi_6 = rax_38
                        
                        if (rax_38 == 0)
                            rsi_6 = nullptr
                        else
                            *(rax_38 + 0x28) = 0
                            __builtin_memset(rax_38, 0, 0x2c)
                            *(rax_38 + 0x2c) = 0x80
                            *(rax_38 + 0x30) = 0xffffffff
                            __builtin_memset(rax_38 + 0x34, 0, 0x1c)
                        
                        void* const var_558 = rsi_6
                        void*** rax_39 = j_sub_140a82f30(0x18)
                        
                        if (rax_39 == 0)
                            rax_39 = nullptr
                        else
                            rax_39[1].d = 1
                            *(rax_39 + 0xc) = 1
                            *rax_39 = &data_142d86160
                            rax_39[2] = rsi_6
                        
                        void*** rbx_14
                        
                        if (&arg1[4] == &var_558)
                            rbx_14 = rax_39
                        else
                            arg1[4] = var_558
                            rbx_14 = rax_39
                            var_558 = nullptr
                            int64_t* rsi_7 = arg1[5]
                            
                            if (rbx_14 != rsi_7)
                                void*** var_550_1 = nullptr
                                arg1[5] = rbx_14
                                
                                if (rsi_7 != 0)
                                    rsi_7[1].d -= 1
                                    
                                    if (rsi_7[1].d == 1)
                                        (**rsi_7)(rsi_7)
                                        int32_t temp53_1 = *(rsi_7 + 0xc)
                                        *(rsi_7 + 0xc) -= 1
                                        
                                        if (temp53_1 == 1)
                                            (*(*rsi_7 + 8))(rsi_7, 1)
                                
                                rbx_14 = var_550_1
                        
                        if (rbx_14 != 0)
                            rbx_14[1].d -= 1
                            
                            if (rbx_14[1].d == 1)
                                (**rbx_14)(rbx_14)
                                int32_t temp52_1 = *(rbx_14 + 0xc)
                                *(rbx_14 + 0xc) -= 1
                                
                                if (temp52_1 == 1)
                                    (*rbx_14)[1](rbx_14, 1)
                        
                        int64_t* rbx_15 = arg1[5]
                        int64_t rsi_8 = arg1[4]
                        
                        if (rbx_15 != 0)
                            rbx_15[1].d += 1
                        
                        void*** rax_45 = j_sub_140a82f30(0x20)
                        void*** rsi_9
                        
                        if (rax_45 == 0)
                            rsi_9 = nullptr
                        else
                            int64_t var_d8 = rsi_8
                            int64_t* var_d0_1 = rbx_15
                            
                            if (rbx_15 != 0)
                                rbx_15[1].d += 1
                            
                            rsi_9 = sub_140669820(rax_45, &var_d8)
                        
                        void*** rax_47 = j_sub_140a82f30(0x18)
                        
                        if (rax_47 == 0)
                            rax_47 = nullptr
                        else
                            rax_47[1].d = 1
                            *(rax_47 + 0xc) = 1
                            *rax_47 = &data_142d86170
                            rax_47[2] = rsi_9
                        
                        if (rax_47 != 0)
                            rax_47[1].d += 1
                        
                        int64_t r15_3 = sx.q(arg1[7].d)
                        int32_t rax_48 = (r15_3 + 1).d
                        arg1[7].d = rax_48
                        
                        if (rax_48 s> *(arg1 + 0x3c))
                            sub_140610660(&arg1[6])
                        
                        result = (r15_3 << 4) + arg1[6]
                        *result = rsi_9
                        *(result + 8) = rax_47
                        arg1[0xc].d += 0x30
                        
                        if (rbx_15 != 0)
                            rbx_15[1].d -= 1
                            
                            if (rbx_15[1].d == 1)
                                (**rbx_15)(rbx_15)
                                int32_t temp62_1 = *(rbx_15 + 0xc)
                                *(rbx_15 + 0xc) -= 1
                                
                                if (temp62_1 == 1)
                                    (*(*rbx_15 + 8))(rbx_15, 1)
                        
                        int64_t* rbx_16 = rax_47
                        
                        if (rbx_16 == 0)
                            goto label_140674fd5
                        
                        rbx_16[1].d -= 1
                        
                        if (rbx_16[1].d != 1)
                            goto label_140674fd5
                        
                        (**rbx_16)(rbx_16)
                        int32_t temp64_1 = *(rbx_16 + 0xc)
                        *(rbx_16 + 0xc) -= 1
                        
                        if (temp64_1 != 1)
                            goto label_140674fd5
                        
                        (*(*rbx_16 + 8))(rbx_16, 1)
                        arg1[0xa].d = 6
                        goto label_1406756e7
                    case 1
                        uint64_t rcx_42
                        
                        if (rdx_7.d s> 1)
                            rcx_42 = sx.q(*(r14_1 + 8))
                        
                        if (rdx_7.d s> 1 && *(result + (rcx_42 << 2) - 8) == 0
                                && *(result + (rcx_42 << 2) - 4) == 1)
                            int32_t r10_1 = (rdx_7 - 2).d
                            int32_t rax_56 = rcx_42.d - r10_1
                            
                            if (rax_56 != 2)
                                memmove(result + (sx.q(r10_1) << 2), result + (rdx_7 << 2), 
                                    (rax_56 - 2) << 2)
                                rcx_42 = zx.q(*(r14_1 + 8))
                            
                            *(r14_1 + 8) = (rcx_42 - 2).d
                            arg1[0xa].d = 0
                            
                            if (arg1[7].d s<= 0)
                                goto label_140673eba
                            
                            int64_t rax_59 = arg1[6]
                            int64_t rdx_20 = sx.q(arg1[7].d) * 2
                            void* rbx_17 = *(rax_59 + (rdx_20 << 3) - 0x10)
                            rsi_10 = *(rax_59 + (rdx_20 << 3) - 8)
                            *(rax_59 + (rdx_20 << 3) - 8) = 0
                            *(rax_59 + (rdx_20 << 3) - 0x10) = 0
                            sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                            
                            if (*(rbx_17 + 8) != 6)
                            label_140673e93:
                                
                                if (rsi_10 == 0)
                                    goto label_140673eba
                                
                                rsi_10[1].d -= 1
                                
                                if (rsi_10[1].d == 1)
                                    (**rsi_10)(rsi_10)
                                    int32_t temp22_1 = *(rsi_10 + 0xc)
                                    *(rsi_10 + 0xc) -= 1
                                    
                                    if (temp22_1 == 1)
                                        (*(*rsi_10 + 8))(rsi_10, 1)
                                
                                goto label_140673eba
                            
                        label_140673741:
                            
                            if (rsi_10 == 0)
                                goto label_140673ec1
                            
                            rsi_10[1].d -= 1
                            
                            if (rsi_10[1].d == 1)
                                (**rsi_10)(rsi_10)
                                int32_t temp23_1 = *(rsi_10 + 0xc)
                                *(rsi_10 + 0xc) -= 1
                                
                                if (temp23_1 == 1)
                                    (*(*rsi_10 + 8))(rsi_10, 1)
                            
                            goto label_140673ec1
                        
                        if (rdx_7.d s<= 2)
                        label_140673eba:
                            arg1[0xb].d = 1
                        label_140673ec1:
                            int64_t rdx_51 = sx.q(arg1[9].d)
                            
                            if (rdx_51.d s<= 0)
                                goto label_14067492b
                            
                            uint64_t rcx_101 = sx.q(*(r14_1 + 8))
                            int64_t r9_3 = *r14_1
                            
                            if (*(r9_3 + (rcx_101 << 2) - 4) != 5)
                                goto label_14067492b
                            
                            int32_t r10_2 = (rdx_51 - 1).d
                            int32_t rax_109 = rcx_101.d - r10_2
                            
                            if (rax_109 != 1)
                                memmove(r9_3 + (sx.q(r10_2) << 2), r9_3 + (rdx_51 << 2), 
                                    (rax_109 - 1) << 2)
                                rcx_101 = zx.q(*(r14_1 + 8))
                            
                            *(r14_1 + 8) = (rcx_101 - 1).d
                            arg1[0xa].d = 3
                            goto label_1406756e7
                        
                        uint64_t r8_7 = sx.q(*(r14_1 + 8))
                        
                        if (*(result + (r8_7 << 2) - 0xc) != 0 || *(result + (r8_7 << 2) - 8) != 5
                                || *(result + (r8_7 << 2) - 4) != 1)
                            goto label_140673eba
                        
                        int32_t r9_2 = (rdx_7 - 3).d
                        int32_t rax_63 = r8_7.d - r9_2
                        
                        if (rax_63 != 3)
                            memmove(result + (sx.q(r9_2) << 2), result + (rdx_7 << 2), 
                                (rax_63 - 3) << 2)
                            r8_7 = zx.q(*(r14_1 + 8))
                        
                        *(r14_1 + 8) = (r8_7 - 3).d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        else
                            int64_t rax_66 = arg1[6]
                            void* r15_4 = &arg1[6]
                            int64_t rcx_50 = sx.q(*(r15_4 + 8)) * 2
                            void* r8_10 = *(rax_66 + (rcx_50 << 3) - 0x10)
                            void* var_638 = r8_10
                            uint64_t rdx_24 = *(rax_66 + (rcx_50 << 3) - 8)
                            
                            if (rdx_24 != 0)
                                *(rdx_24 + 8) += 1
                                r8_10 = var_638
                            
                            if (*(r8_10 + 8) - 5 u<= 1)
                                arg1[0xb].d = 1
                            else
                                int64_t rax_68 = *r15_4
                                int64_t rcx_52 = sx.q(*(r15_4 + 8)) * 2
                                int64_t* rbx_18 = *(rax_68 + (rcx_52 << 3) - 8)
                                *(rax_68 + (rcx_52 << 3) - 8) = 0
                                *(rax_68 + (rcx_52 << 3) - 0x10) = 0
                                sub_1406792e0(r15_4, *(r15_4 + 8) - 1, 1, 0)
                                
                                if (rbx_18 != 0)
                                    rbx_18[1].d -= 1
                                    
                                    if (rbx_18[1].d == 1)
                                        (**rbx_18)(rbx_18)
                                        int32_t temp42_1 = *(rbx_18 + 0xc)
                                        *(rbx_18 + 0xc) -= 1
                                        
                                        if (temp42_1 == 1)
                                            (*(*rbx_18 + 8))(rbx_18, 1)
                                
                                if (arg1[7].d s<= 0)
                                    arg1[0xb].d = 1
                                else
                                    void* rbx_19 = var_638
                                    int32_t rcx_56 = *(rbx_19 + 8)
                                    int16_t* _String_48
                                    void* r13_1
                                    
                                    if (rcx_56 == 1)
                                        r13_1 = &arg1[2]
                                        int16_t* _String_87
                                        sub_140a35730(r13_1, &_String_87)
                                        int16_t* _String_107 = &data_142d40450
                                        int32_t var_1a0
                                        
                                        if (var_1a0 != 0)
                                            _String_107 = _String_87
                                        
                                        if (sub_140a54510(_String_107, u"null") != 0)
                                            arg1[0xb].d = 1
                                        
                                        _String_48 = _String_87
                                    label_140673cad:
                                        
                                        if (_String_48 == 0)
                                            goto label_140673cb7
                                        
                                        sub_140a74f90(_String_48)
                                    label_140673cb7:
                                        int32_t rdx_41 = *(arg1 + 0x1c)
                                        *(r13_1 + 8) = 0
                                        
                                        if (*(r13_1 + 0xc) != rdx_41)
                                            sub_1405947f0(r13_1, rdx_41)
                                        
                                        int64_t rax_96 = *r15_4
                                        int64_t rcx_85 = sx.q(*(r15_4 + 8)) * 2
                                        int64_t* rsi_11 = *(rax_96 + (rcx_85 << 3) - 8)
                                        int64_t* r15_7 = *(rax_96 + (rcx_85 << 3) - 0x10)
                                        
                                        if (rsi_11 != 0)
                                            rsi_11[1].d += 1
                                        
                                        result = zx.q(r15_7[1].d)
                                        
                                        if (result.d == 6)
                                            int32_t rbx_25 = arg1[1].d
                                            result = zx.q(rbx_25 - 1)
                                            
                                            if (rbx_25 == 0)
                                                result = 0
                                            
                                            if (result.d s<= 0)
                                                arg1[0xb].d = 1
                                            else
                                                int64_t var_568 = 0
                                                int64_t r12_7 = *arg1
                                                int32_t var_55c
                                                int32_t rax_97
                                                
                                                if (rbx_25 != 0)
                                                    sub_1405a4c70(&var_568, rbx_25, 0)
                                                    memcpy(var_568, r12_7, rbx_25 * 2)
                                                    rax_97 = var_55c
                                                else
                                                    rax_97 = 0
                                                    var_55c = 0
                                                
                                                if (rax_97 != rbx_25)
                                                    sub_1405947f0(&var_568, rbx_25)
                                                
                                                j_sub_140b746f0(*(**r15_7)(r15_7), &var_568, 
                                                    &var_638)
                                                arg1[0xc].d += var_55c * 2
                                                arg1[1].d = 0
                                                int64_t rcx_91 = var_568
                                                
                                                if (rcx_91 != 0)
                                                    sub_140a74f90(rcx_91)
                                        else if (result.d != 5)
                                            arg1[0xb].d = 1
                                        else
                                            int64_t r15_8 = sx.q(r15_7[3].d)
                                            int32_t rax_101 = (r15_8 + 1).d
                                            r15_7[3].d = rax_101
                                            
                                            if (rax_101 s> *(r15_7 + 0x1c))
                                                sub_140610660(&r15_7[2])
                                            
                                            void** rcx_95 = (r15_8 << 4) + r15_7[2]
                                            *rcx_95 = var_638
                                            rcx_95[1] = rdx_24
                                            
                                            if (rdx_24 != 0)
                                                *(rdx_24 + 8) += 1
                                        
                                        if (rsi_11 != 0)
                                            rsi_11[1].d -= 1
                                            
                                            if (rsi_11[1].d == 1)
                                                (**rsi_11)(rsi_11)
                                                int32_t temp65_1 = *(rsi_11 + 0xc)
                                                *(rsi_11 + 0xc) -= 1
                                                
                                                if (temp65_1 == 1)
                                                    (*(*rsi_11 + 8))(rsi_11, 1)
                                    else
                                        if (rcx_56 == 2)
                                            r13_1 = &arg1[2]
                                            sub_140597df0(rbx_19 + 0x10, r13_1)
                                            int32_t rdx_39 = *(rbx_19 + 0x18)
                                            
                                            if (*(rbx_19 + 0x1c) != rdx_39)
                                                sub_1405947f0(rbx_19 + 0x10, rdx_39)
                                            
                                            arg1[0xc].d += *(rbx_19 + 0x1c) * 2
                                            goto label_140673cb7
                                        
                                        if (rcx_56 == 3)
                                            r13_1 = &arg1[2]
                                            int16_t* _String_44
                                            int128_t zmm0_2 = sub_140a35730(r13_1, &_String_44)
                                            int16_t* _String_77 = _String_44
                                            int32_t var_500
                                            int32_t rcx_65 = var_500
                                            int16_t* _String_94 = _String_77
                                            void* rdx_29 = &_String_77[sx.q(rcx_65)]
                                            int32_t rbx_22
                                            
                                            if (_String_77 != rdx_29)
                                                while (*_String_94 != 0x65)
                                                    _String_94 = &_String_94[1]
                                                    
                                                    if (_String_94 == rdx_29)
                                                        goto label_1406739cd
                                                
                                                rbx_22 = ((_String_94 - _String_77) s>> 1).d
                                            
                                            if (_String_77 == rdx_29 || rbx_22 == 0xffffffff)
                                            label_1406739cd:
                                                
                                                if (sub_140a24720(&_String_44) == 0)
                                                    arg1[0xb].d = 1
                                                    _String_48 = _String_44
                                                else
                                                    int16_t* _String = &data_142d40450
                                                    
                                                    if (var_500 != 0)
                                                        _String = _String_44
                                                    
                                                    wcstod(_String, nullptr)
                                                    *(var_638 + 0x10) = zmm0_2.q
                                                    _String_48 = _String_44
                                            else
                                                int32_t rdx_30 = rcx_65 - 1
                                                
                                                if (rcx_65 == 0)
                                                    rdx_30 = 0
                                                
                                                if (rdx_30 s<= rbx_22 + 2)
                                                    arg1[0xb].d = 1
                                                    _String_48 = _String_44
                                                else
                                                    int16_t* const _String_16 = &data_142d40450
                                                    int16_t* _String_98
                                                    int32_t r15_5
                                                    
                                                    if (rcx_65 == 0)
                                                        _String_98 = &data_142d40450
                                                        r15_5 = 0
                                                    else
                                                        _String_98 = _String_77
                                                        r15_5 = rcx_65 - 1
                                                    
                                                    if (rbx_22 s< 0)
                                                        r15_5 = 0
                                                    else if (rbx_22 s< r15_5)
                                                        r15_5 = rbx_22
                                                    
                                                    int16_t* _String_24 = nullptr
                                                    int32_t var_6b0_1 = 0
                                                    
                                                    if (_String_98 != 0 && *_String_98 != 0
                                                            && r15_5 s> 0)
                                                        sub_1405947f0(&_String_24, r15_5 + 1)
                                                        int32_t rax_82 = var_6b0_1 + 1 + r15_5
                                                        var_6b0_1 = rax_82
                                                        
                                                        if (rax_82 s> 0)
                                                            sub_140594770(&_String_24)
                                                        
                                                        zmm0_2 = UnDecorator::getReferenceType(
                                                            _String_24, _String_98, r15_5 * 2)
                                                        _String_24[sx.q(var_6b0_1) - 1] = 0
                                                        rcx_65 = var_500
                                                        _String_77 = _String_44
                                                    
                                                    int32_t rax_84 = rcx_65 - 1
                                                    
                                                    if (rcx_65 == 0)
                                                        rax_84 = 0
                                                    
                                                    int32_t r8_13
                                                    
                                                    if (rcx_65 == 0)
                                                        r8_13 = 0
                                                        _String_77 = &data_142d40450
                                                    else
                                                        r8_13 = rcx_65 - 1
                                                    
                                                    int32_t rdx_34
                                                    
                                                    if (rax_84 - rbx_22 - 1 s>= 0)
                                                        rdx_34 = r8_13
                                                        
                                                        if (rax_84 - rbx_22 - 1 s< r8_13)
                                                            rdx_34 = rax_84 - rbx_22 - 1
                                                    else
                                                        rdx_34 = 0
                                                    
                                                    int32_t rdx_35 = 0
                                                    int16_t* _String_32 = nullptr
                                                    int32_t var_5e0_1 = 0
                                                    void* r15_6 =
                                                        &_String_77[sx.q(r8_13) - sx.q(rdx_34)]
                                                    int32_t rcx_73 = 0
                                                    int32_t var_5dc_1 = 0
                                                    
                                                    if (r15_6 != 0 && *r15_6 != 0)
                                                        int64_t rbx_23 = -1
                                                        
                                                        do
                                                            rbx_23 += 1
                                                        while (*(r15_6 + (rbx_23 << 1)) != 0)
                                                        
                                                        if (rbx_23.d + 1 s> 0)
                                                            sub_1405947f0(&_String_32, rbx_23.d + 1)
                                                            rcx_73 = var_5dc_1
                                                            rdx_35 = var_5e0_1
                                                        
                                                        int32_t rax_88 = rbx_23.d + 1 + rdx_35
                                                        var_5e0_1 = rax_88
                                                        
                                                        if (rax_88 s> rcx_73)
                                                            sub_140594770(&_String_32)
                                                        
                                                        zmm0_2 = UnDecorator::getReferenceType(
                                                            _String_32, r15_6, (rbx_23.d + 1) * 2)
                                                    
                                                    char rax_89 = sub_140a24720(&_String_24)
                                                    char rax_90
                                                    
                                                    if (rax_89 != 0)
                                                        rax_90 = sub_140a24720(&_String_32)
                                                    
                                                    if (rax_89 == 0 || rax_90 == 0)
                                                        arg1[0xb].d = 1
                                                    else
                                                        int16_t* const _String_1 = &data_142d40450
                                                        
                                                        if (var_6b0_1 != 0)
                                                            _String_1 = _String_24
                                                        
                                                        wcstod(_String_1, nullptr)
                                                        
                                                        if (var_5e0_1 != 0)
                                                            _String_16 = _String_32
                                                        
                                                        zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                            _mm_cvtepi32_ps(zx.o(_wtoi(_String_16)))
                                                                .d))
                                                        zmm1.q = zmm1.q f* zmm0_2.q
                                                        *(var_638 + 0x10) = zmm1.q
                                                    
                                                    int16_t* _String_49 = _String_32
                                                    
                                                    if (_String_49 != 0)
                                                        sub_140a74f90(_String_49)
                                                    
                                                    int16_t* _String_50 = _String_24
                                                    
                                                    if (_String_50 != 0)
                                                        sub_140a74f90(_String_50)
                                                    
                                                    _String_48 = _String_44
                                                    r15_4 = &arg1[6]
                                            
                                            goto label_140673cad
                                        
                                        if (rcx_56 == 4)
                                            r13_1 = &arg1[2]
                                            int16_t* _String_80
                                            sub_140a35730(r13_1, &_String_80)
                                            int16_t* const _String_120 = &data_142d40450
                                            int16_t* const _String_106 = &data_142d40450
                                            int32_t var_3b0
                                            
                                            if (var_3b0 != 0)
                                                _String_106 = _String_80
                                            
                                            if (sub_140a54510(_String_106, u"true") != 0)
                                                if (var_3b0 != 0)
                                                    _String_120 = _String_80
                                                
                                                if (sub_140a54510(_String_120, u"false") != 0)
                                                    arg1[0xb].d = 1
                                                    _String_48 = _String_80
                                                else
                                                    *(var_638 + 0x10) = 0
                                                    _String_48 = _String_80
                                            else
                                                *(var_638 + 0x10) = 1
                                                _String_48 = _String_80
                                            
                                            goto label_140673cad
                                        
                                        arg1[0xb].d = 1
                            
                            if (rdx_24 != 0)
                                int32_t temp40_1 = *(rdx_24 + 8)
                                *(rdx_24 + 8) -= 1
                                
                                if (temp40_1 == 1)
                                    (**rdx_24)(rdx_24)
                                    int32_t temp46_1 = *(rdx_24 + 0xc)
                                    *(rdx_24 + 0xc) -= 1
                                    
                                    if (temp46_1 == 1)
                                        (*(*rdx_24 + 8))(rdx_24, 1)
                        
                        if (arg1[7].d s<= 0)
                            goto label_140673eba
                        
                        int64_t rax_105 = arg1[6]
                        int64_t rdx_48 = sx.q(arg1[7].d) * 2
                        int64_t rbx_28 = *(rax_105 + (rdx_48 << 3) - 0x10)
                        rsi_10 = *(rax_105 + (rdx_48 << 3) - 8)
                        *(rax_105 + (rdx_48 << 3) - 8) = 0
                        *(rax_105 + (rdx_48 << 3) - 0x10) = 0
                        sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                        cond:13_1 = *(rbx_28 + 8) == 6
                        goto label_140673e8d
                    case 2
                        int64_t rcx_103
                        
                        if (rdx_7.d s> 1)
                            result = sx.q(*(r14_1 + 8))
                            rcx_103 = *r14_1
                        
                        if (rdx_7.d s> 1 && *(rcx_103 + (result << 2) - 8) == 2
                                && *(rcx_103 + (result << 2) - 4) == 2)
                            arg1[0xa].d = 5
                            
                            if (arg1[7].d s<= 0)
                                goto label_1406756e0
                            
                            void* r15_9 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                            
                            if (r15_9 == 0 || *(r15_9 + 8) != 5)
                                goto label_1406756e0
                            
                            void*** rax_112 = j_sub_140a82f30(0x20)
                            void*** rbx_29 = rax_112
                            
                            if (rax_112 == 0)
                                rbx_29 = nullptr
                            else
                                rax_112[1].d = 0
                                *rbx_29 = &data_142d84d00
                                rbx_29[2] = 0
                                sub_140664cf0(&rbx_29[2], nullptr, 0, 0, 0)
                                rbx_29[1].d = 5
                                *rbx_29 = &data_142d84d00
                            
                            void*** rax_113 = sub_140666ae0(rbx_29)
                            
                            if (rax_113 != 0)
                                rax_113[1].d += 1
                            
                            int64_t r14_5 = sx.q(arg1[7].d)
                            int32_t rax_114 = (r14_5 + 1).d
                            arg1[7].d = rax_114
                            
                            if (rax_114 s> *(arg1 + 0x3c))
                                sub_140610660(&arg1[6])
                            
                            void**** rax_117 = (r14_5 << 4) + arg1[6]
                            *rax_117 = rbx_29
                            rax_117[1] = rax_113
                            arg1[0xc].d += 0x30
                            
                            if (rax_113 != 0)
                                rax_113[1].d += 1
                            
                            int64_t r14_6 = sx.q(*(r15_9 + 0x18))
                            int32_t rax_118 = (r14_6 + 1).d
                            *(r15_9 + 0x18) = rax_118
                            
                            if (rax_118 s> *(r15_9 + 0x1c))
                                sub_140610660(r15_9 + 0x10)
                            
                            result = (r14_6 << 4) + *(r15_9 + 0x10)
                            *result = rbx_29
                            *(result + 8) = rax_113
                            rbx_9 = rax_113
                            goto label_140673134
                        
                        if (rdx_7.d s<= 2)
                            goto label_1406756e0
                        
                        result = sx.q(*(r14_1 + 8))
                        int64_t rcx_110 = *r14_1
                        
                        if (*(rcx_110 + (result << 2) - 0xc) != 0
                                || *(rcx_110 + (result << 2) - 8) != 5
                                || *(rcx_110 + (result << 2) - 4) != 2)
                            goto label_1406756e0
                        
                        arg1[0xa].d = 5
                        result = zx.q(arg1[1].d)
                        int32_t rcx_111 = (result - 1).d
                        
                        if (result.d == 0)
                            rcx_111 = 0
                        
                        if (rcx_111 s<= 0 || arg1[7].d s<= 0)
                            goto label_1406756e0
                        
                        int64_t* r14_7 = *(arg1[6] + sx.q(arg1[7].d) * 0x10 - 0x10)
                        
                        if (r14_7 == 0 || r14_7[1].d != 6)
                            goto label_1406756e0
                        
                        void*** rax_121 = j_sub_140a82f30(0x20)
                        void*** rbx_31 = rax_121
                        
                        if (rax_121 == 0)
                            rbx_31 = nullptr
                        else
                            rax_121[1].d = 0
                            *rbx_31 = &data_142d84d00
                            rbx_31[2] = 0
                            sub_140664cf0(&rbx_31[2], nullptr, 0, 0, 0)
                            rbx_31[1].d = 5
                            *rbx_31 = &data_142d84d00
                        
                        void*** var_468 = rbx_31
                        void*** rax_122 = sub_140666ae0(rbx_31)
                        void*** r12_10 = var_468
                        
                        if (rax_122 != 0)
                            rax_122[1].d += 1
                        
                        int64_t r15_10 = sx.q(arg1[7].d)
                        int32_t rax_123 = (r15_10 + 1).d
                        arg1[7].d = rax_123
                        
                        if (rax_123 s> *(arg1 + 0x3c))
                            sub_140610660(&arg1[6])
                        
                        void**** rax_126 = (r15_10 << 4) + arg1[6]
                        *rax_126 = r12_10
                        rax_126[1] = rax_122
                        arg1[0xc].d += 0x30
                        uint128_t zmm0_4 = var_468.o
                        uint128_t var_c8 = zmm0_4
                        void* rax_127 = _mm_bsrli_si128(zmm0_4, 8).q
                        
                        if (rax_127 != 0)
                            *(rax_127 + 8) += 1
                        
                        j_sub_140b746f0(*(**r14_7)(r14_7), arg1, &var_c8)
                        sub_140669d70(&var_c8)
                        sub_140669d70(&var_468)
                        arg1[1].d = 0
                        goto label_1406756e7
                    case 3
                        int64_t rcx_121
                        
                        if (rdx_7.d s> 1)
                            rcx_121 = sx.q(*(r14_1 + 8))
                        
                        if (rdx_7.d s<= 1 || *(result + (rcx_121 << 2) - 8) != 2
                                || *(result + (rcx_121 << 2) - 4) != 3)
                            arg1[0xb].d = 1
                        label_14067492b:
                            arg1[0xa].d = 3
                            goto label_1406756e7
                        
                        int32_t r10_3 = (rdx_7 - 2).d
                        int32_t rax_131 = rcx_121.d - r10_3
                        
                        if (rax_131 != 2)
                            memmove(result + (sx.q(r10_3) << 2), result + (rdx_7 << 2), 
                                (rax_131 - 2) << 2)
                            rcx_121 = zx.q(*(r14_1 + 8))
                        
                        *(r14_1 + 8) = (rcx_121 - 2).d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        else
                            int64_t rax_134 = arg1[6]
                            void* r15_11 = &arg1[6]
                            int64_t rcx_124 = sx.q(*(r15_11 + 8)) * 2
                            void* rdx_58 = *(rax_134 + (rcx_124 << 3) - 0x10)
                            void* var_6e8 = rdx_58
                            int64_t* rbx_33 = *(rax_134 + (rcx_124 << 3) - 8)
                            int64_t* var_6e0_1 = rbx_33
                            
                            if (rbx_33 != 0)
                                rbx_33[1].d += 1
                                rbx_33 = var_6e0_1
                                rdx_58 = var_6e8
                            
                            if (*(rdx_58 + 8) - 5 u<= 1)
                                goto label_1406748ad
                            
                            int64_t rax_136 = *r15_11
                            int64_t rcx_126 = sx.q(*(r15_11 + 8)) * 2
                            int64_t* rbx_34 = *(rax_136 + (rcx_126 << 3) - 8)
                            *(rax_136 + (rcx_126 << 3) - 8) = 0
                            *(rax_136 + (rcx_126 << 3) - 0x10) = 0
                            sub_1406792e0(r15_11, *(r15_11 + 8) - 1, 1, 0)
                            
                            if (rbx_34 != 0)
                                rbx_34[1].d -= 1
                                
                                if (rbx_34[1].d == 1)
                                    (**rbx_34)(rbx_34)
                                    int32_t temp28_1 = *(rbx_34 + 0xc)
                                    *(rbx_34 + 0xc) -= 1
                                    
                                    if (temp28_1 == 1)
                                        (*(*rbx_34 + 8))(rbx_34, 1)
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                            label_1406748a8:
                                rbx_33 = var_6e0_1
                            label_1406748ad:
                                
                                if (rbx_33 != 0)
                                    rbx_33[1].d -= 1
                                    
                                    if (rbx_33[1].d == 1)
                                        (**rbx_33)(rbx_33)
                                        int32_t temp26_1 = *(rbx_33 + 0xc)
                                        *(rbx_33 + 0xc) -= 1
                                        
                                        if (temp26_1 == 1)
                                            (*(*rbx_33 + 8))(rbx_33, 1)
                            else
                                void* rbx_35 = var_6e8
                                int32_t rcx_130 = *(rbx_35 + 8)
                                int16_t* _String_51
                                void* r13_2
                                
                                if (rcx_130 == 1)
                                    r13_2 = &arg1[2]
                                    int16_t* _String_88
                                    sub_140a35730(r13_2, &_String_88)
                                    int16_t* _String_109 = &data_142d40450
                                    int32_t var_190
                                    
                                    if (var_190 != 0)
                                        _String_109 = _String_88
                                    
                                    if (sub_140a54510(_String_109, u"null") != 0)
                                        arg1[0xb].d = 1
                                    
                                    _String_51 = _String_88
                                label_140674722:
                                    
                                    if (_String_51 == 0)
                                        goto label_14067472c
                                    
                                    sub_140a74f90(_String_51)
                                label_14067472c:
                                    int32_t rdx_75 = *(arg1 + 0x1c)
                                    *(r13_2 + 8) = 0
                                    
                                    if (*(r13_2 + 0xc) != rdx_75)
                                        sub_1405947f0(r13_2, rdx_75)
                                    
                                    int64_t rax_162 = *r15_11
                                    int64_t rcx_158 = sx.q(*(r15_11 + 8)) * 2
                                    int64_t* rbx_40 = *(rax_162 + (rcx_158 << 3) - 0x10)
                                    int64_t* var_2a8 = rbx_40
                                    void* rdx_76 = *(rax_162 + (rcx_158 << 3) - 8)
                                    void* var_2a0_1 = rdx_76
                                    
                                    if (rdx_76 != 0)
                                        *(rdx_76 + 8) += 1
                                        rbx_40 = var_2a8
                                    
                                    int32_t rax_163 = rbx_40[1].d
                                    
                                    if (rax_163 == 6)
                                        int32_t rax_164 = arg1[1].d
                                        int32_t rcx_159 = rax_164 - 1
                                        
                                        if (rax_164 == 0)
                                            rcx_159 = 0
                                        
                                        if (rcx_159 s<= 0)
                                            arg1[0xb].d = 1
                                            sub_140669d70(&var_2a8)
                                        else
                                            int64_t var_458
                                            sub_140596d10(&var_458, arg1)
                                            int64_t var_450
                                            int32_t rax_165 = var_450.d
                                            
                                            if (var_450:4.d != rax_165)
                                                sub_1405947f0(&var_458, rax_165)
                                            
                                            int64_t* rcx_162 = var_2a8
                                            j_sub_140b746f0(*(**rcx_162)(rcx_162), &var_458, 
                                                &var_6e8)
                                            arg1[0xc].d += var_450:4.d * 2
                                            arg1[1].d = 0
                                            int64_t rcx_164 = var_458
                                            
                                            if (rcx_164 == 0)
                                                sub_140669d70(&var_2a8)
                                            else
                                                sub_140a74f90(rcx_164)
                                                sub_140669d70(&var_2a8)
                                    else if (rax_163 != 5)
                                        arg1[0xb].d = 1
                                        sub_140669d70(&var_2a8)
                                    else
                                        int64_t rsi_13 = sx.q(rbx_40[3].d)
                                        int32_t rax_170 = (rsi_13 + 1).d
                                        rbx_40[3].d = rax_170
                                        
                                        if (rax_170 s> *(rbx_40 + 0x1c))
                                            sub_140610660(&rbx_40[2])
                                        
                                        void** rcx_170 = (rsi_13 << 4) + rbx_40[2]
                                        *rcx_170 = var_6e8
                                        rcx_170[1] = var_6e0_1
                                        
                                        if (var_6e0_1 == 0)
                                            sub_140669d70(&var_2a8)
                                        else
                                            var_6e0_1[1].d += 1
                                            sub_140669d70(&var_2a8)
                                    
                                    goto label_1406748a8
                                
                                if (rcx_130 == 2)
                                    r13_2 = &arg1[2]
                                    sub_140597df0(rbx_35 + 0x10, r13_2)
                                    int32_t rdx_73 = *(rbx_35 + 0x18)
                                    
                                    if (*(rbx_35 + 0x1c) != rdx_73)
                                        sub_1405947f0(rbx_35 + 0x10, rdx_73)
                                    
                                    arg1[0xc].d += *(rbx_35 + 0x1c) * 2
                                    goto label_14067472c
                                
                                if (rcx_130 == 3)
                                    r13_2 = &arg1[2]
                                    int16_t* _String_45
                                    int128_t zmm0_5 = sub_140a35730(r13_2, &_String_45)
                                    int16_t* _String_78 = _String_45
                                    int32_t var_4f0
                                    int32_t rcx_138 = var_4f0
                                    int16_t* _String_95 = _String_78
                                    void* rdx_63 = &_String_78[sx.q(rcx_138)]
                                    int32_t rbx_37
                                    
                                    if (_String_78 != rdx_63)
                                        while (*_String_95 != 0x65)
                                            _String_95 = &_String_95[1]
                                            
                                            if (_String_95 == rdx_63)
                                                goto label_140674446
                                        
                                        rbx_37 = ((_String_95 - _String_78) s>> 1).d
                                    
                                    if (_String_78 == rdx_63 || rbx_37 == 0xffffffff)
                                    label_140674446:
                                        
                                        if (sub_140a24720(&_String_45) == 0)
                                            arg1[0xb].d = 1
                                            _String_51 = _String_45
                                        else
                                            int16_t* _String_2 = &data_142d40450
                                            
                                            if (var_4f0 != 0)
                                                _String_2 = _String_45
                                            
                                            wcstod(_String_2, nullptr)
                                            *(var_6e8 + 0x10) = zmm0_5.q
                                            _String_51 = _String_45
                                    else
                                        int32_t rdx_64 = rcx_138 - 1
                                        
                                        if (rcx_138 == 0)
                                            rdx_64 = 0
                                        
                                        if (rdx_64 s<= rbx_37 + 2)
                                            arg1[0xb].d = 1
                                            _String_51 = _String_45
                                        else
                                            int16_t* const _String_17 = &data_142d40450
                                            int16_t* _String_99
                                            int32_t r15_12
                                            
                                            if (rcx_138 == 0)
                                                _String_99 = &data_142d40450
                                                r15_12 = 0
                                            else
                                                _String_99 = _String_78
                                                r15_12 = rcx_138 - 1
                                            
                                            if (rbx_37 s< 0)
                                                r15_12 = 0
                                            else if (rbx_37 s< r15_12)
                                                r15_12 = rbx_37
                                            
                                            int16_t* _String_25 = nullptr
                                            int32_t var_6a0_1 = 0
                                            
                                            if (_String_99 != 0 && *_String_99 != 0 && r15_12 s> 0)
                                                sub_1405947f0(&_String_25, r15_12 + 1)
                                                int32_t rax_148 = var_6a0_1 + 1 + r15_12
                                                var_6a0_1 = rax_148
                                                
                                                if (rax_148 s> 0)
                                                    sub_140594770(&_String_25)
                                                
                                                zmm0_5 = UnDecorator::getReferenceType(_String_25, 
                                                    _String_99, r15_12 * 2)
                                                _String_25[sx.q(var_6a0_1) - 1] = 0
                                                rcx_138 = var_4f0
                                                _String_78 = _String_45
                                            
                                            int32_t rax_150 = rcx_138 - 1
                                            
                                            if (rcx_138 == 0)
                                                rax_150 = 0
                                            
                                            int32_t r8_26
                                            
                                            if (rcx_138 == 0)
                                                r8_26 = 0
                                                _String_78 = &data_142d40450
                                            else
                                                r8_26 = rcx_138 - 1
                                            
                                            int32_t rdx_68
                                            
                                            if (rax_150 - rbx_37 - 1 s>= 0)
                                                rdx_68 = r8_26
                                                
                                                if (rax_150 - rbx_37 - 1 s< r8_26)
                                                    rdx_68 = rax_150 - rbx_37 - 1
                                            else
                                                rdx_68 = 0
                                            
                                            int32_t rdx_69 = 0
                                            int16_t* _String_33 = nullptr
                                            int32_t var_5d0_1 = 0
                                            void* r15_13 = &_String_78[sx.q(r8_26) - sx.q(rdx_68)]
                                            int32_t rcx_146 = 0
                                            int32_t var_5cc_1 = 0
                                            
                                            if (r15_13 != 0 && *r15_13 != 0)
                                                int64_t rbx_38 = -1
                                                
                                                do
                                                    rbx_38 += 1
                                                while (*(r15_13 + (rbx_38 << 1)) != 0)
                                                
                                                if (rbx_38.d + 1 s> 0)
                                                    sub_1405947f0(&_String_33, rbx_38.d + 1)
                                                    rcx_146 = var_5cc_1
                                                    rdx_69 = var_5d0_1
                                                
                                                int32_t rax_154 = rbx_38.d + 1 + rdx_69
                                                var_5d0_1 = rax_154
                                                
                                                if (rax_154 s> rcx_146)
                                                    sub_140594770(&_String_33)
                                                
                                                zmm0_5 = UnDecorator::getReferenceType(_String_33, 
                                                    r15_13, (rbx_38.d + 1) * 2)
                                            
                                            char rax_155 = sub_140a24720(&_String_25)
                                            char rax_156
                                            
                                            if (rax_155 != 0)
                                                rax_156 = sub_140a24720(&_String_33)
                                            
                                            if (rax_155 == 0 || rax_156 == 0)
                                                arg1[0xb].d = 1
                                            else
                                                int16_t* const _String_3 = &data_142d40450
                                                
                                                if (var_6a0_1 != 0)
                                                    _String_3 = _String_25
                                                
                                                wcstod(_String_3, nullptr)
                                                
                                                if (var_5d0_1 != 0)
                                                    _String_17 = _String_33
                                                
                                                zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                    _mm_cvtepi32_ps(zx.o(_wtoi(_String_17))).d))
                                                zmm1.q = zmm1.q f* zmm0_5.q
                                                *(var_6e8 + 0x10) = zmm1.q
                                            
                                            int16_t* _String_52 = _String_33
                                            
                                            if (_String_52 != 0)
                                                sub_140a74f90(_String_52)
                                            
                                            int16_t* _String_53 = _String_25
                                            
                                            if (_String_53 != 0)
                                                sub_140a74f90(_String_53)
                                            
                                            _String_51 = _String_45
                                            r15_11 = &arg1[6]
                                    
                                    goto label_140674722
                                
                                if (rcx_130 == 4)
                                    r13_2 = &arg1[2]
                                    int16_t* _String_81
                                    sub_140a35730(r13_2, &_String_81)
                                    int16_t* const _String_121 = &data_142d40450
                                    int16_t* const _String_108 = &data_142d40450
                                    int32_t var_3a0
                                    
                                    if (var_3a0 != 0)
                                        _String_108 = _String_81
                                    
                                    if (sub_140a54510(_String_108, u"true") != 0)
                                        if (var_3a0 != 0)
                                            _String_121 = _String_81
                                        
                                        if (sub_140a54510(_String_121, u"false") != 0)
                                            arg1[0xb].d = 1
                                            _String_51 = _String_81
                                        else
                                            *(var_6e8 + 0x10) = 0
                                            _String_51 = _String_81
                                    else
                                        *(var_6e8 + 0x10) = 1
                                        _String_51 = _String_81
                                    
                                    goto label_140674722
                                
                                arg1[0xb].d = 1
                                sub_140669d70(&var_6e8)
                        
                        if (arg1[7].d s<= 0)
                            goto label_140673eba
                        
                        int64_t rax_176 = arg1[6]
                        int64_t rdx_82 = sx.q(arg1[7].d) * 2
                        int64_t rbx_41 = *(rax_176 + (rdx_82 << 3) - 0x10)
                        rsi_10 = *(rax_176 + (rdx_82 << 3) - 8)
                        *(rax_176 + (rdx_82 << 3) - 8) = 0
                        *(rax_176 + (rdx_82 << 3) - 0x10) = 0
                        sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                        cond:13_1 = *(rbx_41 + 8) == 5
                    label_140673e8d:
                        
                        if (cond:13_1)
                            goto label_140673741
                        
                        goto label_140673e93
                    case 4
                        if (rdx_7.d s<= 2)
                            if (rdx_7.d s<= 1)
                                goto label_1406756e0
                            
                        label_140674fea:
                            int64_t rax_223 = sx.q(*(r14_1 + 8))
                            int64_t rcx_230 = *r14_1
                            
                            if (*(rcx_230 + (rax_223 << 2) - 8) == 0
                                    && *(rcx_230 + (rax_223 << 2) - 4) == 4)
                                sub_1406793d0(r14_1, rdx_7.d - 1, 1, 0)
                                arg1[0xa].d = 6
                                goto label_1406756e7
                            
                            result = sx.q(*(r14_1 + 8))
                            
                            if (*(rcx_230 + (result << 2) - 8) != 2
                                    || *(rcx_230 + (result << 2) - 4) != 4)
                                goto label_1406756e0
                            
                            sub_1406793d0(r14_1, rdx_7.d - 1, 1, 0)
                            arg1[0xa].d = 0
                            
                            if (arg1[7].d s<= 0)
                                arg1[0xb].d = 1
                                arg1[0xa].d = 5
                            else
                                int64_t rax_224 = arg1[6]
                                int64_t rcx_234 = sx.q(arg1[7].d) * 2
                                void* rdx_111 = *(rax_224 + (rcx_234 << 3) - 0x10)
                                void* var_6c8 = rdx_111
                                int64_t* rbx_50 = *(rax_224 + (rcx_234 << 3) - 8)
                                int64_t* var_6c0_1 = rbx_50
                                
                                if (rbx_50 != 0)
                                    rbx_50[1].d += 1
                                    rbx_50 = var_6c0_1
                                    rdx_111 = var_6c8
                                
                                if (*(rdx_111 + 8) - 5 u<= 1)
                                    goto label_14067563e
                                
                                int64_t rcx_235 = arg1[6]
                                int64_t rdx_113 = sx.q(arg1[7].d) * 2
                                int64_t var_b8 = *(rcx_235 + (rdx_113 << 3) - 0x10)
                                int64_t var_b0_1 = *(rcx_235 + (rdx_113 << 3) - 8)
                                *(rcx_235 + (rdx_113 << 3) - 8) = 0
                                *(rcx_235 + (rdx_113 << 3) - 0x10) = 0
                                sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                                sub_140669d70(&var_b8)
                                
                                if (arg1[7].d s<= 0)
                                    arg1[0xb].d = 1
                                label_140675639:
                                    rbx_50 = var_6c0_1
                                label_14067563e:
                                    
                                    if (rbx_50 == 0)
                                        arg1[0xa].d = 5
                                    else
                                        rbx_50[1].d -= 1
                                        
                                        if (rbx_50[1].d != 1)
                                            arg1[0xa].d = 5
                                        else
                                            (**rbx_50)(rbx_50)
                                            int32_t temp35_1 = *(rbx_50 + 0xc)
                                            *(rbx_50 + 0xc) -= 1
                                            
                                            if (temp35_1 != 1)
                                                arg1[0xa].d = 5
                                            else
                                                (*(*rbx_50 + 8))(rbx_50, 1)
                                                arg1[0xa].d = 5
                                else
                                    void* rbx_51 = var_6c8
                                    int32_t rcx_238 = *(rbx_51 + 8)
                                    int16_t* _String_57
                                    void* r15_15
                                    
                                    if (rcx_238 == 1)
                                        r15_15 = &arg1[2]
                                        int16_t* _String_90
                                        sub_140a35730(r15_15, &_String_90)
                                        int16_t* _String_113 = &data_142d40450
                                        int32_t var_170
                                        
                                        if (var_170 != 0)
                                            _String_113 = _String_90
                                        
                                        if (sub_140a54510(_String_113, u"null") != 0)
                                            arg1[0xb].d = 1
                                        
                                        _String_57 = _String_90
                                    label_1406754dc:
                                        
                                        if (_String_57 == 0)
                                            goto label_1406754e6
                                        
                                        sub_140a74f90(_String_57)
                                    label_1406754e6:
                                        int32_t rdx_130 = *(arg1 + 0x1c)
                                        *(r15_15 + 8) = 0
                                        
                                        if (*(r15_15 + 0xc) != rdx_130)
                                            sub_1405947f0(r15_15, rdx_130)
                                        
                                        int64_t rax_251 = arg1[6]
                                        int64_t rcx_266 = sx.q(arg1[7].d) * 2
                                        int64_t* rbx_56 = *(rax_251 + (rcx_266 << 3) - 0x10)
                                        int64_t* var_288 = rbx_56
                                        void* rdx_131 = *(rax_251 + (rcx_266 << 3) - 8)
                                        void* var_280_1 = rdx_131
                                        
                                        if (rdx_131 != 0)
                                            *(rdx_131 + 8) += 1
                                            rbx_56 = var_288
                                        
                                        int32_t rax_252 = rbx_56[1].d
                                        
                                        if (rax_252 == 6)
                                            int32_t rax_253 = arg1[1].d
                                            int32_t rcx_267 = rax_253 - 1
                                            
                                            if (rax_253 == 0)
                                                rcx_267 = 0
                                            
                                            if (rcx_267 s<= 0)
                                                arg1[0xb].d = 1
                                                sub_140669d70(&var_288)
                                            else
                                                int64_t var_438
                                                sub_140596d10(&var_438, arg1)
                                                int64_t var_430
                                                int32_t rax_254 = var_430.d
                                                
                                                if (var_430:4.d != rax_254)
                                                    sub_1405947f0(&var_438, rax_254)
                                                
                                                int64_t* rcx_270 = var_288
                                                j_sub_140b746f0(*(**rcx_270)(rcx_270), &var_438, 
                                                    &var_6c8)
                                                arg1[0xc].d += var_430:4.d * 2
                                                arg1[1].d = 0
                                                int64_t rcx_272 = var_438
                                                
                                                if (rcx_272 == 0)
                                                    sub_140669d70(&var_288)
                                                else
                                                    sub_140a74f90(rcx_272)
                                                    sub_140669d70(&var_288)
                                        else if (rax_252 != 5)
                                            arg1[0xb].d = 1
                                            sub_140669d70(&var_288)
                                        else
                                            int64_t rsi_15 = sx.q(rbx_56[3].d)
                                            int32_t rax_259 = (rsi_15 + 1).d
                                            rbx_56[3].d = rax_259
                                            
                                            if (rax_259 s> *(rbx_56 + 0x1c))
                                                sub_140610660(&rbx_56[2])
                                            
                                            void** rcx_277 = (rsi_15 << 4) + rbx_56[2]
                                            *rcx_277 = var_6c8
                                            rcx_277[1] = var_6c0_1
                                            
                                            if (var_6c0_1 == 0)
                                                sub_140669d70(&var_288)
                                            else
                                                var_6c0_1[1].d += 1
                                                sub_140669d70(&var_288)
                                        
                                        goto label_140675639
                                    
                                    if (rcx_238 == 2)
                                        r15_15 = &arg1[2]
                                        sub_140597df0(rbx_51 + 0x10, r15_15)
                                        int32_t rdx_128 = *(rbx_51 + 0x18)
                                        
                                        if (*(rbx_51 + 0x1c) != rdx_128)
                                            sub_1405947f0(rbx_51 + 0x10, rdx_128)
                                        
                                        arg1[0xc].d += *(rbx_51 + 0x1c) * 2
                                        goto label_1406754e6
                                    
                                    if (rcx_238 == 3)
                                        r15_15 = &arg1[2]
                                        int16_t* _String_47
                                        int128_t zmm0_9 = sub_140a35730(r15_15, &_String_47)
                                        int16_t* _String_79 = _String_47
                                        int32_t var_4d0
                                        int32_t rcx_246 = var_4d0
                                        int16_t* _String_97 = _String_79
                                        void* rdx_118 = &_String_79[sx.q(rcx_246)]
                                        int32_t rbx_53
                                        
                                        if (_String_79 != rdx_118)
                                            while (*_String_97 != 0x65)
                                                _String_97 = &_String_97[1]
                                                
                                                if (_String_97 == rdx_118)
                                                    goto label_140675216
                                            
                                            rbx_53 = ((_String_97 - _String_79) s>> 1).d
                                        
                                        if (_String_79 == rdx_118 || rbx_53 == 0xffffffff)
                                        label_140675216:
                                            
                                            if (sub_140a24720(&_String_47) == 0)
                                                arg1[0xb].d = 1
                                                _String_57 = _String_47
                                            else
                                                int16_t* _String_6 = &data_142d40450
                                                
                                                if (var_4d0 != 0)
                                                    _String_6 = _String_47
                                                
                                                wcstod(_String_6, nullptr)
                                                *(var_6c8 + 0x10) = zmm0_9.q
                                                _String_57 = _String_47
                                        else
                                            int32_t rdx_119 = rcx_246 - 1
                                            
                                            if (rcx_246 == 0)
                                                rdx_119 = 0
                                            
                                            if (rdx_119 s<= rbx_53 + 2)
                                                arg1[0xb].d = 1
                                                _String_57 = _String_47
                                            else
                                                int16_t* const _String_19 = &data_142d40450
                                                int16_t* _String_101
                                                int32_t r14_10
                                                
                                                if (rcx_246 == 0)
                                                    _String_101 = &data_142d40450
                                                    r14_10 = 0
                                                else
                                                    _String_101 = _String_79
                                                    r14_10 = rcx_246 - 1
                                                
                                                if (rbx_53 s< 0)
                                                    r14_10 = 0
                                                else if (rbx_53 s< r14_10)
                                                    r14_10 = rbx_53
                                                
                                                int16_t* _String_27 = nullptr
                                                int32_t var_680_1 = 0
                                                
                                                if (_String_101 != 0 && *_String_101 != 0
                                                        && r14_10 s> 0)
                                                    sub_1405947f0(&_String_27, r14_10 + 1)
                                                    int32_t rax_237 = var_680_1 + 1 + r14_10
                                                    var_680_1 = rax_237
                                                    
                                                    if (rax_237 s> 0)
                                                        sub_140594770(&_String_27)
                                                    
                                                    zmm0_9 = UnDecorator::getReferenceType(
                                                        _String_27, _String_101, r14_10 * 2)
                                                    _String_27[sx.q(var_680_1) - 1] = 0
                                                    rcx_246 = var_4d0
                                                    _String_79 = _String_47
                                                
                                                int32_t rax_239 = rcx_246 - 1
                                                
                                                if (rcx_246 == 0)
                                                    rax_239 = 0
                                                
                                                int32_t r8_40
                                                
                                                if (rcx_246 == 0)
                                                    r8_40 = 0
                                                    _String_79 = &data_142d40450
                                                else
                                                    r8_40 = rcx_246 - 1
                                                
                                                int32_t rdx_123
                                                
                                                if (rax_239 - rbx_53 - 1 s>= 0)
                                                    rdx_123 = r8_40
                                                    
                                                    if (rax_239 - rbx_53 - 1 s< r8_40)
                                                        rdx_123 = rax_239 - rbx_53 - 1
                                                else
                                                    rdx_123 = 0
                                                
                                                int32_t rdx_124 = 0
                                                int16_t* _String_35 = nullptr
                                                int32_t var_5b0_1 = 0
                                                void* r14_11 =
                                                    &_String_79[sx.q(r8_40) - sx.q(rdx_123)]
                                                int32_t rcx_254 = 0
                                                int32_t var_5ac_1 = 0
                                                
                                                if (r14_11 != 0 && *r14_11 != 0)
                                                    int64_t rbx_54 = -1
                                                    
                                                    do
                                                        rbx_54 += 1
                                                    while (*(r14_11 + (rbx_54 << 1)) != 0)
                                                    
                                                    if (rbx_54.d + 1 s> 0)
                                                        sub_1405947f0(&_String_35, rbx_54.d + 1)
                                                        rcx_254 = var_5ac_1
                                                        rdx_124 = var_5b0_1
                                                    
                                                    int32_t rax_243 = rdx_124 + rbx_54.d + 1
                                                    var_5b0_1 = rax_243
                                                    
                                                    if (rax_243 s> rcx_254)
                                                        sub_140594770(&_String_35)
                                                    
                                                    zmm0_9 = UnDecorator::getReferenceType(
                                                        _String_35, r14_11, (rbx_54.d + 1) * 2)
                                                
                                                char rax_244 = sub_140a24720(&_String_27)
                                                char rax_245
                                                
                                                if (rax_244 != 0)
                                                    rax_245 = sub_140a24720(&_String_35)
                                                
                                                if (rax_244 == 0 || rax_245 == 0)
                                                    arg1[0xb].d = 1
                                                else
                                                    int16_t* const _String_7 = &data_142d40450
                                                    
                                                    if (var_680_1 != 0)
                                                        _String_7 = _String_27
                                                    
                                                    wcstod(_String_7, nullptr)
                                                    
                                                    if (var_5b0_1 != 0)
                                                        _String_19 = _String_35
                                                    
                                                    zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                        _mm_cvtepi32_ps(zx.o(_wtoi(_String_19))).d))
                                                    zmm1.q = zmm1.q f* zmm0_9.q
                                                    *(var_6c8 + 0x10) = zmm1.q
                                                
                                                int16_t* _String_58 = _String_35
                                                
                                                if (_String_58 != 0)
                                                    sub_140a74f90(_String_58)
                                                
                                                int16_t* _String_59 = _String_27
                                                
                                                if (_String_59 != 0)
                                                    sub_140a74f90(_String_59)
                                                
                                                _String_57 = _String_47
                                        
                                        goto label_1406754dc
                                    
                                    if (rcx_238 == 4)
                                        r15_15 = &arg1[2]
                                        int16_t* _String_83
                                        sub_140a35730(r15_15, &_String_83)
                                        int16_t* const _String_123 = &data_142d40450
                                        int16_t* const _String_112 = &data_142d40450
                                        int32_t var_380
                                        
                                        if (var_380 != 0)
                                            _String_112 = _String_83
                                        
                                        if (sub_140a54510(_String_112, u"true") != 0)
                                            if (var_380 != 0)
                                                _String_123 = _String_83
                                            
                                            if (sub_140a54510(_String_123, u"false") != 0)
                                                arg1[0xb].d = 1
                                                _String_57 = _String_83
                                            else
                                                *(var_6c8 + 0x10) = 0
                                                _String_57 = _String_83
                                        else
                                            *(var_6c8 + 0x10) = 1
                                            _String_57 = _String_83
                                        
                                        goto label_1406754dc
                                    
                                    arg1[0xb].d = 1
                                    sub_140669d70(&var_6c8)
                                    arg1[0xa].d = 5
                            
                            goto label_1406756e7
                        
                        int64_t r8_30 = sx.q(*(r14_1 + 8))
                        
                        if (*(result + (r8_30 << 2) - 0xc) != 0 || *(result + (r8_30 << 2) - 8) != 5
                                || *(result + (r8_30 << 2) - 4) != 4)
                            goto label_140674fea
                        
                        int32_t r9_5 = (rdx_7 - 2).d
                        int32_t rax_178 = r8_30.d - r9_5
                        
                        if (rax_178 != 2)
                            memmove(result + (sx.q(r9_5) << 2), result + (rdx_7 << 2), 
                                (rax_178 - 2) << 2)
                            r8_30 = zx.q(*(r14_1 + 8))
                        
                        *(r14_1 + 8) = (r8_30 - 2).d
                        arg1[0xa].d = 0
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        label_140674fd5:
                            arg1[0xa].d = 6
                            goto label_1406756e7
                        
                        int64_t rax_181 = arg1[6]
                        int64_t rcx_179 = sx.q(arg1[7].d) * 2
                        void* rdx_86 = *(rax_181 + (rcx_179 << 3) - 0x10)
                        void* var_6d8 = rdx_86
                        int64_t* rbx_42 = *(rax_181 + (rcx_179 << 3) - 8)
                        int64_t* var_6d0_1 = rbx_42
                        
                        if (rbx_42 != 0)
                            rbx_42[1].d += 1
                            rbx_42 = var_6d0_1
                            rdx_86 = var_6d8
                        
                        if (*(rdx_86 + 8) - 5 u<= 1)
                            goto label_140674f9b
                        
                        int64_t rax_183 = arg1[6]
                        int64_t rcx_181 = sx.q(arg1[7].d) * 2
                        int64_t* rbx_43 = *(rax_183 + (rcx_181 << 3) - 8)
                        *(rax_183 + (rcx_181 << 3) - 8) = 0
                        *(rax_183 + (rcx_181 << 3) - 0x10) = 0
                        sub_1406792e0(&arg1[6], arg1[7].d - 1, 1, 0)
                        
                        if (rbx_43 != 0)
                            rbx_43[1].d -= 1
                            
                            if (rbx_43[1].d == 1)
                                (**rbx_43)(rbx_43)
                                int32_t temp39_1 = *(rbx_43 + 0xc)
                                *(rbx_43 + 0xc) -= 1
                                
                                if (temp39_1 == 1)
                                    (*(*rbx_43 + 8))(rbx_43, 1)
                        
                        if (arg1[7].d s<= 0)
                            arg1[0xb].d = 1
                        label_140674f96:
                            rbx_42 = var_6d0_1
                        label_140674f9b:
                            
                            if (rbx_42 == 0)
                                goto label_140674fd5
                            
                            rbx_42[1].d -= 1
                            
                            if (rbx_42[1].d != 1)
                                goto label_140674fd5
                            
                            (**rbx_42)(rbx_42)
                            int32_t temp37_1 = *(rbx_42 + 0xc)
                            *(rbx_42 + 0xc) -= 1
                            
                            if (temp37_1 != 1)
                                goto label_140674fd5
                            
                            (*(*rbx_42 + 8))(rbx_42, 1)
                            arg1[0xa].d = 6
                            goto label_1406756e7
                        
                        void* rbx_44 = var_6d8
                        int32_t rcx_185 = *(rbx_44 + 8)
                        int16_t* _String_54
                        void* r15_14
                        
                        if (rcx_185 == 1)
                            r15_14 = &arg1[2]
                            int16_t* _String_89
                            sub_140a35730(r15_14, &_String_89)
                            int16_t* _String_111 = &data_142d40450
                            int32_t var_180
                            
                            if (var_180 != 0)
                                _String_111 = _String_89
                            
                            if (sub_140a54510(_String_111, u"null") != 0)
                                arg1[0xb].d = 1
                            
                            _String_54 = _String_89
                        else
                            if (rcx_185 == 2)
                                r15_14 = &arg1[2]
                                sub_140597df0(rbx_44 + 0x10, r15_14)
                                int32_t rdx_101 = *(rbx_44 + 0x18)
                                
                                if (*(rbx_44 + 0x1c) != rdx_101)
                                    sub_1405947f0(rbx_44 + 0x10, rdx_101)
                                
                                arg1[0xc].d += *(rbx_44 + 0x1c) * 2
                                goto label_140674e43
                            
                            if (rcx_185 == 3)
                                r15_14 = &arg1[2]
                                int16_t* _String_46
                                int128_t zmm0_7 = sub_140a35730(r15_14, &_String_46)
                                int16_t* _String_72 = _String_46
                                int32_t var_4e0
                                int32_t rcx_193 = var_4e0
                                int16_t* _String_96 = _String_72
                                void* rdx_91 = &_String_72[sx.q(rcx_193)]
                                int32_t rbx_46
                                
                                if (_String_72 != rdx_91)
                                    while (*_String_96 != 0x65)
                                        _String_96 = &_String_96[1]
                                        
                                        if (_String_96 == rdx_91)
                                            goto label_140674b76
                                    
                                    rbx_46 = ((_String_96 - _String_72) s>> 1).d
                                
                                if (_String_72 == rdx_91 || rbx_46 == 0xffffffff)
                                label_140674b76:
                                    
                                    if (sub_140a24720(&_String_46) == 0)
                                        arg1[0xb].d = 1
                                        _String_54 = _String_46
                                    else
                                        int16_t* _String_4 = &data_142d40450
                                        
                                        if (var_4e0 != 0)
                                            _String_4 = _String_46
                                        
                                        wcstod(_String_4, nullptr)
                                        *(var_6d8 + 0x10) = zmm0_7.q
                                        _String_54 = _String_46
                                else
                                    int32_t rdx_92 = rcx_193 - 1
                                    
                                    if (rcx_193 == 0)
                                        rdx_92 = 0
                                    
                                    if (rdx_92 s<= rbx_46 + 2)
                                        arg1[0xb].d = 1
                                        _String_54 = _String_46
                                    else
                                        int16_t* const _String_18 = &data_142d40450
                                        int16_t* _String_100
                                        int32_t r14_8
                                        
                                        if (rcx_193 == 0)
                                            _String_100 = &data_142d40450
                                            r14_8 = 0
                                        else
                                            _String_100 = _String_72
                                            r14_8 = rcx_193 - 1
                                        
                                        if (rbx_46 s< 0)
                                            r14_8 = 0
                                        else if (rbx_46 s< r14_8)
                                            r14_8 = rbx_46
                                        
                                        int16_t* _String_26 = nullptr
                                        int32_t var_690_1 = 0
                                        
                                        if (_String_100 != 0 && *_String_100 != 0 && r14_8 s> 0)
                                            sub_1405947f0(&_String_26, r14_8 + 1)
                                            int32_t rax_195 = var_690_1 + 1 + r14_8
                                            var_690_1 = rax_195
                                            
                                            if (rax_195 s> 0)
                                                sub_140594770(&_String_26)
                                            
                                            zmm0_7 = UnDecorator::getReferenceType(_String_26, 
                                                _String_100, r14_8 * 2)
                                            _String_26[sx.q(var_690_1) - 1] = 0
                                            rcx_193 = var_4e0
                                            _String_72 = _String_46
                                        
                                        int32_t rax_197 = rcx_193 - 1
                                        
                                        if (rcx_193 == 0)
                                            rax_197 = 0
                                        
                                        int32_t rdx_96
                                        
                                        if (rcx_193 == 0)
                                            rdx_96 = 0
                                            _String_72 = &data_142d40450
                                        else
                                            rdx_96 = rcx_193 - 1
                                        
                                        int32_t rcx_199
                                        
                                        if (rax_197 - rbx_46 - 1 s>= 0)
                                            rcx_199 = rdx_96
                                            
                                            if (rax_197 - rbx_46 - 1 s< rdx_96)
                                                rcx_199 = rax_197 - rbx_46 - 1
                                        else
                                            rcx_199 = 0
                                        
                                        int32_t rdx_97 = 0
                                        int16_t* _String_34 = nullptr
                                        int32_t var_5c0_1 = 0
                                        void* r14_9 = &_String_72[sx.q(rdx_96) - sx.q(rcx_199)]
                                        int32_t rcx_202 = 0
                                        int32_t var_5bc_1 = 0
                                        
                                        if (r14_9 != 0 && *r14_9 != 0)
                                            int64_t rbx_47 = -1
                                            
                                            do
                                                rbx_47 += 1
                                            while (*(r14_9 + (rbx_47 << 1)) != 0)
                                            
                                            if (rbx_47.d + 1 s> 0)
                                                sub_1405947f0(&_String_34, rbx_47.d + 1)
                                                rcx_202 = var_5bc_1
                                                rdx_97 = var_5c0_1
                                            
                                            int32_t rax_201 = rbx_47.d + 1 + rdx_97
                                            var_5c0_1 = rax_201
                                            
                                            if (rax_201 s> rcx_202)
                                                sub_140594770(&_String_34)
                                            
                                            zmm0_7 = UnDecorator::getReferenceType(_String_34, 
                                                r14_9, (rbx_47.d + 1) * 2)
                                        
                                        char rax_202 = sub_140a24720(&_String_26)
                                        char rax_203
                                        
                                        if (rax_202 != 0)
                                            rax_203 = sub_140a24720(&_String_34)
                                        
                                        if (rax_202 == 0 || rax_203 == 0)
                                            arg1[0xb].d = 1
                                        else
                                            int16_t* const _String_5 = &data_142d40450
                                            
                                            if (var_690_1 != 0)
                                                _String_5 = _String_26
                                            
                                            wcstod(_String_5, nullptr)
                                            
                                            if (var_5c0_1 != 0)
                                                _String_18 = _String_34
                                            
                                            zmm1.q = fconvert.d(powf(0x41200000.d, 
                                                _mm_cvtepi32_ps(zx.o(_wtoi(_String_18))).d))
                                            zmm1.q = zmm1.q f* zmm0_7.q
                                            *(var_6d8 + 0x10) = zmm1.q
                                        
                                        int16_t* _String_55 = _String_34
                                        
                                        if (_String_55 != 0)
                                            sub_140a74f90(_String_55)
                                        
                                        int16_t* _String_56 = _String_26
                                        
                                        if (_String_56 != 0)
                                            sub_140a74f90(_String_56)
                                        
                                        _String_54 = _String_46
                                
                                goto label_140674e39
                            
                            if (rcx_185 != 4)
                                arg1[0xb].d = 1
                                sub_140669d70(&var_6d8)
                                arg1[0xa].d = 6
                                goto label_1406756e7
                            
                            r15_14 = &arg1[2]
                            int16_t* _String_82
                            sub_140a35730(r15_14, &_String_82)
                            int16_t* const _String_122 = &data_142d40450
                            int16_t* const _String_110 = &data_142d40450
                            int32_t var_390
                            
                            if (var_390 != 0)
                                _String_110 = _String_82
                            
                            if (sub_140a54510(_String_110, u"true") != 0)
                                if (var_390 != 0)
                                    _String_122 = _String_82
                                
                                if (sub_140a54510(_String_122, u"false") != 0)
                                    arg1[0xb].d = 1
                                    _String_54 = _String_82
                                else
                                    *(var_6d8 + 0x10) = 0
                                    _String_54 = _String_82
                            else
                                *(var_6d8 + 0x10) = 1
                                _String_54 = _String_82
                        
                    label_140674e39:
                        
                        if (_String_54 == 0)
                            goto label_140674e43
                        
                        sub_140a74f90(_String_54)
                    label_140674e43:
                        int32_t rdx_103 = *(arg1 + 0x1c)
                        *(r15_14 + 8) = 0
                        
                        if (*(r15_14 + 0xc) != rdx_103)
                            sub_1405947f0(r15_14, rdx_103)
                        
                        int64_t rax_209 = arg1[6]
                        int64_t rcx_214 = sx.q(arg1[7].d) * 2
                        int64_t* rbx_49 = *(rax_209 + (rcx_214 << 3) - 0x10)
                        int64_t* var_298 = rbx_49
                        void* rdx_104 = *(rax_209 + (rcx_214 << 3) - 8)
                        void* var_290_1 = rdx_104
                        
                        if (rdx_104 != 0)
                            *(rdx_104 + 8) += 1
                            rbx_49 = var_298
                        
                        int32_t rax_210 = rbx_49[1].d
                        
                        if (rax_210 == 6)
                            int32_t rax_211 = arg1[1].d
                            int32_t rcx_215 = rax_211 - 1
                            
                            if (rax_211 == 0)
                                rcx_215 = 0
                            
                            if (rcx_215 s<= 0)
                                arg1[0xb].d = 1
                                sub_140669d70(&var_298)
                            else
                                int64_t var_448
                                sub_140596d10(&var_448, arg1)
                                int64_t var_440
                                int32_t rax_212 = var_440.d
                                
                                if (var_440:4.d != rax_212)
                                    sub_1405947f0(&var_448, rax_212)
                                
                                int64_t* rcx_218 = var_298
                                j_sub_140b746f0(*(**rcx_218)(rcx_218), &var_448, &var_6d8)
                                arg1[0xc].d += var_440:4.d * 2
                                arg1[1].d = 0
                                int64_t rcx_220 = var_448
                                
                                if (rcx_220 == 0)
                                    sub_140669d70(&var_298)
                                else
                                    sub_140a74f90(rcx_220)
                                    sub_140669d70(&var_298)
                        else if (rax_210 != 5)
                            arg1[0xb].d = 1
                            sub_140669d70(&var_298)
                        else
                            int64_t rsi_14 = sx.q(rbx_49[3].d)
                            int32_t rax_217 = (rsi_14 + 1).d
                            rbx_49[3].d = rax_217
                            
                            if (rax_217 s> *(rbx_49 + 0x1c))
                                sub_140610660(&rbx_49[2])
                            
                            void** rcx_225 = (rsi_14 << 4) + rbx_49[2]
                            *rcx_225 = var_6d8
                            rcx_225[1] = var_6d0_1
                            
                            if (var_6d0_1 == 0)
                                sub_140669d70(&var_298)
                            else
                                var_6d0_1[1].d += 1
                                sub_140669d70(&var_298)
                        
                        goto label_140674f96
                    case 5
                        if (rdx_7.d s<= 1)
                            goto label_1406756e0
                        
                        result = sx.q(*(r14_1 + 8))
                        int64_t rcx_282 = *r14_1
                        
                        if (*(rcx_282 + (result << 2) - 8) != 0
                                || *(rcx_282 + (result << 2) - 4) != 5)
                            goto label_1406756e0
                        
                        arg1[0xa].d = 6
                        result = zx.q(arg1[3].d)
                        
                        if (result.d == 0 || result.d - 1 s<= 0)
                            goto label_1406756e0
                        
                        arg1[1].d = 0
                        int32_t rax_265 = arg1[3].d
                        int32_t r8_44 = rax_265 - 1
                        
                        if (rax_265 == 0)
                            r8_44 = 0
                        
                        sub_140a20ba0(arg1, arg1[2], r8_44)
                        int32_t rdx_137 = *(arg1 + 0x1c)
                        arg1[3].d = 0
                        
                        if (*(arg1 + 0x1c) != rdx_137)
                            sub_1405947f0(&arg1[2], rdx_137)
                        
                        goto label_1406756e7
                    case 7
                        goto label_1406756e0
            
            result.b = 1
        case 0x140672e29
            int64_t rbx_2 = sx.q(arg1[9].d)
            r14_1 = &arg1[8]
            int32_t rax_2 = (rbx_2 + 1).d
            *(r14_1 + 8) = rax_2
            
            if (rax_2 s> *(r14_1 + 0xc))
                sub_1406105e0(r14_1)
            
            *(*r14_1 + (rbx_2 << 2)) = 1
            goto label_140672f02
        case 0x140672e57
            int64_t rbx_3 = sx.q(arg1[9].d)
            r14_1 = &arg1[8]
            int32_t rax_3 = (rbx_3 + 1).d
            *(r14_1 + 8) = rax_3
            
            if (rax_3 s> *(r14_1 + 0xc))
                sub_1406105e0(r14_1)
            
            *(*r14_1 + (rbx_3 << 2)) = 2
            goto label_140672f02
        case 0x140672e83
            int64_t rbx_4 = sx.q(arg1[9].d)
            r14_1 = &arg1[8]
            int32_t rax_4 = (rbx_4 + 1).d
            *(r14_1 + 8) = rax_4
            
            if (rax_4 s> *(r14_1 + 0xc))
                sub_1406105e0(r14_1)
            
            *(*r14_1 + (rbx_4 << 2)) = 3
            goto label_140672f02
        case 0x140672eae
            int64_t rbx_5 = sx.q(arg1[9].d)
            r14_1 = &arg1[8]
            int32_t rax_5 = (rbx_5 + 1).d
            *(r14_1 + 8) = rax_5
            
            if (rax_5 s> *(r14_1 + 0xc))
                sub_1406105e0(r14_1)
            
            *(*r14_1 + (rbx_5 << 2)) = 4
            goto label_140672f02
        case 0x140672ed9
            int64_t rbx_6 = sx.q(arg1[9].d)
            r14_1 = &arg1[8]
            int32_t rax_6 = (rbx_6 + 1).d
            *(r14_1 + 8) = rax_6
            
            if (rax_6 s> *(r14_1 + 0xc))
                sub_1406105e0(r14_1)
            
            *(*r14_1 + (rbx_6 << 2)) = 5
            goto label_140672f02
        case 0x140675708
            goto label_140675708
return result
