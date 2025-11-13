// 函数: sub_142c5d0e0
// 地址: 0x142c5d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143ccb8b8(1, 0x4fc8)

if (rax == 0)
    return zx.q((rax + 0x1b).d)

*(rax + 0x4fc0) = 0xc0dedbad
*(rax + 0xa80) = data_143ccb898(0x4001)
int64_t rax_3 = data_143ccb898(0x100)
*(rax + 0xa70) = rax_3
int32_t rdi

if (rax_3 != 0)
    sub_142c5ce00(rax + 0x258)
    *(rax + 0xa78) = 0x100
    rdi = 0
    sub_142c63420(rax)
    *(rax + 0x8f0) |= 0x10
    *(rax + 0xa68) = 0
    *(rax + 0x4a90) = -1
    *(rax + 0x820) = 0
    *(rax + 0x848) = 5
    *arg1 = rax
else
    rdi = (rax_3 + 0x1b).d
    data_143ccb8a0(*(rax + 0xa80))
    data_143ccb8a0(*(rax + 0xa70))
    sub_142c5cba0(rax)
    data_143ccb8a0(rax)

return zx.q(rdi)
