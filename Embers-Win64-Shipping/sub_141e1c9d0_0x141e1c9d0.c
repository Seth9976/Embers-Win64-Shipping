// 函数: sub_141e1c9d0
// 地址: 0x141e1c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int64_t* rax_1 = *(*(arg1 + 0x80) + (rbp << 3))

if (rax_1 != 0)
    return rax_1

int64_t* rax_2 = j_sub_140a82f30(zx.q((&rax_1[9]).d))
int64_t* rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = rax_2
else
    *rbx_1 = *arg3
    __builtin_memset(&rbx_1[1], 0, 0x33)
    rbx_1[8].b = arg3[8].b != 0
    *arg3
    arg4 = sub_141e295c0(rbx_1)

*(*(arg1 + 0x80) + (rbp << 3)) = rbx_1
void* rax_6 = *(arg1 + 0x28)

if (rax_6 == 0 || rbp.d s>= *(rax_6 + 0x18) || *(*(rax_6 + 0x10) + rbp * 0x58 + 0x28) == 0)
    int64_t arg_8 = *arg3
    sub_141e18430(arg1, rbp.d, &arg_8)
    int64_t* rcx_4 = *(*(arg1 + 0x40) + rbp * 0x10 + 8)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x18))(rcx_4, rbx_1)
    else if (rbx_1[8].b == 0)
        sub_141e0ba30(&rbx_1[1])
    else
        sub_141e47c50(&rbx_1[1], arg4)

return rbx_1
