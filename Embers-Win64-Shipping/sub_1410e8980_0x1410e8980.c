// 函数: sub_1410e8980
// 地址: 0x1410e8980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
sub_14077c370(arg1, arg2, &arg_18, arg4 + 8)
sub_1410e8c10(&arg1[4], arg2, &arg_18, arg4 + 0x48)
sub_1410e8c10(&arg1[8], arg2, &arg_18, arg4 + 0x68)

if (arg1[0xd] u> 0 || arg1[0xf] u> 0)
    sub_1410e8c10(&arg1[0xc], arg2, &arg_18, arg4 + 0x88)

int64_t* r14 = data_14395f4d0

if (arg1[0x13] u> 0)
    uint32_t rbp_1 = zx.d(arg1[0x12])
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_5[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_5[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    rcx_5[4] = arg5
    *rcx_5 = &data_142da77b8
    rcx_5[2] = arg3
    rcx_5[3].d = rbp_1

if (arg1[0x15] u> 0)
    uint32_t rbp_2 = zx.d(arg1[0x14])
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_12[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_12[5]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_12
        *(arg2 + 8) = &rcx_12[1]
        rcx_12[1] = 0
        *rcx_12 = &data_142da77c8
        rcx_12[2] = arg3
        rcx_12[3].d = rbp_2
        rcx_12[4] = r14

if (arg1[0x11] u> 0)
    uint32_t rbp_3 = zx.d(arg1[0x10])
    void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_18[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_18[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_18
    *(arg2 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    rcx_18[4] = arg7
    *rcx_18 = &data_142da77b8
    rcx_18[2] = arg3
    rcx_18[3].d = rbp_3

uint128_t zmm0
zmm0.d = 1f f/ _mm_cvtepi32_ps(zx.o(*arg6)).d
uint128_t zmm1 = zx.o(arg6[1])
int32_t var_38 = zmm0.d
float var_30 = 1f f/ _mm_cvtepi32_ps(zx.o(arg6[2])).d
float var_34 = 1f f/ _mm_cvtepi32_ps(zmm1).d
return sub_14077c5f0(arg2, &arg_18, &arg1[0x16], &var_38, 0)
