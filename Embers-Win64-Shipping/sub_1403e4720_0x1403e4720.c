// 函数: sub_1403e4720
// 地址: 0x1403e4720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = sx.d(*(arg1 + 0xae5))
int32_t r10 = 0
*(arg1 + 0x105c) = rcx

if (rcx.b != 2)
    *(arg1 + 0x1060) = sx.d(*(arg1 + 0x90c)) * 0x1200
    *(arg1 + 0x1064) = 0
    *(arg1 + 0x106c) = 0
else
    int32_t r8_1 = 0
    
    if (*(arg2 + (sx.q(*(arg1 + 0x914)) << 2) - 4) s> 0)
        do
            int64_t rax_1 = sx.q(*(arg1 + 0x914))
            
            if (r8_1 == rax_1.d)
                break
            
            int64_t r11_1 = sx.q(r8_1)
            int64_t rdx_1 = rax_1 - r11_1
            int64_t rcx_1 = rdx_1 * 5
            int32_t r9_4 = sx.d(*(arg2 + (rcx_1 << 1) + 0x5e)) + sx.d(*(arg2 + (rcx_1 << 1) + 0x5c))
                + sx.d(*(arg2 + (rcx_1 << 1) + 0x58)) + sx.d(*(arg2 + (rcx_1 << 1) + 0x56))
            int32_t r9_5 = r9_4 + sx.d(*(arg2 + rdx_1 * 0xa + 0x5a))
            
            if (r9_5 s> r10)
                r10 = r9_5
                int64_t rcx_3 = sx.q(*(arg1 + 0x914) - r8_1.w - 1) * 5
                *(arg1 + 0x1064) = *(arg2 + (rcx_3 << 1) + 0x60)
                *(arg1 + 0x106c) = *(arg2 + (rcx_3 << 1) + 0x68)
                *(arg1 + 0x1060) = *(arg2 + ((sx.q(*(arg1 + 0x914)) - r11_1) << 2) - 4) << 8
            
            r8_1 += 1
        while (*(arg1 + 0x91c) * r8_1 s< *(arg2 + (sx.q(*(arg1 + 0x914)) << 2) - 4))
    
    *(arg1 + 0x1064) = 0
    *(arg1 + 0x106c) = 0
    *(arg1 + 0x1068) = r10.w
    
    if (r10 s< 0x2ccd)
        int32_t rcx_7 = 1
        
        if (r10 s> 1)
            rcx_7 = r10
        
        int32_t rcx_8 = sx.d((divs.dp.d(0:0xb33400, rcx_7)).w)
        *(arg1 + 0x1064) = ((sx.d(*(arg1 + 0x1064)) * rcx_8) s>> 0xa).w
        *(arg1 + 0x1066) = ((sx.d(*(arg1 + 0x1066)) * rcx_8) s>> 0xa).w
        *(arg1 + 0x1068) = ((sx.d(*(arg1 + 0x1068)) * rcx_8) s>> 0xa).w
        *(arg1 + 0x106a) = ((sx.d(*(arg1 + 0x106a)) * rcx_8) s>> 0xa).w
        *(arg1 + 0x106c) = ((sx.d(*(arg1 + 0x106c)) * rcx_8) s>> 0xa).w
    else if (r10 s> 0x3ccd)
        int32_t rcx_9 = 1
        
        if (r10 s> 1)
            rcx_9 = r10
        
        int32_t rcx_10 = sx.d((divs.dp.d(0:0xf334000, rcx_9)).w)
        *(arg1 + 0x1064) = ((sx.d(*(arg1 + 0x1064)) * rcx_10) s>> 0xe).w
        *(arg1 + 0x1066) = ((sx.d(*(arg1 + 0x1066)) * rcx_10) s>> 0xe).w
        *(arg1 + 0x1068) = ((sx.d(*(arg1 + 0x1068)) * rcx_10) s>> 0xe).w
        *(arg1 + 0x106a) = ((sx.d(*(arg1 + 0x106a)) * rcx_10) s>> 0xe).w
        *(arg1 + 0x106c) = ((sx.d(*(arg1 + 0x106c)) * rcx_10) s>> 0xe).w

memcpy(arg1 + 0x106e, arg2 + 0x40, *(arg1 + 0x924) * 2)
*(arg1 + 0x10a4) = *(arg2 + 0x88)
*(arg1 + 0x10a8) = *(arg2 + (sx.q(*(arg1 + 0x914)) << 2) + 8)
*(arg1 + 0x10b8) = *(arg1 + 0x91c)
int32_t result = *(arg1 + 0x914)
*(arg1 + 0x10b4) = result
return result
