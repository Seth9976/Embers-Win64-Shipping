// 函数: sub_142aac520
// 地址: 0x142aac520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_238
char** result = __security_cookie ^ &var_238
char** result_2 = result
int32_t* r12 = arg3
int32_t* var_1f8 = arg3
void* r13 = arg1
struct icu_64::UObject::icu_64::NumberingSystem::VTable** rbx = arg5

if (*arg3 s<= 0)
    *(arg1 + 0x830) = 0
    *(arg1 + 0x8cd) = 0
    sub_142aacd10(arg1)
    int32_t r14_1 = 0
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** rsi_1 = nullptr
    int64_t var_1b0_1 = 0
    
    if (rbx == 0)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_1 = sub_142aab3f0(arg2, r12)
        rbx = rax_1
        rsi_1 = rax_1
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** var_1b0_2 = rax_1
    
    char* var_1d8
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
    
    if (*r12 s> 0)
        var_1d8 = "latn"
    else if (sub_1405f8de0(rbx) != 0xa)
        var_1d8 = "latn"
    else if (sub_142aabab0(rbx) != 0)
        var_1d8 = "latn"
    else
        var_1d8 = sub_142aabaa0(rbx)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable* r8 = *rbx
        r8->vFunc_2(rbx, &var_d8, r8)
        int32_t rax_5 = sub_142a486d0(&var_d8, 0)
        int32_t rdi_1 = rax_5
        sub_142aad9b0(r13 + 0x108, rax_5)
        void* rbx_1 = r13 + 0x490
        int64_t i_2 = 9
        int64_t i
        
        do
            int32_t rcx_7
            rcx_7.b = rdi_1 u> 0xffff
            r14_1 += rcx_7 + 1
            rdi_1 = sub_142a486d0(&var_d8, r14_1)
            sub_142a4afe0(rbx_1 - 8)
            int16_t rax_7 = *rbx_1
            int32_t r8_2
            
            if (rax_7 s< 0)
                r8_2 = *(rbx_1 + 4)
            else
                r8_2 = sx.d(rax_7) s>> 5
            
            sub_142a4a6b0(rbx_1 - 8, 0, r8_2, rdi_1)
            rbx_1 += 0x40
            i = i_2
            i_2 -= 1
        while (i != 1)
        sub_142a47ff0(&var_d8)
        r13 = arg1
        r12 = var_1f8
    
    char* rax_9 = *(arg2 + 0x28)
    char** rax_10 = sub_142a641c0(nullptr, rax_9, r12)
    char** var_180_1 = rax_10
    result = sub_142a62230(rax_10, "NumberElements", nullptr, r12)
    char** result_3 = result
    char** result_1 = result
    
    if (*r12 s<= 0)
        void* var_198 = r13 + 0x8cd
        void* var_190_1 = r13 + 0x830
        char* rax_13 = sub_142a637a0(result_3, 0, r12)
        sub_142a9ba50(&var_198, sub_142a637a0(result_3, 1, r12), rax_13)
        struct icu_64::UObject::icu_64::ResourceSink::VTable* var_150 = &icu_64::x123431b5::DecFmtSymDataSink::operator[]::DecFmtSymDataSink::`vftable'{for `icu_64::ResourceSink'}
        int64_t var_140 = 0
        int24_t var_138_1 = 0
        int16_t var_130_1 = 0
        int32_t var_128_1 = 0
        char* rbx_3 = var_1d8
        void* rax_15 = rbx_3
        uint32_t i_1
        uint32_t rdx_6
        
        do
            rdx_6 = zx.d(*rax_15)
            i_1 = zx.d(*(rax_15 + "latn" - rbx_3))
            
            if (rdx_6 != i_1)
                break
            
            rax_15 += 1
        while (i_1 != 0)
        
        if (rdx_6 - i_1 == 0)
            goto label_142aac8cc
        
        int16_t var_10c
        char* var_118 = &var_10c:1
        int32_t var_110_1 = 0x28
        var_10c = 0
        int32_t var_e0_1 = 0
        var_1d8.o = *sub_142a85330(&var_1f8, "symbols")
        void var_170
        uint128_t var_1a8 = *sub_142a85330(&var_170, rbx_3)
        void var_160
        uint128_t zmm1_1 = *sub_142a85330(&var_160, "NumberElements")
        int64_t* rax_22 = sub_142a8cb30(
            sub_142a8cbd0(
                sub_142a8cb30(sub_142a8cbd0(&var_118, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, r12), 
                    0x2f, r12), 
                var_1a8.q, _mm_bsrli_si128(var_1a8, 8).d, r12), 
            0x2f, r12)
        zmm1_1 = var_1d8.o
        sub_142a8cbd0(rax_22, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, r12)
        sub_142a61e60(rax_10, var_118, &var_150, r12)
        int32_t rax_23 = *r12
        
        if (rax_23 != 2)
            if (rax_23 s<= 0)
                goto label_142aac8bd
            
            if (var_10c.b != 0)
                sub_142a7dcd0(var_118)
        else
            *r12 = 0
        label_142aac8bd:
            
            if (var_10c.b == 0)
                goto label_142aac8cc
            
            sub_142a7dcd0(var_118)
        label_142aac8cc:
            int64_t rax_24 = 0
            
            while (true)
                if (*(&var_140 + rax_24) == 0)
                    sub_142a61e60(rax_10, "NumberElements/latn/symbols", &var_150, r12)
                    
                    if (*r12 s> 0)
                        break
                else
                    rax_24 += 1
                    
                    if (rax_24 s< 0x1c)
                        continue
                
                if (var_138_1:2.b == 0)
                    sub_142aad8a0(r13, 0xa, r13 + 8, 1)
                
                if (var_130_1:1.b == 0)
                    sub_142aad8a0(r13, 0x11, r13 + 0x48, 1)
                
                var_1f8.d = 0xffffffff
                int32_t rbx_4 = 0
                int32_t rax_31
                
                while (true)
                    void* rdi_3
                    
                    if (rbx_4 - 1 u<= 8)
                        rdi_3 = r13 + 8 + (sx.q(rbx_4 + 0x11) << 6)
                    else
                        rdi_3 = r13 + 0x108
                    
                    if (sub_142a48c90(rdi_3, 0, 0x7fffffff) == 1)
                        int32_t rax_28 = sub_142a486d0(rdi_3, 0)
                        
                        if (rbx_4 == 0)
                            var_1f8.d = rax_28
                        label_142aac99a:
                            rbx_4 += 1
                            
                            if (rbx_4 s<= 9)
                                continue
                            
                            rax_31 = var_1f8.d
                            break
                        else if (rax_28 == var_1f8.d + rbx_4)
                            goto label_142aac99a
                    
                    rax_31 = -1
                    break
                
                *(r13 + 0x748) = rax_31
                int32_t var_200 = 0
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_90_1 = 2
                void var_50
                int32_t rax_32 = sub_142aaa2d0(rax_9, &var_50, 4, &var_200)
                
                if (var_200 s<= 0 && rax_32 == 3)
                    sub_142aaab00(&var_50, rax_9, &var_98, &var_200)
                    
                    if (var_200 s<= 0)
                        sub_142a4afe0(r13 + 0x248)
                        int16_t rax_33 = *(r13 + 0x250)
                        int32_t r8_18
                        
                        if (rax_33 s< 0)
                            r8_18 = *(r13 + 0x254)
                        else
                            r8_18 = sx.d(rax_33) s>> 5
                        
                        sub_142a49390(r13 + 0x248, 0, r8_18, &var_50, 0, 3)
                        sub_142a48100(r13 + 0x208, &var_98)
                
                int16_t var_58 = 0
                int32_t var_56_1 = 0
                int16_t var_52_1 = 0
                int32_t var_208 = 0
                int32_t rax_35 = sub_142aaa2d0(*(arg2 + 0x28), &var_58, 4, &var_208)
                
                if (var_208 s<= 0 && rax_35 s> 0)
                    var_1f8.b = 0
                    var_1f8:1.w = 0
                    var_1f8:3.b = 0
                    sub_142a8d6e0(&var_58, &var_1f8, rax_35)
                    char** rax_36 = sub_142a641c0("icudt64l-curr", rax_9, &var_208)
                    char** var_1e0_1 = rax_36
                    char** rax_37 = sub_142a62230(rax_36, "Currencies", nullptr, &var_208)
                    var_1a8.q = rax_37
                    sub_142a62230(rax_37, &var_1f8, rax_37, &var_208)
                    
                    if (var_208 s<= 0 && sub_142a63b10(rax_37) s> 2)
                        sub_142a620c0(rax_37, 2, rax_37, &var_208)
                        var_1d8.d = 0
                        *(r13 + 0x970) = sub_142a63b20(rax_37, 0, &var_1d8, &var_208)
                        sub_142a66a00(&var_118, rax_37, 1, &var_208)
                        sub_142a66a00(&var_d8, rax_37, 2, &var_208)
                        
                        if (var_208 s<= 0)
                            sub_142a48100(r13 + 0x448, &var_d8)
                            sub_142a48100(r13 + 0x288, &var_118)
                            *r12 = var_208
                        
                        sub_142a47ff0(&var_d8)
                        sub_142a47ff0(&var_118)
                    
                    if (rax_37 != 0)
                        sub_142a5f860(rax_37)
                    
                    if (rax_36 != 0)
                        sub_142a5f860(rax_36)
                
                char** rax_41 = sub_142a641c0("icudt64l-curr", rax_9, r12)
                var_1a8.q = rax_41
                struct icu_64::ResourceSink::icu_64::x123431b5::CurrencySpacingSink::operator[]::CurrencySpacingSink::VTable
                    * const var_1c8 = &icu_64::x123431b5::CurrencySpacingSink::operator[]::CurrencySpacingSink::`vftable'{for `icu_64::ResourceSink'}
                void* var_1c0_1 = r13
                int16_t var_1b8_1 = 0
                sub_142a61e60(rax_41, "currencySpacing", &var_1c8, r12)
                sub_142aad7b0(&var_1c8)
                var_1c8 = &icu_64::x123431b5::CurrencySpacingSink::operator[]::CurrencySpacingSink::`vftable'{for `icu_64::ResourceSink'}
                sub_142ac3f40(&var_1c8)
                
                if (rax_41 != 0)
                    sub_142a5f860(rax_41)
                
                sub_142a47ff0(&var_98)
                break
        
        var_150 = &icu_64::x123431b5::DecFmtSymDataSink::operator[]::DecFmtSymDataSink::`vftable'{for `icu_64::ResourceSink'}
        result = sub_142ac3f40(&var_150)
    else if (arg4 != 0)
        *r12 = 0xffffff81
        result = sub_142aacd10(r13)
    
    if (result_3 != 0)
        result = sub_142a5f860(result_3)
    
    if (rax_10 != 0)
        result = sub_142a5f860(rax_10)
    
    if (rsi_1 != 0)
        result = (*rsi_1)->__offset(0x0).q(rsi_1, 1)

__security_check_cookie(result_2 ^ &var_238)
return result
