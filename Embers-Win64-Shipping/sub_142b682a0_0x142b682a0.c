// 函数: sub_142b682a0
// 地址: 0x142b682a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_238 = -2
void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0 && (arg2.b & 6) != 0)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_228
    sub_142a9d8c0(&var_228, arg1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_150_1 = 2
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_268 = &var_228
    void* (* var_260_1)(void* arg1, int32_t arg2) = j_sub_142a9e7d0
    void* (* var_258_1)(void* arg1, int32_t arg2, int32_t arg3) = j_sub_142a9e9d0
    int64_t (* var_250_1)(void* arg1, int64_t arg2, int32_t arg3) = sub_142b67ff0
    int32_t i_1 = 0
    int64_t var_248_1 = 0
    int64_t var_240_1 = 0
    int32_t r12_1 = arg2 & 2
    void* var_1d8
    
    if (r12_1 != 0 && sub_142a9fb30(&var_228) != 0)
        sub_142ae76a0(var_1d8)
    int32_t rax_3 = sub_142a9fa50(arg1)
    int32_t r14_1 = 0
    
    if (rax_3 s> 0)
        do
            int32_t i = sub_142a9fa80(arg1, r14_1)
            int32_t rax_5 = sub_142a9fa60(arg1, zx.q(r14_1))
            
            if (r12_1 == 0)
                for (; i s<= rax_5; i += 1)
                    int64_t var_270
                    int32_t rax_6 = sub_142a537d0(i, 0, 0, &var_270, 1)
                    
                    if (rax_6 s>= 0)
                        if (rax_6 s<= 0x1f)
                            sub_142a4aa20(&var_158, 0, var_270, rax_6)
                            sub_142a9e730(&var_228, &var_158)
                        else
                            sub_142a9e7d0(&var_228, rax_6)
                    
                    int32_t rax_7 = sub_142a53c70(i, 0, 0, &var_270, 1)
                    
                    if (rax_7 s>= 0)
                        if (rax_7 s<= 0x1f)
                            sub_142a4aa20(&var_158, 0, var_270, rax_7)
                            sub_142a9e730(&var_228, &var_158)
                        else
                            sub_142a9e7d0(&var_228, rax_7)
                    
                    int32_t rax_8 = sub_142a53c90(i, 0, 0, &var_270, 1)
                    
                    if (rax_8 s>= 0)
                        if (rax_8 s<= 0x1f)
                            sub_142a4aa20(&var_158, 0, var_270, rax_8)
                            sub_142a9e730(&var_228, &var_158)
                        else
                            sub_142a9e7d0(&var_228, rax_8)
                    
                    int32_t rax_9 = sub_142a53530(i, &var_270, 0)
                    
                    if (rax_9 s>= 0)
                        if (rax_9 s<= 0x1f)
                            sub_142a4aa20(&var_158, 0, var_270, rax_9)
                            sub_142a9e730(&var_228, &var_158)
                        else
                            sub_142a9e7d0(&var_228, rax_9)
            else
                for (; i s<= rax_5; i += 1)
                    sub_142a527b0(zx.q(i), &var_268)
            
            r14_1 += 1
        while (r14_1 s< rax_3)
    
    if (sub_142a9fb30(arg1) != 0)
        if (r12_1 == 0)
            struct icu_64::UObject::icu_64::Locale::VTable* var_118
            sub_142a45710(&var_118, &data_1434cce10, nullptr, nullptr, nullptr)
            int32_t var_278 = 0
            struct icu_64::BreakIterator::icu_64::WholeStringBreakIterator::VTable** rax_16 =
                sub_142a554b0(&var_118, &var_278)
            
            if (var_278 s<= 0)
                void* rax_17 = *(arg1 + 0x50)
                
                if (*(rax_17 + 8) s> 0)
                    do
                        void* rax_18 = sub_142ae72d0(rax_17, i_1)
                        sub_142a4b100(sub_142a48100(&var_158, rax_18), &var_118)
                        sub_142a9e730(&var_228, &var_158)
                        sub_142b2d510(sub_142a48100(&var_158, rax_18), rax_16, &var_118)
                        sub_142a9e730(&var_228, &var_158)
                        sub_142a4b180(sub_142a48100(&var_158, rax_18), &var_118)
                        sub_142a9e730(&var_228, &var_158)
                        sub_142a8ef00(sub_142a48100(&var_158, rax_18), 0)
                        sub_142a9e730(&var_228, &var_158)
                        i_1 += 1
                        rax_17 = *(arg1 + 0x50)
                    while (i_1 s< *(rax_17 + 8))
            
            if (rax_16 != 0)
                (*rax_16)->__offset(0x0).q(rax_16, 1)
            
            sub_142a45a20(&var_118)
        else
            int32_t i_2 = 0
            void* rax_11 = *(arg1 + 0x50)
            
            if (*(rax_11 + 8) s> 0)
                do
                    sub_142a48100(&var_158, sub_142ae72d0(rax_11, i_2))
                    sub_142a8ef00(&var_158, 0)
                    int32_t rdx_16
                    int32_t var_14c
                    
                    if (var_150_1 s< 0)
                        rdx_16 = var_14c
                    else
                        rdx_16 = sx.d(var_150_1) s>> 5
                    char rax_14 = var_150_1.b
                    void* rcx_27
                    
                    if ((rax_14 & 0x11) == 0)
                        void var_14e
                        rcx_27 = &var_14e
                        void* var_140
                        
                        if ((rax_14 & 2) == 0)
                            rcx_27 = var_140
                    else
                        rcx_27 = nullptr
                    
                    if (sub_142a52b80(rcx_27, rdx_16, &var_268) == 0)
                        sub_142a9e730(&var_228, &var_158)
                    
                    i_2 += 1
                    rax_11 = *(arg1 + 0x50)
                while (i_2 s< *(rax_11 + 8))
    
    sub_142a9dc70(arg1, &var_228)
    sub_142a47ff0(&var_158)
    sub_142a9dbc0(&var_228)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg1
