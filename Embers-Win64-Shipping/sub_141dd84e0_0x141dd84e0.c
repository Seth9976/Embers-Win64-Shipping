// 函数: sub_141dd84e0
// 地址: 0x141dd84e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
result.b = arg2:4.d != 0

if ((sub_140b5b8a0(arg2.d, 0).b == 0 | result.b) != 0)
    result = *(arg1 + 0x6c0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x6c8))
    int64_t r14_2 = rsi_1 << 5
    int64_t rcx_1 = r14_2 + result
    
    if (result == rcx_1)
    label_141dd854e:
        int32_t rax = (rsi_1 + 1).d
        *(arg1 + 0x6c8) = rax
        
        if (rax s> *(arg1 + 0x6cc))
            sub_1405c4e40(arg1 + 0x6c0)
        
        int64_t rax_3 = (rsi_1 << 5) + *(arg1 + 0x6c0)
        *rax_3 = 0
        *(rax_3 + 8) = 0
        *(rax_3 + 0xc) = 0
        *(rax_3 + 0x10) = 0
        *(rax_3 + 0x18) = 0
        *(r14_2 + *(arg1 + 0x6c0)) = arg2
        result = *(arg1 + 0x6c0)
        *(r14_2 + result + 0x10) = arg3
    else
        while (*result != arg2)
            result += 0x20
            
            if (result == rcx_1)
                goto label_141dd854e
        
        *(result + 0x10) = arg3

return result
