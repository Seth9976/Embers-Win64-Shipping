// 函数: sub_141744bb0
// 地址: 0x141744bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
void* r15 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax
int64_t r14 = rbp * 0x18
int64_t* r15_1 = r15 + r14

if (rax s> *(arg3 + 0x14))
    sub_1405a4df0(arg3 + 8)

int64_t rax_1 = *(arg3 + 8)
int64_t rcx_1 = rsi * 3
*(rax_1 + (rcx_1 << 3)) = *r15_1
void* rdx_1 = rax_1 + (rcx_1 << 3)
*(rdx_1 + 8) = r15_1[1].d
*(rdx_1 + 0xc) = *(r15_1 + 0xc)
*(rdx_1 + 0x14) = *(r15_1 + 0x14)
int32_t rcx_2 = *(arg1 + 0x10)
int32_t rdx_4 = rcx_2 - rbp.d - 1

if (rdx_4 s>= 1)
    rdx_4 = 1

if (rdx_4 != 0)
    int64_t r9_2 = *(arg1 + 8)
    memcpy(r9_2 + r14, r9_2 + sx.q(rcx_2 - rdx_4) * 0x18, rdx_4 * 0x18)
    rcx_2 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_2 - 1
return sub_1405fde90(arg1 + 8) __tailcall
