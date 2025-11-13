// 函数: sub_142b48ff0
// 地址: 0x142b48ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* r14 = arg1
int32_t rbx = arg5
int32_t var_148 = rbx
char result
int32_t rdx_1
result, rdx_1 = sub_142b498d0(arg2, arg4, rbx, arg6)

if (result != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_90_1 = 2
    uint8_t rax_4 = (rbx u>> 7).b & 1
    int32_t rcx_4 = rbx u>> 0xa & 1
    int32_t var_144_1 = rcx_4
    int32_t i_4 = 0
    int32_t var_170_1 = 0
    void* var_140_1 = nullptr
    void* var_138_1 = nullptr
    int64_t r13
    r13.b = 1
    void* var_158_1 = r14
    int64_t* r15_1 = r14 + 0x158
    int32_t* var_160_1 = r14 + 0x150
    int64_t* r12_1 = r14 + 0x128
    void* rdi_1 = r14 + 0x166
    void* var_168_1 = rdi_1
    void* rsi_1 = r14 + 0x138
    void* var_150_1 = rsi_1
    struct icu_64::numparse::impl::NumberParseMatcher::VTable* var_130
    
    do
        char var_178 = 0
        rdx_1.b = 1
        sub_142ac08a0(arg2, rdx_1.b, r13.b, rcx_4, 5, 0, &var_98)
        char var_190_1
        var_190_1.q = arg6
        int32_t var_198_1
        var_198_1.q = &var_178
        void var_e8
        struct icu_64::numparse::impl::ArraySeriesMatcher::icu_64::numparse::impl::AffixPatternMatcher::VTable
            ** rax_7 = sub_142b49780(&var_e8, &var_98, *(r14 + 0x300), rbx, var_198_1, var_190_1)
        
        if (*(r12_1 + 0xc) != 0)
            sub_142a7dcd0(*r12_1)
        
        r12_1[1].d = rax_7[2].d
        *(r12_1 + 0xc) = *(rax_7 + 0x14)
        int64_t rcx_10 = rax_7[1]
        
        if (rcx_10 != &rax_7[3])
            *r12_1 = rcx_10
            rax_7[1] = &rax_7[3]
            rax_7[2].d = 3
            *(rax_7 + 0x14) = 0
        else
            *r12_1 = rsi_1
            memcpy(rsi_1, &rax_7[3], rax_7[2].d << 3)
        
        *var_160_1 = rax_7[6].d
        
        if (*(r15_1 + 0xc) != 0)
            sub_142a7dcd0(*r15_1)
        
        r15_1[1].d = rax_7[8].d
        *(r15_1 + 0xc) = *(rax_7 + 0x44)
        int64_t rcx_14 = rax_7[7]
        
        if (rcx_14 != rax_7 + 0x46)
            *r15_1 = rcx_14
            rax_7[7] = rax_7 + 0x46
            rax_7[8].d = 4
            *(rax_7 + 0x44) = 0
        else
            *r15_1 = rdi_1
            memcpy(rdi_1, rax_7 + 0x46, rax_7[8].d * 2)
        
        int64_t var_b0
        char var_a4
        
        if (var_a4 != 0)
            sub_142a7dcd0(var_b0)
        
        int64_t var_e0
        char var_d4
        
        if (var_d4 != 0)
            sub_142a7dcd0(var_e0)
        
        sub_142abcb50(&var_e8)
        void* rsi_3
        
        if (var_178 == 0)
            rsi_3 = nullptr
        else
            int64_t rdx_5 = sx.q(var_170_1)
            rsi_3 = r14 + 0x120 + rdx_5 * 0x50
            var_170_1 = rdx_5.d + 1
            r12_1 = &r12_1[0xa]
            var_150_1 += 0x50
            var_160_1 = &var_160_1[0x14]
            r15_1 = &r15_1[0xa]
            rdi_1 += 0x50
            var_168_1 = rdi_1
        
        var_178 = 0
        sub_142ac08a0(arg2, 0, r13.b, var_144_1, 5, 0, &var_98)
        char var_190_2
        var_190_2.q = arg6
        int32_t var_198_2
        var_198_2.q = &var_178
        struct icu_64::numparse::impl::ArraySeriesMatcher::icu_64::numparse::impl::AffixPatternMatcher::VTable
            ** rax_14
        rax_14, rdx_1 =
            sub_142b49780(&var_e8, &var_98, *(r14 + 0x300), var_148, var_198_2, var_190_2)
        
        if (*(r12_1 + 0xc) != 0)
            sub_142a7dcd0(*r12_1)
        
        r12_1[1].d = rax_14[2].d
        *(r12_1 + 0xc) = *(rax_14 + 0x14)
        int64_t rcx_26 = rax_14[1]
        
        if (rcx_26 != &rax_14[3])
            *r12_1 = rcx_26
            rax_14[1] = &rax_14[3]
            rax_14[2].d = 3
            *(rax_14 + 0x14) = 0
        else
            *r12_1 = var_150_1
            memcpy(var_150_1, &rax_14[3], rax_14[2].d << 3)
        
        *var_160_1 = rax_14[6].d
        
        if (*(r15_1 + 0xc) != 0)
            sub_142a7dcd0(*r15_1)
        
        r15_1[1].d = rax_14[8].d
        *(r15_1 + 0xc) = *(rax_14 + 0x44)
        int64_t rcx_30 = rax_14[7]
        
        if (rcx_30 != rax_14 + 0x46)
            *r15_1 = rcx_30
            rax_14[7] = rax_14 + 0x46
            rax_14[8].d = 4
            *(rax_14 + 0x44) = 0
        else
            *r15_1 = rdi_1
            memcpy(rdi_1, rax_14 + 0x46, rax_14[8].d * 2)
        
        if (var_a4 != 0)
            sub_142a7dcd0(var_b0)
        
        if (var_d4 != 0)
            sub_142a7dcd0(var_e0)
        
        sub_142abcb50(&var_e8)
        void* rbx_4
        
        if (var_178 == 0)
            rbx_4 = nullptr
        else
            int64_t rdx_10 = sx.q(var_170_1)
            rbx_4 = r14 + 0x120 + rdx_10 * 0x50
            var_170_1 = rdx_10.d + 1
            r12_1 = &r12_1[0xa]
            var_150_1 += 0x50
            var_160_1 = &var_160_1[0x14]
            r15_1 = &r15_1[0xa]
            rdi_1 += 0x50
            var_168_1 = rdi_1
        
        if (r13.b != 1)
            if (rsi_3 != 0)
                if (var_140_1 == 0)
                    goto label_142b49452
                
                char rax_21
                rax_21, rdx_1 = sub_142a5b670(rsi_3 + 0x38, var_140_1 + 0x38)
                
                if (rax_21 == 0)
                    goto label_142b49452
                
                goto label_142b4941e
            
            if (var_140_1 != rsi_3)
                goto label_142b49452
            
        label_142b4941e:
            
            if (rbx_4 != 0)
                if (var_138_1 == 0)
                    goto label_142b49452
                
                char rax_23
                rax_23, rdx_1 = sub_142a5b670(rbx_4 + 0x38, var_138_1 + 0x38)
                
                if (rax_23 == 0)
                    goto label_142b49452
            else if (var_138_1 != rbx_4)
                goto label_142b49452
        else
            var_140_1 = rsi_3
            var_138_1 = rbx_4
        label_142b49452:
            int32_t rdi_2
            rdi_2.b = r13.b == 0xff
            var_130 = &icu_64::numparse::impl::AffixMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
            void* var_128_1 = rsi_3
            void* var_120_1 = rbx_4
            int32_t var_118_1 = rdi_2
            void* rax_24 = var_158_1
            i_4 += 1
            var_158_1 += 0x20
            *(rax_24 + 8) = rsi_3
            *(rax_24 + 0x10) = rbx_4
            *(rax_24 + 0x18) = rdi_2
            sub_142abcb50(&var_130)
            
            if (rax_4 != 0 && rsi_3 != 0 && rbx_4 != 0)
                if (r13.b == 1 || var_140_1 == 0)
                label_142b494d9:
                    var_130 = &icu_64::numparse::impl::AffixMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
                    void* var_128_2 = rsi_3
                    int64_t var_120_2 = 0
                    int32_t var_118_2 = rdi_2
                    void* rax_27 = var_158_1
                    i_4 += 1
                    var_158_1 += 0x20
                    *(rax_27 + 8) = rsi_3
                    *(rax_27 + 0x10) = 0
                    *(rax_27 + 0x18) = rdi_2
                    sub_142abcb50(&var_130)
                else
                    char rax_26
                    rax_26, rdx_1 = sub_142a5b670(rsi_3 + 0x38, var_140_1 + 0x38)
                    
                    if (rax_26 == 0)
                        goto label_142b494d9
                
                if (r13.b == 1 || var_138_1 == 0)
                label_142b4953a:
                    var_130 = &icu_64::numparse::impl::AffixMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
                    int64_t var_128_3 = 0
                    void* var_120_3 = rbx_4
                    int32_t var_118_3 = rdi_2
                    void* rax_30 = var_158_1
                    i_4 += 1
                    var_158_1 += 0x20
                    *(rax_30 + 8) = 0
                    *(rax_30 + 0x10) = rbx_4
                    *(rax_30 + 0x18) = rdi_2
                    sub_142abcb50(&var_130)
                else
                    char rax_29
                    rax_29, rdx_1 = sub_142a5b670(rbx_4 + 0x38, var_138_1 + 0x38)
                    
                    if (rax_29 == 0)
                        goto label_142b4953a
            
            rdi_1 = var_168_1
        
        r13.b -= 1
        rsi_1 = var_150_1
        rbx = var_148
        rcx_4 = var_144_1
    while (r13.b s>= 0xff)
    
    int64_t i_5 = sx.q(i_4)
    
    do
        r15_1.b = 0
        int32_t rdi_3 = 1
        
        if (i_5 s<= 1)
            break
        
        void* rbx_5 = r14 + 0x10
        int64_t i_3 = i_5 - 1
        int64_t i
        
        do
            if (sub_142b48d70((sx.q(rdi_3 - 1) << 5) + r14, (sx.q(rdi_3) << 5) + r14) s> 0)
                r15_1.b = 1
                var_130 = &icu_64::numparse::impl::AffixMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
                int64_t r8_13 = *(rbx_5 - 8)
                int64_t var_128_4 = r8_13
                int64_t rdx_18 = *rbx_5
                int64_t var_120_4 = rdx_18
                int32_t rcx_51 = *(rbx_5 + 8)
                int32_t var_118_4 = rcx_51
                *(rbx_5 - 8) = *(rbx_5 + 0x18)
                *rbx_5 = *(rbx_5 + 0x20)
                *(rbx_5 + 8) = *(rbx_5 + 0x28)
                *(rbx_5 + 0x18) = r8_13
                *(rbx_5 + 0x20) = rdx_18
                *(rbx_5 + 0x28) = rcx_51
                sub_142abcb50(&var_130)
            
            rdi_3 += 1
            rbx_5 += 0x20
            i = i_3
            i_3 -= 1
        while (i != 1)
    while (r15_1.b != 0)
    
    if (i_4 s> 0)
        uint64_t i_2 = zx.q(i_4)
        uint64_t i_1
        
        do
            (*(*arg3 + 8))(arg3, r14)
            r14 += 0x20
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    result = sub_142a47ff0(&var_98)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
