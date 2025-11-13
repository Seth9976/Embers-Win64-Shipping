// 函数: sub_14244cb10
// 地址: 0x14244cb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x71]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x6c]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x6a]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x44] = &data_142d44da8
sub_1405ae4b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
