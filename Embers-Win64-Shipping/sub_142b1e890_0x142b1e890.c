// 函数: sub_142b1e890
// 地址: 0x142b1e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 s>= zx.d(*(arg1 + 0xc)))
    if (arg2 s> 0xffff)
    label_142b1e8d4:
        result = sub_142af42a0(arg1, arg2)
        
        if (result.w u>= *(arg1 + 0x16))
            if (result.w u< *(arg1 + 0x1a))
                uint64_t rcx_2 = zx.q(result.w)
                result = *(arg1 + 0x30)
                uint64_t rcx_3 = rcx_2 u>> 1
                
                if ((*(result + (rcx_3 << 1)) & 0x80) != 0
                        && (*(result + (rcx_3 << 1) - 2) & 0xff00) != 0)
                    result.b = 0
                    return result
            else if (result.w u> 0xfc00 && result.w != 0xfe00)
                result.b = 0
                return result
    else
        uint8_t r9_1 = *((sx.q(arg2) s>> 8) + *(arg1 + 0x38))
        
        if (r9_1 != 0)
            result.b = (arg2 s>> 5).b & 7
            
            if ((r9_1 u>> result.b & 1) != 0)
                goto label_142b1e8d4

result.b = 1
return result
