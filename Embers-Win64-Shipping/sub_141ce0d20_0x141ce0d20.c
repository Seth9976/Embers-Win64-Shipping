// 函数: sub_141ce0d20
// 地址: 0x141ce0d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    arg4 = *arg1
    arg3 = &arg1[7]
    void* rdx = *(arg3 + 8)
    void* r10_1 = arg4 + rbx * 0x18
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + 0x14))
    
    if (rdx != 0)
        arg3 = rdx
    
    int32_t i = *(arg3 + (rcx_1 << 2))
    void* rdx_1 = arg3 + (rcx_1 << 2)
    
    while (i != 0xffffffff)
        if (i == rbx.d)
            *rdx_1 = *(r10_1 + 0x10)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rdx_3 = i_1 + ((i_1 + 1) << 1)
        i = *(arg4 + (rdx_3 << 3))
        rdx_1 = arg4 + (rdx_3 << 3)

int64_t* rcx_3 = *(*arg1 + rbx * 0x18 + 8)

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1, arg3, arg4)

return sub_1405c3640(arg1, rbx.d, 1) __tailcall
