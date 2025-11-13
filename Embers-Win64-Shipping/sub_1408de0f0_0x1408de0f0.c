// 函数: sub_1408de0f0
// 地址: 0x1408de0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0
*arg1 = &data_142e0ff68
sub_1408e1fa0(&arg1[0xc], 0)
arg1[0xf].d = 0

if (*(arg1 + 0x7c) != 0)
    sub_1405dadb0(&arg1[0xe], 0)

int64_t rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1408da9a0(&arg1[0xc])
sub_1408db330(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
