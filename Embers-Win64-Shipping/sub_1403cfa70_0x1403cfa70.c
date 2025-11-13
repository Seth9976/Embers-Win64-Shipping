// 函数: sub_1403cfa70
// 地址: 0x1403cfa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t var_28 = __security_cookie ^ &var_68
int32_t var_38
__builtin_strncpy(&var_38, "PLTE", 5)
int64_t rax_1
rax_1.b = *(arg1 + 0x25e)
uint64_t rdi_1

if (arg3 u<= 0x100)
    rdi_1 = zx.q(arg3)

int64_t result

if (arg3 u> 0x100 || ((*(arg1 + 0x418) & 1) | arg3) == 0)
    if (rax_1.b == 3)
        png_error(arg1, "Invalid number of colors in palette")
        noreturn
    
    result = png_warning(arg1, "Invalid number of colors in palette")
else if ((rax_1.b & 2) != 0)
    char* rbx_1 = arg2
    *(arg1 + 0x250) = rdi_1.w
    uint32_t rax_2 = (rdi_1 * 3).d
    *(arg1 + 0x4a8) = 0x22
    uint8_t var_30 = (rax_2 u>> 0x18).b
    uint8_t var_2f_1 = (rax_2 u>> 0x10).b
    char var_2e_1 = rax_2:1.b
    char var_2d_1 = rax_2.b
    int32_t var_2c
    __builtin_strncpy(&var_2c, "PLTE", 4)
    sub_1403cc370(arg1, &var_30, 8)
    __builtin_strncpy(arg1 + 0x254, "PLTE", 4)
    sub_1403be750(arg1)
    sub_1403be770(arg1, &var_38, 4)
    *(arg1 + 0x4a8) = 0x42
    
    if (rdi_1.d != 0)
        int32_t i
        
        do
            char var_3b = *rbx_1
            char var_3a_1 = rbx_1[1]
            char var_39_1 = rbx_1[2]
            sub_1403cc370(arg1, &var_3b, 3)
            sub_1403be770(arg1, &var_3b, 3)
            rbx_1 = &rbx_1[3]
            i = rdi_1.d
            rdi_1 = zx.q(rdi_1.d - 1)
        while (i != 1)
    
    *(arg1 + 0x4a8) = 0x82
    int32_t rax_6 = *(arg1 + 0x244)
    var_30 = (rax_6 u>> 0x18).b
    uint8_t var_2f_2 = (rax_6 u>> 0x10).b
    char var_2e_2 = rax_6:1.b
    char var_2d_2 = rax_6.b
    result = sub_1403cc370(arg1, &var_30, 4)
    *(arg1 + 0x154) |= 2
else
    result = png_warning(arg1, "Ignoring request to write a PLTE chunk in grayscale PNG")

__security_check_cookie(var_28 ^ &var_68)
return result
