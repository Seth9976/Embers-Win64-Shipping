// 函数: sub_141d93b30
// 地址: 0x141d93b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140596d10(&arg1[1], &arg2[1])
sub_141d94d20(&arg1[3], &arg2[3])
sub_140596d10(&arg1[0xf], &arg2[0xf])
arg1[0x11] = 0
uint32_t count = arg2[0x12].d
int64_t rbx_1 = arg2[0x11]
arg1[0x12].d = count

if (count != 0)
    sub_1405da9e0(&arg1[0x11], count, 0)
    memcpy(arg1[0x11], rbx_1, count)
else
    *(arg1 + 0x94) = 0

return arg1
