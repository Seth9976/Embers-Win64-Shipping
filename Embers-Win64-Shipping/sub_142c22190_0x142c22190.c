// 函数: sub_142c22190
// 地址: 0x142c22190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2[1])
uint16_t rcx = zx.w(*arg2)
int128_t* const r8

if (0 != rcx * 0x100 + r10.w)
    r8 = (zx.q(rcx.b) << 8) + arg3 + r10
else
    r8 = &data_14369a5d0

uint32_t rcx_3 = (zx.d(*r8) << 8) + zx.d(*(r8 + 1))

if (rcx_3 == 1)
    int32_t rax_3
    rax_3.b = sub_142c1e900(r8, arg1) != 0xffffffff
    return rax_3

if (rcx_3 == 2)
    int32_t rax_2
    rax_2.b = sub_142c1e990(r8, arg1) != 0xffffffff
    return rax_2

int64_t rax_1
rax_1.b = false
return 0xffffff00
