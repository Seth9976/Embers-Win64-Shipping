// 函数: sub_141a6ec50
// 地址: 0x141a6ec50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].w = arg2[1].w
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x18) = 0
int64_t rdi = sx.q(arg2[2].d)
int64_t rsi = *(arg2 + 0x18)
arg1[2].d = rdi.d

if (rdi.d != 0)
    sub_140638750(arg1 + 0x18, rdi.d, 0)
    memcpy(*(arg1 + 0x18), rsi, (rdi << 2).d)
else
    *(arg1 + 0x24) = 0

*(arg1 + 0x28) = 0
sub_141a6e710(arg1 + 0x28, *(arg2 + 0x28), arg2[3].d, 0, 0)
*(arg1 + 0x38) = *(arg2 + 0x38)
sub_141a6ea00(&arg1[4], &arg2[4])
arg1[0xa].q = 0
int32_t i_1 = *(arg2 + 0xa8)
int64_t* rdi_1 = arg2[0xa].q
*(arg1 + 0xa8) = i_1

if (i_1 != 0)
    sub_141a73160(&arg1[0xa], i_1, 0)
    void* rbx_1 = arg1[0xa].q
    int32_t i
    
    do
        *(rbx_1 + 0x80) &= 0xfe
        *(rbx_1 + 0x80) |= 2
        sub_141a6faa0(rbx_1, rdi_1)
        rbx_1 += 0x88
        rdi_1 = &rdi_1[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0xac) = 0

arg1[0xe].b &= 0xfe
arg1[0xe].b |= 2
sub_141a70080(&arg1[0xb], &arg2[0xb])
*(arg1 + 0xe8) = *(arg2 + 0xe8)
arg1[0xf].d ^= (arg1[0xf].d ^ arg2[0xf].d) & 1
int32_t rax_7 = arg1[0xf].d
int32_t rcx_10 = ((rax_7 ^ arg2[0xf].d) & 2) ^ rax_7
arg1[0xf].d = rcx_10
arg1[0xf].d = ((rcx_10 ^ arg2[0xf].d) & 4) ^ rcx_10
return arg1
