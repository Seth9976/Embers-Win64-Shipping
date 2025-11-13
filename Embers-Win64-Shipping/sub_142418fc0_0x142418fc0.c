// 函数: sub_142418fc0
// 地址: 0x142418fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(arg1[0x1b].d, 0).b == 0
int64_t result
result.b = *(arg1 + 0xdc) != 0
result.b |= r8

if (result.b != 0)
    sub_1424026c0(arg2)
    result = arg1[0x1b]
    
    if (result == data_143f5bc58)
        result = (*(*arg1 + 0x2d0))(arg1, arg2)
    else if (result == data_143f5bcb8)
        result = (*(*arg1 + 0x2f8))(arg1, arg2)
    
    if (*(arg2 + 0x80) != 0 || *(arg2 + 0x84) != 0)
        int64_t* rcx_5 = *(arg2 + 0x260) + 0x28
        rcx_5[1].d -= 1
        sub_140976b40(rcx_5)
        int32_t rax_2 = *(arg2 + 0x78)
        int32_t rcx_6 = *(arg2 + 0x7c)
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x40)))
        *(arg2 + 0x40) = rax_2
        zmm0_1.d = zmm0_1.d f- *(arg2 + 0x30)
        int32_t r8_1 = int.d(zmm0_1.d)
        zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x44)))
        result = zx.q(rax_2 - r8_1)
        *(arg2 + 0x44) = rcx_6
        zmm0_1.d = zmm0_1.d f- *(arg2 + 0x34)
        *(arg2 + 0x30) = _mm_cvtepi32_ps(zx.o(result.d)).d
        *(arg2 + 0x34) = _mm_cvtepi32_ps(zx.o(rcx_6 - int.d(zmm0_1.d))).d

return result
