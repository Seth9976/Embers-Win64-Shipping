// 函数: sub_142a4a4f0
// 地址: 0x142a4a4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_1 = *(arg1 + 8)
int32_t r9_1

if (rax_1 s< 0)
    r9_1 = *(arg1 + 0xc)
else
    r9_1 = sx.d(rax_1) s>> 5

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> r9_1)
    arg2 = r9_1

void* r10 = arg1 + 0xa

if ((rax_1.b & 2) == 0)
    r10 = *(arg1 + 0x18)

int64_t i = sx.q(arg2)

if (arg3 s<= 0)
    int32_t r8 = neg.d(arg3)
    
    if (r8 s> 0)
        void* r9_4 = r10 + ((i - 1) << 1)
        
        while (i s> 0)
            uint32_t rcx_4 = zx.d(*(r10 + (i << 1) - 2))
            i -= 1
            arg2 -= 1
            r9_4 -= 2
            
            if ((rcx_4 & 0xfffffc00) == 0xdc00 && i s> 0 && (zx.d(*r9_4) & 0xfffffc00) == 0xd800)
                arg2 -= 1
                i -= 1
                r9_4 -= 2
            
            r8 -= 1
            
            if (r8 s<= 0)
                break
else
    int64_t r9_2 = sx.q(r9_1)
    
    do
        if (i s>= r9_2)
            if (r9_2 s>= 0)
                break
            
            if (*(r10 + (i << 1)) == 0)
                break
        
        arg2 += 1
        int32_t rcx_1 = zx.d(*(r10 + (i << 1))) & 0xfffffc00
        i += 1
        
        if (rcx_1 == 0xd800 && i != r9_2 && (zx.d(*(r10 + (i << 1))) & 0xfffffc00) == 0xdc00)
            arg2 += 1
            i += 1
        
        arg3 -= 1
    while (arg3 s> 0)

return zx.q(arg2)
