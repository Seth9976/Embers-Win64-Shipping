// 函数: sub_1422072e0
// 地址: 0x1422072e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x118)
int64_t rbp = *(arg2 + 0xf0)
uint32_t result = rax - 1
int32_t r14 = *(arg2 + 0x114)
int64_t r15 = *(arg2 + 0xf8)
int64_t result_1 = sx.q(result)

if (rax - 1 s>= 0)
    int64_t result_2
    
    do
        void* rbx_3 = zx.q(zx.d(*(r15 + (result_1 << 1))) * r14) + rbp
        
        if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
            int64_t var_60_1 = 0
            int32_t var_58
            uint32_t zmm6_1[0x4] = sub_141fe56b0(arg1 + 0x30, &var_58, *(rbx_3 + 0xc), arg3, 
                (*(arg2 + 0x18)).d, nullptr)
            uint32_t zmm2[0x4] = *(rbx_3 + 0x40)
            uint32_t zmm0_1[0x4] = _mm_and_ps(*(rbx_3 + 0x48), zmm6_1)
            int32_t var_50
            zmm0_1[0] = zmm0_1[0] f* var_50
            zmm2 = _mm_and_ps(zmm2, zmm6_1)
            arg3 = *(rbx_3 + 0x44)
            zmm2[0] = zmm2[0] f* var_58
            arg3 = _mm_and_ps(arg3, zmm6_1)
            int32_t var_54
            arg3[0] = arg3[0] f* var_54
            result = zmm0_1[0]
            *(rbx_3 + 0x50) = (_mm_unpacklo_ps(zmm2, arg3[0].q)).q
            *(rbx_3 + 0x58) = result
        
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
