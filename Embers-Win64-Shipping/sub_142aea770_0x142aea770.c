// 函数: sub_142aea770
// 地址: 0x142aea770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
uint64_t result

if (arg2 s<= 0)
    if (arg2 s>= 0)
    label_142aea844:
        result.b = 1
        return result
    
    while (*(arg1 + 0x28) s> 0 || (*(*(arg1 + 0x38) + 0x20))(arg1, *(arg1 + 0x20), 0).b != 0)
        int32_t r8_2 = *(arg1 + 0x28) - 1
        
        if ((zx.d(*(*(arg1 + 0x30) + (sx.q(r8_2) << 1))) & 0xfffff800) != 0xd800)
            *(arg1 + 0x28) = r8_2
        else if (sub_142aeabf0(arg1).d == 0xffffffff)
            break
        
        int32_t temp1_1 = rdi
        rdi += 1
        
        if (temp1_1 + 1 s>= 0)
            goto label_142aea844
else
    while (true)
        int64_t r8
        
        if (*(arg1 + 0x28) s>= *(arg1 + 0x2c))
            r8.b = 1
            
            if ((*(*(arg1 + 0x38) + 0x20))(arg1, *(arg1 + 0x10), r8).b == 0)
                break
        
        r8 = sx.q(*(arg1 + 0x28))
        
        if ((zx.d(*(*(arg1 + 0x30) + (r8 << 1))) & 0xfffff800) != 0xd800)
            *(arg1 + 0x28) = (r8 + 1).d
        else
            result, r8 = sub_142aea870(arg1, arg3)
            
            if (result.d == 0xffffffff)
                break
        
        rdi -= 1
        
        if (rdi s<= 0)
            result.b = 1
            return result

result.b = 0
return result
