// 函数: sub_142c0ec40
// 地址: 0x142c0ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg1

if (result != 0)
    int64_t* rbx_1 = *(arg1 + 8) + 0x18
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            result = j_sub_140a74f90(rcx)
        
        rbx_1[-1] = 0
        *rbx_1 = 0
        rbx_1 = &rbx_1[4]
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

int64_t rcx_1 = *(arg1 + 8)

if (rcx_1 != 0)
    result = j_sub_140a74f90(rcx_1)

*arg1 = 0
*(arg1 + 8) = 0
return result
