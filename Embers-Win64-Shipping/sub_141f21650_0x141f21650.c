// 函数: sub_141f21650
// 地址: 0x141f21650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eefdd0(arg1)

if (arg1[0x4c] != 0 && *(arg1 + 0x14f) == 0 && arg1[0x14] != 0)
    arg1[0x4c] = 0

float temp0 = _mm_max_ss(*(arg1 + 0x204), 0)
*(arg1 + 0x234) = 0xffffffff
*(arg1 + 0x204) = temp0
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0xe4)
    void* rdi_1 = arg1[0x4f]
    
    if (rdi_1 != 0)
        *(arg1 + 0x204) = *(arg1 + 0x204) f/ *(rdi_1 + 0xec)
        float zmm0_2
        zmm0_2, result = powf(*(arg1 + 0x284), 2.20000005f)
        *(arg1 + 0x284) = zmm0_2
        *(arg1 + 0x284) = zmm0_2 f/ *(rdi_1 + 0xec)

return result
