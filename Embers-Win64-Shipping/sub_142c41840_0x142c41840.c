// 函数: sub_142c41840
// 地址: 0x142c41840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142c3fc60(arg3)
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
            result = rbx_1.d - r10
            
            if (result u>= 2)
                result = sub_142bf5c70(arg3, r10, rbx_1.d)
            
            int64_t r8_2 = *(arg3 + 0x70)
            r10 = rbx_1.d
            char i = *(r8_2 + rbx_1 * 0x14 + 0xf)
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= *(arg3 + 0x60))
                    break
            while (i == *(r8_2 + rbx_1 * 0x14 + 0xf))
        while (r10 u< rsi)

return result
