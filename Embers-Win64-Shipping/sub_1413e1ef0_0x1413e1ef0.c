// 函数: sub_1413e1ef0
// 地址: 0x1413e1ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f1b7 == 0)
    return 

int64_t rcx = sx.q(arg1[5].d)

if (arg1[(rcx + 7) * 2] == 0)
    int64_t* rcx_1 = *arg1
    int64_t var_38
    int64_t* rax_4 = (*(*rcx_1 + 8))(rcx_1, &var_38)
    sub_1413c6650(&arg1[(sx.q(arg1[5].d) + 7) * 2], rax_4)
    int64_t* var_30
    
    if (var_30 != 0 && var_38 != 0)
        (*(*var_30 + 0x10))(var_30, &var_38)
        int64_t var_30_1 = 0
    
    sub_14081c9d0(&var_38)
    rcx = zx.q(arg1[5].d)

void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_1 = arg1[(sx.q(rcx.d) + 7) * 2]
void* rax_9 = &rcx_10[3]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x20)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_10[3]

*(arg2 + 0x30) = rax_9
int64_t* rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142f284f8
rcx_10[2] = rdi_1
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_16[2]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x18)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_16[2]

*(arg2 + 0x30) = rax_12
int64_t* rax_13 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_13 = rcx_16
*(arg2 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142dd5b50

if (data_143f01c92 == 0)
    return 

void* rbx_1 = &arg1[0x17]
int64_t i_1 = 3
int64_t i

do
    void* rax_15 = *(rbx_1 - 8)
    int64_t* rcx_20 = *rbx_1
    *rbx_1 = rax_15
    
    if (rax_15 != 0)
        *(rax_15 + 0x48) += 1
    
    if (rcx_20 != 0)
        rcx_20[9].d -= 1
        
        if (rcx_20[9].d == 1)
            sub_140a2f6e0(rcx_20)
    
    rbx_1 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* arg_20
int64_t* rax = sub_141980430(arg2, &arg_20, 0)

if (&arg1[0x16] != rax)
    int64_t* rcx_22 = arg1[0x16]
    arg1[0x16] = *rax
    *rax = 0
    
    if (rcx_22 != 0)
        rcx_22[9].d -= 1
        
        if (rcx_22[9].d == 1)
            sub_140a2f6e0(rcx_22)

int64_t* rcx_23 = arg_20

if (rcx_23 != 0)
    rcx_23[9].d -= 1
    
    if (rcx_23[9].d == 1)
        sub_140a2f6e0(rcx_23)

if (*(arg2 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg2, arg3, arg4)
