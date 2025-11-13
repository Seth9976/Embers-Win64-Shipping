// 函数: sub_142a54350
// 地址: 0x142a54350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1)
int32_t rcx

if (r8.d u< 0xd800)
    rcx = (r8.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (r8 s>> 5 << 1))) << 2)
else if (r8.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (r8.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx = (r8.d & 0x1f) + (zx.q(*(&data_14361b8e0 + (sx.q((r8.d s>> 5) + rcx_1) << 1))) << 2).d
else if (r8.d u> 0x10ffff)
    rcx = 0x11f4
else if (r8.d s< 0x110000)
    rcx = (r8.d & 0x1f) + (zx.q(*(&data_14361b8e0 + (
        zx.q(zx.d(*(&data_14361b8e0 + (sx.q((r8.d s>> 0xb) + 0x820) << 1))) + (r8.d s>> 5 & 0x3f))
        << 1))) << 2).d
else
    rcx = 0x55cc

uint64_t result

if ((zx.d(*(&data_14361b8e0 + (zx.q(rcx) << 1))) & 0x1f) - 0xc u> 2 || r8.d == 0xa0
        || r8.d == 0x2007 || r8.d == 0x202f)
    if ((r8 - 9).d u> 0x16)
        result.b = 0
        return result
    
    if (r8.d s> 0xd && r8.d s< 0x1c)
        result.b = 0
        return result

result.b = 1
return result
