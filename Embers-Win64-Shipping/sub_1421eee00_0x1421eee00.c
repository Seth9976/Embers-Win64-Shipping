// 函数: sub_1421eee00
// 地址: 0x1421eee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rbp = 0
int64_t r14 = 0
int32_t result

do
    int64_t rbx_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rbx_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4df0(arg2)
    
    int64_t* rbx_2 = *arg2 + rbx_1 * 0x18
    
    if (rbx_2 == 0)
        rbx_2 = nullptr
    else
        __builtin_memset(rbx_2, 0, 0x18)
    
    rbx_2[2] = *(*(arg1 + 0x30) + rbp + 0x40)
    int64_t var_28
    int64_t* rax_4 = sub_140b63b70(*(arg1 + 0x30) + r14, &var_28)
    int16_t* const r8_1
    
    if (rax_4[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_4
    
    int64_t var_38
    sub_140a2e390(&var_38, u"%s (DP%d)", r8_1)
    result = &var_38
    
    if (rbx_2 == &var_38)
        int64_t rcx_7 = var_38
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
    else
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *rbx_2 = var_38
        int32_t var_30
        rbx_2[1].d = var_30
        int32_t result_1
        result = result_1
        *(rbx_2 + 0xc) = result
        var_30.q = 0
        var_38 = 0
    
    int64_t rcx_8 = var_28
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    i += 1
    r14 += 0x48
    rbp += 0x48
while (i s< 4)

return result
