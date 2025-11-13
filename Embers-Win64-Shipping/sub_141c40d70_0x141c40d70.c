// 函数: sub_141c40d70
// 地址: 0x141c40d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rbx)[0x4] = arg2
int32_t rcx_1 = arg4 & 0x80000003

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xfffffffc) + 1

float result[0x4] = *arg1
float zmm7[0x4] = data_142ff88b0
float result_1[0x4] = result
result ^= data_142d3f780
int32_t r14_1 = arg4 - rcx_1
float zmm8[0x4] = data_143205590
float temp0[0x4] = _mm_shuffle_ps(result, result, 0)
float temp0_1[0x4] = _mm_shuffle_ps(result_1, result_1, 0)
uint32_t zmm1[0x4]

if (arg4 s> 0)
    uint64_t i_3 = zx.q(((arg4 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        float zmm4[0x4] = *(arg3 - rbx + arg2)
        zmm1 = data_143f34880
        float temp0_3[0x4] = __addps_xmmps_memps(_mm_mul_ps(zmm4, temp0_1), *arg2)
        float temp0_4[0x4] = _mm_cmpeq_ps(zmm8, temp0_3, 1)
        result = _mm_cmpeq_ps(temp0_3, zmm7, 1)
        float zmm3[0x4] = _mm_and_ps(_mm_and_ps(temp0_4, result), zmm1 ^ temp0_3) ^ temp0_3
        *(arg6 - rbx + arg2) = zmm3
        *(arg5 - rbx + arg2) = _mm_add_ps(_mm_mul_ps(zmm3, temp0), zmm4)
        arg2 = &arg2[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r14_1 s< arg4)
    if (rcx_1 s>= 4)
        void* r9_3 = rbx - arg3
        void* rcx_6 = arg3 + ((sx.q(r14_1) + 1) << 2)
        void* r8_2 = arg6 - arg3
        float* rdx_1 = arg5 - arg3
        uint64_t rax_7 = zx.q(((arg4 - r14_1 - 4) u>> 2) + 1)
        uint64_t i_5 = zx.q(rax_7.d)
        r14_1 += (rax_7 << 2).d
        uint64_t i_1
        
        do
            zmm1 = *(rcx_6 - 4)
            zmm1[0] = zmm1[0] f* *arg1
            zmm1[0] = zmm1[0] f+ *(r9_3 + rcx_6 - 4)
            
            if (not(zmm1[0] f<= -1.17549435e-38f) && not(zmm1[0] f>= 1.17549435e-38f))
                zmm1 = zx.o(0)
            
            *(r8_2 + rcx_6 - 4) = zmm1[0]
            uint32_t* rax_8 = r8_2 + rcx_6
            zmm1[0] = zmm1[0] f* *arg1
            result = *(rcx_6 - 4)
            result[0] = result[0] f- zmm1[0]
            *(rdx_1 + rcx_6 - 4) = result[0]
            zmm1 = *rcx_6
            zmm1[0] = zmm1[0] f* *arg1
            zmm1[0] = zmm1[0] f+ *(rax_8 + rbx - arg6)
            
            if (not(zmm1[0] f<= -1.17549435e-38f) && not(zmm1[0] f>= 1.17549435e-38f))
                zmm1 = zx.o(0)
            
            *rax_8 = zmm1[0]
            zmm1[0] = zmm1[0] f* *arg1
            result = *rcx_6
            result[0] = result[0] f- zmm1[0]
            *(rdx_1 + rcx_6) = result[0]
            zmm1 = *(rcx_6 + 4)
            zmm1[0] = zmm1[0] f* *arg1
            zmm1[0] = zmm1[0] f+ *(r9_3 + rcx_6 + 4)
            
            if (not(zmm1[0] f<= -1.17549435e-38f) && not(zmm1[0] f>= 1.17549435e-38f))
                zmm1 = zx.o(0)
            
            *(r8_2 + rcx_6 + 4) = zmm1[0]
            zmm1[0] = zmm1[0] f* *arg1
            result = *(rcx_6 + 4)
            result[0] = result[0] f- zmm1[0]
            *(rdx_1 + rcx_6 + 4) = result[0]
            zmm1 = *(rcx_6 + 8)
            zmm1[0] = zmm1[0] f* *arg1
            zmm1[0] = zmm1[0] f+ *(r9_3 + rcx_6 + 8)
            
            if (not(zmm1[0] f<= -1.17549435e-38f) && not(zmm1[0] f>= 1.17549435e-38f))
                zmm1 = zx.o(0)
            
            *(r8_2 + rcx_6 + 8) = zmm1[0]
            result = *(rcx_6 + 8)
            zmm1[0] = zmm1[0] f* *arg1
            result[0] = result[0] f- zmm1[0]
            *(rdx_1 + rcx_6 + 8) = result[0]
            rcx_6 += 0x10
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    if (r14_1 s< arg4)
        uint64_t i_4 = zx.q(arg4 - r14_1)
        uint32_t (* rcx_7)[0x4] = arg3 + (sx.q(r14_1) << 2)
        uint64_t i_2
        
        do
            zmm1 = *rcx_7
            uint32_t* rax_10 = rcx_7 + arg6 - arg3
            zmm1[0] = zmm1[0] f* *arg1
            zmm1[0] = zmm1[0] f+ *(rax_10 + rbx - arg6)
            
            if (not(zmm1[0] f<= -1.17549435e-38f) && not(zmm1[0] f>= 1.17549435e-38f))
                zmm1 = zx.o(0)
            
            *rax_10 = zmm1[0]
            result = *rcx_7
            zmm1[0] = zmm1[0] f* *arg1
            result[0] = result[0] f- zmm1[0]
            *(rcx_7 + arg5 - arg3) = result[0]
            rcx_7 = &(*rcx_7)[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return result
