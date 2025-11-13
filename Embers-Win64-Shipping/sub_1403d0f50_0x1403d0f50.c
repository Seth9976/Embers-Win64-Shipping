// 函数: sub_1403d0f50
// 地址: 0x1403d0f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t var_40
__builtin_strncpy(&var_40, "hIST", 5)
int64_t result

if (zx.d(*(arg1 + 0x250)) s>= arg3)
    *(arg1 + 0x4a8) = 0x22
    uint8_t var_38 = (arg3 u>> 0x17).b
    uint8_t var_37_1 = (arg3 u>> 0xf).b
    uint8_t var_36_1 = (arg3 u>> 7).b
    char var_35_1 = arg3.b * 2
    int32_t var_34
    __builtin_strncpy(&var_34, "hIST", 4)
    sub_1403cc370(arg1, &var_38, 8)
    __builtin_strncpy(arg1 + 0x254, "hIST", 4)
    sub_1403be750(arg1)
    sub_1403be770(arg1, &var_40, 4)
    *(arg1 + 0x4a8) = 0x42
    
    if (arg3 s> 0)
        int64_t i = 0
        
        do
            int16_t rax_10 = *(arg2 + (i << 1))
            char var_43 = rax_10:1.b
            char var_42_1 = rax_10.b
            sub_1403cc370(arg1, &var_43, 2)
            sub_1403be770(arg1, &var_43, 2)
            i += 1
        while (zx.q(arg3) != i)
    
    *(arg1 + 0x4a8) = 0x82
    int32_t rax_11 = *(arg1 + 0x244)
    var_38 = (rax_11 u>> 0x18).b
    uint8_t var_37_2 = (rax_11 u>> 0x10).b
    char var_36_2 = rax_11:1.b
    char var_35_2 = rax_11.b
    result = sub_1403cc370(arg1, &var_38, 4)
else
    result = png_warning(arg1, "Invalid number of histogram entries specified")

__security_check_cookie(rax_1 ^ &var_68)
return result
