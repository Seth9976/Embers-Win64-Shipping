// 函数: sub_141a379a0
// 地址: 0x141a379a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141a79ff0()
void* r9 = *(arg2 + 0x10)
int64_t result = sx.q(*(rax + 0x38))

if (result.d s<= *(r9 + 0x38))
    int64_t result_1 = result
    result = *(r9 + 0x30)
    
    if (*(result + (result_1 << 3)) == rax + 0x30)
        int64_t rdi_1 = sx.q(*(arg1 + 0x60))
        int32_t rax_1 = (rdi_1 + 1).d
        *(arg1 + 0x60) = rax_1
        
        if (rax_1 s> *(arg1 + 0x64))
            sub_1405a4d70(arg1 + 0x58)
        
        result = *(arg1 + 0x58)
        *(result + (rdi_1 << 3)) = arg2

return result
