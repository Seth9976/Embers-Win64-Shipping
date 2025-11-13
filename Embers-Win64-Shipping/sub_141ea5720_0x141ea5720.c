// 函数: sub_141ea5720
// 地址: 0x141ea5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8

if (arg2 != 0)
    r8 = sub_140b5b8a0(*arg1, 0) == 0

int32_t rax_3

if (arg2 == 0 || (arg1[1] != 0 | r8) == 0)
    arg1[2] |= 0x7fffffff
    rax_3 = arg1[2]
else
    rax_3 = sub_14078ee20(arg2 + 0x58, arg1) | 0x80000000
    arg1[2] = rax_3

arg1[3] = 0xffffffff
int32_t result
result.b = (rax_3 & 0x7fffffff) != 0x7fffffff
return result
