// 函数: sub_142af2620
// 地址: 0x142af2620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x44)

if (result != 0xffffffff)
    *(arg1 + 0x44) = 0xffffffff
    return result

void* rdx = *(*(arg1 + 0x10) + 8)
int64_t r8 = sx.q(*(rdx + 0x28))
int16_t r9_1

if (r8.d s< *(rdx + 0x2c))
    r9_1 = *(*(rdx + 0x30) + (r8 << 1))

int32_t rax_2
uint32_t rcx

if (r8.d s>= *(rdx + 0x2c) || r9_1 u>= 0xd800)
    rax_2 = sub_142aea870(rdx, arg2)
    rcx = rax_2
else
    rax_2 = (r8 + 1).d
    rcx = zx.d(r9_1)
    *(rdx + 0x28) = rax_2

if (rcx == 0xffffffff)
    return zx.q(rax_2) | zx.q(rcx)

if (rcx == 0xd || rcx == 0x85 || rcx == 0x2028)
    *(arg1 + 0x30) += 1
    *(arg1 + 0x38) = 0
else
    if (rcx != 0xa)
        *(arg1 + 0x38) += 1
        *(arg1 + 0x40) = rcx
        return zx.q(rcx)
    
    if (*(arg1 + 0x40) != 0xd)
        *(arg1 + 0x30) += 1
        *(arg1 + 0x38) = 0

*(arg1 + 0x40) = rcx
return zx.q(rcx)
