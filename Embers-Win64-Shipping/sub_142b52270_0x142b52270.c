// 函数: sub_142b52270
// 地址: 0x142b52270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_400 = -2
uint128_t zmm6
uint128_t var_58 = zmm6
void var_468
int64_t rax_1 = __security_cookie ^ &var_468
sub_142a4ab40(arg5)
void* rax_2 = sub_142acf980(arg2)

if (rax_2 != 0)
    void var_378
    sub_142a47a60(&var_378, 1, rax_2, 0xffffffff)
    char rsi_1 = 1
    int32_t r15_1 = 8
    
    if (arg3 == 2)
        r15_1 = 1
    
    int64_t* rcx_3 = *(arg1 + 0xe8)
    (*(*rcx_3 + 0x48))(rcx_3, &var_378, zx.q(r15_1), arg5)
    
    if ((*(arg5 + 8) & 0xffe0) == 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_338
        int16_t var_2f8[0x20]
        sub_142a47d50(&var_338, &var_2f8, 0, 0x20)
        int64_t* rcx_5 = *(arg1 + 0xe8)
        int512_t zmm2
        zmm2.o = arg4
        (*(*rcx_5 + 0x30))(rcx_5, &var_378, zmm2, &var_338)
        int16_t var_330
        
        if ((var_330 & 0xffe0) != 0)
            int32_t var_428 = 0
            int32_t* var_440_1 = &var_428
            int32_t var_424
            int32_t* var_448_1 = &var_424
            double zmm1_1 = arg4.q
            int32_t var_420
            (*(*arg2 + 0x18))(arg2, zmm1_1, 0, &var_420, var_448_1, var_440_1)
            
            if (var_428 s<= 0)
                int32_t var_438
                void var_3f8
                int16_t var_3f0
                void var_3b8
                int16_t var_3b0
                int32_t var_3ac
                int16_t var_278[0x80]
                
                if (var_424 != 0)
                label_142b526fc:
                    
                    if ((*(arg5 + 8) & 0xffe0) == 0)
                        sub_142a47d50(&var_3f8, &var_278, 0, 0x80)
                        int64_t* rcx_40 = *(arg1 + 0xe8)
                        (*(*rcx_40 + 0x40))(rcx_40, zmm1_1, zx.q(r15_1), &var_3f8, var_448_1, 
                            var_440_1, var_438)
                        
                        if ((var_3f0 & 0xffe0) != 0)
                            int16_t var_2b8[0x20]
                            sub_142a47d50(&var_3b8, &var_2b8, 0, 0x20)
                            int64_t* rcx_42 = *(arg1 + 0xe8)
                            (*(*rcx_42 + 0x38))(rcx_42, zmm1_1, arg1 + 0x1d1, &var_3b8)
                            
                            if ((var_3b0 & 0xffe0) == 0)
                                sub_142a48aa0(arg5, &var_3f8, 0)
                            else
                                char var_370
                                bool cond:0_1
                                
                                if ((var_3b0.b & 1) == 0)
                                    int32_t r8_10
                                    
                                    if (var_3b0 s< 0)
                                        r8_10 = var_3ac
                                    else
                                        r8_10 = sx.d(var_3b0) s>> 5
                                    
                                    int16_t rcx_43 = var_370.w
                                    int32_t rax_32
                                    int32_t var_36c
                                    
                                    if (rcx_43 s< 0)
                                        rax_32 = var_36c
                                    else
                                        rax_32 = sx.d(rcx_43) s>> 5
                                    
                                    if ((rcx_43.b & 1) != 0 || r8_10 != rax_32)
                                        goto label_142b527e3
                                    
                                    cond:0_1 = sub_142a490e0(&var_3b8, &var_378, r8_10) != 0
                                else
                                    cond:0_1 = (var_370 & 1) != 0
                                
                                if (cond:0_1)
                                    sub_142a48aa0(arg5, &var_3f8, 0)
                                else
                                label_142b527e3:
                                    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** 
                                        rax_34
                                    int64_t r8_11
                                    rax_34, r8_11 = sub_142a64de0(&var_3b8)
                                    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable* 
                                        rdx_15 = *rax_34
                                    _mm_cvtepi32_pd(zx.q(var_420))
                                    _mm_cvtepi32_pd(zx.q(var_424))
                                    r8_11.b = 1
                                    int32_t var_418
                                    int32_t var_410
                                    rdx_15->__offset(0x18).q(rax_34, rdx_15, r8_11, &var_418, 
                                        &var_410, &var_428)
                                    (*rax_34)->__offset(0x0).q(rax_34, 1)
                                    
                                    if (var_428 s<= 0)
                                        if (var_420 != var_418 || var_424 != var_410)
                                            sub_142a4ab40(arg5)
                                            
                                            if ((var_370.w & 0xffe0) != 0 && (var_330 & 0xffe0) != 0
                                                    && (var_3f0 & 0xffe0) != 0)
                                                sub_142b52950()
                                                sub_142a860a0(&data_144016cc0)
                                                int64_t rax_38 = sub_142b52f30(arg1, &var_378, 
                                                    &var_338, arg3 == 2, &var_3f8)
                                                sub_142b52950()
                                                sub_142a860d0(&data_144016cc0)
                                                
                                                if (rax_38 != 0)
                                                    sub_142a4aa20(arg5, 1, rax_38, 0xffffffff)
                                                else
                                                    sub_142a4ab40(arg5)
                                        else
                                            sub_142a48aa0(arg5, &var_3f8, 0)
                            
                            sub_142a47ff0(&var_3b8)
                        
                        sub_142a47ff0(&var_3f8)
                else
                    int64_t* inptr = (*(*arg2 + 0x58))(arg2)
                    var_448_1.d = 0
                    int64_t rax_7
                    int64_t r8_2
                    rax_7, r8_2 = __RTDynamicCast(inptr, 0, 
                        &class icu_64::TimeZone `RTTI Type Descriptor', 
                        &class icu_64::OlsonTimeZone `RTTI Type Descriptor', var_448_1.d)
                    
                    if (rax_7 == 0)
                        var_448_1.d = 0
                        int64_t rax_8
                        rax_8, r8_2 = __RTDynamicCast(inptr, 0, 
                            &class icu_64::TimeZone `RTTI Type Descriptor', 
                            &class icu_64::SimpleTimeZone `RTTI Type Descriptor', var_448_1.d)
                        
                        if (rax_8 != 0)
                            goto label_142b5243b
                        
                        var_448_1.d = 0
                        int64_t rax_9
                        rax_9, r8_2 = __RTDynamicCast(inptr, 0, 
                            &class icu_64::TimeZone `RTTI Type Descriptor', 
                            &class icu_64::RuleBasedTimeZone `RTTI Type Descriptor', var_448_1.d)
                        
                        if (rax_9 == 0)
                            var_448_1.d = 0
                            int64_t rax_10
                            rax_10, r8_2 = __RTDynamicCast(inptr, 0, 
                                &class icu_64::TimeZone `RTTI Type Descriptor', &data_143ccf460, 
                                var_448_1.d)
                            
                            if (rax_10 == 0 || inptr == 0)
                                goto label_142b5250f
                            
                            goto label_142b52449
                    
                label_142b5243b:
                    
                    if (inptr != 0)
                    label_142b52449:
                        sub_142ad0f20(&var_3f8)
                        r8_2.b = 1
                        zmm6 = 0x420d9c9100000000
                        
                        if ((*(*inptr + 0x70))(inptr, arg4.q, r8_2, &var_3f8, var_448_1) == 0)
                        label_142b524a5:
                            sub_142ad0f20(&var_3b8)
                            zmm1_1 = arg4.q
                            
                            if ((*(*inptr + 0x68))(inptr, zmm1_1, 0, &var_3b8) != 0
                                    && not(zmm6.q f<= sub_142ad1130(&var_3b8) f- arg4.q))
                                rsi_1 = 1
                                
                                if (sub_141b60020(sub_14082fb80(&var_3b8)) != 0)
                                    rsi_1 = 0
                            
                            sub_142ad0f40(&var_3b8)
                        else
                            zmm1_1 = arg4.q - sub_142ad1130(&var_3f8)
                            
                            if (zmm6.q f<= zmm1_1)
                                goto label_142b524a5
                            
                            if (sub_141b60020(sub_1405948b0(&var_3f8)) == 0)
                                goto label_142b524a5
                            
                            rsi_1 = 0
                        
                        sub_142ad0f40(&var_3f8)
                        goto label_142b525a6
                    
                label_142b5250f:
                    zmm6 = 0x420d9c9100000000
                    zmm1_1 = arg4.q f- zmm6.q
                    var_440_1 = &var_428
                    var_448_1 = &var_424
                    (*(*inptr + 0x18))(inptr, zmm1_1, 0, &var_420, var_448_1, var_440_1)
                    
                    if (var_424 == 0)
                        zmm1_1 = arg4.q f+ zmm6.q
                        var_440_1 = &var_428
                        var_448_1 = &var_424
                        (*(*inptr + 0x18))(inptr, zmm1_1, 0, &var_420, var_448_1, var_440_1)
                        rsi_1 = 1
                        
                        if (var_424 != 0)
                            rsi_1 = 0
                    else
                        rsi_1 = 0
                    
                    if (var_428 s<= 0)
                    label_142b525a6:
                        (**inptr)(inptr, zmm1_1)
                        
                        if (rsi_1 != 0)
                            int32_t rbx_2 = 0x10
                            
                            if (arg3 == 2)
                                rbx_2 = 2
                            
                            sub_142a47d50(&var_3f8, &var_278, 0, 0x80)
                            int64_t* rcx_29 = *(arg1 + 0xe8)
                            var_448_1 = &var_3f8
                            (*(*rcx_29 + 0x58))(rcx_29, &var_378, zx.q(rbx_2), arg4, var_448_1, 
                                var_440_1)
                            
                            if ((var_3f0 & 0xffe0) != 0)
                                sub_142a48aa0(arg5, &var_3f8, 0)
                                int16_t var_178[0x80]
                                sub_142a47d50(&var_3b8, &var_178, 0, 0x80)
                                int64_t* rcx_32 = *(arg1 + 0xe8)
                                (*(*rcx_32 + 0x40))(rcx_32, &var_338, zx.q(r15_1), &var_3b8)
                                int32_t rdx_9 = var_3ac
                                int32_t rcx_34
                                
                                if (var_3b0 s< 0)
                                    rcx_34 = rdx_9
                                else
                                    rcx_34 = sx.d(var_3b0) s>> 5
                                
                                int32_t r10_2
                                int32_t var_3ec
                                
                                if (var_3f0 s< 0)
                                    r10_2 = var_3ec
                                else
                                    r10_2 = sx.d(var_3f0) s>> 5
                                int16_t rax_25
                                
                                if ((var_3b0.b & 1) == 0)
                                    if (var_3b0 s>= 0)
                                        rdx_9 = sx.d(var_3b0) s>> 5
                                    
                                    int32_t rax_26 = 0
                                    
                                    if (rdx_9 s< 0)
                                        rax_26 = rdx_9
                                    
                                    if (rcx_34 s>= 0)
                                        int32_t rdx_11 = rdx_9 - rax_26
                                        
                                        if (rcx_34 s> rdx_11)
                                            rcx_34 = rdx_11
                                    else
                                        rcx_34 = 0
                                    
                                    void var_3ae
                                    int16_t* r9_9 = &var_3ae
                                    int16_t* var_3a0
                                    
                                    if ((var_3b0.b & 2) == 0)
                                        r9_9 = var_3a0
                                    var_438 = 0
                                    var_440_1.d = rcx_34
                                    var_448_1.d = rax_26
                                    rax_25 = sub_142a8ee00(&var_3f8, 0, r10_2, r9_9, var_448_1.d, 
                                        var_440_1.d, var_438)
                                else
                                    rax_25.b = not.b(var_3f0.b)
                                    rax_25.b &= 1
                                
                                if (rax_25.b == 0)
                                    sub_142a4ab40(arg5)
                                
                                sub_142a47ff0(&var_3b8)
                            
                            sub_142a47ff0(&var_3f8)
                        
                        goto label_142b526fc
                    
                    (**inptr)(inptr, 1)
        
        sub_142a47ff0(&var_338)
    
    sub_142a47ff0(&var_378)

__security_check_cookie(rax_1 ^ &var_468)
return arg5
