// 函数: sub_1423944c0
// 地址: 0x1423944c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int32_t zmm6_1
result, zmm6_1 = sub_14239a450(arg1 + 0x10)
void* rdx = *(arg1 + 8)
int32_t r8 = *(arg1 + 0x28)
int32_t rcx_1 = *(rdx + 0x130)

if (r8 s< rcx_1)
    void* rbx_1 = *(arg1 + 0x10)
    uint128_t zmm2_1
    zmm2_1.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* zmm6_1
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    int32_t r9_2 = r8 - (int.d(-0.5f f- zmm2_1.d) s>> 1)
    
    if (rcx_1 s<= r9_2)
        r9_2 = rcx_1
    
    result = sub_1423b1860(rbx_1 + 0x10, rdx, r8, r9_2)
    *(rbx_1 + 0x30) = 1

return result
