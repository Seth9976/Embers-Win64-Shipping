// 函数: sub_1420baaa0
// 地址: 0x1420baaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t rdx = *(arg1 + 0x50)
int32_t r8_1 = rdx - rbp.d
int64_t rbx = sx.q((rbp + 1).d)

if (r8_1 != 1)
    int64_t rcx = *(arg1 + 0x48)
    memmove(rcx + rbp * 0x14, rcx + rbx * 0x14, (r8_1 - 1) * 0x14)
    rdx = *(arg1 + 0x50)

*(arg1 + 0x50) = rdx - 1
sub_1413a8970(arg1 + 0x48)
sub_141fdb4d0(arg1 + 0x48, *(arg1 + 0x60), 1)
int32_t rax_6 = *(arg1 + 0x78)
int32_t rcx_5 = rax_6 - rbp.d

if (rcx_5 != 1)
    int64_t r9_1 = *(arg1 + 0x70)
    memmove(r9_1 + rbp * 0xc, r9_1 + rbx * 0xc, (rcx_5 - 1) * 0xc)
    rax_6 = *(arg1 + 0x78)

*(arg1 + 0x78) = rax_6 - 1
return sub_140775970(arg1 + 0x70) __tailcall
