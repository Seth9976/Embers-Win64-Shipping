// 函数: sub_142b1a030
// 地址: 0x142b1a030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi
rdi.b = arg2 u> 0xffff

if (*(arg1 + 0x28) s< rdi + 1)
    char rax_1 = sub_142b1fbc0(arg1, rdi + 1, arg3)
    
    if (rax_1 == 0)
        return rax_1

*(arg1 + 0x28) -= rdi + 1

if (rdi != 0)
    **(arg1 + 0x20) = (arg2 s>> 0xa).w - 0x2840
    int32_t rsi
    rsi.w = arg2.w & 0x3ff
    rsi.w |= 0xdc00
    *(*(arg1 + 0x20) + 2) = rsi.w
    *(arg1 + 0x20) += 4
else
    **(arg1 + 0x20) = arg2.w
    *(arg1 + 0x20) += 2

*(arg1 + 0x18) = *(arg1 + 0x20)
int64_t rax_5
rax_5.b = 1
*(arg1 + 0x2c) = 0
return rax_5
