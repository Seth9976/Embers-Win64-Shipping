// 函数: sub_1411874a0
// 地址: 0x1411874a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg5
void* r15 = *arg1
int32_t r9_1 = zx.d(arg3) ^ 1
int32_t r10_1 = r12[2] - *r12
int32_t rax_1 = r12[3] - r12[1]
int32_t var_108 = r9_1
int32_t rdx

if (arg3 == 0)
    rdx = arg2[1]
else
    rdx = *arg2

int32_t var_104 = rdx
int64_t zmm0 = var_108.q

if (arg3 != 0)
    r10_1 = rax_1

int32_t var_100 = r10_1
int32_t var_b0 = r10_1
int32_t var_b8 = (var_108.q u>> 0x20).d + 2
int32_t* rax_5

if ((zmm0.d & 0xfffffffd) != 0)
    int32_t var_bc_1 = (var_108.q u>> 0x20).d + 2
    rax_5 = r10_1.q
else
    arg5.d = (var_108.q u>> 0x20).d + 2
    arg5:4.d = r10_1
    rax_5 = arg5

int32_t var_e8 = rax_5.d
int64_t var_f8 = 0
int32_t var_f0 = 0
uint32_t var_e4 = (rax_5 u>> 0x20).d
uint32_t var_e0 = zx.d(arg3)
int32_t var_ec = 0
int32_t rax_8

if (arg3 == 0)
    rax_8 = *arg2
else
    rax_8 = arg2[1]

int32_t var_d8 = rdx + 2
int64_t var_d0 = zmm0
int32_t var_c8 = r10_1
int32_t rax_11 = (r9_1 + 2) & 0x80000003

if (rax_11 s< 0)
    rax_11 = ((rax_11 - 1) | 0xfffffffc) + 1

int64_t* arg_48
int64_t* r13 = arg_48
int64_t* arg_40
int64_t* r14 = arg_40
var_d0.d = rax_11
int64_t rsi

if (rdx u> 0x1000)
    rsi.b = sub_1411931e0(arg1, &var_108, r12, arg6, r14, r13, arg8) != 0
else
    int64_t* rcx = r14[2]
    arg_48 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    arg_40 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    int32_t* var_118 = arg8
    sub_14118a380(arg1, &var_108, arg6, r12, &arg_40, &var_f0)
    sub_1405d1550(&arg_48)
    rsi.b = 1

int64_t rax_17 = r14[2]
int64_t* rdi_2 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_4 = &rdi_2[1]

if (rcx_4 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x10)
    rdi_2 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &rdi_2[1]

*(r15 + 0x30) = rcx_4
*rdi_2 = rax_17
void*** rcx_8 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_8[6]

if (rax_18 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x38)
    rcx_8 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_8[6]

*(r15 + 0x30) = rax_18
void**** rax_19 = *(r15 + 8)
*(r15 + 0x14) += 1
*rax_19 = rcx_8
*(r15 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 1
rcx_8[3] = rdi_2
rcx_8[4].d = 2
*(rcx_8 + 0x24) = 3
rcx_8[5] = 0

if (rax_8 u> 0x1000)
    if (rsi.b == 0)
        rsi.b = 0
    else if (sub_141192df0(arg1, &var_e0, arg4, &var_f0, &r14[1], r13, r14) == 0)
        rsi.b = 0
    else
        rsi.b = 1
else if (rsi.b == 0)
    rsi.b = 0
else
    void* rcx_12 = r13[2]
    void* var_78 = rcx_12
    
    if (rcx_12 != 0)
        *(rcx_12 + 8) += 1
    
    void* var_80 = rcx_12
    
    if (rcx_12 != 0)
        *(rcx_12 + 8) += 1
    
    sub_141189ca0(arg1, &var_e0, arg4, &r14[1], &var_f0, &var_80)
    sub_1405d1550(&var_78)
    rsi.b = 1

int64_t rax_23 = r13[2]
int64_t* rdi_7 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_16 = &rdi_7[1]

if (rcx_16 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x10)
    rdi_7 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_16 = &rdi_7[1]

*(r15 + 0x30) = rcx_16
*rdi_7 = rax_23
void*** rcx_20 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_20[6]

if (rax_24 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x38)
    rcx_20 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_20[6]

*(r15 + 0x30) = rax_24
void**** rax_25 = *(r15 + 8)
*(r15 + 0x14) += 1
bool cond:3 = var_d0:4.d u> 0x1000
*rax_25 = rcx_20
*(r15 + 8) = &rcx_20[1]
rcx_20[1] = 0
*rcx_20 = &data_142da7798
rcx_20[2].d = 1
rcx_20[3] = rdi_7
rcx_20[4].d = 2
*(rcx_20 + 0x24) = 3
rcx_20[5] = 0

if (cond:3)
    int64_t* r13_1
    
    if (rsi.b == 0)
        r13_1 = arg1
        rsi.b = 0
    else
        int32_t var_94_1 = 0
        r13_1 = arg1
        int32_t var_9c = 0x7f7fffff
        int32_t var_98_1 = 0xff7fffff
        
        if (sub_1411931e0(r13_1, &var_d0, &var_f0, &r13[1], r14, r13, &var_9c) == 0)
            rsi.b = 0
        else
            rsi.b = 1
    
    int64_t rax_28 = r14[2]
    int64_t* rdi_12 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_28 = &rdi_12[1]
    
    if (rcx_28 u> *(r15 + 0x38))
        sub_140b0e3d0(r15 + 0x30, 0x10)
        rdi_12 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_28 = &rdi_12[1]
    
    *(r15 + 0x30) = rcx_28
    *rdi_12 = rax_28
    void*** rcx_32 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_29 = &rcx_32[6]
    
    if (rax_29 u> *(r15 + 0x38))
        sub_140b0e3d0(r15 + 0x30, 0x38)
        rcx_32 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
        rax_29 = &rcx_32[6]
    
    *(r15 + 0x30) = rax_29
    int32_t var_90 = 0x7f7fffff
    int32_t var_8c_1 = 0xff7fffff
    void**** rax_30 = *(r15 + 8)
    *(r15 + 0x14) += 1
    *rax_30 = rcx_32
    *(r15 + 8) = &rcx_32[1]
    rcx_32[1] = 0
    *rcx_32 = &data_142da7798
    rcx_32[2].d = 1
    rcx_32[3] = rdi_12
    rcx_32[4].d = 0
    *(rcx_32 + 0x24) = 3
    rcx_32[5] = 0
    void* rax_32 = *arg7
    int32_t var_88_1 = 0
    void* var_48 = rax_32
    
    if (rax_32 != 0)
        *(rax_32 + 8) += 1
    
    int32_t* var_120_6 = &var_90
    sub_141189670(r13_1, &var_f0, &r14[1], r12, &var_48)
else if (rsi.b == 0)
    rsi.b = 0
else
    void* rcx_24 = *arg7
    int32_t var_a8 = 0x7f7fffff
    int32_t var_a0_1 = 0
    int32_t var_a4_1 = 0xff7fffff
    void* var_60 = rcx_24
    
    if (rcx_24 != 0)
        *(rcx_24 + 8) += 1
    
    void* var_68 = rcx_24
    
    if (rcx_24 != 0)
        *(rcx_24 + 8) += 1
    
    int32_t* var_118_3 = &var_a8
    sub_14118a380(arg1, &var_d0, &r13[1], &var_f0, &var_68, r12)
    sub_1405d1550(&var_60)
    rsi.b = 1

sub_1405d1550(arg7)
return zx.q(rsi.b)
