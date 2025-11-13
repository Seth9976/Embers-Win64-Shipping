// 函数: sub_1423bdd60
// 地址: 0x1423bdd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x150))()

if ((*(arg1 + 0xdc) & 1) == 0)
    *(arg1 + 0xe4) = 1
else
    int32_t rdx_1 = *(arg1 + 0xc4)
    int32_t rax_1 = arg1[0x18].d
    
    if (rax_1 s>= rdx_1)
        rdx_1 = rax_1
    
    float zmm0_1[0x4] = logf(_mm_cvtepi32_ps(zx.o(rdx_1)).d)
    zmm0_1[0] = zmm0_1[0] * 1.44269502f
    int32_t rcx = int.d(zmm0_1[0])
    
    if (rcx != 0x80000000)
        arg2 = _mm_cvtepi32_ps(zx.o(rcx))
        
        if (not(arg2.d f== zmm0_1[0]))
            zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx
                + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm0_1, zmm0_1[0].q)) & 1) ^ 1)))
    
    *(arg1 + 0xe4) = int.d(zmm0_1[0])
    int64_t* rcx_2 = data_143f0f180
    
    if ((*(*rcx_2 + 0x6e8))(rcx_2, arg2) != 0)
        *(arg1 + 0xbc) |= 2

void*** result = j_sub_140a82f30(0xc0)

if (result == 0)
    return 0

result[1].d = 0xffffffff
*(result + 0xc) = 4
__builtin_memset(&result[2], 0, 0x18)
result[5] = -0x3810000020000000
__builtin_memset(&result[6], 0, 0x17)
result[0xa] = 0
__builtin_memset(&result[0xc], 0, 0x19)
*result = &data_14333b6b8
result[9] = &data_14333b728
result[0xb] = &data_14333b768
result[0x10] = arg1
result[0x11] = 0
*(result + 0x90) = *(arg1 + 0xc8)
char rax_8 = arg1[0x1c].b
uint32_t rax_9

if (rax_8 != 0)
    rax_9 = zx.d(rax_8)
else
    rax_9 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

result[0x14].d = rax_9
*(result + 0xa4) = arg1[0x18].d
result[0x15].d = *(arg1 + 0xc4)
result[0x16] = 0
result[0x17] = 0
return result
