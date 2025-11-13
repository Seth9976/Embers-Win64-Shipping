// 函数: sub_142aa3550
// 地址: 0x142aa3550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_5c8 = -2
void var_638
int64_t rax_1 = __security_cookie ^ &var_638
int16_t* r12 = arg4
int64_t rdi = sx.q(arg3)
int32_t var_5dc = rdi.d
int16_t* r14 = arg2
int64_t r11 = sx.q(arg5)
int32_t var_5f8 = r11.d
uint64_t result

if (arg2 != arg4 || rdi.d != r11.d)
    int64_t rcx = 0
    int32_t rbx_1 = 0
    int16_t* var_5f0_1
    int16_t* var_5e8_1
    
    if (arg3 s< 0)
        var_5f0_1 = nullptr
        var_5e8_1 = nullptr
        int16_t i = *arg2
        
        if (i == *arg4)
            int16_t* rax_3 = r12
            
            do
                if (i == 0)
                    goto label_142aa35bd_1
                
                rbx_1 += 1
                rax_3 = &rax_3[1]
                i = *(arg2 - r12 + rax_3)
            while (i == *rax_3)
        
        goto label_142aa3641
    
    var_5f0_1 = &arg2[rdi]
    var_5e8_1 = &arg4[r11]
    
    if (arg3 != 0)
        do
            if (rcx == r11)
                goto label_142aa3641
            
            if (*arg2 != *(arg4 - r14 + arg2))
                goto label_142aa3641
            
            rbx_1 += 1
            rcx += 1
            arg2 = &arg2[1]
        while (rcx != rdi)
    
    if (rbx_1 == r11.d)
    label_142aa35bd:
        result = 0
    else
    label_142aa3641:
        uint32_t rax_9
        rax_9.b = (*(*(arg1 + 0x10) + 0x18) u>> 1).b & 1
        uint32_t var_5f4_1 = rax_9
        char var_5e0_1 = rax_9.b
        
        if (rbx_1 s> 0)
            if (rbx_1 == rdi.d)
                goto label_142aa3679
            
            int64_t rsi_1 = sx.q(rbx_1)
            
            if (sub_142aa4ee0(*(arg1 + 8), zx.d(r14[rsi_1]), rax_9.b) != 0)
            label_142aa36a0:
                
                while (true)
                    rbx_1 -= 1
                    rsi_1 -= 1
                    
                    if (rsi_1 s<= 0)
                        break
                    
                    uint32_t rdi_1 = zx.d(r14[rsi_1])
                    int64_t* r15_1 = *(arg1 + 8)
                    
                    if (sub_142a9f280(r15_1[0xa], zx.q(rdi_1)) == 0)
                        if (var_5e0_1 == 0)
                            break
                        
                        if (rdi_1 u>= 0x660)
                            char rax_14 = sub_142aa3ce0(r15_1, rdi_1)
                            char rax_16
                            
                            if (rax_14 u< 0xc0 || (rax_14 & 0xf) != 0xa)
                                rax_16 = 0
                            else
                                rax_16 = 1
                            
                            if (rax_16 == 0)
                                break
                        else
                            if (rdi_1 - 0x30 u> 9)
                                break
                
                r12 = arg4
                rdi = zx.q(var_5dc)
                r11 = zx.q(var_5f8)
            else
                rax_9 = var_5f4_1
                r11 = zx.q(var_5f8)
            label_142aa3679:
                
                if (rbx_1 != r11.d)
                    rsi_1 = sx.q(rbx_1)
                    
                    if (sub_142aa4ee0(*(arg1 + 8), zx.d(r12[rsi_1]), rax_9.b) != 0)
                        goto label_142aa36a0
                    
                    r11 = zx.q(var_5f8)
        
        void* rdx_5 = *(arg1 + 0x10)
        int32_t r8_2 = *(rdx_5 + 0x50)
        int32_t result_4
        int16_t* rsi_2
        int32_t result_3
        void* r15_2
        
        if (r8_2 s>= 0 && (rbx_1 == rdi.d || r14[sx.q(rbx_1)] u<= 0x17f)
                && (rbx_1 == r11.d || r12[sx.q(rbx_1)] u<= 0x17f))
            int64_t rax_19 = sx.q(rbx_1)
            r15_2 = &r12[rax_19]
            rsi_2 = &r14[rax_19]
            int32_t var_618_1
            
            if (rdi.d s< 0)
                int32_t var_608_2 = 0xffffffff
                void* var_610_2 = r15_2
                var_618_1 = 0xffffffff
            else
                int32_t var_608_1 = r11.d - rbx_1
                void* var_610_1 = r15_2
                var_618_1 = rdi.d - rbx_1
            
            result_4 = sub_142b1fca0(*(*(arg1 + 8) + 0x58), rdx_5 + 0x54, r8_2, rsi_2, var_618_1)
            result_3 = result_4
        
        int32_t* rbx_2
        int16_t* r12_2
        int16_t* r14_1
        
        if (r8_2 s>= 0 && (rbx_1 == rdi.d || r14[sx.q(rbx_1)] u<= 0x17f)
                && (rbx_1 == r11.d || r12[sx.q(rbx_1)] u<= 0x17f) && result_4 != 0xfffffffe)
            r14_1 = var_5f0_1
            r12_2 = var_5e8_1
            rbx_2 = arg6
        else
            void* r8_3 = *(arg1 + 0x10)
            int64_t* rdx_7 = *(arg1 + 8)
            char r9_2 = var_5f4_1.b
            struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_558
            void var_528
            struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_348
            void var_318
            
            if ((not.b(*(r8_3 + 0x18)) & 1) == 0)
                rsi_2 = &r14[sx.q(rbx_1)]
                var_558 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_550_2 = *rdx_7
                int64_t* var_548_2 = rdx_7
                int32_t var_540_2 = 0
                void* var_538_2 = &var_528
                int32_t var_530_2 = 0x28
                char var_52c_2 = 0
                int32_t var_3e8_2 = 0
                int64_t var_3e0_2 = 0
                int32_t var_3d8_2 = 0xffffffff
                char var_3d4_2 = r9_2
                int16_t* var_3d0_2 = r14
                int16_t* var_3c8_2 = rsi_2
                int16_t* var_3c0_2 = var_5f0_1
                var_558 = &icu_64::FCDUTF16CollationIterator::`vftable'{for `icu_64::UTF16CollationIterator'}
                int16_t* var_3b8_1 = r14
                int16_t* var_3b0_1 = rsi_2
                int64_t var_3a8_1 = 0
                r14_1 = var_5f0_1
                int16_t* var_3a0_1 = var_5f0_1
                int64_t var_398_1 = rdx_7[6]
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_390_1 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_388_1 = 2
                char var_350_1 = 1
                r15_2 = &r12[sx.q(rbx_1)]
                var_348 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_340_2 = *rdx_7
                int64_t* var_338_2 = rdx_7
                int32_t var_330_2 = 0
                void* var_328_2 = &var_318
                int32_t var_320_2 = 0x28
                char var_31c_2 = 0
                int32_t var_1d8_2 = 0
                int64_t var_1d0_2 = 0
                int32_t var_1c8_2 = 0xffffffff
                char var_1c4_2 = r9_2
                int16_t* var_1c0_2 = r12
                void* var_1b8_2 = r15_2
                int16_t* var_1b0_2 = var_5e8_1
                var_348 = &icu_64::FCDUTF16CollationIterator::`vftable'{for `icu_64::UTF16CollationIterator'}
                int16_t* var_1a8_1 = r12
                void* var_1a0_1 = r15_2
                int64_t var_198_1 = 0
                r12_2 = var_5e8_1
                int16_t* var_190_1 = var_5e8_1
                int64_t var_188_1 = rdx_7[6]
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_180_1 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_178_1 = 2
                char var_140_1 = 1
                rbx_2 = arg6
                result_3 = sub_142b18ea0(&var_558, &var_348, r8_3, rbx_2)
                sub_142b28d40(&var_348)
                sub_142b28d40(&var_558)
            else
                var_348 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_340_1 = *rdx_7
                int64_t* var_338_1 = rdx_7
                int32_t var_330_1 = 0
                void* var_328_1 = &var_318
                int32_t var_320_1 = 0x28
                char var_31c_1 = 0
                int32_t var_1d8_1 = 0
                int64_t var_1d0_1 = 0
                int32_t var_1c8_1 = 0xffffffff
                char var_1c4_1 = r9_2
                var_348 =
                    &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
                int16_t* var_1c0_1 = r14
                rsi_2 = &r14[sx.q(rbx_1)]
                int16_t* var_1b8_1 = rsi_2
                r14_1 = var_5f0_1
                int16_t* var_1b0_1 = r14_1
                var_558 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_550_1 = *rdx_7
                int64_t* var_548_1 = rdx_7
                int32_t var_540_1 = 0
                void* var_538_1 = &var_528
                int32_t var_530_1 = 0x28
                char var_52c_1 = 0
                int32_t var_3e8_1 = 0
                int64_t var_3e0_1 = 0
                int32_t var_3d8_1 = 0xffffffff
                char var_3d4_1 = r9_2
                var_558 =
                    &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
                int16_t* var_3d0_1 = r12
                r15_2 = &r12[sx.q(rbx_1)]
                void* var_3c8_1 = r15_2
                r12_2 = var_5e8_1
                int16_t* var_3c0_1 = r12_2
                rbx_2 = arg6
                result_3 = sub_142b18ea0(&var_348, &var_558, r8_3, rbx_2)
                sub_142b28d80(&var_558)
                sub_142b28d80(&var_348)
        
        void* rcx_15
        
        if (result_3 == 0)
            rcx_15 = *(arg1 + 0x10)
        
        if (result_3 != 0 || (*(rcx_15 + 0x18) & 0xfffff000) s< 0xf000 || *rbx_2 s> result_3)
            result = zx.q(result_3)
        else
            void* rbx_3 = *(*(arg1 + 8) + 0x30)
            
            if ((not.b(*(rcx_15 + 0x18)) & 1) == 0)
                struct icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::icu_64::x4fca7e4c::FCDUTF16NFDIterator::operator[]::FCDUTF16NFDIterator::VTable
                    * var_c8
                sub_142aa10c0(&var_c8, rbx_3, rsi_2, r14_1)
                struct icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::icu_64::x4fca7e4c::FCDUTF16NFDIterator::operator[]::FCDUTF16NFDIterator::VTable
                    * var_138
                sub_142aa10c0(&var_138, rbx_3, r15_2, r12_2)
                int32_t result_2 = sub_142aa27c0(rbx_3, &var_c8, &var_138)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
                sub_142a47ff0(&var_108)
                var_138 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                sub_142a47900(&var_138)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                sub_142a47ff0(&var_98)
                var_c8 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                sub_142a47900(&var_c8)
                result = zx.q(result_2)
            else
                int32_t var_578_1 = 0xffffffff
                int32_t var_574_1 = 0
                struct icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::VTable
                    * const var_590 = &icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
                int16_t* var_570_1 = rsi_2
                int16_t* var_568_1 = r14_1
                int32_t var_5a8_1 = 0xffffffff
                int32_t var_5a4_1 = 0
                struct icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::VTable
                    * const var_5c0 = &icu_64::x4fca7e4c::UTF16NFDIterator::operator[]::UTF16NFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
                void* var_5a0_1 = r15_2
                int16_t* var_598_1 = r12_2
                int32_t result_1 = sub_142aa27c0(rbx_3, &var_590, &var_5c0)
                var_5c0 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                sub_142a47900(&var_5c0)
                var_590 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
                sub_142a47900(&var_590)
                result = zx.q(result_1)
else
label_142aa35bd_1:
    result = 0

__security_check_cookie(rax_1 ^ &var_638)
return result
