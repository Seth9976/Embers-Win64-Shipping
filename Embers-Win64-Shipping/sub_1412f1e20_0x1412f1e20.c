// 函数: sub_1412f1e20
// 地址: 0x1412f1e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg3[1]
int32_t rax = arg3[3]
uint64_t rbp = zx.q(*(arg1 + 0x11c))
float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(*arg4)).d
int32_t r9 = *arg3
float zmm3 = 1f f/ _mm_cvtepi32_ps(zx.o(arg4[1])).d
int32_t rax_2 = arg3[4]
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rax - r9)).d f* zmm2
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(r9)).d f* zmm2
int32_t var_48 = zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(rax_2 - rcx))

if (rbp.d u>= 0x10)
    rbp = 0x10

int32_t var_40 = zmm1.d
zmm0.d = zmm0.d f* zmm3
int32_t var_44 = zmm0.d
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx)).d f* zmm3
int32_t var_3c = zmm0.d

if (rbp.d != 0)
    uint32_t rax_4 = zx.d(*(arg1 + 0x118))
    uint32_t r13_1 = zx.d(*(arg1 + 0x11a))
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_5 = *(arg2 + 0x188)
    int64_t rax_6 = rbx_3 + rbp
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_6 = rbx_3 + rbp
    
    *(arg2 + 0x30) = rax_6
    memcpy(rbx_3, &var_48, rbp.d)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_5[6]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142d549d8
    rcx_5[2] = rax_5
    rcx_5[4].d = rax_4
    rcx_5[3] = rbx_3
    *(rcx_5 + 0x24) = r13_1
    rcx_5[5].d = rbp.d

uint64_t rbp_1 = zx.q(*(arg1 + 0x122))
int64_t result = 4

if (rbp_1.d u>= 4)
    rbp_1 = 4

if (rbp_1.d != 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x120))
    uint32_t r13_2 = zx.d(*(arg1 + 0x11e))
    int64_t rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t arg_8
    arg_8.q = *(arg2 + 0x188)
    int64_t rax_13 = rbx_8 + rbp_1
    
    if (rax_13 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
        rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_13 = rbx_8 + rbp_1
    
    *(arg2 + 0x30) = rax_13
    memcpy(rbx_8, &arg3[2], rbp_1.d)
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_13[6]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_13[6]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142d549d8
    result = arg_8.q
    rcx_13[2] = result
    rcx_13[3] = rbx_8
    rcx_13[4].d = r13_2
    *(rcx_13 + 0x24) = r12_1
    rcx_13[5].d = rbp_1.d

return result
