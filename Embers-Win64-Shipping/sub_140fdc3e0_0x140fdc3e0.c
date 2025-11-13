// 函数: sub_140fdc3e0
// 地址: 0x140fdc3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x19]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0x18]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

sub_140fda7f0(&arg1[6])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
