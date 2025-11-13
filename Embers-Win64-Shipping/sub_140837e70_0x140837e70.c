// 函数: sub_140837e70
// 地址: 0x140837e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg2

if (arg2 != 0 && *arg2 != 0xffffffff)
    int64_t r14_1 = sx.q(*(arg1 + 0xf8))
    int32_t rax_1 = (r14_1 + 1).d
    *(arg1 + 0xf8) = rax_1
    
    if (rax_1 s> *(arg1 + 0xfc))
        sub_1405a4cf0(arg1 + 0xf0)
    
    *(*(arg1 + 0xf0) + (r14_1 << 2)) = *rbx
    *rbx = 0xffffffff

if (arg3 != 0)
    sub_140808240(arg3, arg1 + 0x30)
