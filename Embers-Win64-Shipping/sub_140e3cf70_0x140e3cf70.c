// 函数: sub_140e3cf70
// 地址: 0x140e3cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[8]
int32_t r11 = r8 * 0x25a1
int32_t rdx = r8 * 0xffffe333
int32_t r9_1 = *arg2 << 0xd
int32_t rbx_1 = r11 - r8 * 0xc7c
int32_t r10_2 = r8 * 0x300b + rbx_1 + rdx
int32_t rdi = rdx + r11
int32_t rax_3 = (r9_1 + 0x2020000 + r10_2) s>> 0x12

if (rax_3 u> 0xff)
    rax_3 = zx.d((not.d(rax_3) s>> 0x1f).b)

*arg1 = rax_3.b
int32_t rax_9 = (r9_1 - r10_2 + 0x2020000) s>> 0x12

if (rax_9 u> 0xff)
    rax_9 = zx.d((not.d(rax_9) s>> 0x1f).b)

arg1[0x38] = rax_9.b
int32_t rax_14 = (r9_1 + 0x2020000 + r11) s>> 0x12

if (rax_14 u> 0xff)
    rax_14 = zx.d((not.d(rax_14) s>> 0x1f).b)

arg1[8] = rax_14.b
int32_t rax_20 = (r9_1 - r11 + 0x2020000) s>> 0x12

if (rax_20 u> 0xff)
    rax_20 = zx.d((not.d(rax_20) s>> 0x1f).b)

arg1[0x30] = rax_20.b
int32_t rax_25 = (r9_1 + 0x2020000 + rbx_1) s>> 0x12

if (rax_25 u> 0xff)
    rax_25 = zx.d((not.d(rax_25) s>> 0x1f).b)

arg1[0x10] = rax_25.b
int32_t rax_31 = (r9_1 - rbx_1 + 0x2020000) s>> 0x12

if (rax_31 u> 0xff)
    rax_31 = zx.d((not.d(rax_31) s>> 0x1f).b)

arg1[0x28] = rax_31.b
int32_t rax_36 = (r9_1 + 0x2020000 + rdi) s>> 0x12

if (rax_36 u> 0xff)
    rax_36 = zx.d((not.d(rax_36) s>> 0x1f).b)

arg1[0x18] = rax_36.b
int32_t r9_4 = (r9_1 - rdi + 0x2020000) s>> 0x12

if (r9_4 u<= 0xff)
    arg1[0x20] = r9_4.b
    return rax_36

char r9_6 = (not.d(r9_4) s>> 0x1f).b
arg1[0x20] = r9_6
return r9_6
