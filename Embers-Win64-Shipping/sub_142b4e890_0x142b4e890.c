// 函数: sub_142b4e890
// 地址: 0x142b4e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
struct icu_64::TextTrieMapSearchResultHandler::icu_64::ZNameSearchHandler::VTable* const var_40 =
    &icu_64::ZNameSearchHandler::`vftable'{for `icu_64::TextTrieMapSearchResultHandler'}
int32_t r9
int32_t var_38 = r9
int64_t* result = nullptr
int32_t var_34 = 0
int64_t* result_3 = nullptr
sub_142b4ea20()
void* arg_8 = &data_144016b80
sub_142a860a0(&data_144016b80)
sub_142b50fc0(&arg1[0x21], arg2, arg3, &var_40, arg4)
int64_t* result_2

if (*arg4 s> 0)
    result_2 = nullptr
else
    result_2 = result_3
    result_3 = nullptr
    int32_t var_34_1 = 0
    
    if (result_2 == 0)
        result_2 = nullptr
    else
        int16_t rax_1 = *(arg2 + 8)
        int32_t rax_3
        
        if (rax_1 s< 0)
            rax_3 = *(arg2 + 0xc)
        else
            rax_3 = sx.d(rax_1) s>> 5
        
        if (var_34 != rax_3 - arg3 && arg1[0x20].b == 0)
            (**result_2)(result_2, 1)
            result_2 = nullptr

if (*arg4 s<= 0)
    if (result_2 == 0)
        sub_142b4dad0(arg1, arg4)
        int64_t* result_1 = sub_142b4e6c0(arg1, &var_40, arg2, arg3, arg4)
        
        if (*arg4 s<= 0)
            if (result_1 != 0)
                result = result_1
            else
                sub_142b4fc50(arg1, arg4)
                sub_142b4dad0(arg1, arg4)
                arg1[0x20].b = 1
                
                if (*arg4 s<= 0)
                    result = sub_142b4e6c0(arg1, &var_40, arg2, arg3, arg4)
    else
        result = result_2

sub_142a860d0(&data_144016b80)
var_40 = &icu_64::ZNameSearchHandler::`vftable'{for `icu_64::TextTrieMapSearchResultHandler'}

if (result_3 != 0)
    int64_t r8_3 = *result_3
    (*r8_3)(result_3, 1, r8_3)

return result
