// 函数: sub_140e3fee0
// 地址: 0x140e3fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 4
int32_t* r9 = arg1 + 0xcc
void* r10 = arg1 + 0x50
int64_t r11 = sx.q(((arg2 * 3).d << 4) + arg3)
uint32_t result
int64_t i

do
    char* r8_1 = *(r10 - 8) + r11
    char* rdx_1 = *r10 + r11
    *r9 = ((zx.d(rdx_1[3]) + zx.d(r8_1[3]) + zx.d(*rdx_1) + zx.d(*r8_1)) u>> 2) - 0x80
    r9[1] = ((zx.d(rdx_1[9]) + zx.d(rdx_1[6]) + zx.d(r8_1[9]) + zx.d(r8_1[6]) + 2) u>> 2) - 0x80
    r9[2] = ((zx.d(rdx_1[0xf]) + zx.d(rdx_1[0xc]) + zx.d(r8_1[0xf]) + zx.d(r8_1[0xc])) u>> 2) - 0x80
    r9[3] = ((zx.d(rdx_1[0x15]) + zx.d(rdx_1[0x12]) + zx.d(r8_1[0x15]) + zx.d(r8_1[0x12]) + 2)
        u>> 2) - 0x80
    r9[4] =
        ((zx.d(rdx_1[0x1b]) + zx.d(rdx_1[0x18]) + zx.d(r8_1[0x1b]) + zx.d(r8_1[0x18])) u>> 2) - 0x80
    r9[5] = ((zx.d(rdx_1[0x21]) + zx.d(rdx_1[0x1e]) + zx.d(r8_1[0x21]) + zx.d(r8_1[0x1e]) + 2)
        u>> 2) - 0x80
    r9[6] =
        ((zx.d(rdx_1[0x27]) + zx.d(rdx_1[0x24]) + zx.d(r8_1[0x27]) + zx.d(r8_1[0x24])) u>> 2) - 0x80
    r9[7] = ((zx.d(rdx_1[0x2d]) + zx.d(rdx_1[0x2a]) + zx.d(r8_1[0x2d]) + zx.d(r8_1[0x2a]) + 2)
        u>> 2) - 0x80
    char* r8_3 = *(r10 + 8) + r11
    char* rdx_3 = *(r10 + 0x10) + r11
    r9[8] = ((zx.d(rdx_3[3]) + zx.d(r8_3[3]) + zx.d(*rdx_3) + zx.d(*r8_3) + 2) u>> 2) - 0x80
    r9[9] = ((zx.d(rdx_3[9]) + zx.d(rdx_3[6]) + zx.d(r8_3[9]) + zx.d(r8_3[6])) u>> 2) - 0x80
    r9[0xa] =
        ((zx.d(rdx_3[0xf]) + zx.d(rdx_3[0xc]) + zx.d(r8_3[0xf]) + zx.d(r8_3[0xc]) + 2) u>> 2) - 0x80
    r9[0xb] =
        ((zx.d(rdx_3[0x15]) + zx.d(rdx_3[0x12]) + zx.d(r8_3[0x15]) + zx.d(r8_3[0x12])) u>> 2) - 0x80
    r9[0xc] = ((zx.d(rdx_3[0x1b]) + zx.d(rdx_3[0x18]) + zx.d(r8_3[0x1b]) + zx.d(r8_3[0x18]) + 2)
        u>> 2) - 0x80
    r9[0xd] =
        ((zx.d(rdx_3[0x21]) + zx.d(rdx_3[0x1e]) + zx.d(r8_3[0x21]) + zx.d(r8_3[0x1e])) u>> 2) - 0x80
    r9 = &r9[0x10]
    r10 += 0x20
    r9[-2] = ((zx.d(rdx_3[0x27]) + zx.d(rdx_3[0x24]) + zx.d(r8_3[0x27]) + zx.d(r8_3[0x24]) + 2)
        u>> 2) - 0x80
    result = zx.d(r8_3[0x2a])
    r9[-1] = ((zx.d(rdx_3[0x2d]) + zx.d(rdx_3[0x2a]) + zx.d(r8_3[0x2d]) + result) u>> 2) - 0x80
    i = i_1
    i_1 -= 1
while (i != 1)
return result
