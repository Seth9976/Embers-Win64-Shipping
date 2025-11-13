// 函数: sub_142a5eef0
// 地址: 0x142a5eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x170)

if (result != 0)
    void* r8_1
    
    if (arg2 == 0)
        void* rcx = *result
        r8_1 = rcx + 0x70
        
        if (*(rcx + 0x70) != 0xffffffff || *(rcx + 0x5c) != 0xffffffff)
        label_142a5ef38:
            int32_t rdx = -1
            int32_t arg_8 = 0
            int32_t rax = -1
            
            if (arg2 != 0)
                rax = 1
            
            *r8_1 = rax
            
            if (arg2 != 0)
                rdx = 6
            
            *(**(arg1 + 0x170) + 0x5c) = rdx
            return sub_142a5f4f0(arg1, &arg_8)
    else
        void* r9_1 = *result
        r8_1 = r9_1 + 0x70
        
        if (*(r9_1 + 0x70) == 0xffffffff)
            if (*(r9_1 + 0x5c) != 0xffffffff)
                return result
            
            goto label_142a5ef38

return result
