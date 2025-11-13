// 函数: sub_140aef440
// 地址: 0x140aef440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void var_118
memset(&var_118, 0, 0xf0)
int32_t result = sub_140b06e50(&var_118, arg3, 0x100)
int32_t rbx_1 = 0
int32_t result_1 = result

if (arg2 != 0)
    do
        char* r8_1 = zx.q(rbx_1) + arg1
        result = sub_140b05ab0(&var_118, result_1, r8_1, r8_1)
        rbx_1 += 0x10
    while (rbx_1 u< arg2)

__security_check_cookie(rax_1 ^ &var_138)
return result
