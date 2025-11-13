// 函数: sub_141d200c0
// 地址: 0x141d200c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x48))()
int64_t i_1 = sx.q(result.d)

if (result.d s> 0)
    void* r8_1 = nullptr
    int64_t i
    
    do
        result = arg1[1]
        int64_t rcx = sx.q(*(r8_1 + result))
        
        if (rcx.d s>= 0)
            *(r8_1 + result) = *(*arg2 + (rcx << 2))
        
        int64_t rcx_2 = sx.q(*(r8_1 + result + 4))
        
        if (rcx_2.d s>= 0)
            *(r8_1 + result + 4) = *(*arg2 + (rcx_2 << 2))
        
        int64_t rcx_4 = sx.q(*(r8_1 + result + 8))
        
        if (rcx_4.d s>= 0)
            *(r8_1 + result + 8) = *(*arg2 + (rcx_4 << 2))
        
        r8_1 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
