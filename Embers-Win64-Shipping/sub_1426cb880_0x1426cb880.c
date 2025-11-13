// 函数: sub_1426cb880
// 地址: 0x1426cb880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x18]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x13]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[5] = &data_14344e3e0
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
