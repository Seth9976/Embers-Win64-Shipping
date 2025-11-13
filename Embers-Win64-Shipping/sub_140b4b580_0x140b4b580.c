// 函数: sub_140b4b580
// 地址: 0x140b4b580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* r8_2 = (sx.q(arg1[1].d) << 5) + result

if (result != r8_2)
    uint128_t zmm0 = *arg2
    int64_t r11_1 = zmm0.q
    int64_t rbx_1 = _mm_bsrli_si128(zmm0, 8).q
    
    do
        int32_t rdx_4 = (*(result + 4) ^ (r11_1 u>> 0x20).d)
            | (*(result + 0xc) ^ (rbx_1 u>> 0x20).d) | (*(result + 8) ^ rbx_1.d)
            | (*result ^ r11_1.d)
        
        if (rdx_4 == 0)
            return result
        
        result += 0x20
    while (result != r8_2)

return nullptr
