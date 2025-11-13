// 函数: sub_1410b6df0
// 地址: 0x1410b6df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_14395fa10
void* rdx = arg2[8]
int64_t r15 = *(rdx + 0x1a0)
int64_t arg_8 = r15
j_sub_14137eb70(arg1 + 0x11a, rdx, r15, arg2, rax, 0, nullptr)
sub_141080ac0(arg1, arg2[8], r15, *(*arg2 + 0x10))
void* rbp = arg2[8]
int32_t r8_2 = *(*arg2 + 0x1548)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_10
    int64_t* rcx_2 = &arg_10
    
    if (r8_2 s< 3)
        sub_14137b650(rcx_2)
    else
        sub_14137b9a0(rcx_2, rbp, 0xf, r8_2)
    
    sub_141083500(rbp, &arg_8, arg1 + 0x118, arg_10)
    sub_1405d1550(&arg_10)

sub_1410804a0(arg1 + 0x212, arg2[8], *arg2, r15, arg3.d, 1)
sub_1410801c0(arg1 + 0x218, arg2[8], *arg2, arg3)
void* rcx_7 = *arg2
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(arg4:4.d))
int32_t rax_2 = *(rcx_7 + 0x508c)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg4.d))
int32_t rax_4 = *(rcx_7 + 0x5088)
void* rcx_8 = arg2[8]
int64_t var_40 = 0
zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(rax_2 * 2)).d
int32_t var_44 = zmm2.d
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(rax_4 * 2)).d
int32_t var_48 = zmm1.d
sub_1405d0e10(rcx_8, &arg_8, arg1 + 0x22e, &var_48, 0)
void** const result = data_1439b70f8
int64_t* rbp_1 = data_1439b54b8
void* rbx_1 = arg2[8]
int64_t r12 = result[2]

if (*(arg1 + 0x228) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x226))
    void*** rcx_11 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_11[5]
    
    if (rax_6 u> *(rbx_1 + 0x38))
        sub_140b0e3d0(rbx_1 + 0x30, 0x30)
        rcx_11 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_11[5]
    
    *(rbx_1 + 0x30) = rax_6
    void**** rax_7 = *(rbx_1 + 8)
    *(rbx_1 + 0x14) += 1
    *rax_7 = rcx_11
    *(rbx_1 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    result = &data_142d5a070
    *rcx_11 = &data_142d5a070
    rcx_11[2] = r15
    rcx_11[3].d = r14_1
    rcx_11[4] = r12

if (*(arg1 + 0x22c) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x22a))
    result = (*(*rbp_1 + 8))(rbp_1)
    
    if (result.b == 0)
        void*** rcx_18 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_18[5]
        
        if (rax_10 u> *(rbx_1 + 0x38))
            sub_140b0e3d0(rbx_1 + 0x30, 0x30)
            rcx_18 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_18[5]
        
        *(rbx_1 + 0x30) = rax_10
        void** rax_11 = *(rbx_1 + 8)
        *(rbx_1 + 0x14) += 1
        *rax_11 = rcx_18
        *(rbx_1 + 8) = &rcx_18[1]
        rcx_18[1] = 0
        result = &data_142d5a080
        *rcx_18 = &data_142d5a080
        rcx_18[2] = r15
        rcx_18[3].d = rsi_1
        rcx_18[4] = rbp_1

return result
