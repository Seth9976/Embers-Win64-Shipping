// 函数: sub_141f066c0
// 地址: 0x141f066c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04c40(&arg1[0x24])
sub_140596d80(&arg1[0x22])
sub_141f04d90(&arg1[0x20])
sub_141f04fe0(&arg1[0x1e])
sub_141f04cf0(&arg1[0x1c])
int32_t i_1 = arg1[0x1b].d
void* rcx_5 = arg1[0x1a]

if (i_1 != 0)
    void* rdi_1 = rcx_5 + 0x10
    int32_t i
    
    do
        sub_140e53610(rdi_1)
        rdi_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_5 = arg1[0x1a]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_141f04f20(&arg1[0x18])
sub_141f04e80(&arg1[0x16])
int64_t rcx_9 = arg1[0x12]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0xe]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0xc]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
