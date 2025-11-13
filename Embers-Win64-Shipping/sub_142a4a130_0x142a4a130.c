// 函数: sub_142a4a130
// 地址: 0x142a4a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)
int16_t rdx = *(arg1 + 8)
int32_t rax_1

if (rdx s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(rdx) s>> 5

if (r8.d u>= rax_1)
    return 0

void* r9 = arg1 + 0xa

if ((rdx.b & 2) == 0)
    r9 = *(arg1 + 0x18)

if ((zx.d(*(r9 + (r8 << 1))) & 0xfffffc00) == 0xdc00 && r8.d s> 0)
    int32_t rdx_1 = (r8 - 1).d
    
    if ((zx.d(*(r9 + (sx.q(rdx_1) << 1))) & 0xfffffc00) == 0xd800)
        r8 = zx.q(rdx_1)

return zx.q(r8.d)
