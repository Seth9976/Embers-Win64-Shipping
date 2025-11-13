// 函数: sub_140fce430
// 地址: 0x140fce430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t* r14 = arg1[1]
int64_t rsi = sx.q(*(rdi + 0x200))
*(arg2 + 0x200) = rsi.d

if (rsi.d != 0)
    sub_140ffca30(arg2, rsi.d, 0)
    memcpy(arg2, rdi, (rsi << 5).d)
else
    *(arg2 + 0x204) = 0x10

*(arg2 + 0x208) = *(rdi + 0x208)
*(arg2 + 0x20c) = *(rdi + 0x20c)
*(arg2 + 0x21c) = *(rdi + 0x21c)
*(arg2 + 0x230) = *r14
*r14 = 0
return arg2
