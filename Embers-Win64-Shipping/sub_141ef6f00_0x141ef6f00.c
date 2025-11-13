// 函数: sub_141ef6f00
// 地址: 0x141ef6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x540))()
char rbx = arg1[0x42].b
arg1[0x42].b = rbx & 0xfe
int64_t r8_1 = *arg1
int64_t result = (*(r8_1 + 0x538))(arg1, arg3, r8_1)
char rdx = arg1[0x42].b ^ rbx
arg1[0x3e] = arg2
arg1[0x42].b ^= rdx & 1

if (data_143f3a924 != 0 && arg2 != 0)
    result, arg3 = sub_142038170(arg2)

if (rax_1 == 0)
    return result

arg3.o = zx.o(0)
return (*(*arg1 + 0x530))(arg1, arg3)
