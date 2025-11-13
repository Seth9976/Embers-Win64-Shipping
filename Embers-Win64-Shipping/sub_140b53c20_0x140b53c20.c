// 函数: sub_140b53c20
// 地址: 0x140b53c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x29)

if ((rcx & 1) != 0)
    memset(arg2, 0, (arg3 + 7) s>> 3)
else if (*(arg1 + 0xa8) + arg3 s> *(arg1 + 0xa0))
    *(arg1 + 0x29) = rcx | 1
    memset(arg2, 0, (arg3 + 7) s>> 3)
else
    if (arg3 == 1)
        *arg2 = 0
        int64_t r11 = *(arg1 + 0xa8)
        
        if ((*(sx.q((r11 s>> 3).d) + *(arg1 + 0x90)) & arg3.b << (r11.b & 7)) != 0)
            *arg2 = arg3.b
            r11 = *(arg1 + 0xa8)
        
        *(arg1 + 0xa8) = r11 + 1
        return 
    
    if (arg3 != 0)
        arg2[((arg3 + 7) s>> 3) - 1] = 0
        sub_140b569b0(arg2, 0, *(arg1 + 0x90), *(arg1 + 0xa8), arg3.d)
        *(arg1 + 0xa8) += arg3
