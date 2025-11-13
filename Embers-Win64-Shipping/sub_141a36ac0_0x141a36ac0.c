// 函数: sub_141a36ac0
// 地址: 0x141a36ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x38)

if (rcx != 2)
    char rax_1 = *(arg1 + 0x40)
    
    if (rax_1 != 2)
        int32_t rdx_1 = *(arg1 + 0x3c)
        int32_t temp0_1 = *(arg1 + 0x44)
        
        if (rdx_1 s> temp0_1)
            *(arg1 + 0x44) += 1
        else if (rdx_1 == temp0_1 && (rcx == 0 || rax_1 == 0))
            *(arg1 + 0x44) += 1

uint64_t result = sub_141a5adc0(arg1 + 0x38, arg1 + 0x48)

if (result.b == 0)
    result = *(arg1 + 0x48)
    uint32_t rcx_3 = (result u>> 0x20).d
    uint32_t arg_c
    
    if (result.b != 2)
        result = *(arg1 + 0x40)
        
        if (result.b != 2)
            result u>>= 0x20
            
            if (result.d s<= rcx_3)
                arg_c = rcx_3
                result = 1.q
                *(arg1 + 0x40) = result
    
    int64_t rdx_3 = *(arg1 + 0x50)
    
    if (rdx_3.b != 2)
        result = *(arg1 + 0x38)
        
        if (result.b != 2)
            result u>>= 0x20
            
            if (result.d s>= (rdx_3 u>> 0x20).d)
                arg_c = rcx_3
                result = 1.q
                *(arg1 + 0x38) = result

return result
