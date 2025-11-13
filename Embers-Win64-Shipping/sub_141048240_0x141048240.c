// 函数: sub_141048240
// 地址: 0x141048240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2
int32_t r9

if (data_143f0f1d8 == 0)
    rax_2 = arg3
else
    r9 = 1
    rax_2 = 1

int32_t var_3c = rax_2
int64_t var_44 = 0
int32_t var_20 = r9
int128_t var_30 = arg2.o
int32_t r9_1

if (arg2 - 1 u<= 1 || (arg2 == 4 && (arg2.q u>> 0x20).d - 2 u<= 1))
    r9_1 = 0xac3
else
    r9_1 = 0x400

uint64_t result = sub_141048070(arg1, &var_30, arg3, r9_1, arg4, arg5, arg6, arg7)
__security_check_cookie(rax_1 ^ &var_88)
return result
