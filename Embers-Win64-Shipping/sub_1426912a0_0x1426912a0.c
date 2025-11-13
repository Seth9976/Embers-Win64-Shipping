// 函数: sub_1426912a0
// 地址: 0x1426912a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1
zmm1.d = (*(arg1 + 0x140)).d f/ *(arg1 + 0xdc)
int32_t r10 = *(arg1 + 0x104)
int32_t r9 = *(arg1 + 0x12c)
int512_t zmm0
zmm0.o = 0xbf000000
zmm1.d = zmm1.d f+ zmm1.d
zmm0.d = -0.5f f- zmm1.d
int32_t rdx = int.d(zmm0.d)
zmm0.o = zx.o(0)
int32_t rdx_2 = neg.d(rdx s>> 1)

if (not(_mm_cvtepi32_ps(zx.o(r10)).d f<= 0f))
    uint8_t rax = 0
    
    if ((r9.b & 0x10) != 0)
        rax = (not.b((r9 u>> 5).b) & 1) | 2
    
    int32_t* r8 = *(arg3 + 0x10)
    int64_t r9_1
    
    if ((r9.b & 8) == 0)
        rax, r9_1 = sub_142631460(arg2, r10.b, r8, zmm0)
    else
        r9.b = 0x3e
        rax, r9_1 = sub_142630af0(arg2, r10.b, rdx_2, r9.b, zmm0, rax, r8)
    
    if (rax == 0)
        sub_14262d160(arg2, 3, "GenerateCompressedLayers: Could not erode.", r9_1)
        int64_t result
        result.b = 0
        return result
else if ((r9.b & 8) != 0)
    int32_t* r9_2 = *(arg3 + 0x10)
    arg3.b = 0x3e
    sub_142632750(arg2, rdx_2, arg3.b, r9_2)

return 1
