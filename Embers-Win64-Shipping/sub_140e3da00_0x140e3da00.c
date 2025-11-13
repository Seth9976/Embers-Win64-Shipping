// 函数: sub_140e3da00
// 地址: 0x140e3da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[0x10]
int32_t r8 = arg2[0x30]
int32_t r14 = *arg2
int32_t rsi = arg2[8]
int32_t r9 = (r8 + r10) * 0x1151
int32_t r10_1 = arg2[0x28]
int32_t r11_1 = r9 - r8 * 0x3b21
int32_t rax_2 = arg2[0x20]
int32_t r8_2 = r10 * 0x187e + r9
int32_t r14_2 = (r14 - rax_2) << 0xd
int32_t r15_1 = (r14 + rax_2) << 0xd
int32_t rbp = r14_2 + r11_1
int32_t r14_3 = r14_2 - r11_1
int32_t r11_2 = arg2[0x18]
int32_t r12 = r15_1 + r8_2
int32_t r15_2 = r15_1 - r8_2
int32_t r8_3 = arg2[0x38]
int32_t rdx = rsi + r10_1
int32_t rcx = r11_2 + r8_3
int32_t rdi = (rdx + rcx) * 0x25a1
int32_t rbx = (rsi + r8_3) * 0xffffe333
int32_t r9_1 = (r11_2 + r10_1) * 0xffffadfd
int32_t rcx_2 = rdi - rcx * 0x3ec5
int32_t rdi_1 = rdi - rdx * 0xc7c
int32_t rdx_3 = r11_2 * 0x6254 + rcx_2 + r9_1
int32_t rax_10 = r8_3 * 0x98e + rcx_2 + rbx
int32_t r8_6 = r10_1 * 0x41b3 + rdi_1 + r9_1
int32_t rcx_5 = rsi * 0x300b + rdi_1 + rbx
int32_t rax_13 = (r12 + 0x2020000 + rcx_5) s>> 0x12

if (rax_13 u> 0xff)
    rax_13 = zx.d((not.d(rax_13) s>> 0x1f).b)

*arg1 = rax_13.b
int32_t r12_3 = (r12 - rcx_5 + 0x2020000) s>> 0x12

if (r12_3 u> 0xff)
    r12_3 = zx.d((not.d(r12_3) s>> 0x1f).b)

arg1[0x38] = r12_3.b
int32_t rax_18 = (rbp + 0x2020000 + rdx_3) s>> 0x12

if (rax_18 u> 0xff)
    rax_18 = zx.d((not.d(rax_18) s>> 0x1f).b)

arg1[8] = rax_18.b
int32_t rbp_3 = (rbp - rdx_3 + 0x2020000) s>> 0x12

if (rbp_3 u> 0xff)
    rbp_3 = zx.d((not.d(rbp_3) s>> 0x1f).b)

arg1[0x30] = rbp_3.b
int32_t rax_23 = (r14_3 + 0x2020000 + r8_6) s>> 0x12

if (rax_23 u> 0xff)
    rax_23 = zx.d((not.d(rax_23) s>> 0x1f).b)

arg1[0x10] = rax_23.b
int32_t r14_6 = (r14_3 - r8_6 + 0x2020000) s>> 0x12

if (r14_6 u> 0xff)
    r14_6 = zx.d((not.d(r14_6) s>> 0x1f).b)

arg1[0x28] = r14_6.b
int32_t result = (rax_10 + 0x2020000 + r15_2) s>> 0x12

if (result u> 0xff)
    result = zx.d((not.d(result) s>> 0x1f).b)

arg1[0x18] = result.b
int32_t r15_5 = (r15_2 - rax_10 + 0x2020000) s>> 0x12

if (r15_5 u<= 0xff)
    arg1[0x20] = r15_5.b
else
    result = zx.d((not.d(r15_5) s>> 0x1f).b)
    arg1[0x20] = result.b

return result
