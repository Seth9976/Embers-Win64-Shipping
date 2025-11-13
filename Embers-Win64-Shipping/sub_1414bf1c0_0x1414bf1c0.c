// 函数: sub_1414bf1c0
// 地址: 0x1414bf1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_1419a2ec0(*(arg2 + 0x5150), &var_38, &data_143eea920, 0)
void* rbp = var_38
void* rbx = nullptr

if (rbp != 0)
    int64_t rdx_1 = sx.q(*(rbp + 0x10c))
    void* var_30
    int64_t* rbx_1 = *(var_30 + 0x10)
    int64_t rdi_1 = rdx_1 << 3
    int64_t rax_2 = rbx_1[3]
    
    if (*(rdi_1 + rax_2) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_2 = rbx_1[3]
    
    rbx = *(rdi_1 + rax_2)

*(arg1 + 0x1b0) = rbx
sub_14198aa60(rbx)
void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_5[3]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_5[3]

*(arg1 + 0x30) = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_5
*(arg1 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142dd5b40
rcx_5[2] = rbx
void* var_48 = arg12
int64_t var_50 = arg11
sub_1414dc180(rbp, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c) + 0xf)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598) + 0xf)
sub_1419cd1c0(arg1, rbp, ((temp2 & 0xf) + temp3) s>> 4, ((temp0 & 0xf) + temp1) s>> 4, 1)
sub_14077cfd0(rbp + 0x11e, arg1, *(arg1 + 0x1b0))
void* rax_21 = *(arg12 + 0x18)
void** rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_12 = &rbx_5[1]

if (rcx_12 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_12 = &rbx_5[1]

*(arg1 + 0x30) = rcx_12
*rbx_5 = rax_21
void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_16[6]

if (rax_22 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_16[6]

*(arg1 + 0x30) = rax_22
void**** rax_23 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_23 = rcx_16
*(arg1 + 8) = &rcx_16[1]
rcx_16[1] = 0
rcx_16[3] = rbx_5
*rcx_16 = &data_142da7798
rcx_16[2].d = 1
rcx_16[4].d = 0
*(rcx_16 + 0x24) = 1
rcx_16[5] = 0
return &data_142da7798
