// 函数: sub_1403df070
// 地址: 0x1403df070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1
int32_t r8

if (arg1 == 0)
    r8 = 0x20
else
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(arg1)
    r8 = 0x1f - temp0_1

if (0x18 - r8 != 0)
    if (0x18 - r8 s>= 0)
        rdx = ror.d(rdx, (0x18 - r8).b)
    else
        rdx = rol.d(rdx, (neg.d(0x18 - r8)).b)

int32_t rdx_1 = rdx & 0x7f
int32_t rcx_3 = (0x80 - rdx_1) * rdx_1
return zx.q(((zx.d(rcx_3.w) * 0xb3) s>> 0x10) - (r8 << 7) + 0xf80 + rdx_1 + (rcx_3 s>> 0x10) * 0xb3)
