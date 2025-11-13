// 函数: sub_140b08120
// 地址: 0x140b08120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int64_t i = 0
int32_t r11_1 = arg2
uint16_t* r9 = *arg1

do
    int32_t rcx = *(arg3 + (i << 2))
    
    if (rcx u>= 0x110000 || rcx - 0xfffe u<= 1 || rcx - 0xd800 u<= 0x3ff || rcx - 0xdc00 u<= 0x3ff)
        rcx = 0x3f
    
    int16_t* rax_4 = &r9[1]
    
    if (rcx - 0x10000 u> 0xfffff)
        if (rcx u<= 0x10ffff)
            *r9 = rcx.w
        else
            *r9 = 0x3f
    else if (r11_1 u< 2)
        *r9 = 0x3f
    else
        int32_t rdx
        rdx.w = (rcx - 0x10000).w & 0x3ff
        rdx.w -= 0x2400
        *r9 = ((rcx - 0x10000) u>> 0xa).w - 0x2800
        *rax_4 = rdx.w
        rax_4 = &rax_4[1]
    
    int32_t rax = ((rax_4 - r9) s>> 1).d
    
    if (rax s< 1)
        break
    
    r11_1 -= rax
    i += 1
    r9 = *arg1 + (sx.q(rax) << 1)
    *arg1 = r9
while (i s< sx.q(arg4))
