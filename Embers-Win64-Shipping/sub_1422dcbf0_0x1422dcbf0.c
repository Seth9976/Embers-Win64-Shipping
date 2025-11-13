// 函数: sub_1422dcbf0
// 地址: 0x1422dcbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x10].d = 0
int64_t rcx = arg1[0xf]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    sub_1405a5130(&arg1[7], 0)

arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
sub_14059a8e0(&arg1[9], 0)
int64_t rcx_3 = arg1[0xb]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
