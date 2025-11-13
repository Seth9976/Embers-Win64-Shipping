// 函数: sub_140f25980
// 地址: 0x140f25980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140627710(arg1, arg2)
arg1[3].d ^= (arg1[3].d ^ arg2[3].d) & 1
int32_t rdx_3 = ((arg2[3].d ^ arg1[3].d) & 2) ^ arg1[3].d
arg1[3].d = rdx_3
int32_t rcx_3 = ((arg2[3].d ^ rdx_3) & 4) ^ rdx_3
arg1[3].d = rcx_3
arg1[3].d = ((arg2[3].d ^ rcx_3) & 8) ^ rcx_3
arg1[4].b = arg2[4].b
sub_1407473e0(&arg1[5], &arg2[5])
return arg1
