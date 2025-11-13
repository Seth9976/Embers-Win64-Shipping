// 函数: sub_141c32b30
// 地址: 0x141c32b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rdi_1 = *(arg2 + 0x20)

if (rdi_1 != 0)
    sub_140a74f90(*(rdi_1 + 0x10))
    *(rdi_1 + 0x10) = 0
    sub_140a74f90(*(rdi_1 + 0x18))
    *(rdi_1 + 0x18) = 0
    j_sub_140a74f90(rdi_1)

int64_t rcx_3 = *(arg2 + 0x10)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

j_sub_140a74f90(arg2)
