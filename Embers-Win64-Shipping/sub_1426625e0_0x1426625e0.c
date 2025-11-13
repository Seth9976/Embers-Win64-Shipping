// 函数: sub_1426625e0
// 地址: 0x1426625e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg1[3]
float zmm3[0x4] = *arg1
float zmm1[0x4] = (*arg1)[0x15]
float zmm0[0x4] = arg1[5][0]
int64_t rdx = arg1[2][0].q
float temp0[0x4] = _mm_add_ps(arg1[1], zmm3)
float temp0_1[0x4] = __subps_xmmps_memps(zmm3, arg1[1])
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_4[0x4] = _mm_add_ps(temp0_2, zmm2)
int64_t arg_8 = rdx
float temp0_5[0x4] = _mm_sub_ps(zmm2, temp0_2)
float temp0_6[0x4] = _mm_sub_ps(temp0_4, temp0_3)
float temp0_7[0x4] = _mm_add_ps(temp0_5, temp0_3)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xaa)
uint32_t temp0_11 =
    _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xaa), temp0_8, 1))
float temp0_12[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x55)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x55)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0)
int32_t rdi
rdi.b = temp0_11 == 0
uint32_t temp0_16 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_13, temp0_12, 1))
float temp0_17[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0)
int32_t rcx
rcx.b = temp0_16 == 0
float temp0_20[0x4] =
    _mm_cmpeq_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xaa), _mm_shuffle_ps(temp0, temp0, 0xaa), 1)
float temp0_21[0x4] = _mm_shuffle_ps(temp0, temp0, 0x55)
uint32_t temp0_23 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_14, temp0_17, 1))
float temp0_24[0x4] = _mm_shuffle_ps(temp0, temp0, 0)
uint32_t temp0_25 = _mm_movemask_ps(temp0_20)
int32_t rcx_1
rcx_1.b = temp0_23 == 0
float temp0_26[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
int32_t rcx_2
rcx_2.b = temp0_25 != 0
int32_t rcx_3
rcx_3.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_26, temp0_21, 1)) != 0
int32_t rcx_4
rcx_4.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_27, temp0_24, 1)) != 0
int32_t rbx_1 = arg_8.d & 0xfffffff0
uint8_t result

do
    int32_t r15_2 = rbx_1 & 7
    int32_t rcx_9 = (not.d(rbx_1) & 7) << 3 | r15_2
    
    if ((rcx_9 & ((((((((((rdi * 2) | rcx) * 2) | rcx_1) * 2) | rcx_2) * 2) | rcx_3) * 2) | rcx_4))
            == rcx_9)
        uint64_t r12_2 = zx.q(rbx_1) & 7
        uint64_t rbp_1 = zx.q(rbx_1)
        void* rax_8 = *(rdx + (r12_2 << 3) + 0x398)
        
        if (rax_8 != 0 && (*(rax_8 + 0x3d8) & 0x7fffffff) u> 0)
            float* r14_1 = &arg1[6]
            int64_t r13_1 = sx.q(r14_1[0x634])
            int32_t rax_9 = (r13_1 + 1).d
            r14_1[0x634] = rax_9
            
            if (rax_9 s> r14_1[0x635])
                sub_1409da5f0(r14_1, r13_1.d)
            
            float* rax_10 = *(r14_1 + 0x18c0)
            
            if (rax_10 != 0)
                r14_1 = rax_10
            
            void* rdx_4 = &r14_1[r13_1 * 0x10]
            
            if (r13_1 << 6 == neg.q(r14_1))
                rdx_4 = nullptr
            else
                *(rdx_4 + 0x10) = 0
                *(rdx_4 + 0x18) = 0
                *(rdx_4 + 0x1c) = 0x3f800000
                *(rdx_4 + 0x24) = 0
                *(rdx_4 + 0x2c) = 0x3f800000
                *rdx_4 = 0
            
            *rdx_4 = *(arg1[2][0].q i+ (r12_2 << 3) + 0x398)
            zmm0 = *(&data_142e669e0 + ((zx.q(rbp_1.d) & 1) << 2))
            zmm0[0] = zmm0[0] * (*arg1)[0x15]
            zmm0[0] = zmm0[0] + arg1[3][0]
            *(rdx_4 + 0x10) = zmm0[0]
            zmm0 = *(&data_142e669e0 + ((zx.q((rbp_1 u>> 1).d) & 1) << 2))
            zmm0[0] = zmm0[0] * (*arg1)[0x15]
            zmm0[0] = zmm0[0] + (*arg1)[0xd]
            *(rdx_4 + 0x14) = zmm0[0]
            zmm0 = *(&data_142e669e0 + ((zx.q((rbp_1 u>> 2).d) & 1) << 2))
            zmm0[0] = zmm0[0] * (*arg1)[0x15]
            zmm0[0] = zmm0[0] + (*arg1)[0xe]
            *(rdx_4 + 0x1c) = 0
            *(rdx_4 + 0x18) = zmm0[0]
            *(rdx_4 + 0x20) = arg1[5][0]
            *(rdx_4 + 0x24) = arg1[5][0]
            *(rdx_4 + 0x28) = arg1[5][0]
            *(rdx_4 + 0x2c) = 0
            zmm1 = arg1[5][0]
            zmm1[0] = zmm1[0] * 0.53125f
            *(rdx_4 + 0x30) = zmm1[0]
            zmm0 = arg1[5][0]
            zmm0[0] = zmm0[0] - zmm1[0]
            *(rdx_4 + 0x34) = zmm0[0]
            rdx = arg_8
    
    if (r15_2 u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    
    result = (rbx_1 u>> 3).b
while ((result & 1) == 0)

return result
