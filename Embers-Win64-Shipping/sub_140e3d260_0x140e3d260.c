// 函数: sub_140e3d260
// 地址: 0x140e3d260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2[0x10] * 0x1151
int32_t r10 = arg2[8]
int32_t rbx_1 = *arg2 << 0xd
int32_t r11 = r10 * 0xffffe333
int32_t r8_1 = arg2[0x10] * 0x187e + r9
int32_t rdi_1 = rbx_1 - r8_1
int32_t rsi = rbx_1 + r9
int32_t rbp = rbx_1 + r8_1
int32_t r8_2 = arg2[0x18]
int32_t rdx = r8_2 * 0xffffadfd
int32_t rbx_2 = rbx_1 - r9
int32_t r9_1 = (r10 + r8_2) * 0x25a1
int32_t rcx_1 = r9_1 - r8_2 * 0x3ec5
int32_t r8_5 = r8_2 * 0x6254 + rcx_1 + rdx
int32_t r12 = rcx_1 + r11
int32_t r9_2 = r9_1 - r10 * 0xc7c
int32_t r15 = r9_2 + rdx
int32_t rcx_4 = r10 * 0x300b + r9_2 + r11
int32_t rax_5 = (rbp + 0x2020000 + rcx_4) s>> 0x12

if (rax_5 u> 0xff)
    rax_5 = zx.d((not.d(rax_5) s>> 0x1f).b)

*arg1 = rax_5.b
int32_t rbp_3 = (rbp - rcx_4 + 0x2020000) s>> 0x12

if (rbp_3 u> 0xff)
    rbp_3 = zx.d((not.d(rbp_3) s>> 0x1f).b)

arg1[0x38] = rbp_3.b
int32_t rax_10 = (rsi + 0x2020000 + r8_5) s>> 0x12

if (rax_10 u> 0xff)
    rax_10 = zx.d((not.d(rax_10) s>> 0x1f).b)

arg1[8] = rax_10.b
int32_t rsi_3 = (rsi - r8_5 + 0x2020000) s>> 0x12

if (rsi_3 u> 0xff)
    rsi_3 = zx.d((not.d(rsi_3) s>> 0x1f).b)

arg1[0x30] = rsi_3.b
int32_t rax_15 = (rbx_2 + 0x2020000 + r15) s>> 0x12

if (rax_15 u> 0xff)
    rax_15 = zx.d((not.d(rax_15) s>> 0x1f).b)

arg1[0x10] = rax_15.b
int32_t rbx_5 = (rbx_2 - r15 + 0x2020000) s>> 0x12

if (rbx_5 u> 0xff)
    rbx_5 = zx.d((not.d(rbx_5) s>> 0x1f).b)

arg1[0x28] = rbx_5.b
int32_t result = (rdi_1 + 0x2020000 + r12) s>> 0x12

if (result u> 0xff)
    result = zx.d((not.d(result) s>> 0x1f).b)

arg1[0x18] = result.b
int32_t rdi_4 = (rdi_1 - r12 + 0x2020000) s>> 0x12

if (rdi_4 u<= 0xff)
    arg1[0x20] = rdi_4.b
else
    result = zx.d((not.d(rdi_4) s>> 0x1f).b)
    arg1[0x20] = result.b

return result
