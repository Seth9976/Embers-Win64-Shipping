// 函数: sub_141c31b80
// 地址: 0x141c31b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xb0)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0xa0)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0x90)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x80)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

void* rdi = *(arg1 + 0x78)

if (rdi != 0)
    sub_140a74f90(*(rdi + 0x10))
    *(rdi + 0x10) = 0
    sub_140a74f90(*(rdi + 0x18))
    *(rdi + 0x18) = 0
    j_sub_140a74f90(rdi)

void* rdi_1 = *(arg1 + 0x70)

if (rdi_1 != 0)
    sub_140a74f90(*(rdi_1 + 0x10))
    *(rdi_1 + 0x10) = 0
    sub_140a74f90(*(rdi_1 + 0x18))
    *(rdi_1 + 0x18) = 0
    j_sub_140a74f90(rdi_1)

void* rdi_2 = *(arg1 + 0x68)

if (rdi_2 != 0)
    sub_140a74f90(*(rdi_2 + 0x10))
    *(rdi_2 + 0x10) = 0
    sub_140a74f90(*(rdi_2 + 0x18))
    *(rdi_2 + 0x18) = 0
    j_sub_140a74f90(rdi_2)

void* rbx_1 = *(arg1 + 0x60)

if (rbx_1 == 0)
    return 

sub_140a74f90(*(rbx_1 + 0x10))
*(rbx_1 + 0x10) = 0
sub_140a74f90(*(rbx_1 + 0x18))
*(rbx_1 + 0x18) = 0
j_sub_140a74f90(rbx_1)
