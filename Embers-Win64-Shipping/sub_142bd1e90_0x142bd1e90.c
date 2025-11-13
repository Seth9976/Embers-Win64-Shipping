// 函数: sub_142bd1e90
// 地址: 0x142bd1e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x38)
int32_t rax_1
int32_t rax_2
int32_t rcx_1

if (*(rbx + 0x58) == 0)
    int32_t rbp_1 = arg2[1]
    int32_t r14_1 = *arg2
    *(rbx + 0x58) = 1
    rax_1 = sub_142bd8000(rbx)
    rcx_1 = rax_1
    
    if (rax_1 == 0)
        rax_2 = sub_142bcf140(rbx, r14_1, rbp_1)
        rcx_1 = rax_2

int32_t* result

if (*(rbx + 0x58) != 0 || (rax_1 == 0 && rax_2 == 0))
    result = sub_142bcf140(rbx, arg2[2], arg2[3])
    
    if (result.d != 0)
        int32_t* rcx_4 = *(arg1 + 0x30)
        
        if (*rcx_4 == 0)
            *rcx_4 = result.d
else
    result = *(arg1 + 0x30)
    
    if (*result == 0)
        *result = rcx_1

return result
