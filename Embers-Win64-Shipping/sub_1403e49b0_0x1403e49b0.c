// 函数: sub_1403e49b0
// 地址: 0x1403e49b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1

if (arg1 s<= 0)
    return 0

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg1)

if (0x18 - (0x1f - temp0) != 0)
    if (0x18 - (0x1f - temp0) s>= 0)
        rdx = ror.d(rdx, (0x18 - (0x1f - temp0)).b)
    else
        rdx = rol.d(rdx, (neg.d(0x18 - (0x1f - temp0))).b)

int32_t r8 = 0xb486

if (((0x1f - temp0).b & 1) != 0)
    r8 = 0x8000

int32_t r8_1 = r8 s>> ((0x1f - temp0) s>> 1).b
int32_t rdx_2 = sx.d((rdx.w & 0x7f) * 0xd5)
return zx.q((r8_1 s>> 0x10) * rdx_2 + ((zx.d(r8_1.w) * rdx_2) s>> 0x10) + r8_1)
