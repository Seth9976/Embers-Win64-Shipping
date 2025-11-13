// 函数: sub_142c069e0
// 地址: 0x142c069e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg2 + 0x10)
int32_t rdi = *arg1
int32_t result = (*(r15 + 0x28))(r15, zx.q(rdi), *(r15 + 0x68))
int32_t result_1 = result

if (rdi u< 0x80)
    arg1[4].w = result.w
else
    *(arg2 + 0x28) |= 1
    
    if (sub_142c08a90(rdi) != 0)
        *(arg2 + 0x28) |= 2
        result_1 |= 0x20
        
        if (rdi == 0x200c)
            result_1 |= 0x200
        else if (rdi == 0x200d)
            result_1 |= 0x100
        else if (rdi - 0x180b u<= 2 || rdi - 0xe0020 u<= 0x5f)
            result_1 |= 0x40
        else if (rdi == 0x34f)
            *(arg2 + 0x28) |= 0x20
            result_1 |= 0x40
    
    if (result u>= 0x20)
        result = 0
    else
        result = 1 << result.b
    
    if ((result & 0x1c00) != 0)
        result = sub_142c08bb0(r15, rdi) << 8 | 0x80
        result_1 |= result
    
    arg1[4].w = result_1.w

return result
