// 函数: sub_141415f20
// 地址: 0x141415f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x88))
int32_t rax = (rdi + 1).d
*(arg1 + 0x88) = rax

if (rax s> *(arg1 + 0x8c))
    sub_14083a440(arg1 + 0x80, rdi.d)

*(*(arg1 + 0x80) + (rdi << 3)) = arg2
int64_t rdi_1 = sx.q(*(arg1 + 0x98))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x98) = rax_2

if (rax_2 s> *(arg1 + 0x9c))
    sub_14083a440(arg1 + 0x90, rdi_1.d)

void* rdx_2 = *arg3
*(*(arg1 + 0x90) + (rdi_1 << 3)) = rdx_2

if (rdx_2 != 0)
    *(rdx_2 + 0x48) += 1

int64_t rdi_2 = sx.q(*(arg1 + 0xa8))
int32_t rax_4 = (rdi_2 + 1).d
*(arg1 + 0xa8) = rax_4

if (rax_4 s> *(arg1 + 0xac))
    sub_14113b710(arg1 + 0xa0, rdi_2.d)

int64_t result = *(arg1 + 0xa0)
*(result + (rdi_2 << 2)) = arg4
return result
