// 函数: sub_142c3dbf0
// 地址: 0x142c3dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_140dc0ea0(1, 0x10)

if (result == 0)
    return result

int32_t* result_1 = result
int64_t i_1 = 4
int64_t i

do
    int32_t rdx_1 = *(arg1 + 0x38)
    int32_t r8_1 = 0
    int32_t rdx_2 = rdx_1 - 1
    int32_t r10_1 = *(&data_1436a1918 - result + result_1)
    int64_t rbx_1 = *(arg1 + 0x40)
    void* rcx_2
    
    if (rdx_1 - 1 s>= 0)
        uint64_t rax_1
        
        while (true)
            rax_1 = zx.q((rdx_2 + r8_1) u>> 1)
            int32_t r9_1 = *(rbx_1 + rax_1 * 0x24)
            int32_t rcx_1
            
            if (r10_1 u>= r9_1)
                rcx_1.b = r10_1 u> r9_1
            
            if (r10_1 u< r9_1 || rcx_1 s< 0)
                rdx_2 = (rax_1 - 1).d
            else
                if (rcx_1 s<= 0)
                    break
                
                r8_1 = (rax_1 + 1).d
            
            if (r8_1 s> rdx_2)
                goto label_142c3dc8f
        
        rcx_2 = rbx_1 + rax_1 * 0x24
    
    int32_t rax_2
    
    if (rdx_1 - 1 s< 0 || rcx_2 == 0)
    label_142c3dc8f:
        rax_2 = 0
    else
        rax_2 = *(rcx_2 + 0x1c)
    
    *result_1 = rax_2
    result_1 = &result_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
