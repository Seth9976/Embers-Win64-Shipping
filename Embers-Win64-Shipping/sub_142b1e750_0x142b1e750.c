// 函数: sub_142b1e750
// 地址: 0x142b1e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result

if (arg2 != arg3)
    result = *arg2
    
    if (result u>= *(arg1 + 0xa))
        uint32_t result_1 = zx.d(result)
        int32_t rax_4
        
        if ((result_1 & 0xfffff800) == 0xd800)
            uint32_t rcx_1
            
            if (not(test_bit(result_1, 0xa)) && &arg2[1] != arg3)
                rcx_1 = zx.d(arg2[1])
            
            if (test_bit(result_1, 0xa) || &arg2[1] == arg3 || (rcx_1 & 0xfffffc00) != 0xdc00)
                rax_4 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                int32_t rdx_5 = ((result_1 - 0xd7f7) << 0xa) + rcx_1
                int64_t* rcx_2 = *(arg1 + 0x20)
                
                if (rdx_5 s< rcx_2[3].d)
                    rax_4 = sub_142b6a760(rcx_2, rdx_5)
                else
                    rax_4 = *(rcx_2 + 0x14) - 2
        else
            rax_4 = zx.d(*(**(arg1 + 0x20) + (zx.q(result_1) u>> 6 << 1))) + (result_1 & 0x3f)
        
        result = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_4) << 1))
        
        if (result u>= *(arg1 + 0x16) && (*(arg1 + 0x1a) u> result || result u>= *(arg1 + 0x1e)))
            return 0

result.b = 1
return result
