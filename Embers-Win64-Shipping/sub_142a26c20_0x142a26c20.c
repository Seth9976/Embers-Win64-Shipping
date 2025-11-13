// 函数: sub_142a26c20
// 地址: 0x142a26c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 1 << (arg2 s>> 5).b
int32_t rdx = *(arg1 + 0x10c0)
void* r15 = arg1 + 0x10e8

if (*(arg1 + 0x10c4) != rdx)
    sub_142a25b80(arg1 + 0x460, rdx)
    *(arg1 + 0x10c4) = *(arg1 + 0x10c0)

void* r14 = arg1 + 0x1060
void* r13_1 = r15 - (arg1 + 0x460)
void* rbp = r15 + 0x50
int64_t i_1 = 8
void* r10 = r14
int32_t rcx_3 = 0x3f
uint32_t result
int64_t i

do
    int32_t rdx_1 = arg2
    
    if (*r15 != 0 && (*rbp & 2) != 0)
        rdx_1 = sx.d(*(r14 + r13_1 - 0xbee))
        
        if (*(r15 + 3) != 1)
            rdx_1 += arg2
        
        if (rdx_1 s< 0)
            rdx_1 = 0
        else if (rdx_1 s> 0x3f)
            rdx_1 = rcx_3
    
    if (*(arg1 + 0x10c8) != 0)
        int32_t rax_4 = sx.d(*(arg1 + 0x10ca)) * rsi
        int32_t rax_5 = rax_4 + rdx_1
        
        if (rax_4 + rdx_1 s< 0)
            rax_5 = 0
        else if (rax_5 s> 0x3f)
            rax_5 = rcx_3
        
        int64_t j_1 = 3
        *r14 = rax_5.b
        void* r9_1 = arg1 + 0x10cb
        void* r8_1 = r14 + 2
        int64_t j
        
        do
            int32_t rax_8 = (sx.d(*(arg1 + 0x10d2)) + sx.d(*r9_1)) * rsi
            int32_t rax_9 = rax_8 + rdx_1
            
            if (rax_8 + rdx_1 s< 0)
                rax_9 = 0
            else if (rax_9 s> 0x3f)
                rax_9 = 0x3f
            
            *r8_1 = rax_9.b
            result = sx.d(*(arg1 + 0x10d3))
            int32_t rcx_7 = (sx.d(*r9_1) + result) * rsi
            int32_t rcx_8 = rcx_7 + rdx_1
            
            if (rcx_7 + rdx_1 s< 0)
                rcx_8 = 0
            else if (rcx_8 s> 0x3f)
                rcx_8 = 0x3f
            
            *(r8_1 + 1) = rcx_8.b
            r9_1 += 1
            r8_1 += 2
            j = j_1
            j_1 -= 1
        while (j != 1)
        r15 = arg1 + 0x10e8
        rcx_3 = (j_1 + 0x3f).d
    else
        result = zx.d(rdx_1.b)
        *r10 = result.b
        *(r10 + 1) = result.b
        *(r10 + 2) = result.b
        *(r10 + 3) = result.b
        *(r10 + 4) = result.b
        *(r10 + 5) = result.b
        *(r10 + 6) = result.b
        *(r10 + 7) = result.b
    
    r10 += 8
    rbp += 4
    r14 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
return result
