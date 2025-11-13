// 函数: sub_141effa50
// 地址: 0x141effa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x148)

if (r9 == 0)
    return 

int32_t r8_1 = *(r9 + 0x330)
*(r9 + 0x330) = ((zx.d(arg2) << 2 ^ r8_1) & 4) ^ r8_1
*(arg1 + 0x388) &= 0xef
*(arg1 + 0x388) |= (arg2 & 2) << 3
int64_t* rcx = *(arg1 + 0x148)

if (rcx[0x1e].b != 3)
    return 

uint32_t rax
rax.b = (rcx[0x66].d u>> 2).b & 1

if (rax.b == 0)
    jump(*(*rcx + 0x798))

if (((r8_1 u>> 2).b & 1) == 0)
    jump(*(*rcx + 0x790))
