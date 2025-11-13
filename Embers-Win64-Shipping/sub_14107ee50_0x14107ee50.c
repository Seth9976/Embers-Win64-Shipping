// 函数: sub_14107ee50
// 地址: 0x14107ee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg9 != 0)
    int64_t rax_1 = *(arg4 + 0x30)
    int64_t rcx = *(arg4 + 0x10)
    int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rbx_3[2]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x18)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rbx_3[2]
    
    *(arg2 + 0x30) = rax_2
    *rbx_3 = rcx
    rbx_3[1] = rax_1
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[6]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142da7798
    rcx_4[2].d = 2
    rcx_4[3] = rbx_3
    rcx_4[4].d = 2
    *(rcx_4 + 0x24) = 3
    rcx_4[5] = 0

sub_14077c370(arg1, arg2, arg3, arg4 + 8)
sub_14077c370(&arg1[4], arg2, arg3, arg4 + 0x28)
void arg_28
sub_140741e30(arg2, arg3, &arg1[8], &arg_28, 0)
int64_t* rsi = data_14395f4d0
int64_t r12 = *arg3

if (arg1[0xc] u> 0)
    uint32_t r14_1 = zx.d(arg1[0xb])
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_13[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142da77b8
    rcx_13[4] = arg5
    rcx_13[2] = r12
    rcx_13[3].d = r14_1

if (arg1[0xe] u> 0)
    uint32_t r14_2 = zx.d(arg1[0xd])
    
    if ((*(*rsi + 8))(rsi) == 0)
        void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_13 = &rcx_20[5]
        
        if (rax_13 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_20[5]
        
        *(arg2 + 0x30) = rax_13
        void** rax_14 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_14 = rcx_20
        *(arg2 + 8) = &rcx_20[1]
        rcx_20[1] = 0
        *rcx_20 = &data_142da77c8
        rcx_20[2] = r12
        rcx_20[3].d = r14_2
        rcx_20[4] = rsi

uint128_t zmm0
zmm0.d = 1f f/ _mm_cvtepi32_ps(zx.o(arg6)).d
int32_t var_48 = zmm0.d
float var_40 = 1f f/ _mm_cvtepi32_ps(zx.o(arg8)).d
float var_44 = 1f f/ _mm_cvtepi32_ps(zx.o(arg7)).d
return sub_14077c5f0(arg2, arg3, &arg1[0xf], &var_48, 0)
