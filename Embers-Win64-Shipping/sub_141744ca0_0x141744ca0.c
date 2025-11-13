// 函数: sub_141744ca0
// 地址: 0x141744ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg3 + 0x10))
int64_t r15 = sx.q(arg2)
int64_t rsi_1 = r15 << 4
int32_t rax = (rbp + 1).d
int64_t* r14_1 = *(arg1 + 8) + rsi_1
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405a4f90(arg3 + 8)

int64_t* rcx_3 = (rbp << 4) + *(arg3 + 8)
*rcx_3 = 0
*rcx_3 = *r14_1
*r14_1 = 0
rcx_3[1].d = r14_1[1].d
*(rcx_3 + 0xc) = *(r14_1 + 0xc)
r14_1[1] = 0
int64_t rcx_4 = *(rsi_1 + *(arg1 + 8))

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t rcx_7 = *(arg1 + 0x10)
int32_t rdx_3 = rcx_7 - r15.d - 1

if (rdx_3 s>= 1)
    rdx_3 = 1

if (rdx_3 != 0)
    int64_t rax_5 = *(arg1 + 8)
    memcpy(rax_5 + rsi_1, (sx.q(rcx_7 - rdx_3) << 4) + rax_5, rdx_3 << 4)
    rcx_7 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_7 - 1
return sub_1405a5010(arg1 + 8) __tailcall
