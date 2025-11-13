// 函数: sub_14242c860
// 地址: 0x14242c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* rsi = *arg2
uint64_t result = &rsi[arg2[1]]
uint64_t r12_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rsi u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            result = sub_1420e4ce0(rbx_1)
            
            if (result == arg1 && rbx_1[0x17].b == 0)
                int64_t r14_1 = sx.q(*(arg1 + 0xa0))
                int32_t rax_1 = (r14_1 + 1).d
                *(arg1 + 0xa0) = rax_1
                
                if (rax_1 s> *(arg1 + 0xa4))
                    sub_1405a4d70(arg1 + 0x98)
                
                *(*(arg1 + 0x98) + (r14_1 << 3)) = rbx_1
                sub_1420e7800(rbx_1)
                result = sub_1420e12d0(rbx_1)
                
                if (result.b != 0)
                    result = sub_14242d040(arg1 + 0xa8, rbx_1, 0)
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r12_1)

return result
