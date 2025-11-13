// 函数: sub_142890ce0
// 地址: 0x142890ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int32_t temp0 = result.d
bool cond:0 = temp0 != 0

if (temp0 s> 0)
    int64_t r9_1 = *arg1 + (result << 3)
    
    do
        bool cond:1_1 = *(r9_1 - 8) != 0
        r9_1 -= 8
        
        if (cond:1_1)
            break
        
        result = zx.q(result.d - 1)
    while (result.d s> 0)
    
    arg1[1].d = result.d
    cond:0 = result.d != 0

if (not(cond:0))
    arg1[2].d = 0

return result
