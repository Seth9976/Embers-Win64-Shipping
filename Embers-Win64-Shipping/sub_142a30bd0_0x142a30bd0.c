// 函数: sub_142a30bd0
// 地址: 0x142a30bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sx.d(arg1[3])
int32_t rbx = sx.d(arg1[0xa])
int32_t r11 = sx.d(arg1[5])
int32_t r13 = sx.d(arg1[8])
int32_t r12 = sx.d(arg1[7])
int32_t r15 = sx.d(arg1[6])
int32_t r14 = sx.d(arg1[9])
int32_t rbp = sx.d(arg1[4])
int32_t rsi = sx.d(arg1[0xb])
int32_t rdi = sx.d(arg1[2])
int32_t r10 = sx.d(arg1[0xd])
int32_t r9 = sx.d(*arg1)
int32_t r8 = sx.d(arg1[0xf])
int32_t rax_1 = sx.d(arg1[0xc])
int32_t rax_2 = sx.d(arg1[1])
int32_t rax_3 = sx.d(arg1[0xe])
int16_t result

if ((rax_3 | rax_2 | rax_1 | rax | rbx | r11 | r13 | r12 | r15 | r14 | rbp | rsi | rdi | r10 | r9
        | r8) != 0)
    int32_t rcx_1 = r8 * 0x3fec + r9 * 0x324
    int32_t r11_2 = r8 * 0x324 - r9 * 0x3fec
    int32_t rbx_2 = r10 * 0x3e15 + rdi * 0xf8d
    int32_t r9_2 = r10 * 0xf8d - rdi * 0x3e15
    int32_t r10_2 = rsi * 0x39db + rbp * 0x1b5d
    int32_t rdx_1 = rsi * 0x1b5d - rbp * 0x39db
    int32_t r8_2 = r14 * 0x3368 + r15 * 0x2620
    int32_t rcx_3 = r14 * 0x2620 - r15 * 0x3368
    int32_t rcx_5 = r13 * 0x2f6c + r12 * 0x2afb
    int32_t r13_2 = r12 * 0x2f6c - r13 * 0x2afb
    int32_t r11_5 = (r11_2 - r13_2 + 0x2000) s>> 0xe
    int32_t r12_2 = rbx * 0x36e5 + r11 * 0x20e7
    int32_t rbx_5 = (rbx_2 - r12_2 + 0x2000) s>> 0xe
    int32_t r15_2 = r11 * 0x36e5 - rbx * 0x20e7
    int32_t r9_5 = (r9_2 - r15_2 + 0x2000) s>> 0xe
    int32_t r14_2 = rax_1 * 0x3c42 + rax * 0x1590
    int32_t r10_5 = (r10_2 - r14_2 + 0x2000) s>> 0xe
    int32_t rbp_2 = rax * 0x3c42 - rax_1 * 0x1590
    int32_t rdx_4 = (rdx_1 - rbp_2 + 0x2000) s>> 0xe
    int32_t rsi_2 = rax_3 * 0x3f4f + rax_2 * 0x964
    int32_t rdi_2 = rax_2 * 0x3f4f - rax_3 * 0x964
    int32_t rax_38 = (rcx_1 - rcx_5 + 0x2000) s>> 0xe
    int32_t r8_5 = (r8_2 - rsi_2 + 0x2000) s>> 0xe
    int32_t rax_42 = (rcx_5 + 0x2000 + rcx_1) s>> 0xe
    int32_t rcx_9 = (rcx_3 - rdi_2 + 0x2000) s>> 0xe
    int32_t rax_46 = (r11_2 + 0x2000 + r13_2) s>> 0xe
    int32_t r13_6 = (r8_2 + 0x2000 + rsi_2) s>> 0xe
    int32_t rax_50 = (rbx_2 + 0x2000 + r12_2) s>> 0xe
    int32_t r12_6 = (rcx_3 + 0x2000 + rdi_2) s>> 0xe
    int32_t rax_54 = (r9_2 + 0x2000 + r15_2) s>> 0xe
    int32_t rax_58 = (r10_2 + 0x2000 + r14_2) s>> 0xe
    int32_t rax_62 = (rdx_1 + 0x2000 + rbp_2) s>> 0xe
    int32_t rsi_4 = rax_38 * 0x3ec5 + r11_5 * 0xc7c
    int32_t rcx_11 = rax_46 - rax_62
    int32_t r11_7 = rax_38 * 0xc7c - r11_5 * 0x3ec5
    int32_t r11_9 = r9_5 * 0x3537 + rbx_5 * 0x238e
    int32_t r9_7 = rax_50 - r13_6
    int32_t r11_11 = rbx_5 * 0x3537 - r9_5 * 0x238e
    int32_t r15_4 = rdx_4 * 0x3ec5 - r10_5 * 0xc7c
    int32_t rdx_6 = rax_54 - r12_6
    int32_t r14_4 = r10_5 * 0x3ec5 + rdx_4 * 0xc7c
    int32_t rsi_6 = rcx_9 * 0x238e - r8_5 * 0x3537
    int32_t r8_7 = rax_42 - rax_58
    int32_t rbp_4 = rcx_9 * 0x3537 + r8_5 * 0x238e
    int32_t var_78_2 = rax_50 + r13_6
    int32_t arg_20 = rax_54 + r12_6
    int32_t rax_72 = rax_42 + rax_58
    int32_t arg_18 = rax_46 + rax_62
    int32_t rdi_6 = (rsi_4 - r15_4 + 0x2000) s>> 0xe
    int32_t r11_15 = (r11_7 - r14_4 + 0x2000) s>> 0xe
    int32_t rbx_9 = (r11_9 - rsi_6 + 0x2000) s>> 0xe
    int32_t r13_8 = r8_7 * 0x3b21 + rcx_11 * 0x187e
    int32_t r10_9 = (r11_11 - rbp_4 + 0x2000) s>> 0xe
    int32_t rcx_13 = r8_7 * 0x187e - rcx_11 * 0x3b21
    int32_t r12_8 = rdx_6 * 0x3b21 - r9_7 * 0x187e
    int32_t r9_11 = (r11_9 + 0x2000 + rsi_6) s>> 0xe
    int32_t rcx_15 = r9_7 * 0x3b21 + rdx_6 * 0x187e
    int32_t rdi_8 = arg_18 - arg_20
    int32_t rax_83 = (r11_7 + 0x2000 + r14_4) s>> 0xe
    int32_t r15_6 = (r15_4 + rsi_4 + 0x2000) s>> 0xe
    int32_t rax_87 = (r11_11 + 0x2000 + rbp_4) s>> 0xe
    int32_t rbp_8 = (r13_8 - r12_8 + 0x2000) s>> 0xe
    int32_t rdx_8 = rdi_6 * 0x3b21 + r11_15 * 0x187e
    int32_t rcx_17 = rdi_6 * 0x187e - r11_15 * 0x3b21
    int32_t rcx_19 = r10_9 * 0x3b21 - rbx_9 * 0x187e
    int32_t r8_9 = rbx_9 * 0x3b21 + r10_9 * 0x187e
    int32_t rsi_8 = rax_72 - var_78_2
    int32_t r14_8 = (rcx_13 - rcx_15 + 0x2000) s>> 0xe
    int32_t arg_8
    arg_8.w = rax_72.w + var_78_2.w
    int32_t r11_17 = r15_6 - r9_11
    r15_6.w += r9_11.w
    *arg2 = arg_8.w
    int32_t r10_11 = rax_83 - rax_87
    arg2[2] = ((rcx_19 + 0x2000 + rdx_8) s>> 0xe).w
    r15_6.w = neg.w(r15_6.w)
    int32_t rbx_13 = (rdx_8 - rcx_19 + 0x2000) s>> 0xe
    int32_t r8_13 = (rcx_17 - r8_9 + 0x2000) s>> 0xe
    arg2[1] = r15_6.w
    arg2[3] = neg.w(((r13_8 + 0x2000 + r12_8) s>> 0xe).w)
    arg2[4] = (((r14_8 + rbp_8) * 0x2d41 + 0x2000) s>> 0xe).w
    arg2[5] = ((0x2000 - (r8_13 + rbx_13) * 0x2d41) s>> 0xe).w
    arg2[6] = (((r10_11 + r11_17) * 0x2d41 + 0x2000) s>> 0xe).w
    arg2[7] = ((0x2000 - (rdi_8 + rsi_8) * 0x2d41) s>> 0xe).w
    arg2[8] = (((rsi_8 - rdi_8) * 0x2d41 + 0x2000) s>> 0xe).w
    arg2[9] = (((r10_11 - r11_17) * 0x2d41 + 0x2000) s>> 0xe).w
    arg2[0xa] = (((rbx_13 - r8_13) * 0x2d41 + 0x2000) s>> 0xe).w
    arg2[0xb] = (((r14_8 - rbp_8) * 0x2d41 + 0x2000) s>> 0xe).w
    arg2[0xc] = ((rcx_15 + 0x2000 + rcx_13) s>> 0xe).w
    arg2[0xd] = neg.w(((r8_9 + 0x2000 + rcx_17) s>> 0xe).w)
    arg2[0xe] = rax_83.w + rax_87.w
    result = neg.w(arg_18.w + arg_20.w)
    arg2[0xf] = result
else
    result = 0
    __builtin_memset(arg2, 0, 0x20)

return result
