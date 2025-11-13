// 函数: sub_141d3c6b0
// 地址: 0x141d3c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 0x50) + 0x20))(arg1 + 0x50, arg2 + 0xb0)
(*(*(arg1 + 0xc8) + 0x20))(arg1 + 0xc8, arg2 + 0x188)
(*(*(arg1 + 0x80) + 0x20))(arg1 + 0x80, arg2 + 0xc8)
(*(*(arg1 + 0x98) + 0x20))(arg1 + 0x98, arg2 + 0xe0)
(*(*(arg1 + 0xb0) + 0x20))(arg1 + 0xb0, arg2 + 0xf8)
int32_t rax_5 = sub_141d1f690(arg2, data_143f37078)
int32_t rax_6 = *(arg1 + 0x10)

if (rax_5 s> rax_6)
    *(arg1 + 0x10) = rax_5
    
    if (rax_5 s> *(arg1 + 0x14))
        sub_140679a80(arg1 + 8)
else if (rax_5 s< rax_6 && rax_5 != rax_6)
    *(arg1 + 0x10) = rax_5
    sub_1405dac10(arg1 + 8)

int32_t rax_7 = *(arg1 + 0x20)

if (rax_5 s> rax_7)
    *(arg1 + 0x20) = rax_5
    
    if (rax_5 s> *(arg1 + 0x24))
        sub_1405c4fe0(arg1 + 0x18)
else if (rax_5 s< rax_7 && rax_5 != rax_7)
    *(arg1 + 0x20) = rax_5
    sub_1407c3fe0(arg1 + 0x18)

int32_t result = *(arg1 + 0x30)

if (rax_5 s> result)
    *(arg1 + 0x30) = rax_5
    
    if (rax_5 s> *(arg1 + 0x34))
        return sub_140638970(arg1 + 0x28) __tailcall
else if (rax_5 s< result && rax_5 != result)
    *(arg1 + 0x30) = rax_5
    return sub_1407c4120(arg1 + 0x28)

return result
