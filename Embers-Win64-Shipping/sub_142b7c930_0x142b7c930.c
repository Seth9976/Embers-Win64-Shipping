// 函数: sub_142b7c930
// 地址: 0x142b7c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
int16_t r10 = *(r8 + 8)
int64_t r9 = sx.q(arg2) * 2
int16_t i

do
    int32_t rax_2
    
    if (r10 s< 0)
        rax_2 = *(r8 + 0xc)
    else
        rax_2 = sx.d(r10) s>> 5
    
    if (arg2 s>= rax_2)
        break
    
    int16_t rcx = *(r8 + 8)
    int32_t rax_4
    
    if (rcx s< 0)
        rax_4 = *(r8 + 0xc)
    else
        rax_4 = sx.d(rcx) s>> 5
    
    if (arg2 u>= rax_4)
        i = -1
    else
        void* rax_5 = r8 + 0xa
        
        if ((rcx.b & 2) == 0)
            rax_5 = *(r8 + 0x18)
        
        i = *(r9 + rax_5)
    
    arg2 += 1
    r9 += 2
    
    if (i == 0xa)
        break
    
    if (i - 0xc u<= 1)
        break
    
    if (i == 0x85)
        break
    
    if (i == 0x2028)
        break
while (i != 0x2029)
return zx.q(arg2)
