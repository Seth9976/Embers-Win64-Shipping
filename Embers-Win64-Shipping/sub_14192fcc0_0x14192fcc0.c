// 函数: sub_14192fcc0
// 地址: 0x14192fcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff7280
int64_t rcx = arg1[0x1b]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x19]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_14192b980(&arg1[3])
*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
