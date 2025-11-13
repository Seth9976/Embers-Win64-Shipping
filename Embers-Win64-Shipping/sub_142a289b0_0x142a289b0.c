// 函数: sub_142a289b0
// 地址: 0x142a289b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_1 = (arg4 + 4) << 4
int32_t rsi_1 = (arg3 + 4) << 4
int16_t r14_1 = (1 << (1 - arg6.b)) * *arg2
int32_t rdx_1 = 1 << (1 - arg6.b)
int32_t rbx = 1 << (1 - arg5)
int32_t rbp_1 = r11_1 - 0x10 + *(arg1 + 0x1dc) * rdx_1
int32_t r9_3 = *(arg1 + 0x1d8) * rdx_1 - r11_1
int32_t rdx_4 = *(arg1 + 0x1d0) * rbx - rsi_1
int32_t rcx_5 = rsi_1 - 0x10 + *(arg1 + 0x1d4) * rbx
int32_t rax_6 = sx.d((1 << (1 - arg5)) * arg2[1])

if (rax_6 s>= rdx_4)
    if (rax_6 s> rcx_5)
        rax_6.w = rcx_5.w
    
    arg6:2.w = rax_6.w
else
    arg6:2.w = rdx_4.w

int32_t rax_7 = sx.d(r14_1)

if (rax_7 s>= r9_3)
    if (rax_7 s> rbp_1)
        rax_7.w = rbp_1.w
    
    arg6.w = rax_7.w
else
    arg6.w = r9_3.w

return zx.q(arg6)
