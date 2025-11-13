// 函数: sub_141c32aa0
// 地址: 0x141c32aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

sub_140a74f90(*(arg2 + 0x20))
sub_140a74f90(*(arg2 + 0x28))
int64_t rcx_2 = *(arg2 + 0x10)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rdi_1 = *(arg2 + 8)

if (rdi_1 != 0)
    sub_140a74f90(*(rdi_1 + 0x10))
    *(rdi_1 + 0x10) = 0
    sub_140a74f90(*(rdi_1 + 0x18))
    *(rdi_1 + 0x18) = 0
    j_sub_140a74f90(rdi_1)

j_sub_140a74f90(arg2)
