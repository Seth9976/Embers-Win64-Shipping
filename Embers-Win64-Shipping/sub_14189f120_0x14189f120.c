// 函数: sub_14189f120
// 地址: 0x14189f120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe8600
int64_t rcx = arg1[0xf]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xd]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0xc].d = 0
int64_t rcx_2 = arg1[0xb]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_14059ad90(&arg1[3], 0)
int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[3]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
