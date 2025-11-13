// 函数: sub_1420d05c0
// 地址: 0x1420d05c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_30 = 1
char* var_28
__builtin_memset(&var_28, 0, 0x20)
int32_t var_38 = 1
int128_t* var_18
int32_t rax_1 = sub_1420d02a0(&var_28, &var_18, arg2, arg3, arg4, arg5)
int128_t* rcx_1 = var_18

if (rax_1 == 2)
    char* rdi_1 = var_28
    uint32_t rax_4 = zx.d(rdi_1[1])
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdi_1[2]))
    uint32_t rax_5 = zx.d(*rdi_1)
    *arg1 = zmm0.d
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rax_4))
    uint32_t rax_6 = zx.d(rdi_1[3])
    *(arg1 + 4) = zmm1_1.d
    *(arg1 + 8) = _mm_cvtepi32_ps(zx.o(rax_5)).d
    *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(rax_6)).d
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_140a74f90(rdi_1)
else
    if (rax_1 == 0xa)
        *arg1 = *rcx_1
        sub_140a74f90(rcx_1)
    else
        *arg1 = data_14399f5f0
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
    
    char* rcx_2 = var_28
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return arg1
