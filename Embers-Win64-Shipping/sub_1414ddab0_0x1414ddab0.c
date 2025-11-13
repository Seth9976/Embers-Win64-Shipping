// 函数: sub_1414ddab0
// 地址: 0x1414ddab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t r12 = *(arg2 + 0x1b0)
int64_t r9 = arg3[2]
int64_t arg_8 = r12
sub_1410809a0(arg1, arg2, r12, r9)
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rdi = *(*arg3 + 0x20)
void* rcx = &rbx_3[1]
int64_t rax_2 = *(*(rdi + 0x18f8) + 0x10)

if (rcx u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_3[1]

*(arg2 + 0x30) = rcx
*rbx_3 = rax_2
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[6]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[6]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rbx_3
rcx_4[4].d = 2
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
void* rbx_6 = *(rdi + 0x18f8)
void* rsi = *(rdi + 0x1968)
sub_14077c370(arg1 + 0x118, arg2, &arg_8, rbx_6 + 8)
sub_14077c370(arg1 + 0x120, arg2, &arg_8, rbx_6 + 0x28)
sub_14077c370(arg1 + 0x128, arg2, &arg_8, rsi + 8)
sub_140741e30(arg2, &arg_8, arg1 + 0x130, &arg_20, 0)
void arg_28
sub_140741e30(arg2, &arg_8, arg1 + 0x136, &arg_28, 0)
void arg_30
uint64_t result = sub_140741e30(arg2, &arg_8, arg1 + 0x13c, &arg_30, 0)
int64_t rsi_1 = *(arg5 + 0x10)

if (*(arg1 + 0x144) u> 0)
    uint32_t rbx_7 = zx.d(*(arg1 + 0x142))
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_16[5]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    result = &data_142d99560
    *rcx_16 = &data_142d99560
    rcx_16[2] = r12
    rcx_16[3].d = rbx_7
    rcx_16[4] = rsi_1

int64_t rbx_8 = *(arg5 + 0x48)

if (*(arg1 + 0x148) u> 0)
    uint32_t rdi_2 = zx.d(*(arg1 + 0x146))
    void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_22[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_22[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_22
    *(arg2 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    result = &data_142d99560
    *rcx_22 = &data_142d99560
    rcx_22[2] = r12
    rcx_22[3].d = rdi_2
    rcx_22[4] = rbx_8

return result
