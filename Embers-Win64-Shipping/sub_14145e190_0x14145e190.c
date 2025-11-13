// 函数: sub_14145e190
// 地址: 0x14145e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    arg3 = &arg1[7]
    arg4 = *arg1
    void* rdx = *(arg3 + 8)
    int64_t r10_2 = rbx * 6
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(arg4 + (r10_2 << 3) + 0x2c))
    
    if (rdx != 0)
        arg3 = rdx
    
    int32_t i = *(arg3 + (rcx_1 << 2))
    void* rdx_1 = arg3 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(arg4 + (r10_2 << 3) + 0x28)
            break
        
        rdx_1 = arg4 + 0x28 + sx.q(i) * 0x30

sub_1405d1550(rbx * 0x30 + 0x10 + *arg1, arg5, arg3, arg4)
return sub_1407c2ba0(arg1, rbx.d, 1) __tailcall
