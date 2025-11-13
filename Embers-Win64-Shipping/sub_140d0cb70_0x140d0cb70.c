// 函数: sub_140d0cb70
// 地址: 0x140d0cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    int32_t r10_1 = rol.d(1, arg3.b)
    int32_t i
    
    do
        if (*(arg1 + 0x34) != 0)
            *(sx.q(*(arg2 + 4) * arg1[6].d) + *arg1) = arg3
        
        int32_t* rdx_2 = sx.q(*(arg2 + 4) * arg3) + *arg1
        *rdx_2 = 0xffffffff
        int32_t rcx_6
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_6 = -1
        else
            rcx_6 = arg1[6].d
        
        rdx_2[1] = rcx_6
        void* rdx_3 = &arg1[2]
        *(arg1 + 0x34) += 1
        arg1[6].d = arg3
        void* rcx_7 = arg1[4]
        
        if (rcx_7 != 0)
            rdx_3 = rcx_7
        
        int32_t rcx_8 = arg3
        
        if (arg3 s< 0)
            rcx_8 = arg3 + 0x1f
        
        arg3 += 1
        int32_t* rdx_4 = rdx_3 + (sx.q(rcx_8 s>> 5) << 2)
        int32_t rcx_12 = not.d(r10_1)
        r10_1 = rol.d(r10_1, 1)
        *rdx_4 &= rcx_12
        i = arg4
        arg4 -= 1
    while (i != 1)

return arg1
