// 函数: sub_142c2a1a0
// 地址: 0x142c2a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*arg1)
uint64_t r8 = zx.q(arg1[1])
uint64_t rax_2 = (zx.q(rdx) << 8) + r8
uint16_t r10 = zx.w(arg1[(rax_2 << 1) + 2])
void* r11 = &arg1[rax_2 << 1]
uint32_t rbx = zx.d(*(r11 + 3))
uint32_t rcx_5

if (r10 * 0x100 == neg.w(rbx.w))
    rcx_5 = 2
else
    rcx_5 = ((zx.d(r10.b) << 8) + rbx) * 2

uint64_t r9 = zx.q(rcx_5)
uint16_t result

if (*(arg2 + 0x14) == 0 || (rdx.w * 0x100 == neg.w(r8.w)
        && zx.w(*(r9 + r11 + 2)) * 0x100 == neg.w(zx.w(*(r9 + r11 + 3)))))
    result = sub_142c2a8d0(arg2, (zx.d(r10.b) << 8) + rbx, r11 + 4, *arg3, arg3[2])

if ((*(arg2 + 0x14) != 0 && (rdx.w * 0x100 != neg.w(r8.w)
        || zx.w(*(r9 + r11 + 2)) * 0x100 != neg.w(zx.w(*(r9 + r11 + 3))))) || result.b == 0)
    result.b = 0
else
    result.b = 1

return result
