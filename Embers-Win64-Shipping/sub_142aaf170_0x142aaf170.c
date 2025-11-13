// 函数: sub_142aaf170
// 地址: 0x142aaf170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int64_t* rcx = *(arg1 + 0x2a0)

if (rcx != 0)
    jump(*(*rcx + 0x10))

int64_t* r8 = *(arg1 + 0x170)

if (r8 != 0)
    void* i = *r8
    
    while (i != 0)
        char rdx_1 = *(i + 0x99)
        int32_t result_1 = result + 1
        i = r8[1]
        r8 = &r8[1]
        
        if (rdx_1 == 0)
            result_1 = result
        
        result = result_1

return result
