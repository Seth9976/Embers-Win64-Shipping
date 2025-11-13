// 函数: sub_142b8c470
// 地址: 0x142b8c470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x23310))
int32_t rax = (r9 + 0x40).d

if (rax s> 0x8aa0)
    return 0xffffffff

*(arg1 + 0x23310) = rax
void* rdx = arg1 + ((r9 + 0x220) << 2)
int64_t i_1 = 2
void* rcx_2 = arg1 + ((sx.q(*(arg1 + 0x23320)) + 0x220) << 2)
int64_t i

do
    rdx += 0x80
    int128_t zmm0 = *rcx_2
    rcx_2 += 0x80
    *(rdx - 0x80) = zmm0
    *(rdx - 0x70) = *(rcx_2 - 0x70)
    *(rdx - 0x60) = *(rcx_2 - 0x60)
    *(rdx - 0x50) = *(rcx_2 - 0x50)
    *(rdx - 0x40) = *(rcx_2 - 0x40)
    *(rdx - 0x30) = *(rcx_2 - 0x30)
    *(rdx - 0x20) = *(rcx_2 - 0x20)
    *(rdx - 0x10) = *(rcx_2 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
return zx.q(r9.d)
