// 函数: sub_140edd100
// 地址: 0x140edd100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rbx = *(arg1 + 0x304)
char var_158 = data_1439ae51c
int64_t var_30 = 0
int32_t var_28 = 0
char var_20 = 0
int32_t var_24 = 4
sub_140de8410(arg1, arg2, &var_158)
arg1[0x60].d = var_28 - 1

if (*(arg1 + 0x304) != rbx && sub_140f4a730(arg1[0x5b]) != 0)
    int64_t* rcx_1 = arg1[0x5b]
    int64_t r8_1
    r8_1.b = 1
    (*(*rcx_1 + 0x248))(rcx_1, 0, r8_1, 0)

void var_150
int64_t result = sub_140d94d20(&var_150)
__security_check_cookie(rax_1 ^ &var_178)
return result
