// 函数: sub_142bf9380
// 地址: 0x142bf9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_3 = arg2 - (zx.d(*(arg1 + 0xd)) << 0x10) - (zx.d(*(arg1 + 0xe)) << 8)
    - (zx.d(*(arg1 + 0xc)) << 0x18) - zx.d(*(arg1 + 0xf))
void* rax_11

if (rdx_3 u< (zx.d(*(arg1 + 0x11)) << 0x10) + (zx.d(*(arg1 + 0x12)) << 8)
        + (zx.d(*(arg1 + 0x10)) << 0x18) + zx.d(*(arg1 + 0x13)))
    rax_11 = arg1 + 0x10 + ((zx.q(rdx_3) + 2) << 1)
else
    rax_11 = &data_14369a5d0

uint32_t result = zx.d(*(rax_11 + 1))
uint32_t rcx_6 = zx.d(*rax_11) << 8

if (rcx_6 == neg.d(result))
    result.b = 0
    return result

*arg3 = rcx_6 + result
result.b = 1
return result
