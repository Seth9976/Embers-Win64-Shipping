// 函数: sub_1407c2ba0
// 地址: 0x1407c2ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t i_1 = arg3

if (arg3 != 0)
    int32_t r11_1 = rol.d(1, r10.b)
    int64_t r8_1 = r10 * 0x30
    int32_t i
    
    do
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = r10.d
        
        int32_t* rdx_2 = *arg1
        *(rdx_2 + r8_1) = 0xffffffff
        int32_t rcx_3
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_3 = -1
        else
            rcx_3 = arg1[6].d
        
        *(rdx_2 + r8_1 + 4) = rcx_3
        void* rdx_3 = &arg1[2]
        *(arg1 + 0x34) += 1
        arg1[6].d = r10.d
        void* rcx_4 = arg1[4]
        
        if (rcx_4 != 0)
            rdx_3 = rcx_4
        
        int32_t rcx_5 = r10.d
        
        if (r10.d s< 0)
            rcx_5 = (r10 + 0x1f).d
        
        r10 = zx.q(r10.d + 1)
        r8_1 += 0x30
        int32_t* rdx_4 = rdx_3 + (sx.q(rcx_5 s>> 5) << 2)
        int32_t rcx_9 = not.d(r11_1)
        r11_1 = rol.d(r11_1, 1)
        *rdx_4 &= rcx_9
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
