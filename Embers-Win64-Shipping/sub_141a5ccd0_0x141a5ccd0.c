// 函数: sub_141a5ccd0
// 地址: 0x141a5ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int128_t var_18 = data_1439d2858

if (sub_140cdd5d0(arg1, &var_18) s< 1)
    int32_t rax_1 = arg1[0xa].d
    arg1[0xa].d = ((rax_1 u>> 3 ^ rax_1) & 2) ^ rax_1

int32_t i = 0
void* result = (*(*arg1 + 0x2e0))(arg1)

if (*(result + 8) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rax_5 = *(rsi_1 + *(*(*arg1 + 0x2e0))(arg1))
        
        if (rax_5 != 0)
            int128_t zmm0_1 = *(rax_5 + 0x90)
            int64_t r8_1 = zmm0_1.q
            var_18 = zmm0_1
            
            if (r8_1.b == 2)
                i += 1
                rsi_1 = &rsi_1[1]
            else
                int64_t rax_7 = var_18:8.q
                
                if (rax_7.b == 2)
                    i += 1
                    rsi_1 = &rsi_1[1]
                else
                    uint32_t rcx_11 = (r8_1 u>> 0x20).d
                    uint32_t rdx_3 = (rax_7 u>> 0x20).d
                    
                    if (rcx_11 s> rdx_3 || (rcx_11 == rdx_3 && (r8_1.b == 0 || rax_7.b == 0)))
                        (*(*arg1 + 0x2f8))(arg1, zx.q(i))
                    else
                        i += 1
                        rsi_1 = &rsi_1[1]
        else
            (*(*arg1 + 0x2f8))(arg1, zx.q(i))
        
        result = (*(*arg1 + 0x2e0))(arg1)
    while (i s< *(result + 8))

return result
