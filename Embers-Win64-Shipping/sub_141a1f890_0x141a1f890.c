// 函数: sub_141a1f890
// 地址: 0x141a1f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)

if (data_143f29080 != 0)
    int64_t* rsi_1 = arg1[0x14]
    int64_t rdi_1 = 0
    result = &rsi_1[arg1[0x15]]
    uint64_t r15_2 = sx.q(arg1[0x15].d) << 3 u>> 3
    
    if (rsi_1 u> result)
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t* r14_1 = *rsi_1
            int64_t rbx_1 = data_143f3a598
            void arg_10
            int64_t r8_1
            result, r8_1 = sub_14229f430(r14_1, &arg_10)
            
            if (*result != rbx_1)
                r8_1.b = 1
                result = (*(*r14_1 + 0x620))(r14_1, rbx_1, r8_1)
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
        while (rdi_1 != r15_2)

return result
