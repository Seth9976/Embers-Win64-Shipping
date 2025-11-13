// 函数: sub_141a13860
// 地址: 0x141a13860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rax_1 = arg1[1].d
int64_t r10_1 = sx.q(arg2)
int32_t rcx_1 = rax_1 - r10_1.d

if (rcx_1 != arg3)
    void* r9 = *arg1
    
    if ((r9.b & 1) != 0)
        r9 = (r9 s>> 1) + arg1
    
    memmove((r10_1 << 4) + r9, (sx.q(r10_1.d + arg3) << 4) + r9, (rcx_1 - arg3) << 4)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140888a70(arg1)
