// 函数: sub_1414c27b0
// 地址: 0x1414c27b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = arg1[2]
int64_t r14 = 0
void* rbp = nullptr
void* rcx = arg1[0x30]
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(zmm0.d + 3)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q((zmm0 u>> 0x20).d + 3)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(arg1[3].d + 3)

if (rcx != 0)
    int64_t rdx_6 = sx.q(*(rcx + 0x10c))
    int64_t* rsi_1 = *(arg1[0x31] + 0x10)
    int64_t* rax_13 = rsi_1[3]
    
    if (rax_13[rdx_6] == 0)
        sub_1419ccf30(rsi_1, rdx_6.d)
        rax_13 = rsi_1[3]
    
    rbp = rax_13[rdx_6]

*(arg2 + 0x1b0) = rbp
sub_14198aa60(rbp)
void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_6[3]

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_6[3]

*(arg2 + 0x30) = rax_14
void**** rax_15 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_15 = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rbp
void* r9 = arg1[1]
void* rcx_11 = arg1[0x30] + 0x118
int64_t arg_18 = *(arg2 + 0x1b0)
int32_t var_58 = arg1.d + 0x20
sub_1414b9130(rcx_11, arg2, &arg_18, r9)
void* rax_19 = arg1[0x30]
int64_t r8_2 = 0

if (rax_19 != 0)
    int64_t rdx_8 = sx.q(*(rax_19 + 0x10c))
    int64_t r15_1 = rdx_8 << 3
    int64_t* rsi_2 = *(arg1[0x31] + 0x10)
    int64_t rax_21 = rsi_2[3]
    
    if (*(r15_1 + rax_21) == 0)
        sub_1419ccf30(rsi_2, rdx_8.d)
        rax_21 = rsi_2[3]
    
    r8_2 = *(r15_1 + rax_21)

sub_1414be640(arg2, &arg1[0x30], r8_2, *arg1)
sub_1419cd1c0(arg2, arg1[0x30], ((temp0 & 3) + temp1) s>> 2, (temp3 + (temp2 & 3)) s>> 2, 
    (temp5 + (temp4 & 3)) s>> 2)
void* rax_23 = arg1[0x30]

if (rax_23 != 0)
    int64_t rdx_11 = sx.q(*(rax_23 + 0x10c))
    int64_t r14_1 = rdx_11 << 3
    int64_t* rsi_3 = *(arg1[0x31] + 0x10)
    int64_t rax_25 = rsi_3[3]
    
    if (*(r14_1 + rax_25) == 0)
        sub_1419ccf30(rsi_3, rdx_11.d)
        rax_25 = rsi_3[3]
    
    r14 = *(r14_1 + rax_25)

return sub_14116d320(arg2, &arg1[0x30], r14) __tailcall
