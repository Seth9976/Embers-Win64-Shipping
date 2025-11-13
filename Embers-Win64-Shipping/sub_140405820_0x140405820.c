// 函数: sub_140405820
// 地址: 0x140405820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
int64_t r11 = sx.q(arg4)
int64_t i = 0

if (r11 s>= 4)
    void* r9 = arg2 + 8
    
    do
        if (*(r9 - 8) f> arg1)
            goto label_140405899
        
        if (*(r9 - 4) > arg1)
            rcx += 1
            goto label_140405899
        
        if (*r9 > arg1)
            rcx += 2
            goto label_140405899
        
        if (*(r9 + 4) > arg1)
            rcx += 3
            goto label_140405899
        
        i += 4
        rcx += 4
        r9 += 0x10
    while (i s< r11 - 3)

if (i s< r11)
    while (not(*(arg2 + (i << 2)) > arg1))
        i += 1
        rcx += 1
        
        if (i s>= r11)
            break

label_140405899:
int64_t rdx = sx.q(arg5)
bool cond:0 = rcx s>= rdx.d

if (rcx s> rdx.d)
    if (not(*(arg2 + (rdx << 2)) f+ *(arg3 + (rdx << 2)) <= arg1))
        return zx.q(rdx.d)
    
    cond:0 = rcx s>= rdx.d

if (not(cond:0) && arg1 > *(arg2 + (rdx << 2) - 4) f- *(arg3 + (rdx << 2) - 4))
    rcx = rdx.d

return zx.q(rcx)
