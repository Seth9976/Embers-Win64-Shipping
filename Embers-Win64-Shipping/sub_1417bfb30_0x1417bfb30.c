// 函数: sub_1417bfb30
// 地址: 0x1417bfb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x10))(arg2)
int64_t r8 = *arg1

if (rax_1 != (*(r8 + 0x10))(arg1, arg3, r8))
    int32_t result
    result.b = 0
    return result

uint64_t rax_2 = arg2[1]

if (arg1[1].d != rax_2.d || *(arg1 + 0xc) != (rax_2 u>> 0x20).d)
    rax_2.b = 0
else
    rax_2.b = 1

char r8_1

if (arg2[2].d[0] f!= arg1[2].d)
    r8_1 = 0
else
    r8_1 = 1

r8_1 &= rax_2.b

if (not((*(arg2 + 0x14))[0] f== *(arg1 + 0x14)))
    r8_1 = 0

if (arg2[3].d[0] f!= arg1[3].d)
    rax_2.b = 0
else
    rax_2.b = 1

r8_1 &= rax_2.b

if (not((*(arg2 + 0x1c))[0] f== *(arg1 + 0x1c)))
    r8_1 = 0

float temp0[0x4] = __subps_xmmps_memps(*(arg1 + 0x30), *(arg2 + 0x30))
uint32_t zmm4[0x4] = data_143ef8480
float temp0_1[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
char rcx_2

if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm4), 1)) != 0)
    rcx_2 = 0
else
    float zmm5_1[0x4] = *(arg1 + 0x20)
    float zmm3[0x4] = *(arg2 + 0x20)
    uint32_t temp0_8 =
        _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_sub_ps(zmm5_1, zmm3), zmm4), 1))
    uint32_t temp0_12
    
    if (temp0_8 != 0)
        temp0_12 =
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm3, zmm5_1), zmm4), 1))
    
    if (temp0_8 != 0 && temp0_12 != 0)
        rcx_2 = 0
    else if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, 
            _mm_and_ps(__subps_xmmps_memps(*(arg1 + 0x40), *(arg2 + 0x40)), zmm4), 1)) != 0)
        rcx_2 = 0
    else
        rcx_2 = 1

char rax_7 = 0

if (arg1[0xa].d == arg2[0xa].d)
    rax_7 = rcx_2

return rax_7 & r8_1
