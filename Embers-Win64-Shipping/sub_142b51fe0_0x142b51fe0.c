// 函数: sub_142b51fe0
// 地址: 0x142b51fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
struct icu_64::TextTrieMapSearchResultHandler::icu_64::GNameSearchHandler::VTable* const var_50 =
    &icu_64::GNameSearchHandler::`vftable'{for `icu_64::TextTrieMapSearchResultHandler'}
int32_t r9
int32_t var_48 = r9
int64_t* result_3 = nullptr
int64_t* result_4 = nullptr
int32_t var_38 = 0
sub_142b52950()
sub_142a860a0(&data_144016cc0)
int32_t* rdi = arg4
sub_142b50fc0(arg1 + 0x198, arg2, arg3, &var_50, rdi)
sub_142b52950()
sub_142a860d0(&data_144016cc0)

if (*rdi s> 0)
    goto label_142b5220d

int64_t* result = nullptr
int64_t* result_5 = result_4
result_4 = nullptr
int32_t var_38_1 = 0

if (result_5 == 0)
    goto label_142b520ef

int16_t rax_1 = *(arg2 + 8)
int32_t rax_3

if (rax_1 s< 0)
    rax_3 = *(arg2 + 0xc)
else
    rax_3 = sx.d(rax_1) s>> 5

if (var_38 == rax_3 - arg3 || *(arg1 + 0x1d0) != 0)
    int64_t** result_1 = j_sub_142a7dd00(8)
    arg4 = result_1
    
    if (result_1 == 0)
        *rdi = 7
        (**result_5)(result_5, 1)
    label_142b5220d:
        result_1 = nullptr
    else
        *result_1 = result_5
    
    result = result_1
    result_3 = result_4
else
    (**result_5)(result_5, 1)
label_142b520ef:
    sub_142b52950()
    sub_142a860a0(&data_144016cc0)
    
    if (*(arg1 + 0x1d0) == 0)
        struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** rax_7 =
            j_sub_142a64700(1, nullptr, nullptr, rdi)
        
        if (*rdi s<= 0)
            struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable* r8_1 = *rax_7
            char (* rax_8)[0x8] = r8_1->__offset(0x30).q(rax_7, rdi, r8_1)
            
            if (rax_8 != 0)
                while (*rdi s<= 0)
                    sub_142b53750(arg1, rax_8)
                    rax_8 = (*rax_7)->__offset(0x30).q(rax_7, rdi)
                    
                    if (rax_8 == 0)
                        break
        
        if (rax_7 != 0)
            (*rax_7)->__offset(0x0).q(rax_7, 1)
        
        if (*rdi s<= 0)
            *(arg1 + 0x1d0) = 1
    
    sub_142b52950()
    sub_142a860d0(&data_144016cc0)
    
    if (*rdi s> 0)
        result = result_3
        result_3 = result_4
    else
        sub_142b52950()
        sub_142a860a0(&data_144016cc0)
        sub_142b50fc0(arg1 + 0x198, arg2, arg3, &var_50, rdi)
        sub_142b52950()
        sub_142a860d0(&data_144016cc0)
        int64_t* result_6 = result_4
        result_4 = nullptr
        int32_t var_38_2 = 0
        
        if (result_6 != 0 && var_38_1 s> 0)
            int64_t** result_2 = j_sub_142a7dd00(8)
            result = result_2
            arg4 = result_2
            
            if (result_2 == 0)
                result = nullptr
            else
                *result_2 = result_6
            
            if (result != 0)
                result_3 = result_4
            else
                *rdi = 7
                (**result_6)(result_6, zx.q((result + 1).d))
                result = result_3
                result_3 = result_4

var_50 = &icu_64::GNameSearchHandler::`vftable'{for `icu_64::TextTrieMapSearchResultHandler'}

if (result_3 != 0)
    int64_t r8_3 = *result_3
    (*r8_3)(result_3, 1, r8_3)

sub_142b4d320(&var_50)
return result
