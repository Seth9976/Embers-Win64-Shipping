// 函数: sub_142aeb330
// 地址: 0x142aeb330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

int64_t rdi_1 = sx.q(arg3)
int32_t rdx = *(arg1 + 8)

if (rdi_1.d s> rdx)
    return 

void* rax

if (rdx + 1 s< 0 || *(arg1 + 0xc) s< rdx + 1)
    rax = sub_142aeb240(arg1, rdx + 1, arg4)

if ((rdx + 1 s< 0 || *(arg1 + 0xc) s< rdx + 1) && rax.b == 0)
    return 

int64_t rdx_2 = sx.q(*(arg1 + 8))

while (rdx_2 s> rdi_1)
    int64_t* rcx = *(arg1 + 0x18) + (rdx_2 << 3)
    rdx_2 -= 1
    *rcx = rcx[-1]

*(*(arg1 + 0x18) + (rdi_1 << 3)) = arg2
*(arg1 + 8) += 1
