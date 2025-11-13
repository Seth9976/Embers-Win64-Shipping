// 函数: sub_142bde840
// 地址: 0x142bde840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[1]
int32_t result = arg4 - arg3

if (result s< rcx)
    int32_t rax_1 = neg.d(rcx)
    int32_t r8_2 = (arg3 - 1 + rcx) & rax_1
    result = rax_1 & arg4
    
    if (r8_2 == result)
        int32_t r8_3 = r8_2 s>> (*arg1).b
        
        if (r8_3 s>= 0 && r8_3 u< arg1[0x24])
            result = arg1[0x26] * r8_3
            char* r8_7 = (sx.q(arg2) s>> 3) - sx.q(result) + *(arg1 + 0x50)
            *r8_7 |= (0x80 s>> (arg2.b & 7)).b

return result
