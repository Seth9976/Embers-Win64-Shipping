// 函数: sub_14125e210
// 地址: 0x14125e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x16]

if (rcx != 0)
    sub_140a74f90(rcx)

if (*(arg1 + 0x7a) u> 0x50)
    j_sub_140a74f90(arg1[5])

*(arg1 + 0x7a) = 0
arg1[5] = 0
int64_t rcx_2 = arg1[3]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
