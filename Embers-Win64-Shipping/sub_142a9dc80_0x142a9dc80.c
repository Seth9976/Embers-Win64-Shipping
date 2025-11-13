// 函数: sub_142a9dc80
// 地址: 0x142a9dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x1c))

if (result.d == *(arg2 + 0x1c))
    void* r8
    
    if (result.d s> 0)
        int32_t* rcx = *(arg1 + 0x10)
        int64_t rdx = 0
        r8 = *(arg2 + 0x10) - rcx
        
        do
            if (*rcx != *(r8 + rcx))
                goto label_142a9dc93
            
            rdx += 1
            rcx = &rcx[1]
        while (rdx s< result)
    
    void* rcx_1 = *(arg1 + 0x50)
    
    if (rcx_1 == 0 || *(rcx_1 + 8) == 0)
        result = 0
    else
        result.b = 1
    
    void* rdx_1 = *(arg2 + 0x50)
    
    if (rdx_1 == 0 || *(rdx_1 + 8) == 0)
        r8 = nullptr
    else
        r8.b = 1
    
    if (result.b == r8.b)
        if (rcx_1 != 0 && *(rcx_1 + 8) != 0)
            result = sub_142ae6fb0(rcx_1, rdx_1)
        
        if (rcx_1 == 0 || *(rcx_1 + 8) == 0 || result.b != 0)
            result.b = 1
            return result

label_142a9dc93:
result.b = 0
return result
