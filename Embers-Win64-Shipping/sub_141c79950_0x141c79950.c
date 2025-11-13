// 函数: sub_141c79950
// 地址: 0x141c79950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rcx = *(arg1 + 8)

if (rcx != 0)
    sub_141c799d0(rcx)
    __builtin_memset(&arg1[2], 0, 0x11)

void* rdi = *(arg1 + 0x20)

if (rdi == 0)
    return 

int64_t rcx_1 = *(rdi + 0xa8)

if (rcx_1 != 0)
    sub_141c799d0(rcx_1 - 8)

int64_t rcx_3 = *(rdi + 0xb8)

if (rcx_3 != 0)
    sub_141c799d0(rcx_3 - 8)

sub_141c799d0(rdi)
*(arg1 + 0x20) = 0
