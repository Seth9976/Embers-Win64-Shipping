// 函数: sub_14193e0b0
// 地址: 0x14193e0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f160 == 0)
    data_143f0f168 = 0x3b9aca00
    data_143f0f160 = 1

int32_t i = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x38) = 0
uint64_t result = zx.q(data_143eff5c0)
data_143f0f161 = result.d s> 0

if (result.d s> 0)
    result = zx.q(*(arg1 + 8))
    
    if (result.d s> *(arg1 + 0x24))
        sub_1405c5570(arg1 + 0x18, result.d)
        result = zx.q(*(arg1 + 8))
    
    if (result.d s> *(arg1 + 0x34))
        sub_1405c5570(arg1 + 0x28, result.d)
        result = zx.q(*(arg1 + 8))
    
    if (result.d s> 0)
        do
            void*** rax = sub_14193d960()
            int64_t r14_1 = sx.q(*(arg1 + 0x20))
            int32_t rcx_2 = (r14_1 + 1).d
            *(arg1 + 0x20) = rcx_2
            
            if (rcx_2 s> *(arg1 + 0x24))
                sub_1405a4d70(arg1 + 0x18)
            
            *(*(arg1 + 0x18) + (r14_1 << 3)) = rax
            result = sub_14193d960()
            int64_t r14_2 = sx.q(*(arg1 + 0x30))
            uint64_t result_1 = result
            int32_t rcx_5 = (r14_2 + 1).d
            *(arg1 + 0x30) = rcx_5
            
            if (rcx_5 s> *(arg1 + 0x34))
                result = sub_1405a4d70(arg1 + 0x28)
            
            i += 1
            *(*(arg1 + 0x28) + (r14_2 << 3)) = result_1
        while (i s< *(arg1 + 8))

return result
