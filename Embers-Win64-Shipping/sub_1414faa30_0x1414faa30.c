// 函数: sub_1414faa30
// 地址: 0x1414faa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = &arg1[5]
*arg1 = 0
arg1[1] = 0
int64_t i_1 = 4
int64_t i

do
    __builtin_memset(rax - 0x14, 0, 0x18)
    __builtin_memset(rax + 4, 0, 0x28)
    *(rax + 0x2c) = 1
    *(rax + 0x30) = 0
    rax += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
__builtin_memset(&arg1[0x2b], 0, 0x18)
int64_t rax_1 = j_sub_140a82f30(zx.q((i_1 + 0x50).d))

if (rax_1 == 0)
    arg1[0x2a] = 0
    return arg1

__builtin_memset(rax_1, 0, 0x50)
arg1[0x2a] = rax_1
return arg1
