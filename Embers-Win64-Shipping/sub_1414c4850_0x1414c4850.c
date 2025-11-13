// 函数: sub_1414c4850
// 地址: 0x1414c4850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg2 + 4)
float zmm2[0x4] = *(arg2 + 8)
uint64_t rcx = zx.q(data_14401b1a0)
int32_t rdi = data_143cda914
float zmm6[0x4] = *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0[0] = zmm1[0]
int32_t var_50 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2[0]
uint128_t zmm7 = zx.o(*arg5)
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0x3f800000
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float var_58[0x4] = temp0_3
float rax = arg5[1].d
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(arg3 + 0x350))
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(arg3 + 0x340))
void* r12 = *(ThreadLocalStoragePointer + (rcx << 3))
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg3 + 0x370))
float temp0_10[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
float temp0_11[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_14[0x4] =
    _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(temp0_10, *(arg3 + 0x360)), temp0_9), temp0_11)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
temp0_15[0] = temp0_15[0] f+ *(arg2 + 0xc)
zmm7.d = zmm7.d f* temp0_15[0]
zmm7.d = zmm7.d f+ *(arg5 + 4)

if (rdi s> *(r12 + 0x14))
    _Init_thread_header(&data_143cda914)
    rdi = data_143cda914
    
    if (rdi == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)
        rdi = data_143cda914

float zmm0_1 = logf(zmm7[0])
temp0_15[0] = temp0_15[0] f- *(arg2 + 0xc)
float rax_1 = arg5[1].d
zmm7.d = (*arg5).d f* temp0_15[0]
int32_t rsi = int.d(zmm0_1 f* data_143cda910 * rax)
zmm7.d = zmm7.d f+ *(arg5 + 4)

if (rdi s> *(r12 + 0x14))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

float zmm0_2 = logf(zmm7.d) f* data_143cda910
int32_t rax_3 = *(arg4 + 8) - 1
int32_t rdx = int.d(zmm0_2 * rax_1)
int32_t rcx_1

if (rdx s>= 0)
    rcx_1 = rax_3
    
    if (rdx s< rax_3)
        rcx_1 = rdx
else
    rcx_1 = 0

*arg1 = rcx_1

if (rsi s>= 0)
    if (rsi s< rax_3)
        rax_3 = rsi
    
    arg1[1] = rax_3
else
    arg1[1] = 0

return arg1
