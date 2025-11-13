// 函数: sub_14138a060
// 地址: 0x14138a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f6be08
int64_t rcx = arg1[0x26]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1408464b0(&arg1[0x20])
sub_140fda0a0(&arg1[0x18])
int64_t rcx_3 = arg1[0x12]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1405d1550(&arg1[0xe])
int32_t i_1 = arg1[0xa].d
void* rdi = arg1[9]

if (i_1 != 0)
    int32_t i
    
    do
        sub_141413140(rdi)
        rdi += 0xb0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[9]

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rcx_7 = arg1[7]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[5]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*arg1 = &data_142d5a090

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
