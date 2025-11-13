// 函数: sub_14172db00
// 地址: 0x14172db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[4] = &data_142fc4250
arg1[8] = &data_142fc4220
int64_t rcx = arg1[9]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[4] = &data_142fc4068
int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142fc3cd0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
