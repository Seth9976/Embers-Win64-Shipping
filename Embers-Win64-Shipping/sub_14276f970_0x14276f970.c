// 函数: sub_14276f970
// 地址: 0x14276f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = arg2
*(arg1 + 0x40) = arg3
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3 + 3)
*(arg1 + 0x48) = arg4
*(arg1 + 0xa4) = 0xffffffff
*(arg1 + 0x44) = (temp1 + (temp0 & 3)) s>> 2
*(arg1 + 0xa8) = 0
*(arg1 + 0xac) = 0
int32_t result = *(arg1 + 0x9c)
*(arg1 + 0x98) = 0

if (result s< 0 && result != 0)
    result = sub_1405dadb0(arg1 + 0x90, 0)

int64_t rdi = sx.q(*(arg1 + 0x98))

if (arg3 s<= rdi.d)
    if (arg3 s>= rdi.d || arg3 == rdi.d)
        return result
    
    *(arg1 + 0x98) = arg3
    return sub_1405dac90(arg1 + 0x90)

*(arg1 + 0x98) = arg3

if (arg3 s> *(arg1 + 0x9c))
    sub_1405a4cf0(arg1 + 0x90)

return memset(*(arg1 + 0x90) + (rdi << 2), 0, sx.q(arg3 - rdi.d) << 2) __tailcall
