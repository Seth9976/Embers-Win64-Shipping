// 函数: sub_14286f430
// 地址: 0x14286f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int16_t* r8 = *(arg1 + 0x16b0)

if ((arg2 & 1) == 0)
    *(r8 + 0x50) = *(arg1 + 0x16a0)
    void* rax_3 = *(arg1 + 0x16b0)
    *(rax_3 + 2) += 1
    *(arg1 + 0x16a0) = 0
    return 0

*r8 += 1
void* rdx = *(arg1 + 0x16b0)
*(rdx + 4) = *(rdx + 0x10)
*(rdx + 0xc) = *(rdx + 0x18)
void* rax_1 = *(arg1 + 0x16b0)
*(rax_1 + 0x10) = 0
*(rax_1 + 0x18) = 0
sub_14286f870(arg1)
*(arg1 + 0x1698) = 0
return 0
