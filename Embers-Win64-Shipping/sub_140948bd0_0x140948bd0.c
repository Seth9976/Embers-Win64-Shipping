// 函数: sub_140948bd0
// 地址: 0x140948bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
arg1[3] = 2
*arg1 = &data_142e33178
arg1[4] = arg2
arg1[7] = 0
arg1[8] = 0
__builtin_memset(&arg1[0xa], 0, 0x40)
arg1[0x13] = &data_142e32d98
__builtin_memset(&arg1[0x14], 0, 0x22)
arg1[0x1a].w = 0
int32_t rax = sub_142437180()
arg1[0x17].d = 0

if (*(arg1 + 0xbc) != rax)
    sub_1405c5510(&arg1[0x16], rax)

int32_t rax_2 = sub_142437180() + arg1[0x17].d
arg1[0x17].d = rax_2

if (rax_2 s> *(arg1 + 0xbc))
    sub_1405daba0(&arg1[0x16])

arg1[0x1b] = 0
arg1[0x1c] = 0
return arg1
