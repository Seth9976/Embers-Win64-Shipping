// 函数: sub_142a23820
// 地址: 0x142a23820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = neg.d(arg1)
uint64_t rax_1 = zx.q(arg1 u>> 0x1f)
*(arg2 + (rax_1 << 2)) += arg3

if (rax_1.d == 0)
    rbx_1 = arg1

int32_t r9 = 0
int64_t result
int32_t rdx

if (rbx_1 - 1 s< 0x2000)
    result = zx.q(*((sx.q(rbx_1 - 1) s>> 3) + &data_143602920))
    
    if (result.d == 0)
        rdx = 0
    else
        rdx = 2 << (result + 2).b
else
    result = 0xa
    rdx = 0x2000

int32_t rbx_3 = rbx_1 - 1 - rdx
uint64_t r10 = zx.q(result.d)
uint64_t rbx_4 = zx.q(rbx_3) & 1
uint64_t rsi_2 = zx.q(rbx_3 s>> 1) & 3
int32_t rcx_2 = rbx_3 s>> 3
*(arg2 + (r10 << 2) + 8) += arg3

if (result.d == 0)
    int64_t rcx_3 = sx.q(rcx_2)
    *(arg2 + (rcx_3 << 2) + 0x34) += arg3
    int64_t rcx_4 = rsi_2 + (rcx_3 << 2)
    *(arg2 + (rcx_4 << 2) + 0x8c) += arg3
    *(arg2 + (rbx_4 << 2) + 0xbc) += arg3 * arg4
    return result

int64_t rdx_1 = 0

if (result.d != 0)
    do
        int32_t rax_5 = (sx.q(rcx_2) s>> r9.b).d
        r9 += 1
        result = (zx.q(rax_5) & 1) + (rdx_1 << 1)
        rdx_1 += 1
        *(arg2 + (result << 2) + 0x3c) += arg3
    while (rdx_1 s< r10)

*(arg2 + (rsi_2 << 2) + 0xac) += arg3
*(arg2 + (rbx_4 << 2) + 0xc4) += arg3 * arg4
return result
