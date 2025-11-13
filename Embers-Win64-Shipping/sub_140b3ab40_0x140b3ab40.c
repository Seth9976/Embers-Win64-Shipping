// 函数: sub_140b3ab40
// 地址: 0x140b3ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(sub_140b3ea80(&arg1[9], *(arg2 + 8), *(arg2 + 0x10), *(arg2 + 0x15) & 1, arg4))
int32_t rax_2 = arg1[8].d
int32_t arg_8 = rbp.d

if (rax_2 s<= rbp.d)
    int64_t r14_1 = sx.q(rax_2)
    int32_t rax_3 = r14_1.d + rbp.d - rax_2 + 1
    arg1[8].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x44))
        sub_1405a4d70(&arg1[7])
    
    memset(arg1[7] + (r14_1 << 3), 0, sx.q(rbp.d - rax_2 + 1) << 3)

int64_t rdi_4 = rbp << 3
int32_t* rax_6 = *(rdi_4 + arg1[7])

if (rax_6 != 0)
    return rax_6

int32_t* rax_7 = j_sub_140a82f30(zx.q((&rax_6[0xe]).d))
int32_t* rcx_7

if (rax_7 == 0)
    rcx_7 = nullptr
else
    char var_38
    var_38.q = &arg1[9]
    rcx_7 = sub_140b2e750(rax_7, arg3, &arg_8, arg1[2], var_38, *arg1 + 0x80)

*(rdi_4 + arg1[7]) = rcx_7
return rcx_7
