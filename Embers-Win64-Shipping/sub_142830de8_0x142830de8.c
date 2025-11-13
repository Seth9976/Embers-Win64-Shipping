// 函数: sub_142830de8
// 地址: 0x142830de8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void var_198
char var_158[0x110]
int32_t rax_2 = sub_1428312b8(arg2, &var_158, &var_198)
char* rdx_2 = nullptr
int32_t var_1a8
int32_t* var_1a0
int64_t result

if (sub_142830970(arg1, &var_198, rax_2, &var_1a0, &var_1a8) != 0)
    if (var_1a8 != 2)
        sub_142833a04(2, "Type mismatch on setting '%s'", arg2)
    else
        int32_t* rbx_1 = var_1a0
        *(rbx_1 + 0x20) = arg5
        *(rbx_1 + 0x28) = arg6
        
        if (arg3 != 0)
            rdx_2 = strcpy(malloc(strlen(arg3) + 1), arg3)
        
        *(rbx_1 + 8) = rdx_2
        rbx_1[4] = arg4
    
    result = 1
else
    int64_t var_1b8_1
    var_1b8_1.d = 2
    result = sub_142830f18(arg1, &var_198, rax_2, sub_142831478(arg3, arg3, arg4, arg5, arg6), 
        var_1b8_1.d)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
