// 函数: sub_142632150
// 地址: 0x142632150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg1, 9)

uint64_t result = zx.q(arg3[1])
uint64_t j_2 = zx.q(*arg3)

if (result.d s> 0)
    int64_t rsi_1 = 0
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        if (j_2.d s> 0)
            int64_t r10_1 = rsi_1
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                result = *(arg3 + 0x28)
                int32_t* k_1 = *(r10_1 + result)
                
                if (k_1 != 0)
                    int32_t* k
                    
                    do
                        int32_t r8 = *k_1
                        k = *(k_1 + 8)
                        int32_t rax_3
                        
                        if (k == 0)
                            rax_3 = 0xffff
                        else
                            rax_3 = *k & 0x1fff
                        
                        result = zx.q(rax_3 - (r8 u>> 0xd & 0x1fff))
                        
                        if (result.d s<= arg2)
                            *k_1 = r8 & 0x3ffffff
                        
                        k_1 = k
                    while (k != 0)
                
                r10_1 += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        rsi_1 += sx.q(j_2.d) << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

if (*(arg1 + 9) == 0)
    return result

jump(*(*arg1 + 0x28))
