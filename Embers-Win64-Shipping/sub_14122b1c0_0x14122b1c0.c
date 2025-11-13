// 函数: sub_14122b1c0
// 地址: 0x14122b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_128 = data_142d3f660
void* r15 = *(*(arg7 + 0x5c0) + 0x20)
float zmm0[0x4] = *(r15 + 0x30)
sub_141227fb0(arg1, arg7, &var_128)
int128_t zmm1_1 = zx.o(0)

if (*(arg1 + 0x168) != 0)
    zmm1_1 = *(arg1 + 0x164)

int32_t var_98
float zmm0_1[0x4] = var_98
void* rax_1 = data_143e81d88
zmm0_1[0] = zmm0_1[0] f* zmm1_1.d
zmm0_1[0] = zmm0_1[0] f* *(rax_1 + 4)
*(*(arg1 + 0xa8) + 0xa0) = zmm0_1[0]
int128_t* rax_3 = *(arg1 + 0xa8)
zmm0_1[0] = zmm0_1[0] f* *(r15 + 0xc8)
float var_d8[0x4]
*rax_3 = var_d8
int128_t var_c8
rax_3[1] = var_c8
float var_b8[0x4]
rax_3[2] = var_b8
int128_t var_a8
rax_3[3] = var_a8
void* rax_4 = *(arg1 + 0xa8)
float temp0_1[0x4] = _mm_mul_ps(zmm0, _mm_shuffle_ps(zmm0_1, zmm0_1, 0))
*(rax_4 + 0x40) = temp0_1
int128_t* rdx_1 = *(arg1 + 0xa8)
float var_148[0x4] = temp0_1
sub_1412392c0(arg1 + 0x198, rdx_1)
sub_1419a2ec0(*(arg3 + 0x5150), &var_148, &data_143e82850, 0)
void* r13 = var_148[0].q
void* r14 = nullptr

if (r13 != 0)
    int64_t rdx_3 = sx.q(*(r13 + 0x10c))
    int64_t* rdi_1 = *(var_148[2].q + 0x10)
    int64_t rax_6 = rdi_1[3]
    
    if (*(rax_6 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_3.d)
        rax_6 = rdi_1[3]
    
    r14 = *(rax_6 + (rdx_3 << 3))

*(arg2 + 0x1b0) = r14
sub_14198aa60(r14)
void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_6[3]

if (rax_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_6[3]

*(arg2 + 0x30) = rax_7
void**** rax_8 = *(arg2 + 8)
*(arg2 + 0x14) += 1
var_128.q = 0
*rax_8 = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = r14
sub_141227d40(arg1, &var_128)
sub_14123aba0(r13, arg2, &var_128, *arg5, *arg4, *arg6)
int32_t temp0_2
int32_t temp1
temp0_2:temp1 = sx.q(data_143ec501c)
int32_t rax_16 = (temp1 + (temp0_2 & 7)) s>> 3
sub_1419cd1c0(arg2, r13, rax_16, rax_16, 1)
sub_141245b70(r13, arg2, &var_128)
int64_t result = sub_1405d1550(&var_128)

if (*(arg1 + 0x190) == 0 && *(arg1 + 0x16a) != 0)
    void* rax_17 = *(arg1 + 0xa8)
    *(arg1 + 0x190) = 1
    float zmm3_1[0x4] = *(r15 + 0x40)
    int32_t zmm0_2 = *(r15 + 0x50)
    int32_t zmm1_2 = *(r15 + 0x60)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
    temp0_3[0] = zmm0_2
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    temp0_4[0] = zmm1_2
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
    temp0_5[0] = 0x3f800000
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
    *(rax_17 + 0x50) = temp0_6
    int64_t* rcx_16 = *(arg3 + 0x5150)
    var_148 = temp0_6
    sub_1419a2ec0(rcx_16, &var_148, &data_143e82c50, 0)
    void* r13_1 = var_148[0].q
    void* r14_2 = nullptr
    
    if (r13_1 != 0)
        int64_t rdx_11 = sx.q(*(r13_1 + 0x10c))
        int64_t* r15_1 = *(var_148[2].q + 0x10)
        int64_t r14_3 = r15_1[3]
        
        if (*(r14_3 + (rdx_11 << 3)) == 0)
            sub_1419ccf30(r15_1, rdx_11.d)
            r14_3 = r15_1[3]
        
        r14_2 = *(r14_3 + (rdx_11 << 3))
    
    *(arg2 + 0x1b0) = r14_2
    sub_14198aa60(r14_2)
    void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_21[3]
    
    if (rax_19 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_21[3]
    
    *(arg2 + 0x30) = rax_19
    void**** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_20 = rcx_21
    *(arg2 + 8) = &rcx_21[1]
    rcx_21[1] = 0
    *rcx_21 = &data_142dd5b40
    rcx_21[2] = r14_2
    sub_1412392c0(arg1 + 0x198, *(arg1 + 0xa8))
    var_128.q = 0
    sub_141227d40(arg1, &var_128)
    sub_14123aef0(r13_1, arg2, &var_128)
    sub_1419cd1c0(arg2, r13_1, 8, 8, 8)
    sub_141245b70(r13_1, arg2, &var_128)
    result = sub_1405d1550(&var_128)

*(arg1 + 0x120) += 1
return result
