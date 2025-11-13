// 函数: sub_1403e5110
// 地址: 0x1403e5110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg4)
int32_t i = 0xff

if (result.d s< 0xff)
    do
        i s>>= 1
    while (i s> result.d)

int64_t r9 = 0
int64_t result_1 = result
int32_t r11 = *arg5

if (result.d s> 0)
    do
        int32_t rcx = sx.d((arg3 s>> 4).w)
        r11 = r11 * 0xbb38435 + 0x3619636b
        int32_t r8 = *(arg2 + (sx.q(r11 s>> 0x18 & i) << 2))
        result = zx.q((((arg3 s>> 0x13) + 1) s>> 1) * r8 + ((zx.d(r8.w) * rcx) s>> 0x10)
            + (r8 s>> 0x10) * rcx)
        
        if (result.d s> 0x7fff)
            result = 0x7fff
        else if (result.d s< 0xffff8000)
            result = 0xffff8000
        
        r9 += 1
        *(arg1 + (r9 << 2) - 4) = sx.d(result.w)
    while (r9 s< result_1)

*arg5 = r11
return result
