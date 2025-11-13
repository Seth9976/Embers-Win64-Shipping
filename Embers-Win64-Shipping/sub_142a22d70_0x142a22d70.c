// 函数: sub_142a22d70
// 地址: 0x142a22d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = sx.d(arg1[1])
int32_t rdx = *(arg2 + 0xf84)

if (rcx * 2 s< rdx - 0x98)
    rcx = (rdx - 0x80) s>> 1

arg1[1] = rcx.w
int32_t r8_1 = *(arg2 + 0xf88)
int32_t rdx_1 = sx.d(rcx.w)

if (rdx_1 * 2 s> r8_1 + 0x90)
    rdx_1 = (r8_1 + 0x80) s>> 1

arg1[1] = rdx_1.w
int32_t rdx_3 = sx.d(*arg1)
int32_t r8_2 = *(arg2 + 0xf8c)

if (rdx_3 * 2 s< r8_2 - 0x98)
    rdx_3 = (r8_2 - 0x80) s>> 1

int32_t r8_3 = sx.d(rdx_3.w)
*arg1 = rdx_3.w
int32_t rdx_5 = *(arg2 + 0xf90)

if (r8_3 * 2 s<= rdx_5 + 0x90)
    *arg1 = r8_3.w
    return rdx_5 + 0x90

int16_t result = ((rdx_5 + 0x80) s>> 1).w
*arg1 = result
return result
