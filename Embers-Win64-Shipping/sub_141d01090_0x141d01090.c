// 函数: sub_141d01090
// 地址: 0x141d01090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d01100(arg1, arg2)
uint64_t result = sub_141cfded0(arg1, arg2, 1)

if (result.b == 0)
    result = zx.q(arg1[6].d)
    
    if (result.d s> 0)
        int64_t r8_1 = 0
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            result = arg1[5]
            
            if ((result.b & 1) != 0)
                result = (result s>> 1) + &arg1[5]
            
            int64_t rcx_3 = (sx.q(arg1[6].d) - 1) & r8_1
            r8_1 += 1
            *(result + (rcx_3 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
