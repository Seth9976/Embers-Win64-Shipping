// 函数: sub_142a54250
// 地址: 0x142a54250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg1)

if (arg2 s>= 3)
    return 0

int32_t rcx

if (r8_2.d u< 0xd800)
    rcx = (r8_2.d & 0x1f) + (zx.d(*((r8_2 s>> 5 << 1) + 0x1436264d0)) << 2)
else if (r8_2.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (r8_2.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx = (r8_2.d & 0x1f) + (zx.q(*((sx.q((r8_2.d s>> 5) + rcx_1) << 1) + 0x1436264d0)) << 2).d
else if (r8_2.d u> 0x10ffff)
    rcx = 0x13d8
else if (r8_2.d s< 0x110000)
    rcx = (r8_2.d & 0x1f) + (zx.q(*((
        zx.q(zx.d(*((sx.q((r8_2.d s>> 0xb) + 0x820) << 1) + 0x1436264d0)) + (r8_2.d s>> 5 & 0x3f))
        << 1) + 0x1436264d0)) << 2).d
else
    rcx = 0x7788

return zx.q(*((sx.q(zx.d(*((zx.q(rcx) << 1) + 0x1436264d0)) + arg2) << 2) + 0x143635640))
