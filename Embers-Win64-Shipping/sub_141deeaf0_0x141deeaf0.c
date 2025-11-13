// 函数: sub_141deeaf0
// 地址: 0x141deeaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
uint32_t zmm6_1[0x4]
result, zmm6_1 = sub_141decfa0(arg1, arg2)
zmm6_1[0] = zmm6_1[0] f- 1f

if (not(__andps_xmmxud_memxud(zmm6_1, data_142d3f770)[0] f> 9.99999994e-09f))
    return sub_141deea30(arg1, arg2) __tailcall

int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rdx_2 = 0
    
    do
        rdx_2 += 8
        i += 1
        *(rdx_2 + *arg1 - 4) = *(*arg2 + rdx_2 - 4)
        zmm6_1[0] = zmm6_1[0] f* *(*arg2 + rdx_2 - 8)
        result = *arg1
        *(rdx_2 + result - 8) = zmm6_1[0]
    while (i s< arg2[1].d)

return result
