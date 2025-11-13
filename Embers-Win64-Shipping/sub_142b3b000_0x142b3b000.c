// 函数: sub_142b3b000
// 地址: 0x142b3b000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)

if (arg3 == 0)
    return zx.q(arg2)

uint32_t rdi = arg2 + r11.d

if (rdi s<= 1)
    *arg1 *= *((r11 << 2) + &data_14366c468)
    return zx.q(rdi)

char r9 = 0

if (arg2 s<= 0x31)
    arg2 = zx.d(*(sx.q(arg2) + &data_14366c490))

char* r8_1 = &arg1[-1 + sx.q(arg2)]
uint32_t rcx_1

if (r11.d s> 0x31)
    rcx_1 = r11.d
else
    rcx_1 = zx.d(*(r11 + &data_14366c490))

char* i = &r8_1[sx.q(rcx_1)]
uint32_t rdx_2

if (r11.d s> 0x31)
    rdx_2 = r11.d
else
    rdx_2 = zx.d(*(r11 + &data_14366c490))

int32_t rdx_3 = rdx_2 - r11.d

if (rdx_2 != r11.d)
    uint32_t r11_1
    
    if (rdi s> 0x31)
        r11_1 = rdi
    else
        r11_1 = zx.d(*(sx.q(rdi) + &data_14366c490))
    
    if (r8_1 u>= arg1)
        int64_t rcx_5 = sx.q(rdx_3)
        int32_t r14_1 = *((rcx_5 << 2) + 0x14366c4c8)
        
        do
            uint32_t r11_2 = zx.d(*r8_1)
            uint8_t rdx_8 = (((r11_2 u>> rdx_3.b) * r14_1) u>> 0x11).b
            char r11_3 = r11_2.b - (*(&data_14366c468 + (rcx_5 << 2))).b * rdx_8
            
            if (i u<= &arg1[-1 + sx.q(r11_1)])
                *i = rdx_8 + r9
            
            r8_1 -= 1
            r9 = (*((sx.q(1 - rdx_3) << 2) + &data_14366c468)).b * r11_3
            i -= 1
        while (r8_1 u>= arg1)
else
    while (r8_1 u>= arg1)
        char rcx_2 = *r8_1
        r8_1 -= 1
        *i = rcx_2
        i -= 1

for (; i u>= arg1; i -= 1)
    *i = r9
    r9 = 0

return zx.q(rdi)
