// 函数: sub_142c1e070
// 地址: 0x142c1e070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx
uint64_t r8
uint32_t r9
uint64_t r10_7

if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
        u>= 0x10001)
    r8 = zx.q(arg1[0xc])
    rdx = zx.q(arg1[0xb])
    r9 = zx.d(arg1[0xa])
    r10_7 = zx.q(arg1[0xd])

void* r10_8

if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3]) u< 0x10001
        || (r9 << 0x18) + (r8.d << 8) + (rdx.d << 0x10) == neg.d(r10_7.d))
    r10_8 = &data_14369a5d0
else
    r10_8 = &arg1[(((((zx.q(r9) << 8) + rdx) << 8) + r8) << 8) + r10_7]

return sub_142c1de20(r10_8, arg2, arg3, arg4) __tailcall
