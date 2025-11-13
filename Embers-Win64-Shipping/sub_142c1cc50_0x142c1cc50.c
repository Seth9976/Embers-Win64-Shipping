// 函数: sub_142c1cc50
// 地址: 0x142c1cc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int128_t* const result

if (*(arg1 + 0x10) u<= 0)
label_142c1cce7:
    result.b = 0
else
    if (0 u>= *(arg1 + 0x10))
        result = &data_14369a5d0
        goto label_142c1cc8c
    
    while (true)
        result = (zx.q(rbx) << 5) + *(arg1 + 0x18)
    label_142c1cc8c:
        void* r8_1 = *(arg2 + 0x90)
        int32_t r8_2 = *(*(r8_1 + 0x70) + zx.q(*(r8_1 + 0x5c)) * 0x14)
        
        if (test_bit(result[1].d, r8_2 u>> 4 & 0x1f) && test_bit(*(result + 0x14), r8_2 & 0x1f))
            int32_t r8_4 = r8_2 u>> 9 & 0x1f
            
            if (test_bit(*(result + 0x18), r8_4) && (*(result + 8))(*result, arg2, r8_4).b != 0)
                result.b = 1
                break
        
        rbx += 1
        
        if (rbx u>= *(arg1 + 0x10))
            goto label_142c1cce7

return result
