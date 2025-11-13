// 函数: sub_142c426d0
// 地址: 0x142c426d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_142c42450(arg1, arg2, arg3)
int32_t rsi = *(arg3 + 0x60)
int32_t r10 = 0

if (rsi != 0)
    void* rdx = *(arg3 + 0x70)
    uint64_t rbx_1 = 0
    
    do
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= rsi)
            break
    while (*(rdx + 0xf) == *(rdx + rbx_1 * 0x14 + 0xf))
    
    if (rsi != 0)
        do
            result = *(rdx + zx.q(r10) * 0x14 + 0xf) & 0xf
            
            if (result u<= 1)
                result = sub_142c427b0(arg1, *(arg2 + 0x18), arg3, r10, rbx_1.d)
            
            rdx = *(arg3 + 0x70)
            r10 = rbx_1.d
            char i = *(rdx + rbx_1 * 0x14 + 0xf)
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= *(arg3 + 0x60))
                    break
            while (i == *(rdx + rbx_1 * 0x14 + 0xf))
        while (r10 u< rsi)

return result
