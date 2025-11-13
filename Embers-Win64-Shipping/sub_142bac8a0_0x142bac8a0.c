// 函数: sub_142bac8a0
// 地址: 0x142bac8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = sx.d(*(arg1 + 0x1cc))
int32_t rax = sx.d(*(arg1 + 0x1ca))
int32_t rcx_1 = zx.d(arg2.w) * rax
int32_t rdx_1 = (arg2 s>> 0x10) * rax
int32_t r10_2 = (rdx_1 << 0x10) + rcx_1
int32_t r11_1 = zx.d(arg3.w) * r9
int32_t rbx_2 = (arg3 s>> 0x10) * r9
int32_t rax_3 = (rbx_2 << 0x10) + r11_1
int32_t rcx_3
rcx_3.b = rax_3 u< r11_1
int32_t r8 = rax_3 + r10_2
int32_t r11_3 = (r11_1 s>> 0x1f) + (rbx_2 s>> 0x10) + adc.d(rdx_1 s>> 0x10, 0, r10_2 u< rcx_1)
    + (rcx_1 s>> 0x1f) + adc.d(rcx_3, 0, r8 u< r10_2)
int32_t rcx_6 = r11_3 s>> 0x1f
int32_t rdx_5 = rcx_6 + r8
return zx.q(adc.d(adc.d(r11_3, rcx_6, rdx_5 u< r8), 0, rdx_5 + 0x2000 u< rdx_5) << 0x12)
    | zx.q((rdx_5 + 0x2000) u>> 0xe)
