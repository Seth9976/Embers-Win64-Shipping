// 函数: png_get_y_pixels_per_inch
// 地址: 0x1403ce7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t rsi
int32_t rdx

if (arg1 == 0 || arg2 == 0 || *(arg2 + 8) s>= 0 || *(arg2 + 0x98) != 1)
    rdx = 0
label_1403ce80e:
    int32_t var_14
    int32_t rax_2 = sub_1403c01b0(&var_14, rdx, 0x7f, 0x1388)
    rsi = rax_2
    
    if (rax_2 != 0)
        rsi = var_14
else
    rdx = *(arg2 + 0x94)
    
    if (rdx s>= 0)
        goto label_1403ce80e
    
    rsi = 0
__security_check_cookie(rax_1 ^ &var_38)
return zx.q(rsi)
