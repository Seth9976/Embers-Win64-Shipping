// 函数: sub_141f811b0
// 地址: 0x141f811b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    int32_t zmm1 = *(arg1 + 0x2c)
    int32_t zmm0_1 = *(arg1 + 0x28)
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x30)))
    *rcx = &data_143283750
    rcx[1].d = zmm0_1
    rcx[2].d = zmm2.d
    *(rcx + 0xc) = zmm1

void**** result = arg2 + 0x88
void arg_10

if (result != &arg_10)
    void*** r8_1 = *result
    *result = rcx
    
    if (r8_1 != 0)
        jump(*(*r8_1 + 0x10))
else if (rcx != 0)
    return (*rcx)[2](rcx, 1)

return result
