// 函数: sub_1414e7c70
// 地址: 0x1414e7c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)
void* r14 = *(*arg3 + 0x20)
sub_14077cfd0(arg1 + 0x118, arg2, rbp)
sub_14077cfd0(arg1 + 0x120, arg2, rbp)
sub_14077cfd0(arg1 + 0x128, arg2, rbp)

if (*(arg1 + 0x144) u> 0)
    uint32_t rdi_1 = zx.d(*(arg1 + 0x142))
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_5[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_5[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142d99560
    rcx_5[2] = rbp
    rcx_5[3].d = rdi_1
    rcx_5[4] = 0

int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_5 = *(*(r14 + 0x18f8) + 0x10)
void* rcx_9 = &rbx_2[1]

if (rcx_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_9 = &rbx_2[1]

*(arg2 + 0x30) = rcx_9
*rbx_2 = rax_5
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_13[6]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_13[6]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_13
*(arg2 + 8) = &rcx_13[1]
rcx_13[1] = 0
rcx_13[3] = rbx_2
*rcx_13 = &data_142da7798
rcx_13[2].d = 1
rcx_13[4].d = 0
*(rcx_13 + 0x24) = 3
rcx_13[5] = 0
return &data_142da7798
