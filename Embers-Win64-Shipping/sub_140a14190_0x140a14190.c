// 函数: sub_140a14190
// 地址: 0x140a14190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(arg2 f!= 0f))
    *(arg1 + 0xa0) = 2
    int64_t rdi = sx.q(*(arg1 + 0x20))
    int32_t rax_1 = (rdi + 1).d
    *(arg1 + 0x20) = rax_1
    
    if (rax_1 s> *(arg1 + 0x24))
        sub_1405a4cf0(arg1 + 0x18)
    
    *(*(arg1 + 0x18) + (rdi << 2)) = 7
    int64_t rax_2
    rax_2.b = 1
    return rax_2

if (arg2 f!= 1f)
    int64_t rax
    rax.b = 0
    return rax

*(arg1 + 0xa0) = 3
int64_t rdi_1 = sx.q(*(arg1 + 0x20))
int32_t rax_3 = (rdi_1 + 1).d
*(arg1 + 0x20) = rax_3

if (rax_3 s> *(arg1 + 0x24))
    sub_1405a4cf0(arg1 + 0x18)

*(*(arg1 + 0x18) + (rdi_1 << 2)) = 6
int64_t rax_4
rax_4.b = 1
return rax_4
