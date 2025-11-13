// 函数: sub_141941370
// 地址: 0x141941370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
uint64_t result = (*(*arg1 + 0x20))()

if (result == 0)
    result = (*(*arg1 + 8))(arg1)
    uint64_t result_1 = result
    
    if (result != 0)
    label_1419414de:
        
        if ((*(result + 0x9c) & 1) == 0)
            int32_t rax_14 = sub_141998570(*(result + 0x60), *(result + 0x64), *(result + 0x3c), 
                *(result + 0x34)) * *(result + 0x68)
            rbp = rax_14
            int32_t rdx_16 = ((*(result_1 + 0x98) ^ rax_14) & 0x3fffffff) ^ *(result_1 + 0x98)
            *(result_1 + 0x98) = rdx_16
            *(result_1 + 0x9c) |= 1
            int32_t rcx_14 = *(result_1 + 0x60)
            int32_t rax_17
            int32_t rcx_15
            
            if ((rcx_14 & (rcx_14 - 1)) == 0)
                rcx_15 = *(result_1 + 0x64)
                rax_17 = 0x40000000
            
            if ((rcx_14 & (rcx_14 - 1)) != 0 || (rcx_15 & (rcx_15 - 1)) != 0)
                rax_17 = 0
            
            *(result_1 + 0x98) = (rdx_16 & 0xbfffffff) | rax_17
            goto label_14194155a
    else
        result = (*(*arg1 + 0x18))(arg1)
        
        if (result == 0)
            result = (*(*arg1 + 0x10))(arg1)
            result_1 = result
            
            if (result != 0)
                goto label_1419414de
            
        label_14194155a:
            int32_t temp0_1
            int32_t result_2
            temp0_1:result_2 = sx.q((rbp + 0x3ff) & 0xfffffc00)
            result = zx.q(result_2)
            int32_t rdx_22 = ((temp0_1 & 0x3ff) + result.d) s>> 0xa
            
            if ((arg2 & 7) == 0)
                result = zx.q(data_143f0f1f8 + rdx_22)
                data_143f0f1f8 = result.d
            else
                data_143f0f1fc += rdx_22
        else if ((*(result + 0x9c) & 1) == 0)
            int32_t rax_7 = sub_141998480(*(result + 0x60), *(result + 0x64), *(result + 0x68), 
                *(result + 0x3c), *(result + 0x34))
            int32_t rdx_6 = *(result + 0x98)
            rbp = rax_7
            *(result + 0x9c) |= 1
            int32_t rdx_9 = ((rdx_6 ^ rax_7) & 0x3fffffff) ^ *(result + 0x98)
            *(result + 0x98) = rdx_9
            int32_t rcx_9 = *(result + 0x60)
            int32_t rax_11
            
            if ((rcx_9 & (rcx_9 - 1)) != 0)
                rax_11 = 0
            else
                int32_t rcx_10 = *(result + 0x64)
                
                if ((rcx_10 & (rcx_10 - 1)) != 0)
                    rax_11 = 0
                else
                    int32_t rcx_11 = *(result + 0x68)
                    rax_11 = 0x40000000
                    
                    if ((rcx_11 & (rcx_11 - 1)) != 0)
                        rax_11 = 0
            
            *(result + 0x98) = (rdx_9 & 0xbfffffff) | rax_11
            goto label_14194155a
else if ((*(result + 0x9c) & 1) == 0)
    int32_t rcx = *(result + 0x60)
    int32_t rax_1 = sub_141998570(rcx, rcx, *(result + 0x3c), *(result + 0x34))
    int32_t rdx_1 = 1
    
    if (*(result + 0x68) == 1)
        rdx_1 = 6
    
    int32_t rdx_2 = rdx_1 * *(result + 0x68)
    *(result + 0x9c) |= 1
    rbp = rax_1 * rdx_2
    *(result + 0x98) ^= (rbp ^ *(result + 0x98)) & 0x3fffffff
    int32_t rcx_4 = *(result + 0x60)
    int32_t rax_3 = 0x40000000
    
    if ((rcx_4 & (rcx_4 - 1)) != 0)
        rax_3 = 0
    
    *(result + 0x98) = rax_3 | (*(result + 0x98) & 0xbfffffff)
    goto label_14194155a

return result
