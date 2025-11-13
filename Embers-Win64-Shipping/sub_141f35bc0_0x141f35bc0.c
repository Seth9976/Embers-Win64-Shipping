// 函数: sub_141f35bc0
// 地址: 0x141f35bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x808))
int128_t zmm6 = zx.o(0)

if (result.d == 0)
    result = sub_141f64a80(arg1)
    
    if (result != 0)
        uint64_t* r14_2 = result + 0x40
        
        if (r14_2 != 0)
            int32_t i = 0
            
            if (r14_2[1].d s> 0)
                int64_t rsi_1 = 0
                
                do
                    result = *r14_2
                    
                    if (*(rsi_1 + result) != 0)
                        char rax_2 = sub_140b5b8a0(arg2.d, 0)
                        int32_t rcx_4
                        rcx_4.b = arg2:4.d == 0
                        
                        if ((rcx_4.b & rax_2) == 0)
                            result = *r14_2
                        
                        if ((rcx_4.b & rax_2) != 0 || arg2 == *(*(result + rsi_1) + 0x80))
                            int64_t* rcx_6 = *(rsi_1 + *r14_2)
                            result = (*(*rcx_6 + 0x270))(rcx_6, arg1)
                            zmm6.d = zmm6.d f+ arg3
                    
                    i += 1
                    rsi_1 += 8
                while (i s< r14_2[1].d)
else
    int32_t i_1 = 0
    
    if (result.d s> 0)
        int64_t r14_1 = 0
        
        do
            result = sub_140d3c6e0(*(*(arg1 + 0x800) + r14_1) + 0x100)
            uint64_t result_1 = result
            
            if (result != 0)
                result = sub_140b5b8a0(arg2.d, 0)
                int32_t rcx_2
                rcx_2.b = arg2:4.d == 0
                
                if ((rcx_2.b & result.b) != 0 || arg2 == *(result_1 + 0x80))
                    result = (*(*result_1 + 0x270))(result_1, arg1)
                    zmm6.d = zmm6.d f+ arg3
            
            i_1 += 1
            r14_1 += 8
        while (i_1 s< *(arg1 + 0x808))

return result
