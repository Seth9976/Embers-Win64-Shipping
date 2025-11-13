// 函数: sub_142b3f8d0
// 地址: 0x142b3f8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x84)

if (r11 == 0)
    return 0xffffffff

char r10 = *arg1
int32_t r9 = r11 - 1
void* r8 = &arg1[8]
void* rdx

if (r10 == 0)
    rdx = r8
else
    rdx = *r8

int64_t rbx = sx.q(*(arg1 + 0x80))

if ((zx.d(*(rdx + ((sx.q(r9) + rbx) << 1))) & 0xfffffc00) == 0xdc00 && r9 s> 0)
    void* rcx_2
    
    if (r10 == 0)
        rcx_2 = r8
    else
        rcx_2 = *r8
    
    if ((zx.d(*(rcx_2 + ((sx.q(r9 - 1) + rbx) << 1))) & 0xfffffc00) == 0xd800)
        r9 -= 1

void* rcx_5

if (r10 == 0)
    rcx_5 = r8
else
    rcx_5 = *r8

uint32_t rdx_2 = zx.d(*(rcx_5 + ((sx.q(r9) + rbx) << 1)))

if ((rdx_2 & 0xfffff800) == 0xd800)
    if (test_bit(rdx_2, 0xa))
        if (r9 s> 0)
            if (r10 != 0)
                r8 = *r8
            
            uint32_t rax_15 = zx.d(*(r8 + ((sx.q(r9 - 1) + rbx) << 1)))
            
            if ((rax_15 & 0xfffffc00) == 0xd800)
                rdx_2 += (rax_15 - 0xd7f7) << 0xa
    else if (r9 + 1 != r11)
        if (r10 != 0)
            r8 = *r8
        
        uint32_t rcx_6 = zx.d(*(r8 + ((sx.q(r9 + 1) + rbx) << 1)))
        
        if ((rcx_6 & 0xfffffc00) == 0xdc00)
            return zx.q(((rdx_2 - 0xd7f7) << 0xa) + rcx_6)

return zx.q(rdx_2)
