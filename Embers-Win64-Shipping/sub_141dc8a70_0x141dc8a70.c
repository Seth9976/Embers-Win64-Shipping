// 函数: sub_141dc8a70
// 地址: 0x141dc8a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx_1 = *(arg1 + 0xf8)
int512_t result

if (rcx_1 == 0)
    result.o = zx.o(0)
    return result

result.o = zx.o(0)

if (arg2 != 0)
    void* rcx = *(rcx_1 + 0xd0)
    void* r8_2 = sx.q(*(rcx_1 + 0xd8)) * 0x38 + rcx
    
    if (rcx != r8_2)
        while (*(rcx + 4) != arg2)
            rcx += 0x38
            
            if (rcx == r8_2)
                return result
        
        result.o = *(rcx + 0x30)

return result
