// 函数: sub_14212ac50
// 地址: 0x14212ac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x90)
int64_t* rdx = rcx[1]
int32_t* r8 = *rdx
int32_t arg_20

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_20
    
    if ((*(rcx + 0x29) & 0x20) != 0)
        sub_140b54070(rcx, rdx_1, arg2)
    else
        (*(*rcx + 0x150))(arg5, rdx_1, 4)
else
    arg_20 = *r8
    int64_t* rax_2 = rcx[1]
    *rax_2 += 4

int32_t rax_4 = arg_20
*(arg1 + 0xa0) = 0

if (*(arg1 + 0xa4) != rax_4)
    sub_140638c50(arg1 + 0x98, rax_4)
    rax_4 = arg_20

int32_t rsi = 0
int64_t var_848

if (rax_4 s> 0)
    do
        int64_t* rcx_2 = *(arg1 + 0x90)
        int32_t var_838 = 0
        char var_834_1 = 0
        int32_t var_32_1 = 0
        sub_140b5b600(rcx_2, &var_838, arg2)
        arg2 = sub_140b57e80(&var_848, &var_838)
        int64_t rdi_1 = sx.q(*(arg1 + 0xa0))
        int32_t rax_5 = (rdi_1 + 1).d
        *(arg1 + 0xa0) = rax_5
        
        if (rax_5 s> *(arg1 + 0xa4))
            sub_1405a4d70(arg1 + 0x98)
        
        rsi += 1
        *(*(arg1 + 0x98) + (rdi_1 << 3)) = var_848
    while (rsi s< arg_20)

int64_t* rcx_6 = *(arg1 + 0x90)
var_848 = 0
int64_t var_840 = 0
sub_1418d5c30(rcx_6, &var_848, arg2)
int64_t* r9 = *(arg1 + 0x90)
int64_t* rcx_7 = r9[1]
int32_t* rdx_7 = *rcx_7
int32_t arg_8

if (&rdx_7[1] u> rcx_7[1])
    int32_t* rdx_8 = &arg_8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_8, arg2)
    else
        (*(*r9 + 0x150))(r9, rdx_8, 4)
else
    arg_8 = *rdx_7
    int64_t* rax_9 = r9[1]
    *rax_9 += 4

int64_t* rcx_9 = *(arg1 + 0x90)
int64_t result = (*(*rcx_9 + 0x20))(rcx_9)
*(arg1 + 0xa8) = result

if (arg4 != 0)
    *(arg1 + 0xb0) = sx.q(arg_8) + result

int64_t rcx_12 = var_848

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
