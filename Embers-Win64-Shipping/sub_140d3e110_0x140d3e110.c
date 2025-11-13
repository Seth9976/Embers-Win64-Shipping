// 函数: sub_140d3e110
// 地址: 0x140d3e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1]
uint64_t result

if (r8 != 0)
    result = zx.q(*arg1)
    
    if (result.d s>= 0 && result.d s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result.d)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_1 = temp1_1 + rdx_2
        result =
            *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(zx.d(rax_1.w) - rdx_2) * 0x18
        
        if (result != 0 && *(result + 0x10) == r8 && (*(result + 8) & 0x30000000) == 0)
            result.b = 1
            return result

result.b = 0
return result
