// 函数: sub_14267c300
// 地址: 0x14267c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rbx_1 = *(arg1 + 8)
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = muls.dp.d(0x55555556, *(arg1 + 0x18))
int64_t rax_2 = (*(*arg2 + 0x30))(arg2)
int64_t r8 = *arg2
int32_t i_3 = (*(r8 + 0x48))(arg2, arg4, r8)
int64_t r8_1 = *arg2
uint64_t i_2 = zx.q(i_3)
int32_t r14_3 = (i_2 << 1).d + i_2.d
int64_t r13_1 = (*(r8_1 + 0x50))(arg2, arg4, r8_1)
int32_t rdx_2 = *(arg1 + 0x18) + r14_3

if (rdx_2 s> *(arg1 + 0x1c))
    sub_1405dadb0(arg1 + 0x10, rdx_2)

int32_t rdx_4 = *(arg1 + 0x28) + r14_3

if (rdx_4 s> *(arg1 + 0x2c))
    sub_1405dadb0(arg1 + 0x20, rdx_4)

int64_t var_98_1 = 0
int32_t var_90_1 = 0
float zmm0[0x4] = arg3[2]
arg4 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
arg4[0] = arg4[0] * zmm0[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
arg4[0] = arg4[0] * zmm0[0]

if (i_2.d == 0)
    return 

float zmm6[0x4]
float var_58_1[0x4] = zmm6
arg4[0] - 0f
int32_t rax_4 = -1
int32_t rcx_5 = 1
int32_t arg_8 = (temp0_1 u>> 0x1f) + temp0_1 + 1
uint64_t i_1 = i_2
float zmm7[0x4]
float var_68_1[0x4] = zmm7
float zmm8[0x4]
float var_78_1[0x4] = zmm8

if (arg4[0] < 0f)
    rcx_5 = -1

if (arg4[0] < 0f)
    rax_4 = 1

uint64_t i

do
    for (int64_t j = 0; j s< 3; )
        bool cond:2_1 = *(rbx_1 + 0x48) == 0
        float zmm4_1[0x4] = *arg3
        uint64_t rax_5 = zx.q(*(r13_1 + (j << 1)))
        arg4 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        uint64_t rcx_6 = rax_5 * 3
        float zmm5_1[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rax_2 + (rcx_6 << 2)), (*(rax_2 + (rcx_6 << 2) + 8))[0].q), 
                _mm_unpacklo_ps(*(rax_2 + (rcx_6 << 2) + 4), 0)[0].q), 
            arg3[2])
        float zmm2[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2)
        float zmm3[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), arg4), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm4_1 = _mm_mul_ps(zmm4_1, zmm3)
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), arg4)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
        zmm6 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm0, zmm2)), zmm4_1), 
            arg3[1])
        var_98_1.d = zmm6[0]
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        var_98_1:4.d = zmm7[0]
        float var_90_2 = zmm8[0]
        
        if (cond:2_1)
            arg4 = zx.o(var_98_1)
            *(rbx_1 + 0x3c) = arg4.q
            *(rbx_1 + 0x30) = arg4.q
            *(rbx_1 + 0x44) = var_90_2
            *(rbx_1 + 0x38) = var_90_2
            *(rbx_1 + 0x48) = 1
        else
            arg4 = *(rbx_1 + 0x34)
            zmm0 = _mm_min_ss((*(rbx_1 + 0x30))[0], zmm6[0])
            arg4 = _mm_min_ss(arg4[0], zmm7[0])
            *(rbx_1 + 0x30) = zmm0[0]
            zmm0 = *(rbx_1 + 0x38)
            *(rbx_1 + 0x34) = arg4[0]
            zmm0 = _mm_min_ss(zmm0[0], zmm8[0])
            arg4 = __maxss_xmmss_memss(zmm6[0], *(rbx_1 + 0x3c))
            *(rbx_1 + 0x38) = zmm0[0]
            zmm0 = __maxss_xmmss_memss(zmm7[0], *(rbx_1 + 0x40))
            *(rbx_1 + 0x3c) = arg4[0]
            arg4 = _mm_max_ss((*(rbx_1 + 0x44))[0], zmm8[0])
            *(rbx_1 + 0x40) = zmm0[0]
            *(rbx_1 + 0x44) = arg4[0]
        
        int64_t rbp_1 = sx.q(*(arg1 + 0x18))
        int32_t rax_7 = (rbp_1 + 1).d
        *(arg1 + 0x18) = rax_7
        
        if (rax_7 s> *(arg1 + 0x1c))
            sub_1406105e0(arg1 + 0x10)
        
        *(*(arg1 + 0x10) + (rbp_1 << 2)) = zmm6[0]
        int64_t rbp_2 = sx.q(*(arg1 + 0x18))
        int32_t rax_9 = (rbp_2 + 1).d
        *(arg1 + 0x18) = rax_9
        
        if (rax_9 s> *(arg1 + 0x1c))
            sub_1406105e0(arg1 + 0x10)
        
        *(*(arg1 + 0x10) + (rbp_2 << 2)) = zmm7[0]
        int64_t rbp_3 = sx.q(*(arg1 + 0x18))
        int32_t rax_11 = (rbp_3 + 1).d
        *(arg1 + 0x18) = rax_11
        
        if (rax_11 s> *(arg1 + 0x1c))
            sub_1406105e0(arg1 + 0x10)
        
        j += 1
        *(*(arg1 + 0x10) + (rbp_3 << 2)) = zmm8[0]
    
    int64_t rbp_4 = sx.q(*(arg1 + 0x28))
    r13_1 += 6
    int32_t rax_13 = (rbp_4 + 1).d
    *(arg1 + 0x28) = rax_13
    
    if (rax_13 s> *(arg1 + 0x2c))
        sub_1405a4cf0(arg1 + 0x20)
    
    *(*(arg1 + 0x20) + (rbp_4 << 2)) = rcx_5 + arg_8
    int64_t rbp_5 = sx.q(*(arg1 + 0x28))
    int32_t rax_15 = (rbp_5 + 1).d
    *(arg1 + 0x28) = rax_15
    
    if (rax_15 s> *(arg1 + 0x2c))
        sub_1405a4cf0(arg1 + 0x20)
    
    *(*(arg1 + 0x20) + (rbp_5 << 2)) = arg_8
    int64_t rbp_6 = sx.q(*(arg1 + 0x28))
    int32_t rax_17 = (rbp_6 + 1).d
    *(arg1 + 0x28) = rax_17
    
    if (rax_17 s> *(arg1 + 0x2c))
        sub_1405a4cf0(arg1 + 0x20)
    
    int32_t rdx_14 = rax_4 + arg_8
    i = i_1
    i_1 -= 1
    arg_8 += 3
    *(*(arg1 + 0x20) + (rbp_6 << 2)) = rdx_14
while (i != 1)
