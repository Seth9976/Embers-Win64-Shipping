// 函数: sub_142a486d0
// 地址: 0x142a486d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_10 = *(arg1 + 8)
int64_t r9 = sx.q(arg2)
int32_t r8_1

if (rax_10 s< 0)
    r8_1 = *(arg1 + 0xc)
else
    r8_1 = sx.d(rax_10) s>> 5

if (r9.d u>= r8_1)
    return 0xffff

void* r10 = arg1 + 0xa

if ((rax_10.b & 2) == 0)
    r10 = *(arg1 + 0x18)

uint32_t rdx = zx.d(*(r10 + (r9 << 1)))

if ((rdx & 0xfffff800) == 0xd800)
    if (test_bit(rdx, 0xa))
        if (r9.d s> 0)
            uint32_t rax_7 = zx.d(*(r10 + (sx.q((r9 - 1).d) << 1)))
            
            if ((rax_7 & 0xfffffc00) == 0xd800)
                rdx += (rax_7 - 0xd7f7) << 0xa
    else if (r9.d + 1 != r8_1)
        uint32_t rcx = zx.d(*(r10 + (sx.q(r9.d + 1) << 1)))
        
        if ((rcx & 0xfffffc00) == 0xdc00)
            return zx.q(((rdx - 0xd7f7) << 0xa) + rcx)

return zx.q(rdx)
