// 函数: sub_142b3f240
// 地址: 0x142b3f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9_1 = *arg1
void* r8 = &arg1[8]
int64_t r10 = sx.q(arg2)
void* rdx

if (r9_1 == 0)
    rdx = r8
else
    rdx = *r8

int64_t r11 = sx.q(*(arg1 + 0x80))
uint32_t rdx_1 = zx.d(*(rdx + ((r11 + r10) << 1)))

if ((rdx_1 & 0xfffff800) == 0xd800)
    if (test_bit(rdx_1, 0xa))
        if (r10.d s> 0)
            if (r9_1 != 0)
                r8 = *r8
            
            uint32_t r9 = zx.d(*(r8 + ((sx.q((r10 - 1).d) + r11) << 1)))
            
            if ((r9 & 0xfffffc00) == 0xd800)
                return zx.q(((r9 - 0xd7f7) << 0xa) + rdx_1)
    else if (r10.d + 1 != *(arg1 + 0x84))
        if (r9_1 != 0)
            r8 = *r8
        
        uint32_t rcx = zx.d(*(r8 + ((sx.q(r10.d + 1) + r11) << 1)))
        
        if ((rcx & 0xfffffc00) == 0xdc00)
            return zx.q(((rdx_1 - 0xd7f7) << 0xa) + rcx)

return zx.q(rdx_1)
