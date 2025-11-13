// 函数: sub_142aa2b70
// 地址: 0x142aa2b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_4e0 = -2
void var_538
int64_t rax_1 = __security_cookie ^ &var_538
int32_t r14 = arg3
int32_t r12 = arg5
uint64_t result

if (arg2 != arg4 || arg3 != r12)
    int32_t rdx = 0
    int32_t var_4f8 = 0
    
    if (r14 s>= 0)
        if (r14 != 0)
            while (rdx != r12)
                char* rcx = sx.q(rdx)
                
                if (*(rcx + arg2) != *(rcx + arg4))
                    break
                
                rdx += 1
                var_4f8 = rdx
                
                if (rdx == r14)
                    goto label_142aa2c2d
            
            goto label_142aa2c32
        
    label_142aa2c2d:
        
        if (rdx != r12)
        label_142aa2c32:
            
            if (rdx s<= 0)
                goto label_142aa2c71
            
            if (rdx != r14 && arg2[sx.q(rdx)] s< 0xc0)
            label_142aa2c64:
                
                do
                    rdx -= 1
                    var_4f8 = rdx
                    
                    if (rdx s<= 0)
                        break
                while (arg2[sx.q(rdx)] s< 0xc0)
            else if (rdx != r12 && *(sx.q(rdx) + arg4) s< 0xc0)
                goto label_142aa2c64
            
            goto label_142aa2c71
        
    label_142aa2bcf:
        result = 0
    else
        char i = *arg2
        
        if (i == *arg4)
            char* rax_3
            
            do
                if (i == 0)
                    goto label_142aa2bcf_1
                
                rdx += 1
                var_4f8 = rdx
                rax_3 = sx.q(rdx)
                i = *(rax_3 + arg2)
            while (i == *(rax_3 + arg4))
            goto label_142aa2c32
        
    label_142aa2c71:
        uint32_t r11_2
        r11_2.b = (*(*(arg1 + 0x10) + 0x18) u>> 1).b & 1
        uint32_t var_4f4_1 = r11_2
        char var_4f0_1 = r11_2.b
        
        if (rdx s> 0)
            if (rdx == r14)
                goto label_142aa2db4
            
            uint32_t r9 = zx.d(arg2[sx.q(rdx)])
            int32_t r8 = rdx + 1
            
            if (r9.b s< 0)
                if (r8 == r14)
                    r9 = 0xfffd
                else
                    int32_t r9_5
                    
                    if (r9 u< 0xe0)
                        if (r9 u< 0xc2)
                            r9 = 0xfffd
                        else
                            r9_5 = r9 & 0x1f
                        label_142aa2d79:
                            char rcx_5 = *(sx.q(r8) + arg2) - 0x80
                            
                            if (rcx_5 u> 0x3f)
                                r9 = 0xfffd
                            else
                                r9 = r9_5 << 6 | zx.d(rcx_5)
                    else
                        uint64_t r9_1
                        uint32_t r10_1
                        
                        if (r9 u< 0xf0)
                            r9_1 = zx.q(r9) & 0xf
                            r10_1 = zx.d(arg2[sx.q(r8)])
                            
                            if (not(test_bit(sx.d((*" 000000000000")[r9_1]), 
                                    zx.d((r10_1 u>> 5).b))))
                                r9 = 0xfffd
                            else
                                r10_1.b &= 0x3f
                            label_142aa2d58:
                                r9_5 = r9_1.d << 6 | zx.d(r10_1.b)
                                r8 += 1
                                
                                if (r8 != r14)
                                    goto label_142aa2d79
                                
                                r9 = 0xfffd
                        else if (r9 - 0xf0 s> 4)
                            r9 = 0xfffd
                        else
                            uint32_t rcx_2 = zx.d(arg2[sx.q(r8)])
                            
                            if (not(test_bit(sx.d(*((zx.q(rcx_2) u>> 4) + 0x14363c6e8)), 
                                    r9 - 0xf0)))
                                r9 = 0xfffd
                            else
                                r9_1 = (zx.q(rcx_2.b) & 0x3f) | zx.q((r9 - 0xf0) << 6)
                                r8 += 1
                                
                                if (r8 == r14)
                                    r9 = 0xfffd
                                else
                                    r10_1.b = arg2[sx.q(r8)] - 0x80
                                    
                                    if (r10_1.b u<= 0x3f)
                                        goto label_142aa2d58
                                    
                                    r9 = 0xfffd
            
            if (sub_142aa4ee0(*(arg1 + 8), r9, r11_2.b) != 0)
            label_142aa2ed5:
                
                while (true)
                    rdx = var_4f8 - 1
                    var_4f8 = rdx
                    uint32_t rbx_1 = zx.d(arg2[sx.q(rdx)])
                    
                    if (rbx_1.b s< 0)
                        rbx_1 = sub_142a9be90(arg2, 0, &var_4f8, rbx_1, 0xfd)
                        rdx = var_4f8
                    
                    if (rdx s<= 0)
                        goto label_142aa2f5c
                    
                    int64_t* r15_1 = *(arg1 + 8)
                    char rax_43 = sub_142a9f280(r15_1[0xa], zx.q(rbx_1))
                    
                    if (rax_43 == 0)
                        if (var_4f0_1 == rax_43)
                            break
                        
                        if (rbx_1 s>= 0x660)
                            char rax_45 = sub_142aa3ce0(r15_1, rbx_1)
                            char rax_47
                            
                            if (rax_45 u< 0xc0 || (rax_45 & 0xf) != 0xa)
                                rax_47 = 0
                            else
                                rax_47 = 1
                            
                            if (rax_47 == 0)
                                break
                        else
                            if (rbx_1 - 0x30 u> 9)
                                break
                
                rdx = var_4f8
            else
                rdx = var_4f8
                r11_2 = var_4f4_1
            label_142aa2db4:
                
                if (rdx != r12)
                    uint32_t r9_7 = zx.d(arg4[sx.q(rdx)])
                    int32_t r8_2 = rdx + 1
                    
                    if (r9_7.b s< 0)
                        if (r8_2 == r12)
                            r9_7 = 0xfffd
                        else
                            int32_t r9_12
                            
                            if (r9_7 u< 0xe0)
                                if (r9_7 u< 0xc2)
                                    r9_7 = 0xfffd
                                else
                                    r9_12 = r9_7 & 0x1f
                                label_142aa2e9f:
                                    char rcx_11 = *(sx.q(r8_2) + arg4) - 0x80
                                    
                                    if (rcx_11 u> 0x3f)
                                        r9_7 = 0xfffd
                                    else
                                        r9_7 = r9_12 << 6 | zx.d(rcx_11)
                            else
                                uint64_t r9_8
                                uint32_t r10_2
                                
                                if (r9_7 u< 0xf0)
                                    r9_8 = zx.q(r9_7) & 0xf
                                    r10_2 = zx.d(arg4[sx.q(r8_2)])
                                    
                                    if (not(test_bit(sx.d((*" 000000000000")[r9_8]), 
                                            zx.d((r10_2 u>> 5).b))))
                                        r9_7 = 0xfffd
                                    else
                                        r10_2.b &= 0x3f
                                    label_142aa2e7e:
                                        r9_12 = r9_8.d << 6 | zx.d(r10_2.b)
                                        r8_2 += 1
                                        
                                        if (r8_2 != r12)
                                            goto label_142aa2e9f
                                        
                                        r9_7 = 0xfffd
                                else if (r9_7 - 0xf0 s> 4)
                                    r9_7 = 0xfffd
                                else
                                    uint32_t rcx_8 = zx.d(arg4[sx.q(r8_2)])
                                    
                                    if (not(test_bit(sx.d(*((zx.q(rcx_8) u>> 4) + 0x14363c6e8)), 
                                            r9_7 - 0xf0)))
                                        r9_7 = 0xfffd
                                    else
                                        r9_8 = (zx.q(rcx_8.b) & 0x3f) | zx.q((r9_7 - 0xf0) << 6)
                                        r8_2 += 1
                                        
                                        if (r8_2 == r12)
                                            r9_7 = 0xfffd
                                        else
                                            r10_2.b = arg4[sx.q(r8_2)] - 0x80
                                            
                                            if (r10_2.b u<= 0x3f)
                                                goto label_142aa2e7e
                                            
                                            r9_7 = 0xfffd
                    
                    if (sub_142aa4ee0(*(arg1 + 8), r9_7, r11_2.b) != 0)
                        goto label_142aa2ed5
                    
                    rdx = var_4f8
        
    label_142aa2f5c:
        void* rcx_16 = *(arg1 + 0x10)
        int32_t r15_2 = *(rcx_16 + 0x50)
        
        if (r15_2 s< 0 || (rdx != r14 && arg2[sx.q(rdx)] u> 0xc5)
                || (rdx != r12 && arg4[sx.q(rdx)] u> 0xc5))
            goto label_142aa3010
        
        int64_t rax_50 = sx.q(rdx)
        int32_t var_518_1
        
        if (r14 s< 0)
            int32_t var_508_2 = 0xffffffff
            void* var_510_2 = &arg4[rax_50]
            var_518_1 = 0xffffffff
        else
            int32_t var_508_1 = r12 - rdx
            void* var_510_1 = &arg4[rax_50]
            var_518_1 = r14 - rdx
        
        int32_t result_2 =
            sub_142b20ad0(*(*(arg1 + 8) + 0x58), rcx_16 + 0x54, r15_2, &arg2[rax_50], var_518_1)
        int32_t result_1 = result_2
        struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_478
        struct icu_64::UTF8CollationIterator::icu_64::FCDUTF8CollationIterator::VTable* var_458
        int32_t var_450
        int64_t* var_448
        int32_t var_2e0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_2c8
        int16_t var_2c0
        struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_268
        struct icu_64::UTF8CollationIterator::icu_64::FCDUTF8CollationIterator::VTable* var_248
        int32_t var_240
        int64_t* var_238
        int32_t var_d0
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_b8
        int16_t var_b0
        int32_t* r15_3
        
        if (result_2 != 0xfffffffe)
            r15_3 = arg6
        else
            rdx = var_4f8
        label_142aa3010:
            void* r8_7 = *(arg1 + 0x10)
            int64_t* rcx_19 = *(arg1 + 8)
            char r9_16 = var_4f4_1.b
            
            if ((not.b(*(r8_7 + 0x18)) & 1) == 0)
                var_478 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_470_2 = *rcx_19
                int64_t* var_468_2 = rcx_19
                int32_t var_460_2 = 0
                var_458 = &var_448
                var_450 = 0x28
                char var_44c_2 = 0
                int32_t var_308_2 = 0
                int64_t var_300_2 = 0
                int32_t var_2f8_2 = 0xffffffff
                char var_2f4_2 = r9_16
                char* var_2f0_2 = arg2
                int32_t var_2e8_2 = rdx
                int32_t var_2e4_2 = r14
                var_478 = &
                    icu_64::FCDUTF8CollationIterator::`vftable'{for `icu_64::UTF8CollationIterator'}
                var_2e0 = 0
                int32_t var_2dc_1 = rdx
                int64_t var_2d0_1 = rcx_19[6]
                var_2c8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                var_2c0 = 2
                var_268 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_260_2 = *rcx_19
                int64_t* var_258_2 = rcx_19
                int32_t var_250_2 = 0
                var_248 = &var_238
                var_240 = 0x28
                char var_23c_2 = 0
                int32_t var_f8_2 = 0
                int64_t var_f0_2 = 0
                int32_t var_e8_2 = 0xffffffff
                char var_e4_2 = r9_16
                char* var_e0_2 = arg4
                int32_t var_d8_2 = rdx
                int32_t var_d4_2 = r12
                var_268 = &
                    icu_64::FCDUTF8CollationIterator::`vftable'{for `icu_64::UTF8CollationIterator'}
                var_d0 = 0
                int32_t var_cc_1 = rdx
                int64_t var_c0_1 = rcx_19[6]
                var_b8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                var_b0 = 2
                r15_3 = arg6
                result_1 = sub_142b18ea0(&var_478, &var_268, r8_7, r15_3)
                sub_142b2a250(&var_268)
                sub_142b2a250(&var_478)
            else
                var_268 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_260_1 = *rcx_19
                int64_t* var_258_1 = rcx_19
                int32_t var_250_1 = 0
                var_248 = &var_238
                var_240 = 0x28
                char var_23c_1 = 0
                int32_t var_f8_1 = 0
                int64_t var_f0_1 = 0
                int32_t var_e8_1 = 0xffffffff
                char var_e4_1 = r9_16
                var_268 = &icu_64::UTF8CollationIterator::`vftable'{for `icu_64::CollationIterator'}
                char* var_e0_1 = arg2
                int32_t var_d8_1 = rdx
                int32_t var_d4_1 = r14
                var_478 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_470_1 = *rcx_19
                int64_t* var_468_1 = rcx_19
                int32_t var_460_1 = 0
                var_458 = &var_448
                var_450 = 0x28
                char var_44c_1 = 0
                int32_t var_308_1 = 0
                int64_t var_300_1 = 0
                int32_t var_2f8_1 = 0xffffffff
                char var_2f4_1 = r9_16
                var_478 = &icu_64::UTF8CollationIterator::`vftable'{for `icu_64::CollationIterator'}
                char* var_2f0_1 = arg4
                int32_t var_2e8_1 = rdx
                int32_t var_2e4_1 = r12
                r15_3 = arg6
                result_1 = sub_142b18ea0(&var_268, &var_478, r8_7, r15_3)
                sub_142b2a290(&var_478)
                sub_142b2a290(&var_268)
        
        if (result_1 == 0)
            void* r8_8 = *(arg1 + 0x10)
            
            if ((*(r8_8 + 0x18) & 0xfffff000) s>= 0xf000 && *r15_3 s<= result_1)
                int64_t* rdx_9 = *(arg1 + 8)
                void* r9_19 = rdx_9[6]
                int64_t rcx_26 = sx.q(var_4f8)
                void* rdi_1 = &arg2[rcx_26]
                void* rsi_1 = &arg4[rcx_26]
                
                if (r14 s> 0)
                    r14 -= rcx_26.d
                    r12 -= rcx_26.d
                
                struct icu_64::UObject::icu_64::CollationIterator::VTable* const* rcx_29
                
                if ((not.b(*(r8_8 + 0x18)) & 1) == 0)
                    int32_t var_460_3 = 0xffffffff
                    int32_t var_45c_1 = 0
                    var_478 = &icu_64::x4fca7e4c::FCDUTF8NFDIterator::operator[]::FCDUTF8NFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
                    var_458 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                    var_450.q = *rdx_9
                    var_448 = rdx_9
                    int32_t var_440_1 = 0
                    void var_428
                    void* var_438_1 = &var_428
                    int32_t var_430_1 = 0x28
                    char var_42c_1 = 0
                    int32_t var_2e8_3 = 0
                    var_2e0.q = 0
                    int32_t var_2d8_1 = 0xffffffff
                    char var_2d4_1 = 0
                    void* var_2d0_2 = rdi_1
                    var_2c8.d = 0
                    var_2c8:4.d = r14
                    var_458 = &icu_64::FCDUTF8CollationIterator::`vftable'{for `icu_64::UTF8CollationIterator'}
                    var_2c0.q = 0
                    void* var_2b0_1 = r9_19
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_2a8_1 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_2a0_1 = 2
                    int32_t var_250_3 = 0xffffffff
                    int32_t var_24c_1 = 0
                    var_268 = &icu_64::x4fca7e4c::FCDUTF8NFDIterator::operator[]::FCDUTF8NFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
                    var_248 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                    var_240.q = *rdx_9
                    var_238 = rdx_9
                    int32_t var_230_1 = 0
                    void var_218
                    void* var_228_1 = &var_218
                    int32_t var_220_1 = 0x28
                    char var_21c_1 = 0
                    int32_t var_d8_3 = 0
                    var_d0.q = 0
                    int32_t var_c8_1 = 0xffffffff
                    char var_c4_1 = 0
                    void* var_c0_2 = rsi_1
                    var_b8.d = 0
                    var_b8:4.d = r12
                    var_248 = &icu_64::FCDUTF8CollationIterator::`vftable'{for `icu_64::UTF8CollationIterator'}
                    var_b0.q = 0
                    void* var_a0_1 = r9_19
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_98_1 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_90_1 = 2
                    result_1 = sub_142aa27c0(r9_19, &var_478, &var_268)
                    sub_142b2a250(&var_248)
                    var_268 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                    sub_142a47900(&var_268)
                    sub_142b2a250(&var_458)
                    var_478 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                    rcx_29 = &var_478
                else
                    int32_t var_490_1 = 0xffffffff
                    int32_t var_48c_1 = 0
                    struct icu_64::UObject::icu_64::CollationIterator::VTable* var_4a8 = &icu_64::x4fca7e4c::UTF8NFDIterator::operator[]::UTF8NFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
                    void* var_488_1 = rdi_1
                    int32_t var_480_1 = 0
                    int32_t var_47c_1 = r14
                    int32_t var_4c0_1 = 0xffffffff
                    int32_t var_4bc_1 = 0
                    struct icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::icu_64::x4fca7e4c::UTF8NFDIterator::operator[]::UTF8NFDIterator::VTable
                        * const var_4d8 = &icu_64::x4fca7e4c::UTF8NFDIterator::operator[]::UTF8NFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
                    void* var_4b8_1 = rsi_1
                    int32_t var_4b0_1 = 0
                    int32_t var_4ac_1 = r12
                    result_1 = sub_142aa27c0(r9_19, &var_4a8, &var_4d8)
                    var_4d8 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                    sub_142a47900(&var_4d8)
                    var_4a8 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                    rcx_29 = &var_4a8
                
                sub_142a47900(rcx_29)
        
        result = zx.q(result_1)
else
label_142aa2bcf_1:
    result = 0

__security_check_cookie(rax_1 ^ &var_538)
return result
