// 函数: sub_141a1c880
// 地址: 0x141a1c880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1430237f8
arg1[6] = &data_143023a70
int64_t rcx = arg1[0x11]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0xb] = &data_1430237d8
sub_1423baf20(&arg1[0xb])
sub_1423baf20(&arg1[6])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
