// 函数: sub_142931ae0
// 地址: 0x142931ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *_Str1
int64_t r9 = *_Str2
int32_t result

if (rax == r9)
label_142931b15:
    char* rcx_1 = *(_Str1 + 8)
    
    if (rcx_1 != 0)
        int64_t rdx_1 = *(_Str2 + 8)
        
        if (rdx_1 != 0)
            void* rdx_2 = rdx_1 - rcx_1
            char i
            
            do
                i = *rcx_1
                char temp1_1 = *(rcx_1 + rdx_2)
                
                if (i != temp1_1)
                    return sbb.d(0, 0, i u< temp1_1) | 1
                
                rcx_1 = &rcx_1[1]
            while (i != 0)
            return 0
    
    if (rcx_1 == *(_Str2 + 8))
        return 0
    
    result = 1
    
    if (rcx_1 == 0)
        return -1
else
    void* r9_1 = r9 - rax
    
    while (true)
        char rcx = *rax
        char temp0_1 = *(rax + r9_1)
        
        if (rcx != temp0_1)
            result = sbb.d(rax.d, rax.d, rcx u< temp0_1) | 1
            break
        
        rax = &rax[1]
        
        if (rcx == 0)
            result = 0
            break
    
    if (result == 0)
        goto label_142931b15

return result
