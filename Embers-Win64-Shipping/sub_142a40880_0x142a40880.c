// 函数: sub_142a40880
// 地址: 0x142a40880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = (arg2 + 7) u>> 3

if (r8 u<= 1)
    return arg1 + 0x430

if (r8 u<= 8)
    r8.b += 1
    r8.b &= 0xfe
    return arg1 + ((zx.q(r8.b) * 3 + 0x83) << 3)

if (r8 u> 0x40000)
    return arg1 + 0xaf0

uint64_t rflags
char temp0
temp0, rflags = _bit_scan_reverse((r8 - 1).d)
return arg1 + ((zx.q((((r8 - 1) u>> (temp0 - 2)).b & 3) + (temp0 << 2) - 3) * 3 + 0x83) << 3)
