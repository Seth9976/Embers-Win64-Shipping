// 函数: sub_1421f1630
// 地址: 0x1421f1630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(*(arg1 + 0x118))
int32_t rax = 0

if (i_1 s> 0)
    int32_t* r9_1 = *(arg1 + 0x110)
    int64_t i
    
    do
        int32_t rdx = *r9_1
        
        if (rdx s> 0)
            if (rax == 0)
                rax = -2
            
            rax += (rdx + 4) * *(arg1 + 0x14c)
        
        r9_1 = &r9_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg2 = rax
int32_t result = *(arg1 + 0x108)
*arg3 = result
return result
