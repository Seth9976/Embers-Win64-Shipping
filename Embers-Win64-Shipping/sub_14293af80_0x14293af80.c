// 函数: sub_14293af80
// 地址: 0x14293af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t r9 = *(*arg1 + 0x40)
char* result

if (r9 == 0)
    int32_t var_34
    __builtin_strncpy(&var_34, "Enter ", 7)
    int32_t var_2c
    __builtin_strcpy(&var_2c, " for ")
    int16_t var_38 = 0x3a
    
    if (arg2 == 0)
        result = nullptr
    else
        int64_t rcx = -1
        int64_t rax_4 = -1
        
        do
            rax_4 += 1
        while (arg2[rax_4] != 0)
        
        int32_t rax_5 = rax_4.d + 6
        
        if (arg3 != 0)
            do
                rcx += 1
            while (arg3[rcx] != 0)
            
            rax_5 = rax_5 + 5 + rcx.d
        
        int64_t rbp_1 = sx.q(rax_5 + 2)
        char* result_1 = sub_1428a6730(rbp_1)
        
        if (result_1 != 0)
            sub_1428a7090(result_1, &var_34, rbp_1)
            sub_1428a7010(result_1, arg2, rbp_1)
            
            if (arg3 != 0)
                sub_1428a7010(result_1, &var_2c, rbp_1)
                sub_1428a7010(result_1, arg3, rbp_1)
            
            sub_1428a7010(result_1, &var_38, rbp_1)
            result = result_1
        else
            sub_1428a5670((&result_1[0x28]).d, (&result_1[0x79]).d, (&result_1[0x41]).d, 
                "crypto\ui\ui_lib.c", 0x17a)
            result = nullptr
else
    result = r9()

__security_check_cookie(rax_1 ^ &var_68)
return result
