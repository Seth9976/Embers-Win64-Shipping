// 函数: sub_141428ea0
// 地址: 0x141428ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1a0)
sub_141080ac0(arg1, arg2, r15, *(arg3 + 0x10))
int32_t r14 = *(arg3 + 0x508c)
int32_t r12 = *(arg3 + 0x5088)
TEB* gsbase

if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

int32_t rdi = *(arg3 + 0x5088)
int32_t rbx = *(arg3 + 0x508c)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a0) - *(arg3 + 0x1598)))
int32_t rax_6 = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdi * 2))

if (r12 s>= r14)
    r14 = r12

zmm1.d = zmm1.d f/ zmm0.d
int32_t var_58 = zmm1.d
zmm0 = _mm_cvtepi32_ps(zx.o(rbx * 2))
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f/ zmm0.d
int32_t var_54 = zmm1.d
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(r14)).d) f* data_143cda910
uint64_t r14_1 = zx.q(*(arg1 + 0x11c))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdi))

if (r14_1.d u>= 0xc)
    r14_1 = 0xc

int32_t var_48 = zmm2.d
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rbx))
int32_t var_44 = zmm3.d
float var_50 = _mm_max_ss(zmm0_1 - 9f, 0)
zmm1.d = 1f f/ zmm3.d
float var_40 = 1f f/ zmm2.d
int32_t var_3c = zmm1.d

if (r14_1.d != 0)
    uint32_t rax_8 = zx.d(*(arg1 + 0x11a))
    uint32_t rax_9 = zx.d(*(arg1 + 0x118))
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_10 = r14_1 + rbx_3
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r14_1 + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_10 = rbx_3 + r14_1
    
    *(arg2 + 0x30) = rax_10
    memcpy(rbx_3, &var_58, r14_1.d)
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_6[6]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_6[6]
    
    *(arg2 + 0x30) = rax_11
    void** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142d549d8
    rcx_6[4].d = rax_9
    *(rcx_6 + 0x24) = rax_8
    rcx_6[2] = r15
    rcx_6[3] = rbx_3
    rcx_6[5].d = r14_1.d

uint64_t r14_2 = zx.q(*(arg1 + 0x122))

if (r14_2.d u>= 0x10)
    r14_2 = 0x10

if (r14_2.d != 0)
    uint32_t rax_16 = zx.d(*(arg1 + 0x120))
    uint32_t rax_17 = zx.d(*(arg1 + 0x11e))
    int64_t rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_18 = r14_2 + rbx_8
    
    if (rax_18 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r14_2 + 0x10).d)
        rbx_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_18 = r14_2 + rbx_8
    
    *(arg2 + 0x30) = rax_18
    memcpy(rbx_8, &var_48, r14_2.d)
    void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_14[6]
    
    if (rax_19 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_14[6]
    
    *(arg2 + 0x30) = rax_19
    void**** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_20 = rcx_14
    *(arg2 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142d549d8
    rcx_14[4].d = rax_17
    *(rcx_14 + 0x24) = rax_16
    rcx_14[2] = r15
    rcx_14[3] = rbx_8
    rcx_14[5].d = r14_2.d

int64_t* result = *(arg3 + 0x5030)
int64_t* rdi_1 = data_14395fa10
int64_t r14_3 = result[2]

if (*(arg1 + 0x126) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_20[5]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_20[5]
    
    *(arg2 + 0x30) = rax_24
    void**** rax_25 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_25 = rcx_20
    result = &rcx_20[1]
    *(arg2 + 8) = result
    rcx_20[3].d = r12_1
    *result = 0
    *rcx_20 = &data_142d5a070
    rcx_20[2] = r15
    rcx_20[4] = r14_3

if (*(arg1 + 0x12a) u> 0)
    uint32_t r14_4 = zx.d(*(arg1 + 0x128))
    result = (*(*rdi_1 + 8))(rdi_1)
    
    if (result.b == 0)
        void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_27 = &rcx_27[5]
        
        if (rax_27 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_27 = &rcx_27[5]
        
        *(arg2 + 0x30) = rax_27
        void**** rax_28 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_28 = rcx_27
        result = &rcx_27[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_27 = &data_142d5a080
        rcx_27[2] = r15
        rcx_27[3].d = r14_4
        rcx_27[4] = rdi_1

int64_t* rdi_2 = data_14395fa10

if (*(arg1 + 0x12e) u> 0)
    uint32_t r14_5 = zx.d(*(arg1 + 0x12c))
    void*** rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_29 = &rcx_33[5]
    
    if (rax_29 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_29 = &rcx_33[5]
    
    *(arg2 + 0x30) = rax_29
    void**** rax_30 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_30 = rcx_33
    *(arg2 + 8) = &rcx_33[1]
    rcx_33[1] = 0
    *rcx_33 = &data_142d5a070
    result = arg4
    rcx_33[4] = result
    rcx_33[2] = r15
    rcx_33[3].d = r14_5

if (*(arg1 + 0x132) u> 0)
    uint32_t r14_6 = zx.d(*(arg1 + 0x130))
    result = (*(*rdi_2 + 8))(rdi_2)
    
    if (result.b == 0)
        void*** rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_33 = &rcx_40[5]
        
        if (rax_33 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_33 = &rcx_40[5]
        
        *(arg2 + 0x30) = rax_33
        void**** rax_34 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_34 = rcx_40
        result = &rcx_40[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_40 = &data_142d5a080
        rcx_40[2] = r15
        rcx_40[3].d = r14_6
        rcx_40[4] = rdi_2

int64_t* rdi_3 = data_14395fa10

if (*(arg1 + 0x136) u> 0)
    uint32_t r14_7 = zx.d(*(arg1 + 0x134))
    void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_35 = &rcx_46[5]
    
    if (rax_35 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_35 = &rcx_46[5]
    
    *(arg2 + 0x30) = rax_35
    void**** rax_36 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_36 = rcx_46
    *(arg2 + 8) = &rcx_46[1]
    rcx_46[1] = 0
    *rcx_46 = &data_142d5a070
    result = arg5
    rcx_46[4] = result
    rcx_46[2] = r15
    rcx_46[3].d = r14_7

if (*(arg1 + 0x13a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x138))
    result = (*(*rdi_3 + 8))(rdi_3)
    
    if (result.b == 0)
        void*** rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_53[5]
        
        if (rax_39 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_53[5]
        
        *(arg2 + 0x30) = rax_39
        void** rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rcx_53
        result = &rcx_53[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_53 = &data_142d5a080
        rcx_53[2] = r15
        rcx_53[3].d = rbp_1
        rcx_53[4] = rdi_3

return result
