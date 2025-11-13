// 函数: sub_1403e6130
// 地址: 0x1403e6130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t r10 = sx.d(*(arg3 + 2))
int64_t r9 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r10 * arg4)
int32_t result = (temp1 - temp0) s>> 1
char* rbx_1 = sx.q(result) + *(arg3 + 0x20)

if (r10 s> 0)
    do
        uint32_t rdx_1 = zx.d(*rbx_1)
        rdi += 2
        rbx_1 = &rbx_1[1]
        r9 += 2
        uint64_t r8_3 = zx.q(rdx_1 u>> 4) & 1
        uint16_t rcx = zx.w(rdx_1.b u>> 1) & 7
        uint32_t rax_6 = rdx_1
        rdx_1.b u>>= 5
        *(arg1 + (r9 << 1) - 4) = rcx * 9
        *(arg2 + 1 + r9 - 3) =
            *((sx.q(*(arg3 + 2)) - 1) * (zx.q(rax_6) & 1) + *(arg3 + 0x18) + r9 - 2)
        *(arg1 + (r9 << 1) - 2) = zx.w(rdx_1.b) * 9
        *(arg2 + 1 + r9 - 2) = *(r8_3 * (sx.q(*(arg3 + 2)) - 1) + *(arg3 + 0x18) + r9 - 1)
        result = sx.d(*(arg3 + 2))
    while (rdi s< result)

return result
