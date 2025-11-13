// 函数: sub_1403d1280
// 地址: 0x1403d1280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t var_38
__builtin_strncpy(&var_38, "zTXt", 5)
int128_t var_68
__builtin_memset(&var_68, 0, 0x20)
char* var_48
int64_t rax_2 = sub_1403d00e0(arg1, arg2, &var_48)
int64_t result

if (rax_2 == 0)
    result = png_free(arg1, var_48)
else
    int64_t rbx_1
    
    if (arg3 != 0 && arg4 != 0xffffffff)
        rbx_1 = rax_2
        rax_2.b = *arg3
    
    if (arg3 == 0 || arg4 == 0xffffffff || rax_2.b == 0)
        char* rbx_3 = var_48
        sub_1403d10c0(arg1, rbx_3, arg3)
        result = png_free(arg1, rbx_3)
    else
        int32_t rax_4 = sub_1403d0330(arg1, arg3, 
            sx.q(MultiByteToWideChar(0, 0, arg3, 0xffffffff, nullptr, 0)), zx.q(arg4), &var_68)
        uint8_t var_30
        
        if (arg1 != 0)
            *(arg1 + 0x4a8) = 0x22
            var_30 = ((rbx_1.d + rax_4 + 2) u>> 0x18).b
            uint8_t var_2f_1 = ((rbx_1.d + rax_4 + 2) u>> 0x10).b
            char var_2e_1 = (rbx_1.d + rax_4 + 2):1.b
            char var_2d_1 = (rbx_1.d + rax_4 + 2).b
            int32_t var_2c
            __builtin_strncpy(&var_2c, "zTXt", 4)
            sub_1403cc370(arg1, &var_30, 8)
            __builtin_strncpy(arg1 + 0x254, "zTXt", 4)
            sub_1403be750(arg1)
            sub_1403be770(arg1, &var_38, 4)
            *(arg1 + 0x4a8) = 0x42
        
        char* rdi_1 = var_48
        
        if (rbx_1 != -1 && arg1 != 0 && rdi_1 != 0)
            sub_1403cc370(arg1, rdi_1, rbx_1 + 1)
            sub_1403be770(arg1, rdi_1, (rbx_1 + 1).d)
        
        png_free(arg1, rdi_1)
        char var_39 = arg4.b
        
        if (arg1 != 0)
            sub_1403cc370(arg1, &var_39, 1)
            sub_1403be770(arg1, &var_39, 1)
        
        result = sub_1403d0620(arg1, &var_68)
        
        if (arg1 != 0)
            *(arg1 + 0x4a8) = 0x82
            int32_t rax_7 = *(arg1 + 0x244)
            var_30 = (rax_7 u>> 0x18).b
            uint8_t var_2f_2 = (rax_7 u>> 0x10).b
            char var_2e_2 = rax_7:1.b
            char var_2d_2 = rax_7.b
            result = sub_1403cc370(arg1, &var_30, 4)

__security_check_cookie(rax_1 ^ &var_98)
return result
