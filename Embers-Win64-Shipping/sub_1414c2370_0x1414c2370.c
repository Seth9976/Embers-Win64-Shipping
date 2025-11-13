// 函数: sub_1414c2370
// 地址: 0x1414c2370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410e0370(arg2)
int32_t rax = *(arg1 + 0xdc)
int64_t rbp = 0
int64_t zmm0 = *(arg1 + 0xd4)
void* rdi = nullptr
void* rcx_1 = arg1[1]
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(zmm0.d + 7)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q((zmm0 u>> 0x20).d + 7)

if (rcx_1 != 0)
    int64_t rdx_4 = sx.q(*(rcx_1 + 0x10c))
    int64_t* rbx_1 = *(arg1[2] + 0x10)
    int64_t* rdi_1 = rbx_1[3]
    
    if (rdi_1[rdx_4] == 0)
        sub_1419ccf30(rbx_1, rdx_4.d)
        rdi_1 = rbx_1[3]
    
    rdi = rdi_1[rdx_4]

*(arg2 + 0x1b0) = rdi
sub_14198aa60(rdi)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_7[3]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_7[3]

*(arg2 + 0x30) = rax_10
void**** rax_11 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_11 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
rcx_7[2] = rdi
void* rax_14

if (arg1[0x1a].b != 0)
    rax_14 = *(*(arg1[3] + 0x15a8) + 0xd38)

if (arg1[0x1a].b == 0 || rax_14 == 0)
    rax_14 = data_143f111a8

int64_t* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r12_2 = *(rax_14 + 0x10)
void* rcx_12 = &rdi_4[1]

if (rcx_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_12 = &rdi_4[1]

*(arg2 + 0x30) = rcx_12
*rdi_4 = r12_2
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_16[5]

if (rax_17 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_16[5]

*(arg2 + 0x30) = rax_17
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_16
*(arg2 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142d549c8
void* var_50 = &arg1[0x4a]
rcx_16[2].d = 1
rcx_16[3] = rdi_4
rcx_16[4].d = 0
char var_58 = arg1[0x48].b
int64_t var_60 = r12_2
int32_t var_68 = arg1.d + 0x28
sub_1414de110(arg1[1], arg2, arg1[3], &arg1[0x1c])
void* rax_22 = arg1[1]
int64_t r8_1 = 0

if (rax_22 != 0)
    int64_t rdx_6 = sx.q(*(rax_22 + 0x10c))
    int64_t* rbx_2 = *(arg1[2] + 0x10)
    int64_t* rax_24 = rbx_2[3]
    
    if (rax_24[rdx_6] == 0)
        sub_1419ccf30(rbx_2, rdx_6.d)
        rax_24 = rbx_2[3]
    
    r8_1 = rax_24[rdx_6]

sub_1414bec00(arg2, &arg1[1], r8_1, *arg1)
sub_1419cd1c0(arg2, arg1[1], ((temp0 & 7) + temp1) s>> 3, (temp3 + (temp2 & 7)) s>> 3, rax)
void* rax_26 = arg1[1]

if (rax_26 != 0)
    int64_t rdx_9 = sx.q(*(rax_26 + 0x10c))
    int64_t* rbx_3 = *(arg1[2] + 0x10)
    int64_t* rax_28 = rbx_3[3]
    
    if (rax_28[rdx_9] == 0)
        sub_1419ccf30(rbx_3, rdx_9.d)
        rax_28 = rbx_3[3]
    
    rbp = rax_28[rdx_9]

return sub_14116d320(arg2, &arg1[1], rbp) __tailcall
