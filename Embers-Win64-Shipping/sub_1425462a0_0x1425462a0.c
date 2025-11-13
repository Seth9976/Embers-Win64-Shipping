// 函数: sub_1425462a0
// 地址: 0x1425462a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x100
sub_1420d87d0(&arg1[3])
char rax = *(arg1 + 0x9e) & 0xd6
*(arg1 + 0x94) = 2
arg1[0x27].w = 0x8102
*(arg1 + 0x9e) = rax | 0x16
*(arg1 + 0x9f) = 0
int64_t count = 8

if (&arg1[1] u> &arg1[3])
    count = 0

if (&arg1[1] u<= &arg1[3])
    __builtin_memset(&arg1[1], 1, count)

return arg1
