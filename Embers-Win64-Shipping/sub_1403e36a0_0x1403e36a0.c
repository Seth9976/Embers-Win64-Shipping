// 函数: sub_1403e36a0
// 地址: 0x1403e36a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int64_t i = 0
int16_t* r11_1 = arg2 + 2

do
    int32_t rdx = *arg1
    int32_t rsi_2 = sx.d(*(arg3 + (i << 1))) << 0xa
    int32_t rcx_1 = rsi_2 - rdx
    int32_t rax_4 = ((zx.d(rcx_1.w) * 0x6d2) s>> 0x10) + (rcx_1 s>> 0x10) * 0x6d2
    int32_t r8 = rdx + rax_4
    int32_t rdx_1 = arg1[1]
    *arg1 = rax_4 + rsi_2
    int32_t rcx_5 = r8 - rdx_1
    int32_t rax_9 = ((zx.d(rcx_5.w) * 0x3a8a) s>> 0x10) + (rcx_5 s>> 0x10) * 0x3a8a
    int32_t r9 = rdx_1 + rax_9
    int32_t r8_1 = arg1[2]
    arg1[1] = rax_9 + r8
    int32_t rdx_3 = r9 - r8_1
    int32_t rcx_12 = ((zx.d(rdx_3.w) * 0xffff98ab) s>> 0x10) - (rdx_3 s>> 0x10) * 0x6755 + rdx_3
    arg1[2] = r9 + rcx_12
    int32_t rdx_7 = (((r8_1 + rcx_12) s>> 9) + 1) s>> 1
    
    if (rdx_7 s> 0x7fff)
        rdx_7 = 0x7fff
    else if (rdx_7 s< 0xffff8000)
        rdx_7 = -0x8000
    
    *(arg2 + (i << 2)) = rdx_7.w
    int32_t rdx_8 = arg1[3]
    int32_t rcx_14 = rsi_2 - rdx_8
    int32_t rax_18 = ((zx.d(rcx_14.w) * 0x1ac6) s>> 0x10) + (rcx_14 s>> 0x10) * 0x1ac6
    int32_t r8_2 = rdx_8 + rax_18
    int32_t rdx_9 = arg1[4]
    arg1[3] = rax_18 + rsi_2
    int32_t rcx_18 = r8_2 - rdx_9
    int32_t rax_23 = ((zx.d(rcx_18.w) * 0x64a9) s>> 0x10) + (rcx_18 s>> 0x10) * 0x64a9
    int32_t r9_1 = rdx_9 + rax_23
    int32_t r8_3 = arg1[5]
    arg1[4] = rax_23 + r8_2
    int32_t rdx_11 = r9_1 - r8_3
    int32_t rcx_25 = ((zx.d(rdx_11.w) * 0xffffd8f6) s>> 0x10) - (rdx_11 s>> 0x10) * 0x270a + rdx_11
    arg1[5] = rcx_25 + r9_1
    int32_t rax = (((r8_3 + rcx_25) s>> 9) + 1) s>> 1
    
    if (rax s> 0x7fff)
        rax = 0x7fff
    else if (rax s< 0xffff8000)
        rax = -0x8000
    
    i += 1
    *r11_1 = rax.w
    r11_1 = &r11_1[2]
while (i s< sx.q(arg4))
