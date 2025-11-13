// 函数: sub_142012a10
// 地址: 0x142012a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg2 + 0x28) ^ *(arg1 + 0x28)) & 8
void* var_38 = arg1
*(arg1 + 0x28) ^= rax
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x34) = *(arg2 + 0x34)
void* var_30 = arg2
uint64_t result = sub_141ff2e40(arg1 + 0x18, &var_38)
uint64_t* i = *(arg2 + 8)

for (void* r15_2 = &i[sx.q(*(arg2 + 0x10)) * 2]; i != r15_2; i = &i[2])
    result = *i
    
    if (result != 0 && *(result + 0x12) != 0)
        int64_t** j = *(arg1 + 8)
        
        for (void* rsi_3 = &j[sx.q(*(arg1 + 0x10)) * 2]; j != rsi_3; j = &j[2])
            int64_t* rcx_1 = *j
            
            if (rcx_1 != 0)
                result = zx.q(*(*i + 0x12))
                
                if (*(rcx_1 + 0x12) == result.w)
                    result = (*(*rcx_1 + 0x18))(rcx_1)
                    
                    if (result.b != 0)
                        int64_t* rcx_2 = *j
                        result = (*(*rcx_2 + 0x28))(rcx_2, *i, zx.q(arg3))
                        int64_t* rcx_3 = *j
                        
                        if (result.b == 0)
                            rcx_3[6].b |= 4
                        else
                            rcx_3[6].b &= 0xfe

return result
