// 函数: sub_14242c4a0
// 地址: 0x14242c4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 == 0)
label_14242c4e1:
    int64_t result_1
    sub_140d3a3a0(&result_1, arg2)
    int64_t rdi_1 = sx.q(*(arg1 + 0x1f0))
    int32_t rax_3 = (rdi_1 + 1).d
    *(arg1 + 0x1f0) = rax_3
    
    if (rax_3 s> *(arg1 + 0x1f4))
        sub_1405a4d70(arg1 + 0x1e8)
    
    result = result_1
    *(*(arg1 + 0x1e8) + (rdi_1 << 3)) = result
else
    void* rax_1 = sub_14249bc70()
    void* r8_1 = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(r8_1 + 0x38))
        goto label_14242c4e1
    
    result = *(r8_1 + 0x30)
    
    if (*(result + (rax_2 << 3)) != rax_1 + 0x30)
        goto label_14242c4e1

return result
