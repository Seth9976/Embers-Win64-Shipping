// 函数: sub_141d0dc90
// 地址: 0x141d0dc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t i_1 = arg3

if (arg3 != 0)
    int32_t r11_1 = rol.d(1, r10.b)
    int64_t r9_2 = r10 * 0x50
    int32_t i
    
    do
        if (*(arg1 + 0x24) != 0)
            void* r8 = *arg1
            
            if ((r8.b & 1) != 0)
                r8 = (r8 s>> 1) + arg1
            
            *(r8 + sx.q(arg1[4].d) * 0x50) = r10.d
        
        void* rcx_3 = *arg1
        
        if ((rcx_3.b & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1
        
        void* rdx_2 = r9_2 + rcx_3
        *rdx_2 = 0xffffffff
        int32_t rcx_4
        
        if (*(arg1 + 0x24) s<= 0)
            rcx_4 = -1
        else
            rcx_4 = arg1[4].d
        
        *(rdx_2 + 4) = rcx_4
        *(arg1 + 0x24) += 1
        arg1[4].d = r10.d
        void* rdx_3 = arg1[2]
        
        if ((rdx_3.b & 1) != 0)
            rdx_3 = (rdx_3 s>> 1) + &arg1[2]
        
        int32_t rcx_5 = r10.d
        
        if (r10.d s< 0)
            rcx_5 = (r10 + 0x1f).d
        
        r10 = zx.q(r10.d + 1)
        r9_2 += 0x50
        int32_t* rdx_5 = rdx_3 + (sx.q(rcx_5 s>> 5) << 2)
        int32_t rcx_9 = not.d(r11_1)
        r11_1 = rol.d(r11_1, 1)
        *rdx_5 &= rcx_9
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
