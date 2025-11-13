// 函数: sub_142631fe0
// 地址: 0x142631fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
uint32_t rbp = arg2

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg4, 0xb)

uint64_t result = zx.q(arg3[1])
uint64_t j_2 = zx.q(*arg3)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    int64_t r15_1 = 0
    int64_t rcx_1 = sx.q(j_2.d) << 3
    int64_t arg_18 = rcx_1
    uint64_t i
    
    do
        if (j_2.d s> 0)
            int64_t rdi_1 = r15_1
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                result = *(arg3 + 0x28)
                int32_t* k_1 = nullptr
                arg2.b = 0
                int32_t* k = *(rdi_1 + result)
                
                if (k != 0)
                    uint32_t r10_1 = 0
                    
                    do
                        int32_t r8 = *k
                        int32_t rcx_2 = r8
                        
                        if (r8 u< 0x4000000 && arg2.b != 0)
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q((r8 u>> 0xd & 0x1fff) - (*k_1 u>> 0xd & 0x1fff))
                            result = zx.q((temp3_1 ^ temp2_1) - temp2_1)
                            
                            if (result.d s<= rbp)
                                rcx_2 = (rcx_2 & 0x3ffffff) | r10_1 << 0x1a
                                *k = rcx_2
                        
                        k_1 = k
                        k = *(k + 8)
                        arg2 = r8 u>= 0x4000000
                        r10_1 = rcx_2 u>> 0x1a
                    while (k != 0)
                
                rdi_1 += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_1 = arg_18
        
        r15_1 += rcx_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1

if (*(rbx + 9) == 0)
    return result

jump(*(*rbx + 0x28))
