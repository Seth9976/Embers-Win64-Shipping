// 函数: sub_142c437f0
// 地址: 0x142c437f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142c43620(arg1, arg2, arg3)
int32_t rsi = *(arg3 + 0x60)
int32_t result_1 = 0

if (rsi != 0)
    void* r8 = *(arg3 + 0x70)
    uint64_t rbx_1 = 0
    
    do
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= rsi)
            break
    while (*(r8 + 0xf) == *(r8 + rbx_1 * 0x14 + 0xf))
    
    if (rsi != 0)
        do
            result = zx.q(result_1)
            
            if ((*(r8 + result * 0x14 + 0xf) & 0xd) == 0)
                result = sub_142c43440(arg3, result_1, rbx_1.d, result)
            
            r8 = *(arg3 + 0x70)
            result_1 = rbx_1.d
            char i = *(r8 + rbx_1 * 0x14 + 0xf)
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= *(arg3 + 0x60))
                    break
            while (i == *(r8 + rbx_1 * 0x14 + 0xf))
        while (result_1 u< rsi)

return result
