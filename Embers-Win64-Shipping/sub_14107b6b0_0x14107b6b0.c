// 函数: sub_14107b6b0
// 地址: 0x14107b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_1419a2ec0(arg3[0xc], &var_38, &data_143e2df00, 0)
void* rbp = var_38
void* rsi = nullptr

if (rbp != 0)
    int64_t rdx_1 = sx.q(*(rbp + 0x10c))
    void* var_30
    int64_t* rbx_1 = *(var_30 + 0x10)
    int64_t rax_2 = rbx_1[3]
    
    if (*(rax_2 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_2 = rbx_1[3]
    
    rsi = *(rax_2 + (rdx_1 << 3))

*(arg2 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_5[3]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_5[3]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142dd5b40
rcx_5[2] = rsi
int64_t rsi_2 = *(arg2 + 0x1b0)
void* r9 = *arg3
int64_t arg_10 = rsi_2
sub_1410809a0(rbp, arg2, rsi_2, *(r9 + 0x10))
int64_t var_58 = 0
int32_t var_60 = 0
sub_14137f470(rbp + 0x118, rsi_2, arg3, arg2)
int32_t rcx_11 = *arg4
int32_t rdx_4 = arg4[1]
int32_t rax_7 = arg4[2] - rcx_11
int32_t var_48 = _mm_cvtepi32_ps(zx.o(rcx_11)).d
int32_t var_44 = _mm_cvtepi32_ps(zx.o(rdx_4)).d
int32_t rax_8 = arg4[3]
int32_t var_40 = _mm_cvtepi32_ps(zx.o(rax_7)).d
int32_t var_3c = _mm_cvtepi32_ps(zx.o(rax_8 - rdx_4)).d
sub_14077c870(arg2, &arg_10, rbp + 0x210, &var_48, 0)
uint32_t r15_1 = zx.d(*(rbp + 0x218))
void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_15[5]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_15[5]

*(arg2 + 0x30) = rax_10
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_15
*(arg2 + 8) = &rcx_15[1]
rcx_15[1] = 0
rcx_15[4] = arg5
*rcx_15 = &data_142da77d8
rcx_15[2] = rsi_2
rcx_15[3].d = r15_1
int32_t temp0_4
int32_t temp1
temp0_4:temp1 = sx.q(arg4[3] - arg4[1] + 7)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg4[2] - *arg4 + 7)
sub_1419cd1c0(arg2, rbp, ((temp2 & 7) + temp3) s>> 3, ((temp0_4 & 7) + temp1) s>> 3, 1)
int64_t rsi_3 = *(arg2 + 0x1b0)
uint32_t rbp_1 = zx.d(*(rbp + 0x218))
void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_22[5]

if (rax_22 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_22[5]

*(arg2 + 0x30) = rax_22
void**** rax_23 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_23 = rcx_22
*(arg2 + 8) = &rcx_22[1]
rcx_22[2] = rsi_3
rcx_22[3].d = rbp_1
rcx_22[1] = 0
*rcx_22 = &data_142da77d8
rcx_22[4] = 0
return &rcx_22[1]
