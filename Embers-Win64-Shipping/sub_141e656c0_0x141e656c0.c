// 函数: sub_141e656c0
// 地址: 0x141e656c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x100))

if ((result.b & 0x10) == 0)
    *(arg1 + 0x100) = result.d | 0x18
    int32_t rax_1 = *(arg1 + 0xb8)
    result = zx.q(rax_1 - 1)
    int64_t rbx_1 = sx.q(result.d)
    
    if (rax_1 - 1 s>= 0)
        int64_t rdi_2 = rbx_1 << 4
        int64_t temp1_1
        
        do
            result = *(arg1 + 0xb0)
            int64_t* rcx = *(rdi_2 + result)
            
            if (rcx != 0)
                result = (*(*rcx + 0x260))(rcx, arg1)
                
                if (result.b != 0 && arg2 == 0)
                    break
            
            rdi_2 -= 0x10
            temp1_1 = rbx_1
            rbx_1 -= 1
        while (temp1_1 - 1 s>= 0)

return result
