// 函数: sub_140a3d3b0
// 地址: 0x140a3d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5de88
sub_140a3fba0(arg1)
int64_t rcx = arg1[0x18]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0x17]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
