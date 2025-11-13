// 函数: sub_140638250
// 地址: 0x140638250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (arg3 != 0)
    int32_t r10_1 = rol.d(1, r9.b)
    int64_t r11_2 = r9 << 4
    int32_t i
    
    do
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x10) = r9.d
        
        int32_t* rdx_2 = *arg1
        *(rdx_2 + r11_2) = 0xffffffff
        int32_t rcx_2
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_2 = -1
        else
            rcx_2 = arg1[6].d
        
        *(rdx_2 + r11_2 + 4) = rcx_2
        void* rdx_3 = &arg1[2]
        *(arg1 + 0x34) += 1
        arg1[6].d = r9.d
        void* rcx_3 = arg1[4]
        
        if (rcx_3 != 0)
            rdx_3 = rcx_3
        
        int32_t rcx_4 = r9.d
        
        if (r9.d s< 0)
            rcx_4 = (r9 + 0x1f).d
        
        r9 = zx.q(r9.d + 1)
        r11_2 += 0x10
        int32_t* rdx_4 = rdx_3 + (sx.q(rcx_4 s>> 5) << 2)
        int32_t rcx_8 = not.d(r10_1)
        r10_1 = rol.d(r10_1, 1)
        *rdx_4 &= rcx_8
        i = arg3
        arg3 -= 1
    while (i != 1)

return arg1
