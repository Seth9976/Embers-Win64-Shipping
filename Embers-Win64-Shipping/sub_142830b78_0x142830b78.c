// 函数: sub_142830b78
// 地址: 0x142830b78
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void var_1a8
char var_168[0x110]
int32_t rax_2 = sub_1428312b8(arg2, &var_168, &var_1a8)
int32_t var_1b4
int32_t* var_1b0
int64_t result

if (sub_142830970(arg1, &var_1a8, rax_2, &var_1b0, &var_1b4) == 0)
    int64_t var_1c8_1
    var_1c8_1.d = 1
    result = sub_142830f18(arg1, &var_1a8, rax_2, 
        sub_142831378(arg4, arg5, arg3, arg6, arg7, arg8), var_1c8_1.d)
else if (var_1b4 != 1)
    sub_142833a04(2, "Type mismatch on setting '%s'", arg2)
    result = 0
else
    int32_t* rcx_4 = var_1b0
    result = 1
    *(rcx_4 + 0x18) = arg7
    *(rcx_4 + 0x20) = arg8
    rcx_4[2] = arg4
    rcx_4[3] = arg5
    rcx_4[1] = arg3
    rcx_4[4] = arg6

__security_check_cookie(rax_1 ^ &var_1e8)
return result
