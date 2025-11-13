// 函数: sub_1418e5de0
// 地址: 0x1418e5de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x18) != 1 || *(arg1 + 0x448) == 0)
    return 

if (*(arg2 + 0x38) == 2)
    int64_t r8_1 = sx.q(*(arg2 + 0x28))
    void* r9_1 = *(arg2 + 0x30)
    int64_t* rdx = *(r9_1 + 0x58) + (zx.q(r8_1.d) u>> 6 << 3)
    *rdx &= not.q(1 << ((zx.q(r8_1.d) & 0x3f) u% 0x40))
    *(*(r9_1 + 0x48) + (r8_1 << 3)) = 0
    *(arg2 + 0x28) = 0xffffffff

*(arg2 + 0x38) = 1
void* r8_2 = *(arg1 + 0x448)
int64_t rsi_1 = sx.q(*(r8_2 + 0x40))
int64_t* rdx_1 = *(r8_2 + 0x58) + (zx.q(rsi_1.d) u>> 6 << 3)
*rdx_1 |= 1 << ((zx.q(rsi_1.d) & 0x3f) u% 0x40)
*(r8_2 + 0x40) += 1
*(*(r8_2 + 0x48) + (rsi_1 << 3)) = arg2
*(arg2 + 0x30) = *(arg1 + 0x448)
*(arg2 + 0x28) = rsi_1.d
void* rdi_1 = *(arg1 + 0x240)

if (*(rdi_1 + 0x78) != 0)
    sub_1418c86c0(rdi_1, 0, 0)

data_143efba68(*(*(rdi_1 + 0x70) + 0x40), *(*(arg1 + 0x448) + 0x10), zx.q(rsi_1.d), 1)
