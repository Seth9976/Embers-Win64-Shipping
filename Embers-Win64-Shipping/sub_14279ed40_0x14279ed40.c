// 函数: sub_14279ed40
// 地址: 0x14279ed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg4
int64_t* i = *(arg2 + 0x28)

for (void* r12_2 = &i[sx.q(*(arg2 + 0x30)) * 4]; i != r12_2; i = &i[4])
    int64_t r14_1 = *i
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    int64_t var_50_1
    int64_t rdi_1
    
    if (arg3 != 0)
        rdi_1 = arg3
        var_50_1 = arg3
    else
        rdi_1 = i[1]
        var_50_1 = rdi_1
    
    if (*(result + 8) s<= 1)
        result = &i[2]
    
    if (&var_48 != result)
        int32_t rsi_1 = *(result + 8)
        int64_t r15_1 = *result
        var_40_1.d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_48, rsi_1, 0)
            memcpy(var_48, r15_1, rsi_1 * 2)
            rdi_1 = var_50_1
    
    int64_t rsi_2 = sx.q(arg1[6].d)
    int32_t rax = (rsi_2 + 1).d
    arg1[6].d = rax
    
    if (rax s> *(arg1 + 0x34))
        sub_1405c4e40(&arg1[5])
    
    int64_t* rcx_5 = (rsi_2 << 5) + arg1[5]
    *rcx_5 = r14_1
    rcx_5[1] = rdi_1
    sub_140596d10(&rcx_5[2], &var_48)
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    result = arg4

if (*(arg2 + 0x30) s<= 0)
    return result

jump(*(*arg1 + 0x2a8))
