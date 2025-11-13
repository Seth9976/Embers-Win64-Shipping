// 函数: sub_1422446b0
// 地址: 0x1422446b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0

void** result = nullptr
int64_t* rax_1 = sub_14059bf50(arg2)
int64_t rbp = sx.q(*(arg1 + 0x140))
int64_t* rax_2 = *rax_1
int32_t r12 = (rbp + 1).d
*(arg1 + 0x140) = r12

if (r12 s> *(arg1 + 0x144))
    sub_140b8a530(arg1 + 0x138)

int64_t r13 = rbp * 0x1e0
sub_142238c40(*(arg1 + 0x138) + r13, rax_2)
sub_1422514e0(*(arg1 + 0x138) + r13)
int64_t r9 = *(arg1 + 0x138)

if (*(r9 + r13 + 0x48) != 0 || *(r9 + r13 + 0x4c) != 0 || *(r9 + r13 + 0x50) != 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0x38))
    int32_t rax_9 = (rbp_1 + 1).d
    *(arg1 + 0x38) = rax_9
    
    if (rax_9 s> *(arg1 + 0x3c))
        sub_1405a4f90(arg1 + 0x30)
    
    int64_t* rax_12 = (rbp_1 << 4) + *(arg1 + 0x30)
    *rax_12 = 0
    rax_12[1] = 0
    int64_t* r14_2 = (rbp << 4) + *(arg1 + 0x30)
    *r14_2 = arg4
    r14_2[1] = arg3
    void** result_1 = j_sub_140a82f30(0x10)
    
    if (result_1 != 0)
        result = result_1
        int32_t rcx_10 = *(arg1 + 0x38) - 1
        *result_1 = arg1
        result_1[1].d = rcx_10
    
    int64_t rbp_2 = sx.q(*(arg1 + 0x18))
    int32_t rcx_11 = (rbp_2 + 1).d
    *(arg1 + 0x18) = rcx_11
    
    if (rcx_11 s> *(arg1 + 0x1c))
        sub_1405a4d70(arg1 + 0x10)
    
    *(*(arg1 + 0x10) + (rbp_2 << 3)) = result
    *(arg1 + 0x148) = 1
else
    int32_t rcx_6 = *(arg1 + 0x140)
    int32_t rax_4 = rcx_6 - rbp.d
    
    if (rax_4 != 1)
        memmove(r9 + r13, sx.q(r12) * 0x1e0 + r9, (rax_4 - 1) * 0x1e0)
        rcx_6 = *(arg1 + 0x140)
    
    *(arg1 + 0x140) = rcx_6 - 1

return result
