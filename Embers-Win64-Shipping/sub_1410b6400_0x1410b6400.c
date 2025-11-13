// 函数: sub_1410b6400
// 地址: 0x1410b6400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t r15 = *(arg2 + 0x188)
int64_t arg_8 = r15
void*** rcx = sub_141080be0(arg1, arg2, r15, *(arg3 + 0x10))
uint64_t rbp = zx.q(*(arg1 + 0x11c))

if (rbp.d u>= 8)
    rbp = 8

if (rbp.d != 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x11a))
    uint32_t r13_1 = zx.d(*(arg1 + 0x118))
    int64_t rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_1 = rdi_3 + rbp
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_1 = rdi_3 + rbp
    
    *(arg2 + 0x30) = rax_1
    memcpy(rdi_3, &arg_20, rbp.d)
    rcx = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx[6]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx[6]
    
    *(arg2 + 0x30) = rax_2
    void**** rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx
    *(arg2 + 8) = &rcx[1]
    rcx[1] = 0
    *rcx = &data_142d549d8
    rcx[2] = r15
    rcx[3] = rdi_3
    rcx[4].d = r13_1
    *(rcx + 0x24) = r12_1
    rcx[5].d = rbp.d

uint64_t rbp_1 = zx.q(*(arg1 + 0x122))

if (rbp_1.d u>= 8)
    rbp_1 = 8

uint128_t zmm0 =
    _mm_cvtepi32_ps(zx.o((sbb.d(rcx.d, rcx.d, data_143e2d2e4 != 0) + 2) * data_1439b520c))
int32_t arg_10 = zmm0.d
int32_t arg_14 = zmm0.d

if (rbp_1.d != 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x120))
    uint32_t r13_2 = zx.d(*(arg1 + 0x11e))
    int64_t rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_6 = rdi_8 + rbp_1
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
        rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_6 = rdi_8 + rbp_1
    
    *(arg2 + 0x30) = rax_6
    memcpy(rdi_8, &arg_10, rbp_1.d)
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_15[6]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_15[6]
    
    r15 = arg_8
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    *rcx_15 = &data_142d549d8
    rcx_15[2] = r15
    rcx_15[3] = rdi_8
    rcx_15[4].d = r13_2
    *(rcx_15 + 0x24) = r12_2
    rcx_15[5].d = rbp_1.d

int32_t* rcx_19 = arg5
uint64_t rbp_2 = zx.q(*(arg1 + 0x128))
arg5.d = rcx_19[2] - *rcx_19
arg5:4.d = rcx_19[3] - rcx_19[1]
int64_t var_48 = *rcx_19
int32_t* var_40 = arg5

if (rbp_2.d u>= 0x10)
    rbp_2 = 0x10

if (rbp_2.d != 0)
    uint32_t r12_3 = zx.d(*(arg1 + 0x126))
    uint32_t r13_3 = zx.d(*(arg1 + 0x124))
    int64_t rdi_13 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_16 = rdi_13 + rbp_2
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_2 + 0x10).d)
        rdi_13 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_16 = rdi_13 + rbp_2
    
    *(arg2 + 0x30) = rax_16
    memcpy(rdi_13, &var_48, rbp_2.d)
    void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_24[6]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_24[6]
    
    r15 = arg_8
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_24
    *(arg2 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142d549d8
    rcx_24[2] = r15
    rcx_24[3] = rdi_13
    rcx_24[4].d = r13_3
    *(rcx_24 + 0x24) = r12_3
    rcx_24[5].d = rbp_2.d

void** const result = arg6
int64_t rsi = result[2]

if (*(arg1 + 0x12c) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x12a))
    void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = &rcx_30[5]
    
    if (rax_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_30[5]
    
    *(arg2 + 0x30) = rax_20
    void**** rax_21 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_21 = rcx_30
    *(arg2 + 8) = &rcx_30[1]
    rcx_30[1] = 0
    result = &data_142d5ebf8
    *rcx_30 = &data_142d5ebf8
    rcx_30[2] = r15
    rcx_30[3].d = rbp_3
    rcx_30[4] = rsi

return result
