// 函数: sub_141d93a50
// 地址: 0x141d93a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140596d10(&arg1[1], &arg2[1])
sub_140596d10(&arg1[3], &arg2[3])
arg1[5].d = arg2[5].d
sub_140596d10(&arg1[6], &arg2[6])
arg1[8] = 0
uint32_t count = arg2[9].d
int64_t rbp = arg2[8]
arg1[9].d = count

if (count != 0)
    sub_1405da9e0(&arg1[8], count, 0)
    memcpy(arg1[8], rbp, count)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
uint32_t count_1 = arg2[0xb].d
int64_t rbp_1 = arg2[0xa]
arg1[0xb].d = count_1

if (count_1 != 0)
    sub_1405da9e0(&arg1[0xa], count_1, 0)
    memcpy(arg1[0xa], rbp_1, count_1)
else
    *(arg1 + 0x5c) = 0

return arg1
