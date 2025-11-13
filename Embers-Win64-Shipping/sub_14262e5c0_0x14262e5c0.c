// 函数: sub_14262e5c0
// 地址: 0x14262e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x48)
int32_t r8 = 0
int32_t result = *(arg1 + 0x50)
int64_t r10 = *r9

if (result s> 0)
    while (r10 != arg2)
        r10 = *r9
        r8 += 1
        r9 = &r9[1]
        
        if (r8 s>= result)
            break

if (r8 != result)
    int32_t r10_1 = r8
    
    if (r8 s< result)
        int64_t r9_1 = sx.q(r8)
        int64_t rbx_1 = r9_1
        
        do
            int64_t rdx = *(arg1 + 0x48)
            int64_t rcx_1 = r9_1 - rbx_1
            r10_1 += 1
            int64_t rax = *(rdx + (r9_1 << 3))
            r9_1 += 1
            *(rdx + (rcx_1 << 3)) = rax
            result = *(arg1 + 0x50)
        while (r10_1 s< result)
    
    result -= r8
    *(arg1 + 0x50) = result

return result
