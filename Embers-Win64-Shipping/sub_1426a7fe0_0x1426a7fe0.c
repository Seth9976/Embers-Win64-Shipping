// 函数: sub_1426a7fe0
// 地址: 0x1426a7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x62]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x58]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x56] = &data_142d45bb0
arg1[0x55] = &data_143461398
arg1[0x54] = &data_14344e3e0
arg1[0x53] = &data_143461380
sub_1426a7910(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
