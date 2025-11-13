// 函数: sub_1408e0c20
// 地址: 0x1408e0c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5)
int64_t rdi
rdi.b = 0x80
char rsi = -0x80
char rbp = -0x80
char r14 = -0x80

if (result.d != 0)
    void* r11_1 = arg3 + 2
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t r10_1 = arg2[3].d
        uint64_t r8 = zx.q(*(arg2 + 0x1c))
        int64_t r9_2 = *(r8 + *arg2) << r10_1.b | arg2[2]
        int32_t r10_2 = r10_1 | 0x38
        arg2[2] = r9_2
        arg2[3].d = r10_2
        *(arg2 + 0x1c) = ((0x3f - r10_1) u>> 3) + r8.d
        uint64_t rax_5 = zx.q(r9_2.d) & 0x7ff
        int32_t rcx_1 = sx.d(*(arg6 + (rax_5 << 1)))
        uint64_t r9_3 = r9_2 u>> rcx_1.b
        int32_t r10_3 = r10_2 - rcx_1
        arg2[2] = r9_3
        arg2[3].d = r10_3
        rdi.b += *(arg6 + (rax_5 << 1) + 1)
        uint64_t rax_7 = zx.q(r9_3.d) & 0x7ff
        int32_t rcx_2 = sx.d(*(arg6 + (rax_7 << 1)))
        uint64_t r9_4 = r9_3 u>> rcx_2.b
        int32_t r10_4 = r10_3 - rcx_2
        arg2[2] = r9_4
        arg2[3].d = r10_4
        rsi += *(arg6 + (rax_7 << 1) + 1)
        uint64_t rax_9 = zx.q(r9_4.d) & 0x7ff
        int32_t rcx_3 = sx.d(*(arg6 + (rax_9 << 1)))
        uint64_t r9_5 = r9_4 u>> rcx_3.b
        int32_t r10_5 = r10_4 - rcx_3
        arg2[2] = r9_5
        arg2[3].d = r10_5
        rbp += *(arg6 + (rax_9 << 1) + 1)
        result = zx.q(r9_5.d) & 0x7ff
        int32_t rcx_4 = sx.d(*(arg6 + (result << 1)))
        arg2[2] = r9_5 u>> rcx_4.b
        arg2[3].d = r10_5 - rcx_4
        r14 += *(arg6 + (result << 1) + 1)
        *(r11_1 + 1) = r14
        *(r11_1 - 2) = rdi.b
        *(r11_1 - 1) = rsi
        *r11_1 = rbp
        r11_1 += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
