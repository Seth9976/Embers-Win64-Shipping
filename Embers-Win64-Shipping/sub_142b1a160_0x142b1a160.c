// 函数: sub_142b1a160
// 地址: 0x142b1a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *arg1
void* rdx = arg2 - arg1

if (rdx == 1)
    return zx.q(rcx)

if (rdx == 2)
    return (zx.q(arg1[1]) & 0x3f) | zx.q((zx.d(rcx) & 0x1f) << 6)

if (rdx == 3)
    return zx.q((((zx.d(arg1[1]) & 0x3f) | zx.d(rcx) << 6) & 0x3ff) << 6) | (zx.q(arg1[2]) & 0x3f)

if (rdx == 4)
    return zx.q((((zx.d(arg1[1]) & 0x3f) | (zx.d(rcx) & 7) << 6) << 6 | (zx.d(arg1[2]) & 0x3f))
        << 6) | (zx.q(arg1[3]) & 0x3f)

abort()
noreturn
