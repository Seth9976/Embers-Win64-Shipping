// 函数: sub_141f70020
// 地址: 0x141f70020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_141f23e50(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
int64_t* result = sub_141f52180(arg2, arg1 + 0x460, zmm1)

if ((arg2[5].b & 1) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x468) s> 0)
        int64_t rdx_1 = 0
        
        do
            result = *(arg1 + 0x460)
            rdx_1 += 0x90
            i += 1
            *(rdx_1 + result - 8) = arg1
        while (i s< *(arg1 + 0x468))

if (arg2[8].d s< 0xe8)
    int128_t zmm0_1
    zmm0_1.d = (*(arg1 + 0x4c0)).d f- 1.57079637f
    int32_t zmm1_1 = *(arg1 + 0x4c4)
    *(arg1 + 0x525) = 2
    *(arg1 + 0x4c0) = zmm0_1.d
    zmm0_1.d = (*(arg1 + 0x4ec)).d f- 1.57079637f
    *(arg1 + 0x4ec) = zmm0_1.d
    *(arg1 + 0x4c4) = (*(arg1 + 0x4c8) ^ data_142d3f780).d
    zmm0_1 = *(arg1 + 0x4f4) ^ data_142d3f780
    *(arg1 + 0x4c8) = zmm1_1
    zmm1_1 = *(arg1 + 0x4f0)
    *(arg1 + 0x4f0) = zmm0_1.d
    *(arg1 + 0x4f4) = zmm1_1

return result
