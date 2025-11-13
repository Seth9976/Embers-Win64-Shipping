// 函数: sub_14209a700
// 地址: 0x14209a700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 0x30) == 0)
    int64_t* r8_1 = *(arg1 + 0x510)
    *(arg1 + 0x510) = 0
    sub_142097c30(arg1, 1, r8_1, 0, arg2)

int64_t* rdi = *(arg1 + 0x510)

if (rdi != 0)
    *(arg1 + 0x510) = 0
    sub_1419fd970(rdi)
    j_sub_140a74f90(rdi)

if (*(arg1 + 0x4e8) == 0)
    return 

void* rcx_2 = *(arg1 + 0xa0)

if (rcx_2 == 0)
    return 

void* rax = sub_141dc9840(rcx_2)

if (rax == 0)
    return 

void* rdi_1 = *(rax + 0xb8)

if (rdi_1 != 0 && sub_1420f98f0(rdi_1) != 0 && sub_1420f98f0(rdi_1) != rax)
    *(arg1 + 0x50c) += 1
