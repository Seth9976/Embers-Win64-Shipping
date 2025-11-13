// 函数: sub_142a8cab0
// 地址: 0x142a8cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int64_t r10 = sx.q(arg2)
int16_t* i = arg1

if (arg1 != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r10 - 0x20).d)
    
    while (i u< &i[r10])
        uint32_t rcx_3 = zx.d(*i)
        i = &i[sx.q((((temp0_1 & 0x1f) + temp1_1) s>> 5) + 1)]
        r8 = r8 * 0x25 + rcx_3

return zx.q(r8)
