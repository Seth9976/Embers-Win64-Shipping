// 函数: sub_14279e280
// 地址: 0x14279e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x25]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x23]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x1f]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x1c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x1b].d = 0
int64_t rcx_4 = arg1[0x1a]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1405df330(&arg1[0x12])
sub_140596eb0(&arg1[0xb])
sub_140596eb0(&arg1[8])
arg1[5] = &data_14306f198
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
