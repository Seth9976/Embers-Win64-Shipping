// 函数: sub_141e21e70
// 地址: 0x141e21e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
*arg3 = 0
int32_t rsi = *(arg1 + 0x150)

if (rsi s> 0)
    int32_t result_2
    
    do
        result_2 = result_1 + 1
        
        if (sub_141e2afe0(arg1, result_1, result_2, arg2.d) != 0)
            void* rcx_2 = sx.q(result_1) * 0x58 + *(arg1 + 0x148)
            char rax_3 = *(rcx_2 + 0x19)
            uint64_t result
            int128_t zmm6
            
            if (rax_3 == 0)
            label_141e21f4d:
                result = zx.q(result_1)
                zmm6.d = arg2.d f- *(rcx_2 + 0x24)
                *arg3 = zmm6.d
            else
                uint32_t rdx_2 = zx.d(rax_3)
                
                if (rdx_2 == 1)
                    result = zx.q(result_1)
                    zmm6.d = arg2.d f- (*(rcx_2 + 0x24) f+ *(rcx_2 + 0x1c))
                    *arg3 = zmm6.d
                else
                    if (rdx_2 != 2)
                        goto label_141e21f4d
                    
                    result = zx.q(result_1)
                    zmm6.d = arg2.d f- (*(rcx_2 + 0x24) f* *(rcx_2 + 0x20) f+ *(rcx_2 + 0x1c))
                    *arg3 = zmm6.d
            return result
        
        result_1 = result_2
    while (result_2 s< rsi)

return 0xffffffff
