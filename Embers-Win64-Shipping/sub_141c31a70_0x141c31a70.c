// 函数: sub_141c31a70
// 地址: 0x141c31a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x2a0)

if (rdi != 0)
    sub_140a74f90(*(rdi + 0x10))
    *(rdi + 0x10) = 0
    sub_140a74f90(*(rdi + 0x18))
    *(rdi + 0x18) = 0
    j_sub_140a74f90(rdi)

void* rdi_1 = *(arg1 + 0x280)

if (rdi_1 != 0)
    sub_140a74f90(*(rdi_1 + 0x10))
    *(rdi_1 + 0x10) = 0
    sub_140a74f90(*(rdi_1 + 0x18))
    *(rdi_1 + 0x18) = 0
    j_sub_140a74f90(rdi_1)

sub_141c31b80(arg1 + 0x1a8)
int64_t result = sub_141c31b80(arg1 + 0xe8)
int64_t rcx_8 = *(arg1 + 0x68)

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0x58)

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg1 + 0x48)

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = *(arg1 + 0x38)

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg1 + 0x28)

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = *(arg1 + 0x18)

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
