// 函数: sub_1420d06c0
// 地址: 0x1420d06c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *arg1 = data_14399f5f0
    return arg1

int32_t zmm2 = (zx.o(0)).d

if (arg4 f>= 0f)
    arg4 = _mm_min_ss(arg4, 0x3f800000)
else
    arg4 = (zx.o(0)).d

uint128_t zmm0 = arg5

if (not(zmm0.d f< 0f))
    zmm2 = _mm_min_ss(zmm0.d, 0x3f800000)

zmm0 = zx.o(*(arg3 + 0xc0))
int32_t var_30 = 1
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xc4)))
char* var_28
__builtin_memset(&var_28, 0, 0x20)
int32_t var_38 = 1
zmm1.d = zmm1.d f* zmm2
zmm0.d = _mm_cvtepi32_ps(zmm0).d f* arg4
int128_t* var_18
int32_t rax_2 = sub_1420d02a0(&var_28, &var_18, arg2, arg3.d, int.d(zmm0.d), int.d(zmm1.d))
int128_t* rcx_2 = var_18

if (rax_2 == 2)
    char* rdi_1 = var_28
    uint32_t rax_5 = zx.d(rdi_1[1])
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdi_1[2]))
    uint32_t rax_6 = zx.d(*rdi_1)
    *arg1 = zmm0_1.d
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rax_5))
    uint32_t rax_7 = zx.d(rdi_1[3])
    *(arg1 + 4) = zmm1_1.d
    *(arg1 + 8) = _mm_cvtepi32_ps(zx.o(rax_6)).d
    *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(rax_7)).d
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    sub_140a74f90(rdi_1)
else
    if (rax_2 == 0xa)
        *arg1 = *rcx_2
        sub_140a74f90(rcx_2)
    else
        *arg1 = data_14399f5f0
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    
    char* rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg1
