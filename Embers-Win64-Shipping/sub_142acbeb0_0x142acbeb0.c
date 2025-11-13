// 函数: sub_142acbeb0
// 地址: 0x142acbeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int32_t arg_18 = 0
char rax_1

if (data_144016540 != 2)
    rax_1 = sub_142a85f00(&data_144016540)

if (data_144016540 == 2 || rax_1 == 0)
    int32_t rcx_1 = arg_18
    int32_t rax_3 = data_144016544
    
    if (rax_3 s> 0)
        rcx_1 = rax_3
    
    arg_18 = rcx_1
else
    sub_142ac92d0(&arg_18)
    data_144016544 = arg_18
    sub_142a85e80(&data_144016540)

int32_t rsi = *(arg3 + 8)
sub_142a4ab40(arg4)

if (arg_18 s> 0)
    *(arg3 + 0xc) = rsi
else
    struct icu_64::TextTrieMapSearchResultHandler::icu_64::ZoneIdMatchHandler::VTable** rax_4 =
        j_sub_142a7dd00(0x18)
    struct icu_64::TextTrieMapSearchResultHandler::icu_64::ZoneIdMatchHandler::VTable** rbx_1 =
        rax_4
    struct icu_64::TextTrieMapSearchResultHandler::icu_64::ZoneIdMatchHandler::VTable** arg_20 =
        rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 =
            &icu_64::ZoneIdMatchHandler::`vftable'{for `icu_64::TextTrieMapSearchResultHandler'}
        rbx_1[1].d = 0
        rbx_1[2] = 0
    
    arg_20 = rbx_1
    sub_142b50fc0(data_144016538, arg2, rsi, rbx_1, &arg_18)
    int32_t r14_1 = rbx_1[1].d
    
    if (r14_1 s> 0)
        int64_t r15_1 = rbx_1[2]
        sub_142a4afe0(arg4)
        int16_t rax_5 = *(arg4 + 8)
        int32_t r8_2
        
        if (rax_5 s< 0)
            r8_2 = *(arg4 + 0xc)
        else
            r8_2 = sx.d(rax_5) s>> 5
        
        int32_t* var_48_1
        var_48_1.d = 0
        sub_142a49390(arg4, 0, r8_2, r15_1, var_48_1.d, 0xffffffff)
    
    (*rbx_1)->__offset(0x8).q(rbx_1, 1)
    
    if (r14_1 s<= 0)
        *(arg3 + 0xc) = rsi
    else
        *(arg3 + 8) = r14_1 + rsi

return arg4
