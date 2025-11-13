// 函数: sub_140e3cee0
// 地址: 0x140e3cee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x24f8)
int64_t rbx = sx.q(*(arg2 + (zx.q(r9) u>> 0x18 << 2) + 4))

if (rbx.d s>= 0)
    sub_140e3cc80(arg1, zx.d(*(rbx + arg2 + 0x804)), arg3)
    return zx.q(rbx.d)

int32_t r8 = 0x17

do
    uint32_t rax_3 = r9 u>> r8.b
    r8 -= 1
    rbx = zx.q(*(arg2 + ((0x241 - sx.q((rax_3 & 1) + rbx.d)) << 2)))
while (rbx.d s< 0)

sub_140e3cc80(arg1, 0x1f - r8, arg3)
return zx.q(rbx.d)
