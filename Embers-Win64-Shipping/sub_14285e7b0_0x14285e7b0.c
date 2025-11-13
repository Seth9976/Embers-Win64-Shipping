// 函数: sub_14285e7b0
// 地址: 0x14285e7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* r10 = *(*(arg1 + 8) + 0xc0)
int64_t rdx
int64_t r8

if (*(arg1 + 0x38) != 0)
    rdx = *(r10 + 0x30)
    r8 = *(r10 + 0x38)
else
    rdx = *(r10 + 0x40)
    r8 = *(r10 + 0x48)

*(*(arg1 + 0xa8) + 0x220) = (*(r10 + 0x28))(arg1, rdx, r8, *(arg1 + 0xa8) + 0x1a0)
int64_t result
result.b = *(*(arg1 + 0xa8) + 0x220) != 0
return result
