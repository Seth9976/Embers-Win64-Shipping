// 函数: sub_142366170
// 地址: 0x142366170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* r14_1 = *(rsi_1 + *(arg1 + 0x28))
        
        if (r14_1 != 0)
            r15 += (*(*r14_1 + 0x2b8))(r14_1, sub_142365fb0(arg2, r14_1, i), arg3)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x30))

return zx.q(r15)
