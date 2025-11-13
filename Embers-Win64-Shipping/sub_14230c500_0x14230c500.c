// 函数: sub_14230c500
// 地址: 0x14230c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x760) == 0)
    *(arg1 + 0x760) = sub_141b778b0(arg1)

void* rdi = *(arg1 + 0x430)

if (rdi != 0)
    void* rsi_1 = *(rdi + 0x140)
    
    if (rsi_1 == 0)
        void* rax_2 = sub_141b778b0(rdi)
        *(rdi + 0x140) = rax_2
        *(rax_2 + 0x89) |= 0x20
        sub_140d18150(*(rdi + 0x140), rdi, 0)
        rsi_1 = *(rdi + 0x140)
    
    sub_14222caa0(*(arg1 + 0x760), rsi_1)
    *(*(arg1 + 0x760) + 0x250) = rsi_1 + 0xa8

*(*(arg1 + 0x760) + 0x8c) = 3
sub_14222c330(*(arg1 + 0x760))
jump(*(**(arg1 + 0x760) + 0x260))
