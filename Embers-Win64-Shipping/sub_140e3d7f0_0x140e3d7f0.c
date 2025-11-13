// 函数: sub_140e3d7f0
// 地址: 0x140e3d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[0x10]
int32_t r8 = arg2[0x30]
int32_t rsi = *arg2
int32_t rdi = arg2[8]
int32_t rbx = rdi * 0xffffe333
int32_t r9 = (r8 + r10) * 0x1151
int32_t r10_1 = arg2[0x18]
int32_t r11_1 = r9 - r8 * 0x3b21
int32_t rax_2 = arg2[0x20]
int32_t r8_2 = r10 * 0x187e + r9
int32_t r14_1 = (rsi + rax_2) << 0xd
int32_t rsi_2 = (rsi - rax_2) << 0xd
int32_t r15 = r14_1 + r8_2
int32_t r14_2 = r14_1 - r8_2
int32_t r8_3 = arg2[0x28]
int32_t rbp = rsi_2 + r11_1
int32_t rsi_3 = rsi_2 - r11_1
int32_t rcx = rdi + r8_3
int32_t r11_2 = (rcx + r10_1) * 0x25a1
int32_t r9_1 = (r10_1 + r8_3) * 0xffffadfd
int32_t rdx_1 = r11_2 - r10_1 * 0x3ec5
int32_t r13 = rdx_1 + rbx
int32_t r11_3 = r11_2 - rcx * 0xc7c
int32_t r8_6 = r8_3 * 0x41b3 + r11_3 + r9_1
int32_t rcx_3 = r10_1 * 0x6254 + rdx_1 + r9_1
int32_t rdx_4 = rdi * 0x300b + r11_3 + rbx
int32_t rax_9 = (r15 + 0x2020000 + rdx_4) s>> 0x12

if (rax_9 u> 0xff)
    rax_9 = zx.d((not.d(rax_9) s>> 0x1f).b)

*arg1 = rax_9.b
int32_t r15_3 = (r15 - rdx_4 + 0x2020000) s>> 0x12

if (r15_3 u> 0xff)
    r15_3 = zx.d((not.d(r15_3) s>> 0x1f).b)

arg1[0x38] = r15_3.b
int32_t rax_14 = (rbp + 0x2020000 + rcx_3) s>> 0x12

if (rax_14 u> 0xff)
    rax_14 = zx.d((not.d(rax_14) s>> 0x1f).b)

arg1[8] = rax_14.b
int32_t rbp_3 = (rbp - rcx_3 + 0x2020000) s>> 0x12

if (rbp_3 u> 0xff)
    rbp_3 = zx.d((not.d(rbp_3) s>> 0x1f).b)

arg1[0x30] = rbp_3.b
int32_t rax_19 = (rsi_3 + 0x2020000 + r8_6) s>> 0x12

if (rax_19 u> 0xff)
    rax_19 = zx.d((not.d(rax_19) s>> 0x1f).b)

arg1[0x10] = rax_19.b
int32_t rsi_6 = (rsi_3 - r8_6 + 0x2020000) s>> 0x12

if (rsi_6 u> 0xff)
    rsi_6 = zx.d((not.d(rsi_6) s>> 0x1f).b)

arg1[0x28] = rsi_6.b
int32_t result = (r14_2 + 0x2020000 + r13) s>> 0x12

if (result u> 0xff)
    result = zx.d((not.d(result) s>> 0x1f).b)

arg1[0x18] = result.b
int32_t r14_5 = (r14_2 - r13 + 0x2020000) s>> 0x12

if (r14_5 u<= 0xff)
    arg1[0x20] = r14_5.b
else
    result = zx.d((not.d(r14_5) s>> 0x1f).b)
    arg1[0x20] = result.b

return result
