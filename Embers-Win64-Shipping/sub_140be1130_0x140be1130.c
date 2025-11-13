// 函数: sub_140be1130
// 地址: 0x140be1130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1
uint64_t result

if (arg2 != 0 && ((*(arg2 + 0xcc) u>> 0xe).b & 1) != 0 && arg2 != sub_140cbe090() && i != 0)
    do
        result = 0
        
        while (result.d s>= 0)
            if (result.d s>= *(i + 0x1e0))
                break
            
            void* rcx_1 = *(*(i + 0x1d8) + sx.q(result.d) * 0x10)
            
            if (rcx_1 != 0)
                int64_t rdx_2 = sx.q(*(arg2 + 0x38))
                
                if (rdx_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_2 << 3)) == arg2 + 0x30)
                    result.b = 1
                    return result
            
            result = zx.q(result.d + 1)
        
        i = *(i + 0x40)
    while (i != 0)

result.b = 0
return result
