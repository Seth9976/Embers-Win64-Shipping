// 函数: sub_1412399c0
// 地址: 0x1412399c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141080ac0(arg1, arg2, *(arg2 + 0x1a0), *(arg3 + 0x10))
int64_t* r14 = data_14395f4d0
int64_t r15 = *(arg2 + 0x1a0)
int64_t r12 = *(*arg4 + 0x10)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = r15
    rcx_2[3].d = rbp_1
    rcx_2[4] = r12

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = r15
        rcx_9[3].d = rbp_2
        rcx_9[4] = r14

int32_t* arg_28
int32_t* rax_9 = arg_28
uint128_t zmm1 = zx.o(arg5[1])
float zmm3 = 1f f/ _mm_cvtepi32_ps(zx.o(*rax_9)).d
zmm1.d = _mm_cvtepi32_ps(zmm1).d f+ 0.5f
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*arg5)).d f+ 0.5f
zmm0.d = zmm0.d f* zmm3
int32_t var_28 = zmm0.d
int32_t* rax_10 = *(arg2 + 0x1a0)
zmm0 = _mm_cvtepi32_ps(zx.o(rax_9[1]))
arg_28 = rax_10
float zmm4 = 1f f/ zmm0.d
zmm1.d = zmm1.d f* zmm4
int32_t var_24 = zmm1.d
zmm0.d = _mm_cvtepi32_ps(zx.o(arg5[2])).d f- 0.5f
zmm0.d = zmm0.d f* zmm3
zmm1.d = _mm_cvtepi32_ps(zx.o(arg5[3])).d f- 0.5f
int32_t var_20 = zmm0.d
zmm1.d = zmm1.d f* zmm4
int32_t var_1c = zmm1.d
return sub_1405d0e10(arg2, &arg_28, arg1 + 0x120, &var_28, 0)
