// 函数: sub_141a107d0
// 地址: 0x141a107d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg2 + 0x414)
int32_t r15 = *(arg2 + 0x418)
int32_t rsi = *(arg2 + 0x410)
void* rax = sub_1408d7580(arg2)
uint128_t zmm6 = *(arg2 + 0x550)
char r12 = (*(rax + 0x26c)).b

if (not(zmm6.d f> 0f))
    zmm6 = *(sub_1408d7580(arg2) + 0x388)

void* rax_2 = sub_1408d7580(arg2)
int32_t arg_18 = 1
char rdx = (*(rax_2 + 0x26c)).b
int32_t arg_8 = 0
int32_t arg_10 = 0
uint128_t zmm0_1 = sub_141a0f440(zmm6, &arg_8, &arg_10, rsi, (rbp + 1) * r15, &arg_18, rdx)
uint64_t rdx_2 = zx.q(arg_8)
float zmm4 = zmm0_1.d
float zmm5 = zmm0_1.d
int32_t r14_1 = (rsi + 1) s>> r12
uint64_t rcx_4 = zx.q(arg_10)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rsi))
zmm4 = zmm4 f/ _mm_cvtepi32_ps(zx.o(r14_1 + (rdx_2 << 1).d)).d
zmm5 = zmm5 f/ _mm_cvtepi32_ps(zx.o(r14_1 + (rcx_4 << 1).d)).d
uint128_t zmm1
zmm1.d = 1f f/ zmm0_1.d
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(r14_1 - 1))
float zmm2 = zmm3.d
zmm3.d = zmm3.d f* zmm5
zmm3.d = zmm3.d f* zmm1.d
zmm3.d = zmm3.d f/ *(arg1 + 0xc)
zmm2 = zmm2 * zmm4 f* zmm1.d f/ *(arg1 + 8)
zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_2.d)).d f* zmm4
zmm0_1.d = _mm_cvtepi32_ps(zx.o(rcx_4.d)).d f* zmm5
*(arg1 + 0x1a0) = zmm3.d
*(arg1 + 0x19c) = zmm2
*(arg1 + 0x194) = zmm1.d
*(arg1 + 0x198) = zmm0_1.d
void* result = sub_1419edf30(arg2)
void* result_1 = result

if (result != 0)
    int64_t* rcx_6 = *result
    
    if (rcx_6 != 0)
        int64_t rdx_3 = *rcx_6
        *(arg1 + 0x174) = *((*(rdx_3 + 0x38))(rcx_6, rdx_3) + 0xd8)
        int64_t* rcx_7 = *result_1
        result = (*(*rcx_7 + 0x38))(rcx_7)
        *(arg1 + 0x17c) = *(result + 0xd0)
    
    int64_t* rcx_8 = *(result_1 + 8)
    
    if (rcx_8 != 0)
        *(arg1 + 0x184) = *((*(*rcx_8 + 0x30))(rcx_8) + 0x30)
        int64_t* rcx_9 = *(result_1 + 8)
        result = (*(*rcx_9 + 0x30))(rcx_9)
        *(arg1 + 0x18c) = *(result + 0x28)

return result
