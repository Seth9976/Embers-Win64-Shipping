// 函数: sub_140e3d0d0
// 地址: 0x140e3d0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2[0x10] * 0x1151
int32_t rcx = arg2[8]
int32_t r10_1 = *arg2 << 0xd
int32_t rdx = rcx * 0xffffe333
int32_t r8_1 = arg2[0x10] * 0x187e + r9
int32_t r11_1 = r10_1 - r8_1
int32_t rbx = r10_1 + r8_1
int32_t r8_2 = r10_1 + r9
int32_t r10_2 = r10_1 - r9
int32_t r9_1 = rcx * 0x25a1
int32_t rsi_1 = r9_1 - rcx * 0xc7c
int32_t rcx_3 = rcx * 0x300b + rsi_1 + rdx
int32_t rbp = rdx + r9_1
int32_t rax_3 = (rbx + 0x2020000 + rcx_3) s>> 0x12

if (rax_3 u> 0xff)
    rax_3 = zx.d((not.d(rax_3) s>> 0x1f).b)

*arg1 = rax_3.b
int32_t rbx_3 = (rbx - rcx_3 + 0x2020000) s>> 0x12

if (rbx_3 u> 0xff)
    rbx_3 = zx.d((not.d(rbx_3) s>> 0x1f).b)

arg1[0x38] = rbx_3.b
int32_t rax_8 = (r9_1 + 0x2020000 + r8_2) s>> 0x12

if (rax_8 u> 0xff)
    rax_8 = zx.d((not.d(rax_8) s>> 0x1f).b)

arg1[8] = rax_8.b
int32_t r8_5 = (r8_2 - r9_1 + 0x2020000) s>> 0x12

if (r8_5 u> 0xff)
    r8_5 = zx.d((not.d(r8_5) s>> 0x1f).b)

arg1[0x30] = r8_5.b
int32_t rax_13 = (r10_2 + 0x2020000 + rsi_1) s>> 0x12

if (rax_13 u> 0xff)
    rax_13 = zx.d((not.d(rax_13) s>> 0x1f).b)

arg1[0x10] = rax_13.b
int32_t r10_5 = (r10_2 - rsi_1 + 0x2020000) s>> 0x12

if (r10_5 u> 0xff)
    r10_5 = zx.d((not.d(r10_5) s>> 0x1f).b)

arg1[0x28] = r10_5.b
int32_t result = (rbp + 0x2020000 + r11_1) s>> 0x12

if (result u> 0xff)
    result = zx.d((not.d(result) s>> 0x1f).b)

arg1[0x18] = result.b
int32_t r11_4 = (r11_1 - rbp + 0x2020000) s>> 0x12

if (r11_4 u<= 0xff)
    arg1[0x20] = r11_4.b
else
    result = zx.d((not.d(r11_4) s>> 0x1f).b)
    arg1[0x20] = result.b

return result
