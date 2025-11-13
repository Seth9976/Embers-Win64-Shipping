// 函数: sub_141829f00
// 地址: 0x141829f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg3

if (*(arg1 + 0x58) != 1)
    int64_t* rcx_2 = *(arg1 + 0x10)
    result += (*(*rcx_2 + 0x78))(rcx_2, arg1 + 0xa0)
else
    int32_t rbx_1 = *(arg1 + 0xa8)
    int64_t result_2 = arg3 - *(arg2 + 0x58)
    int32_t rbx_2 = rbx_1 - 1
    
    if (rbx_1 - 1 s>= 0)
        int64_t r14_2 = sx.q(rbx_2) << 4
        int32_t temp1_1
        
        do
            int64_t* rcx = *(arg1 + 0x10)
            int64_t rsi_2 = *(arg1 + 0xa0) + r14_2
            int64_t rax_2 = (*(*rcx + 0x68))(rcx, rsi_2)
            int64_t* rcx_1 = *(arg1 + 0x10)
            int64_t r8 = *rcx_1
            void* rax_3 = (*(r8 + 0x60))(rcx_1, rsi_2, r8)
            result_2 += *(rax_2 + 0x58)
            int64_t result_1 = result_2
            
            if (result s>= result_2)
                result_1 = result
            
            result = result_1
            
            if (rax_3 != 0)
                result_2 -= *(rax_3 + 0x58)
            
            r14_2 -= 0x10
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)

if (result s>= 0)
    return result

return 0
