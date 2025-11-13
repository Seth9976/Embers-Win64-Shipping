// 函数: sub_1403e7700
// 地址: 0x1403e7700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg5)
int64_t r10 = 0

if (rbx s<= 0)
    return 

do
    int32_t r9 = sx.d(*(arg3 + (r10 << 1)))
    r10 += 1
    int32_t r9_2 = (r9 << 8) + *arg1
    *(arg2 + (r10 << 2) - 4) = r9_2
    int32_t rcx = sx.d(*arg4)
    int32_t r9_3 = r9_2 << 2
    uint32_t r8 = zx.d(r9_3.w)
    int32_t r9_4 = r9_3 s>> 0x10
    *arg1 = ((rcx * r8) s>> 0x10) + r9_4 * rcx + arg1[1]
    int32_t rax_3 = sx.d(arg4[1])
    arg1[1] = ((rax_3 * r8) s>> 0x10) + rax_3 * r9_4
while (r10 s< rbx)
