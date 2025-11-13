// 函数: sub_1421f8d70
// 地址: 0x1421f8d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x68) != 1)
    return 

int32_t rax_1

if (*(arg1 + 0x30) != 1)
    rax_1 = sub_141f64920(arg3)
else
    rax_1 = sub_142319650(*(arg3 + 0x430))

int32_t i = 0

if (*(arg1 + 0x64) s> 0)
    int32_t* r8 = nullptr
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_1)).d f- 0.5f
    
    do
        i += 1
        int32_t rax_3 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
        *(arg4 + 4) = rax_3
        *(r8 + *(arg2 + 0x40)) = int.d(((rax_3 u>> 9 | 0x3f800000) - 1f) f* zmm2.d)
        r8 = &r8[1]
    while (i s< *(arg1 + 0x64))

if (((*(arg1 + 0x54)).b & 5) == 4)
    sub_142208620(arg1, arg2, arg3, (zx.o(0)).d)
