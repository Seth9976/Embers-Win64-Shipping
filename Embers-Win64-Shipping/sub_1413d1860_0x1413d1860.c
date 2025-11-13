// 函数: sub_1413d1860
// 地址: 0x1413d1860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f1b7 == 0)
    return 

int64_t rcx = sx.q(arg1[5].d)

if (arg1[(rcx + 3) * 2] == 0)
    int64_t* rcx_1 = *arg1
    int64_t var_18
    int64_t* rax_4 = (*(*rcx_1 + 8))(rcx_1, &var_18)
    sub_1413c6650(&arg1[(sx.q(arg1[5].d) + 3) * 2], rax_4)
    int64_t* var_10
    
    if (var_10 != 0 && var_18 != 0)
        (*(*var_10 + 0x10))(var_10, &var_18)
        int64_t var_10_1 = 0
    
    sub_14081c9d0(&var_18)
    rcx = zx.q(arg1[5].d)

void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rsi_1 = arg1[(sx.q(rcx.d) + 3) * 2]
void* rax_9 = &rcx_10[3]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_10[3]

*(arg2 + 0x30) = rax_9
int64_t* rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
rcx_10[2] = rsi_1
*rcx_10 = &data_142f284f8
