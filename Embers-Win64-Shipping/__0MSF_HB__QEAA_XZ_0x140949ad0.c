// 函数: ??0MSF_HB@@QEAA@XZ
// 地址: 0x140949ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e32d98
__builtin_memset(&arg1[1], 0, 0x22)
arg1[7].w = 0
int32_t rax = sub_142437180()
arg1[4].d = 0

if (*(arg1 + 0x24) != rax)
    sub_1405c5510(&arg1[3], rax)

int32_t rax_2 = sub_142437180() + arg1[4].d
arg1[4].d = rax_2

if (rax_2 s> *(arg1 + 0x24))
    sub_1405daba0(&arg1[3])

return arg1
