// 函数: sub_140b4fb20
// 地址: 0x140b4fb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4fba0(arg1, arg2)
uint64_t result = sub_140b4e3b0(arg1, arg2, 1)

if (result.b == 0)
    result = zx.q(*(arg1 + 0xab8))
    
    if (result.d s> 0)
        int64_t r8_1 = 0
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            uint64_t result_1 = *(arg1 + 0xab0)
            result = arg1 + 0xa30
            int64_t rdx_3 = (sx.q(*(arg1 + 0xab8)) - 1) & r8_1
            
            if (result_1 != 0)
                result = result_1
            
            r8_1 += 1
            *(result + (rdx_3 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
