// 函数: sub_1417b8200
// 地址: 0x1417b8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg2)
int16_t r10 = rax.w & 7

if (((1 << (rax.b & 7)).b & *(arg1 + 0x10)) == 0)
    r10 = 0

jump(*(**(*((zx.q(r10) << 5) + arg1 + 0x18) + (zx.q(rax) u>> 3) * 0x10) + 0x40))
