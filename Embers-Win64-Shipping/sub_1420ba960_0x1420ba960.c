// 函数: sub_1420ba960
// 地址: 0x1420ba960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t rcx = *(arg1 + 0x50)
int32_t r8_1 = rcx - rbp.d
int64_t rdi = rbp * 0x2c
int64_t rbx = sx.q((rbp + 1).d)

if (r8_1 != 1)
    int64_t rcx_1 = *(arg1 + 0x48)
    memmove(rcx_1 + rdi, rbx * 0x2c + rcx_1, (r8_1 - 1) * 0x2c)
    rcx = *(arg1 + 0x50)

*(arg1 + 0x50) = rcx - 1
sub_141febab0(arg1 + 0x48)
sub_141f55fe0(arg1 + 0x48, *(arg1 + 0x90), 1)
int32_t rcx_5 = *(arg1 + 0x68)
int32_t rax_4 = rcx_5 - rbp.d

if (rax_4 != 1)
    int64_t rcx_6 = *(arg1 + 0x60)
    memmove(rcx_6 + rdi, rbx * 0x2c + rcx_6, (rax_4 - 1) * 0x2c)
    rcx_5 = *(arg1 + 0x68)

*(arg1 + 0x68) = rcx_5 - 1
sub_141febab0(arg1 + 0x60)
sub_141f55fe0(arg1 + 0x60, *(arg1 + 0x94), 1)
int32_t rcx_10 = *(arg1 + 0x80)
int32_t rax_9 = rcx_10 - rbp.d

if (rax_9 != 1)
    int64_t r9_1 = *(arg1 + 0x78)
    memmove(r9_1 + rbp * 0xc, r9_1 + rbx * 0xc, (rax_9 - 1) * 0xc)
    rcx_10 = *(arg1 + 0x80)

*(arg1 + 0x80) = rcx_10 - 1
return sub_140775970(arg1 + 0x78) __tailcall
