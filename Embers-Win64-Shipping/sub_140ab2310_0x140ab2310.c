// 函数: sub_140ab2310
// 地址: 0x140ab2310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t r9 = 0x1505
void* rcx = arg1 + 6

do
    uint32_t rax_1 = zx.d(*(rcx - 1))
    rcx += 0xc
    i += 0xc
    int32_t r8_4 = (((rax_1 * 0x21 + zx.d(*(rcx - 0xc))) * 0x21 + zx.d(*(rcx - 0xb))) * 0x21
        + zx.d(*(rcx - 0xa))) * 0x21 + zx.d(*(rcx - 9))
    int32_t r8_7 = (r8_4 * 0x21 + zx.d(*(rcx - 8))) * 0x21
        + (zx.d(*(rcx - 0x11)) * 0x21 + zx.d(*(rcx - 0x10))) * 0x40a9121
        - zx.d(*(rcx - 0xe)) * 0x13be2b1f
    r9 = r9 * 0x4f5f0981 + r8_7 + zx.d(*(rcx - 0xf)) * 0x747c7101 + zx.d(*(rcx - 0x12)) * 0x30f35d61
        + zx.d(*(rcx - 7))
while (i u< 0xc)

return zx.q(r9)
