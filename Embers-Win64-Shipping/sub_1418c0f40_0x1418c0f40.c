// 函数: sub_1418c0f40
// 地址: 0x1418c0f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_88 = 0x2d
int64_t var_84
__builtin_memset(&var_84, 0, 0x30)
int64_t var_4c = 0
int32_t var_44 = 0
int64_t var_64 = arg2
int64_t var_5c
var_5c:4.o = *arg5
var_4c:4.d = arg5[1].d
int64_t var_6c = -1
int64_t var_7c
int64_t var_74
int32_t rbx = sub_1418bfb90(arg3, &var_7c:4, &var_74:4)
int32_t rax_5 = sub_1418bfb90(arg4, &var_74, &var_6c)

if (data_1439c7188 != 1)
    if (arg3 == 5)
        rbx = 0x2000
    else if (arg4 == 5)
        rax_5 = 0x2000

int64_t result = data_143efba60(arg1, zx.q(rbx), zx.q(rax_5), 0, 0, 0, 0, 0, 1, &var_88)
__security_check_cookie(rax_1 ^ &var_d8)
return result
