// 函数: sub_142831210
// 地址: 0x142831210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t var_178
int32_t* var_170
void var_168
char var_128[0x110]
uint64_t result

if (sub_142830970(arg1, &var_168, sub_1428312b8(arg2, &var_128, &var_168), &var_170, &var_178) == 0
        || var_178 != 2)
    result = 0
else
    int32_t result_1
    result_1.b = strcmp(*var_170, arg3) == 0
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
