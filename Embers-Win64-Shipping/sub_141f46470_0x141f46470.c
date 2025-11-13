// 函数: sub_141f46470
// 地址: 0x141f46470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x534)
*(arg1 + 0x530) = 0

if (rax s< 0 && rax != 0)
    sub_1405a5410(arg1 + 0x528, 0)

void* rax_1 = *(arg1 + 0x430)
int32_t result

if (rax_1 == 0)
    result = *(arg1 + 0x544)
    *(arg1 + 0x540) = 0
    
    if (result s< 0 && result != 0)
        return sub_1405dadb0(arg1 + 0x538, 0)
else
    int64_t rdi_1 = sx.q(*(arg1 + 0x540))
    result = *(rax_1 + 0x170)
    
    if (result s> rdi_1.d)
        *(arg1 + 0x540) = result
        
        if (result s> *(arg1 + 0x544))
            sub_1406105e0(arg1 + 0x538)
        
        result = memset(*(arg1 + 0x538) + (rdi_1 << 2), 0, sx.q(result - rdi_1.d) << 2)
    else if (result s< rdi_1.d && result != rdi_1.d)
        *(arg1 + 0x540) = result
        result = sub_1405dac90(arg1 + 0x538)
    
    if (*(arg1 + 0x540) s> 0)
        return memset(*(arg1 + 0x538), 0, sx.q(*(arg1 + 0x544)) << 2) __tailcall

return result
