// 函数: png_get_pixels_per_inch
// 地址: 0x1403ce6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t rax_2

if (arg1 != 0 && arg2 != 0 && *(arg2 + 8) s< 0 && *(arg2 + 0x98) == 1)
    rax_2 = *(arg2 + 0x90)

int32_t rsi

if (arg1 == 0 || arg2 == 0 || *(arg2 + 8) s>= 0 || *(arg2 + 0x98) != 1 || rax_2 != *(arg2 + 0x94))
    rax_2 = 0
label_1403ce718:
    int32_t var_14
    int32_t rax_3 = sub_1403c01b0(&var_14, rax_2, 0x7f, 0x1388)
    rsi = rax_3
    
    if (rax_3 != 0)
        rsi = var_14
else
    if (rax_2 s>= 0)
        goto label_1403ce718
    
    rsi = 0

__security_check_cookie(rax_1 ^ &var_38)
return zx.q(rsi)
