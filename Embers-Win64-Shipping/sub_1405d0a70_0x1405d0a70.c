// 函数: sub_1405d0a70
// 地址: 0x1405d0a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
float zmm0 = 1f f/ _mm_cvtepi32_ps(zx.o(*arg5)).d
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg5[1]))
float arg_8 = zmm0
float zmm2 = 1f f/ zmm1.d
zmm1 = arg4[1]
float var_48 = *arg4
int32_t var_44 = zmm1.d
float var_40 = arg4[2]
zmm0 = arg4[4]
float arg_c = zmm2
int32_t arg_20 = arg4[3].d
float arg_24 = zmm0
sub_1405d0cd0(arg2, &arg_18, arg1 + 0x118, &arg_8, 0)
sub_1405d0e10(arg2, &arg_18, arg1 + 0x12a, &arg4[0xc], 0)
sub_1405d0e10(arg2, &arg_18, arg1 + 0x130, &arg4[0x10], 0)
uint64_t r14 = zx.q(*(arg1 + 0x122))

if (r14.d u>= 0xc)
    r14 = 0xc

if (r14.d != 0)
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r12_1 = zx.d(*(arg1 + 0x120))
    arg5.d = zx.d(*(arg1 + 0x11e))
    int64_t rax_2 = r14 + rbx_3
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r14 + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = r14 + rbx_3
    
    *(arg2 + 0x30) = rax_2
    memcpy(rbx_3, &var_48, r14.d)
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_7[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_7[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d549d8
    rcx_7[2] = arg_18
    rcx_7[3] = rbx_3
    *(rcx_7 + 0x24) = r12_1
    rcx_7[4].d = arg5.d
    rcx_7[5].d = r14.d

sub_1405d0cd0(arg2, &arg_18, arg1 + 0x124, &arg_20, 0)
return sub_1405d0cd0(arg2, &arg_18, arg1 + 0x136, &arg4[0x14], 0)
