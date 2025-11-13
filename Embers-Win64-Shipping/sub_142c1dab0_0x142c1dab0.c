// 函数: sub_142c1dab0
// 地址: 0x142c1dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const r10 = &data_14369a5d0
void* rax_1

if (arg2 u< (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)))
    rax_1 = arg1 + ((zx.q(arg2) + 1) << 2)
else
    rax_1 = &data_14369a5d0

uint32_t rbx = zx.d(*rax_1)
uint64_t rdi = zx.q(*(rax_1 + 3))
uint64_t r9_3 = zx.q(*(rax_1 + 2))
uint64_t rdx = zx.q(*(rax_1 + 1))

if ((rbx << 0x18) + (r9_3.d << 8) + (rdx.d << 0x10) != neg.d(rdi.d))
    r10 = (((((zx.q(rbx) << 8) + rdx) << 8) + r9_3) << 8) + arg1 + rdi

uint32_t rcx_7 = (zx.d(*r10) << 8) + zx.d(*(r10 + 1))

if (rcx_7 == 1)
    int32_t rax_11
    rax_11.b = sub_142c1e900(r10, arg3) != 0xffffffff
    return rax_11

if (rcx_7 == 2)
    int32_t rax_10
    rax_10.b = sub_142c1e990(r10, arg3) != 0xffffffff
    return rax_10

int64_t rax_9
rax_9.b = false
return 0xffffff00
