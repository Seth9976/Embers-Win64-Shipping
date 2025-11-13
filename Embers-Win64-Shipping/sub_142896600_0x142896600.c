// 函数: sub_142896600
// 地址: 0x142896600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *(arg1 + 0x10)

if (rax != 0)
    int64_t rdx_1 = *(rax + 0xa8)
    
    if (rdx_1 != 0)
        rdx_1()
        *(arg1 + 0x28) = 0

sub_1428af710(*(arg1 + 0x18))
void* rcx_1 = *(arg1 + 0x20)
*(arg1 + 0x18) = 0
uint64_t result = sub_1428af710(rcx_1)
*(arg1 + 0x20) = 0
return result
