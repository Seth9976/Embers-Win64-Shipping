// 函数: sub_140bd7c80
// 地址: 0x140bd7c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1a]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x19].d = 0
int64_t rcx_1 = arg1[0x18]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x11].d = 0

if (*(arg1 + 0x8c) != 0)
    sub_140638cc0(&arg1[0x10], 0)

arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
sub_14059a8e0(&arg1[0x12], 0)
int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x10]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0xf].d = 0
int64_t rcx_6 = arg1[0xe]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[7].d = 0

if (*(arg1 + 0x3c) != 0)
    sub_140638cc0(&arg1[6], 0)

arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
sub_14059a8e0(&arg1[8], 0)
int64_t rcx_9 = arg1[0xa]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[6]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
