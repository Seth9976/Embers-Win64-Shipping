// 函数: sub_1422ab8d0
// 地址: 0x1422ab8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)

if ((arg2[5].b & 1) == 0 || arg2[8].d s>= 0x1d9)
    return sub_14228ba00(arg2, arg1 + 0x28, zmm1) __tailcall

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 0x30)) * 0x158, sx.q(*(arg1 + 0x34)) * 0x158, r9)
int32_t rax_2 = *(arg1 + 0x30)
int64_t* rcx_1 = arg2[1]
int32_t arg_18 = rax_2
int32_t arg_20 = rax_2
int32_t* rdx_1 = *rcx_1

if (&rdx_1[1] u> rcx_1[1])
    int32_t* rdx_2 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_2, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_2, 4)
else
    arg_18 = *rdx_1
    *rcx_1 += 4

int64_t* rcx_3 = arg2[1]
int32_t* rdx_3 = *rcx_3

if (&rdx_3[1] u> rcx_3[1])
    int32_t* rdx_4 = &arg_20
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_4, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_4, 4)
else
    arg_20 = *rdx_3
    *rcx_3 += 4

int64_t rax_9 = *arg2
int32_t i = 0
int64_t var_38 = 0
int64_t* result = (*(rax_9 + 0x130))(arg2, &var_38)

if ((arg2[5].b & 1) != 0)
    zmm1 = sub_14229d5f0(arg1 + 0x28, arg_18)
    int64_t r14_1 = sx.q(*(arg1 + 0x30))
    int64_t r15_1 = sx.q(arg_18)
    int32_t rax_10 = (r14_1 + r15_1).d
    *(arg1 + 0x30) = rax_10
    
    if (rax_10 s> *(arg1 + 0x34))
        sub_140afefa0(arg1 + 0x28)
    
    result = memset(r14_1 * 0x158 + *(arg1 + 0x28), 0, r15_1 * 0x158)

if (*(arg1 + 0x30) s> 0)
    do
        result = sub_14213b490(arg2, sx.q(i) * 0x158 + *(arg1 + 0x28), zmm1)
        i += 1
    while (i s< *(arg1 + 0x30))

return result
