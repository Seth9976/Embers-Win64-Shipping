// 函数: sub_141c55830
// 地址: 0x141c55830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320aae0
arg1[0x14].d = 0
int64_t rcx = arg1[0x13]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14189def0(&arg1[0xb])
DeleteCriticalSection(&arg1[5])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
