// 函数: sub_140e3d420
// 地址: 0x140e3d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2[0x10] * 0x1151
int32_t r10 = arg2[8]
int32_t rax = arg2[0x20]
int32_t rbx = *arg2
int32_t r11 = r10 * 0xffffe333
int32_t rdi_1 = (rbx + rax) << 0xd
int32_t r8_1 = arg2[0x10] * 0x187e + r9
int32_t rbx_2 = (rbx - rax) << 0xd
int32_t rbp = rdi_1 + r8_1
int32_t rdi_2 = rdi_1 - r8_1
int32_t r8_2 = arg2[0x18]
int32_t rsi = rbx_2 + r9
int32_t rdx = r8_2 * 0xffffadfd
int32_t rbx_3 = rbx_2 - r9
int32_t r9_1 = (r10 + r8_2) * 0x25a1
int32_t rcx_1 = r9_1 - r8_2 * 0x3ec5
int32_t r8_5 = r8_2 * 0x6254 + rcx_1 + rdx
int32_t r12 = rcx_1 + r11
int32_t r9_2 = r9_1 - r10 * 0xc7c
int32_t r15 = r9_2 + rdx
int32_t rcx_4 = r10 * 0x300b + r9_2 + r11
int32_t rax_6 = (rbp + 0x2020000 + rcx_4) s>> 0x12

if (rax_6 u> 0xff)
    rax_6 = zx.d((not.d(rax_6) s>> 0x1f).b)

*arg1 = rax_6.b
int32_t rbp_3 = (rbp - rcx_4 + 0x2020000) s>> 0x12

if (rbp_3 u> 0xff)
    rbp_3 = zx.d((not.d(rbp_3) s>> 0x1f).b)

arg1[0x38] = rbp_3.b
int32_t rax_11 = (rsi + 0x2020000 + r8_5) s>> 0x12

if (rax_11 u> 0xff)
    rax_11 = zx.d((not.d(rax_11) s>> 0x1f).b)

arg1[8] = rax_11.b
int32_t rsi_3 = (rsi - r8_5 + 0x2020000) s>> 0x12

if (rsi_3 u> 0xff)
    rsi_3 = zx.d((not.d(rsi_3) s>> 0x1f).b)

arg1[0x30] = rsi_3.b
int32_t rax_16 = (rbx_3 + 0x2020000 + r15) s>> 0x12

if (rax_16 u> 0xff)
    rax_16 = zx.d((not.d(rax_16) s>> 0x1f).b)

arg1[0x10] = rax_16.b
int32_t rbx_6 = (rbx_3 - r15 + 0x2020000) s>> 0x12

if (rbx_6 u> 0xff)
    rbx_6 = zx.d((not.d(rbx_6) s>> 0x1f).b)

arg1[0x28] = rbx_6.b
int32_t result = (rdi_2 + 0x2020000 + r12) s>> 0x12

if (result u> 0xff)
    result = zx.d((not.d(result) s>> 0x1f).b)

arg1[0x18] = result.b
int32_t rdi_5 = (rdi_2 - r12 + 0x2020000) s>> 0x12

if (rdi_5 u<= 0xff)
    arg1[0x20] = rdi_5.b
else
    result = zx.d((not.d(rdi_5) s>> 0x1f).b)
    arg1[0x20] = result.b

return result
