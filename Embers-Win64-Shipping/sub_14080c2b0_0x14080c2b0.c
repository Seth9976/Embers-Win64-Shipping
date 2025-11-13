// 函数: sub_14080c2b0
// 地址: 0x14080c2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143ce3570 == 0)
    data_143ce3570 = data_14395f4d0
    data_143ce3578 = data_14396ef98
    data_143ce3580 = data_14396efb0
    data_143ce3588 = data_14396efc8
    data_143ce3590 = data_14396efe0
    data_143ce3598 = data_14396eff8
    data_143ce35a0 = data_14396f010
    data_143ce35a8 = data_14396ee58

void* rax_9 = *arg3
int64_t rbp = 0

if (rax_9 != 0)
    int64_t rdx = sx.q(*(rax_9 + 0x10c))
    int64_t* r14_1 = *(arg3[1] + 0x10)
    int64_t rbp_1 = r14_1[3]
    
    if (*(rbp_1 + (rdx << 3)) == 0)
        sub_1419ccf30(r14_1, rdx.d)
        rbp_1 = r14_1[3]
    
    rbp = *(rbp_1 + (rdx << 3))

void* r14_2 = arg3[2]
int64_t arg_8 = rbp
int64_t r15_2 = *(r14_2 + 0xf0)

if (r15_2 == 0)
    r15_2 = *(data_143f111a8 + 0x10)

if (*(arg1 + 0xe) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0xc))
    void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_3[5]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_3[5]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_3
    *(arg2 + 8) = &rcx_3[1]
    rcx_3[1] = 0
    rcx_3[4] = r15_2
    rcx_3[3].d = r12_1
    rcx_3[2] = rbp
    *rcx_3 = &data_142da77b8

int64_t* r15_3 = (&data_143ce3570)[zx.q(*(r14_2 + 0xec))
    + ((zx.q(*(r14_2 + 0xed)) + (zx.q(*(r14_2 + 0xee)) << 1)) << 1)]

if (*(arg1 + 0xa) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 8))
    
    if ((*(*r15_3 + 8))(r15_3) == 0)
        void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_19 = &rcx_12[5]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_12[5]
        
        *(arg2 + 0x30) = rax_19
        void**** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_12
        *(arg2 + 8) = &rcx_12[1]
        rcx_12[1] = 0
        *rcx_12 = &data_142da77c8
        rcx_12[2] = rbp
        rcx_12[3].d = r12_2
        rcx_12[4] = r15_3

uint32_t rax_23 = zx.d(*(r14_2 + 0xed))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(r14_2 + 0xec)))
uint32_t rax_24 = zx.d(*(r14_2 + 0xee))
int32_t var_38 = zmm0.d
int32_t var_34 = _mm_cvtepi32_ps(zx.o(rax_23)).d
int32_t var_30 = _mm_cvtepi32_ps(zx.o(rax_24)).d
sub_14077c5f0(arg2, &arg_8, arg1 + 0x10, &var_38, 0)
sub_14077c5f0(arg2, &arg_8, arg1 + 0x16, r14_2 + 0xc8, 0)
sub_14077c5f0(arg2, &arg_8, arg1 + 0x1c, r14_2 + 0xd4, 0)
return sub_14077c5f0(arg2, &arg_8, arg1 + 0x22, r14_2 + 0xe0, 0)
