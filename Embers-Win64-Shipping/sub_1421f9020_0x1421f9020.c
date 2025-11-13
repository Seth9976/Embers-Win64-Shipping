// 函数: sub_1421f9020
// 地址: 0x1421f9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx_2 = (sx.q(arg2) << 4) + *(*arg1 + 0x38)
int32_t rax_1 = arg1[2].d
int64_t r9 = sx.q(*(rbx_2 + 8))
int32_t rdx_2 = rax_1 - r9.d - 1

if (rdx_2 s>= 1)
    rdx_2 = 1

if (rdx_2 != 0)
    int64_t rcx = arg1[1]
    memcpy(rcx + (r9 << 2), rcx + (sx.q(rax_1 - rdx_2) << 2), rdx_2 << 2)
    rax_1 = arg1[2].d

uint64_t result = zx.q(rax_1 - 1)
arg1[2].d = result.d
int64_t r8_3 = sx.q(*(rbx_2 + 8))

if (r8_3.d s>= 0 && r8_3.d s< result.d)
    result = *arg1
    *(*(result + 0x38) + sx.q(*(arg1[1] + (r8_3 << 2))) * 0x10 + 8) = r8_3.d

*(rbx_2 + 8) = 0xffffffff
return result
