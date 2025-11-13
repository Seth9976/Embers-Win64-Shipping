// 函数: sub_142b68b30
// 地址: 0x142b68b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_28
int16_t var_18
int16_t* rax_2 = sub_142b1dd80(*(arg1 + 8), arg2, &var_18, &var_28)

if (rax_2 == 0)
    __security_check_cookie(rax_1 ^ &var_58)
    return rax_2

if (rax_2 != &var_18)
    sub_142a4aa20(arg3, 0, rax_2, var_28)
else
    int32_t rdi_1 = var_28
    sub_142a4afe0(arg3)
    int16_t rax_3 = *(arg3 + 8)
    int32_t r8_2
    
    if (rax_3 s< 0)
        r8_2 = *(arg3 + 0xc)
    else
        r8_2 = sx.d(rax_3) s>> 5
    
    sub_142a49390(arg3, 0, r8_2, &var_18, 0, rdi_1)

void* rax_4
rax_4.b = 1
__security_check_cookie(rax_1 ^ &var_58)
return rax_4
