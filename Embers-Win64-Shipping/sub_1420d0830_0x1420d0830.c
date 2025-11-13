// 函数: sub_1420d0830
// 地址: 0x1420d0830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *arg1 = data_14399f638
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
int32_t* var_28
__builtin_memset(&var_28, 0, 0x20)
int32_t var_38 = 1
zmm1.d = zmm1.d f* zmm2
zmm0.d = _mm_cvtepi32_ps(zmm0).d f* arg4
int128_t* var_18
int32_t rax_3 = sub_1420d02a0(&var_28, &var_18, arg2, arg3.d, int.d(zmm0.d), int.d(zmm1.d))

if (rax_3 == 2)
    int32_t* rdi_2 = var_28
    int128_t* rcx_5 = var_18
    *arg1 = *rdi_2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_140a74f90(rdi_2)
else
    if (rax_3 == 0xa)
        int128_t* rdi_1 = var_18
        sub_140ae16d0(rdi_1, arg1, 1)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
    else
        int128_t* rcx_2 = var_18
        *arg1 = data_14399f638
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    
    int32_t* rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg1
