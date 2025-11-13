// 函数: sub_142ae7480
// 地址: 0x142ae7480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

int64_t rdi_1 = sx.q(arg3)
int32_t rdx = *(arg1 + 8)

if (rdi_1.d s> rdx || sub_142ae7310(arg1, rdx + 1, arg4).b == 0)
    return 

int64_t rax_1 = sx.q(*(arg1 + 8))

while (rax_1 s> rdi_1)
    int64_t* rdx_2 = *(arg1 + 0x10) + (rax_1 << 3)
    rax_1 -= 1
    *rdx_2 = rdx_2[-1]

*(*(arg1 + 0x10) + (rdi_1 << 3)) = arg2
*(arg1 + 8) += 1
