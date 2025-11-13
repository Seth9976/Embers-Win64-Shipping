// 函数: sub_142b3f2f0
// 地址: 0x142b3f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *arg1
int32_t r9 = arg2 - 1
void* r8 = &arg1[8]
void* rcx

if (r11 == 0)
    rcx = r8
else
    rcx = *r8

int64_t rbx = sx.q(*(arg1 + 0x80))

if ((zx.d(*(rcx + ((sx.q(r9) + rbx) << 1))) & 0xfffffc00) == 0xdc00 && r9 s> 0)
    void* rcx_3
    
    if (r11 == 0)
        rcx_3 = r8
    else
        rcx_3 = *r8
    
    if ((zx.d(*(rcx_3 + ((sx.q(r9 - 1) + rbx) << 1))) & 0xfffffc00) == 0xd800)
        r9 -= 1

void* rcx_6

if (r11 == 0)
    rcx_6 = r8
else
    rcx_6 = *r8

uint32_t rdx_1 = zx.d(*(rcx_6 + ((sx.q(r9) + rbx) << 1)))

if ((rdx_1 & 0xfffff800) == 0xd800)
    if (test_bit(rdx_1, 0xa))
        if (r9 s> 0)
            if (r11 != 0)
                r8 = *r8
            
            uint32_t r9_2 = zx.d(*(r8 + ((sx.q(r9 - 1) + rbx) << 1)))
            
            if ((r9_2 & 0xfffffc00) == 0xd800)
                return zx.q(((r9_2 - 0xd7f7) << 0xa) + rdx_1)
    else if (r9 + 1 != *(arg1 + 0x84))
        if (r11 != 0)
            r8 = *r8
        
        uint32_t rcx_7 = zx.d(*(r8 + ((sx.q(r9 + 1) + rbx) << 1)))
        
        if ((rcx_7 & 0xfffffc00) == 0xdc00)
            return zx.q(((rdx_1 - 0xd7f7) << 0xa) + rcx_7)

return zx.q(rdx_1)
