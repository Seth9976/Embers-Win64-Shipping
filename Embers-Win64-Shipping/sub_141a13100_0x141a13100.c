// 函数: sub_141a13100
// 地址: 0x141a13100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) -= arg3
int64_t r9 = sx.q(arg2)

if (arg3 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x30)
int32_t r8_1 = rax_1 - r9.d

if (r8_1 != arg3)
    void* rcx = *(arg1 + 0x28)
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + arg1 + 0x28
    
    memmove(rcx + (r9 << 2), rcx + (sx.q(r9.d + arg3) << 2), (r8_1 - arg3) << 2)
    rax_1 = *(arg1 + 0x30)

*(arg1 + 0x30) = rax_1 - arg3
sub_1407c3f50(arg1 + 0x28)
