// 函数: sub_1407afa70
// 地址: 0x1407afa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x58)

if (result != 0)
    void* rsi_1 = *(**(result + 0x58) + (sx.q(arg1[0x1a]) << 3))
    
    if (arg1[0x86].b != 0)
        result = sub_140d3c6e0(arg1)
        
        if (result != 0)
            int64_t rax_1 = sub_142591550()
            void* rcx = *(result + 0x10)
            int64_t rdx_2 = sx.q(*(rax_1 + 0x38))
            
            if (rdx_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx_2 << 3)) == rax_1 + 0x30
                    && *(result + 0x430) != 0)
                sub_141f66050(result, arg1[0x1a])
    
    if (rsi_1 != 0 && *(rsi_1 + 0x12c) != 0)
        result.b = 1
        return result

result.b = 0
return result
