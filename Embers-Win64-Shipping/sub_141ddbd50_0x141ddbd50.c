// 函数: sub_141ddbd50
// 地址: 0x141ddbd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg4

if (arg4 == 0)
    rbx = arg1 + 0x250

float zmm6_1[0x4] = sub_141e7ce30(*(arg1 + 0x50), arg3, rbx, rbx + 4)
*(rbx + 0xc) = 0x3f800000
*(rbx + 0x10) = 0x3f800000
void* result = *(arg3 + 0x80)
char rcx_1 = *(result + 0xb0)

if ((rcx_1 & 8) != 0 && (rcx_1 & 2) != 0)
    result = sub_141e7dd10(*(arg1 + 0x50))
    float zmm0_1[0x4] = sub_141e7dc60(*(arg1 + 0x50), *rbx, *(arg3 + 0x80))
    void* rcx_4 = *(arg3 + 0x80)
    
    if ((*(rcx_4 + 0xb0) & 0x10) != 0)
        float zmm4_1[0x4] = *(rbx + 8)
        int32_t zmm3_1
        
        if (zmm0_1[0] > zmm4_1[0])
            zmm3_1 = *(rcx_4 + 0x214)
        else
            zmm3_1 = *(rcx_4 + 0x210)
        
        zmm0_1 = sub_140ad6340(zmm4_1, zmm0_1, zmm6_1, zmm3_1)
    
    *(rbx + 8) = zmm0_1[0]
    float zmm0_2 = sub_1423648a0(*(arg3 + 0x80), result, zmm0_1[0])
    float zmm2_1[0x4] = *(rbx + 8)
    *(rbx + 0x10) = zmm0_2
    float zmm0_3 = sub_142364870(*(arg3 + 0x80), result, zmm2_1[0])
    zmm2_1 = *(rbx + 8)
    *(rbx + 0xc) = zmm0_3
    *(rbx + 0x18) = sub_142364840(*(arg3 + 0x80), result, zmm2_1[0])

return result
