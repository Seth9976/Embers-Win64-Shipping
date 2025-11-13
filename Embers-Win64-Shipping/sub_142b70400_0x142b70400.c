// 函数: sub_142b70400
// 地址: 0x142b70400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 != arg2)
    if (sub_142b70490(arg1, arg2).b == 0)
        result.b = 0
        return result
    
    int64_t r10_1 = sx.q(*(arg1 + 0x40))
    int64_t r9_1 = 0
    
    if (r10_1 s> 0)
        int64_t* rcx = arg1 + 0x18
        void* rbx_1 = arg2 - arg1
        void* rdx = arg1 + 0x44
        void* r8_1 = arg1 + 0x58
        
        while (*r8_1 == *(rbx_1 + r8_1))
            if (*rdx != *(rbx_1 + rdx))
                break
            
            if (*rcx != *(rbx_1 + rcx))
                break
            
            r9_1 += 1
            r8_1 += 2
            rdx += 4
            rcx = &rcx[1]
            
            if (r9_1 s>= r10_1)
                goto label_142b7047f
        
        result.b = 0
        return result

label_142b7047f:
result.b = 1
return result
