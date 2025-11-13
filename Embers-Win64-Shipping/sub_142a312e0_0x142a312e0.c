// 函数: sub_142a312e0
// 地址: 0x142a312e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = sx.d(*arg1)
int32_t rdx = sx.d(arg1[7])
int32_t r9 = sx.d(arg1[5])
int32_t r10 = sx.d(arg1[2])
int32_t r11 = sx.d(arg1[3])
int32_t rdi = sx.d(arg1[4])
int32_t r12 = sx.d(arg1[1])
int32_t rcx = sx.d(arg1[6])

if ((rcx | r12 | rdi | r11 | r10 | r9 | r8 | rdx) == 0)
    *arg2 = 0
    arg2[1] = 0
    return 0

int32_t rsi_1 = rdx * 0x3fb1 + r8 * 0x646
int32_t r14_1 = rdx * 0x646 - r8 * 0x3fb1
int32_t r15_1 = r9 * 0x3871 + r10 * 0x1e2b
int32_t rbp_1 = r9 * 0x1e2b - r10 * 0x3871
int32_t rbx_1 = rdi * 0x3179 + r11 * 0x289a
int32_t rdi_4 = (rsi_1 - rbx_1 + 0x2000) s>> 0xe
int32_t r11_2 = r11 * 0x3179 - rdi * 0x289a
int32_t rsi_3 = (rsi_1 + rbx_1 + 0x2000) s>> 0xe
int32_t r12_3 = (r14_1 + 0x2000 + r11_2) s>> 0xe
int32_t r10_2 = rcx * 0x3d3f + r12 * 0x1294
int32_t rcx_4 = (r14_1 - r11_2 + 0x2000) s>> 0xe
int32_t r9_2 = r12 * 0x3d3f - rcx * 0x1294
int32_t r8_4 = (r15_1 - r10_2 + 0x2000) s>> 0xe
int32_t rdx_4 = (rbp_1 - r9_2 + 0x2000) s>> 0xe
int32_t r11_5 = (r10_2 + 0x2000 + r15_1) s>> 0xe
int32_t r14_4 = (rbp_1 + 0x2000 + r9_2) s>> 0xe
int32_t r10_4 = rsi_3 - r11_5
int32_t r9_4 = rdi_4 * 0x3b21 + rcx_4 * 0x187e
int32_t rbp_3 = rdi_4 * 0x187e - rcx_4 * 0x3b21
int32_t r8_6 = r12_3 - r14_4
int32_t rcx_6 = rdx_4 * 0x3b21 - r8_4 * 0x187e
int32_t rbx_6 = (r9_4 - rcx_6 + 0x2000) s>> 0xe
int32_t rdi_6 = r8_4 * 0x3b21 + rdx_4 * 0x187e
int32_t rdx_8 = (rbp_3 - rdi_6 + 0x2000) s>> 0xe
rsi_3.w += r11_5.w
r12_3.w += r14_4.w
*(arg2 + 2) = neg.w(((rcx_6 + 0x2000 + r9_4) s>> 0xe).w)
*arg2 = rsi_3.w
*(arg2 + 4) = (((rdx_8 + rbx_6) * 0x2d41 + 0x2000) s>> 0xe).w
arg2[1].w = (((r10_4 - r8_6) * 0x2d41 + 0x2000) s>> 0xe).w
*(arg2 + 6) = neg.w((((r8_6 + r10_4) * 0x2d41 + 0x2000) s>> 0xe).w)
*(arg2 + 0xa) = neg.w((((rbx_6 - rdx_8) * 0x2d41 + 0x2000) s>> 0xe).w)
int16_t result = ((rbp_3 + 0x2000 + rdi_6) s>> 0xe).w
r12_3.w = neg.w(r12_3.w)
*(arg2 + 0xc) = result
*(arg2 + 0xe) = r12_3.w
return result
