// 函数: sub_140410460
// 地址: 0x140410460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg4 s>> 1
int64_t i = 0

if (r9 s<= 0)
    return 

int16_t* r11_1 = arg3 + 2

do
    int32_t r8 = *arg1
    int32_t r9_2 = sx.d(*(arg3 + (i << 2))) << 0xa
    int32_t rdx_1 = r9_2 - r8
    int32_t rcx_4 = ((zx.d(rdx_1.w) * 0xffff9b81) s>> 0x10) - (rdx_1 s>> 0x10) * 0x647f + rdx_1
    int32_t r8_1 = arg1[1]
    *arg1 = rcx_4 + r9_2
    int32_t r9_4 = sx.d(*r11_1) << 0xa
    int32_t rcx_7 = r9_4 - r8_1
    int32_t rdx_5 = ((zx.d(rcx_7.w) * 0x2690) s>> 0x10) + (rcx_7 s>> 0x10) * 0x2690
    arg1[1] = rdx_5 + r9_4
    int32_t rax = (((r8 + rcx_4 + r8_1 + rdx_5) s>> 0xa) + 1) s>> 1
    
    if (rax s> 0x7fff)
        rax = 0x7fff
    else if (rax s< 0xffff8000)
        rax = -0x8000
    
    *(arg2 + (i << 1)) = rax.w
    i += 1
    r11_1 = &r11_1[2]
while (i s< sx.q(r9))
