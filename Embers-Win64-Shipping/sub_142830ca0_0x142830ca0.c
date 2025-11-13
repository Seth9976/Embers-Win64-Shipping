// 函数: sub_142830ca0
// 地址: 0x142830ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
uint128_t zmm8 = zx.o(arg5)
void var_1c8
char var_188[0x110]
int32_t rax_2 = sub_1428312b8(arg2, &var_188, &var_1c8)
int32_t var_1d8
int32_t* var_1d0
int64_t result

if (sub_142830970(arg1, &var_1c8, rax_2, &var_1d0, &var_1d8) == 0)
    double var_1e8_1
    var_1e8_1.d = 0
    result = sub_142830f18(arg1, &var_1c8, rax_2, 
        sub_1428313d8(arg4, zmm8, arg3, arg6, arg7, arg8), var_1e8_1.d)
else if (var_1d8 != 0)
    sub_142833a04(2, "Type mismatch on setting '%s'", arg2)
    result = 0
else
    int32_t* rax_5 = var_1d0
    *(rax_5 + 0x10) = arg4.q
    *(rax_5 + 0x18) = zmm8.q
    *(rax_5 + 8) = arg3.q
    *(rax_5 + 0x28) = arg7
    *(rax_5 + 0x30) = arg8
    rax_5[8] = arg6
    result = 1

__security_check_cookie(rax_1 ^ &var_208)
return result
