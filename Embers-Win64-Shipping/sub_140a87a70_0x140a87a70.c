// 函数: sub_140a87a70
// 地址: 0x140a87a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t i_1 = arg3

if (arg3 != 0)
    int32_t r11_1 = rol.d(1, r10.b)
    int64_t r9_2 = r10 * 0x18
    int32_t i
    
    do
        if (arg1[0x611] != 0)
            int32_t* rcx_1 = *(arg1 + 0x1800)
            int32_t* r8 = arg1
            
            if (rcx_1 != 0)
                r8 = rcx_1
            
            r8[sx.q(arg1[0x610]) * 6] = r10.d
        
        int32_t* rcx_3 = *(arg1 + 0x1800)
        int32_t* rdx_1 = arg1
        
        if (rcx_3 != 0)
            rdx_1 = rcx_3
        
        *(rdx_1 + r9_2) = 0xffffffff
        int32_t rcx_4
        
        if (arg1[0x611] s<= 0)
            rcx_4 = -1
        else
            rcx_4 = arg1[0x610]
        
        *(rdx_1 + r9_2 + 4) = rcx_4
        void* rdx_2 = &arg1[0x604]
        arg1[0x611] += 1
        arg1[0x610] = r10.d
        void* rcx_5 = *(arg1 + 0x1830)
        
        if (rcx_5 != 0)
            rdx_2 = rcx_5
        
        int32_t rcx_6 = r10.d
        
        if (r10.d s< 0)
            rcx_6 = (r10 + 0x1f).d
        
        r10 = zx.q(r10.d + 1)
        r9_2 += 0x18
        int32_t* rdx_3 = rdx_2 + (sx.q(rcx_6 s>> 5) << 2)
        int32_t rcx_10 = not.d(r11_1)
        r11_1 = rol.d(r11_1, 1)
        *rdx_3 &= rcx_10
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
