// 函数: sub_141c969b0
// 地址: 0x141c969b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t var_18
int64_t* rax = sub_140b63b70(&arg_10, &var_18)
int64_t* rbx_1 = *arg1
int64_t rsi = sx.q(rbx_1[1].d)
int32_t rcx_1 = (rsi + 1).d
rbx_1[1].d = rcx_1

if (rcx_1 s> *(rbx_1 + 0xc))
    sub_1405a4f90(rbx_1)

int64_t* rcx_5 = (rsi << 4) + *rbx_1
*rcx_5 = 0
*rcx_5 = *rax
*rax = 0
rcx_5[1].d = rax[1].d
*(rcx_5 + 0xc) = *(rax + 0xc)
rax[1] = 0
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t result
result.b = 1
return result
