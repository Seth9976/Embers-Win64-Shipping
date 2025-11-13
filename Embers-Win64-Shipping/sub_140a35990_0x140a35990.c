// 函数: sub_140a35990
// 地址: 0x140a35990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d
int64_t r11 = *arg1
int32_t rax = r8 - 1

if (r8 == 0)
    rax = 0

if (rax s> 0)
    int64_t i = 0
    
    do
        uint32_t rcx = zx.d(*(r11 + (i << 1)))
        int32_t rax_1
        rax_1.w = sbb.w((rcx - 0x61).w, (rcx - 0x61).w, rcx - 0x61 u< 0x1a)
        rax_1.w &= 0x20
        rcx.w -= rax_1.w
        *(r11 + (i << 1)) = rcx.w
        i += 1
    while (i s< sx.q(rax))

*arg2 = 0
*arg2 = *arg1
*arg1 = 0
arg2[1].d = arg1[1].d
*(arg2 + 0xc) = *(arg1 + 0xc)
arg1[1] = 0
return arg2
