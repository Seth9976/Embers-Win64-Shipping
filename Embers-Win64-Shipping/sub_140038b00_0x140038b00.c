// 函数: sub_140038b00
// 地址: 0x140038b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(1, arg1)
int32_t temp0_2
int32_t temp1_1
int32_t temp2_1
int32_t temp3_1
temp0_2, temp1_1, temp2_1, temp3_1 = __cpuid(7, 0)
int64_t result

if ((temp2 & 0x8000000) == 0)
label_140038bbc:
    result = 1
    
    if ((temp2 & 0x80000) == 0)
        result = 0
        
        if ((temp3 & 0x4000000) == 0)
            abort()
            noreturn
else
    if ((temp1_1 & 0x10020) != 0x10020)
    label_140038b82:
        
        if ((temp2 & 0x18000000) != 0x18000000)
            goto label_140038bbc
        
        int32_t temp0_5
        int32_t temp1_3
        temp0_5, temp1_3 = _xgetbv(0, arg2)
        
        if ((temp1_3 & 6) != 6)
            goto label_140038bbc
        
        int32_t rax_8
        rax_8.b = (temp2 & 0x60000000) != 0x60000000
        return (zx.q((temp1_1.b & 0x20) == 0) | zx.q(rax_8.b)) ^ 3
    
    int32_t temp0_4
    int32_t temp1_2
    temp0_4, temp1_2 = _xgetbv(0, arg2)
    
    if ((temp1_2 & 0xe6) != 0xe6)
        goto label_140038b82
    
    result = 5
    
    if ((temp1_1 & 0xd0020000) != 0xd0020000)
        result = 4
        
        if ((temp1_1 & 0x1c000000) != 0x1c000000)
            goto label_140038b82

return result
