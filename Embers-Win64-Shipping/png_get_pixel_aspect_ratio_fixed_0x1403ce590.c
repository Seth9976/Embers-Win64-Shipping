// 函数: png_get_pixel_aspect_ratio_fixed
// 地址: 0x1403ce590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t rsi

if (arg1 == 0 || arg2 == 0 || *(arg2 + 8) s>= 0)
    rsi = 0
else
    int32_t r9_1 = *(arg2 + 0x90)
    
    if (r9_1 == 0 || r9_1 s< 0)
        rsi = 0
    else
        int32_t rdx = *(arg2 + 0x94)
        int32_t var_14
        
        if (rdx s<= 0)
            rsi = 0
        else if (sub_1403c01b0(&var_14, rdx, 0x186a0, r9_1) == 0)
            rsi = 0
        else
            rsi = var_14

__security_check_cookie(rax_1 ^ &var_38)
return zx.q(rsi)
