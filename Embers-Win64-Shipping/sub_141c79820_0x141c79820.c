// 函数: sub_141c79820
// 地址: 0x141c79820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x20)

if (rdi != 0)
    int64_t rcx = *(rdi + 0xa8)
    
    if (rcx != 0)
        sub_141c799d0(rcx - 8)
    
    int64_t rcx_2 = *(rdi + 0xb8)
    
    if (rcx_2 != 0)
        sub_141c799d0(rcx_2 - 8)
    
    sub_141c799d0(rdi)

int64_t rcx_5 = *(arg1 + 8)

if (rcx_5 == 0)
    *(arg1 + 0x18) = 0
    return 

sub_141c799d0(rcx_5)
__builtin_memset(arg1 + 8, 0, 0x11)
