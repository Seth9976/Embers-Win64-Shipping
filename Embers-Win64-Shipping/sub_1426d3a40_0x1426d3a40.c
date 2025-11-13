// 函数: sub_1426d3a40
// 地址: 0x1426d3a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax_1 = (*(*arg1 + 0x2a0))(arg1, &var_18)
int64_t rsi = sx.q(arg2[1].d)
int32_t rcx = (rsi + 1).d
arg2[1].d = rcx

if (rcx s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_4 = (rsi << 4) + *arg2
*rcx_4 = 0
*rcx_4 = *rax_1
*rax_1 = 0
rcx_4[1].d = rax_1[1].d
int32_t result = *(rax_1 + 0xc)
*(rcx_4 + 0xc) = result
rax_1[1] = 0
int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
