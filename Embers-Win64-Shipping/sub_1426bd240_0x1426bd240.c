// 函数: sub_1426bd240
// 地址: 0x1426bd240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143b57f9c
int64_t* rcx = *(arg1 + 0x2d8)

if (rcx != 0)
    int64_t var_18 = *arg4
    void* rax_2 = arg4[1]
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rcx = *(arg1 + 0x2d8)
    
    void arg_8
    rax = *(*(*rcx + 0x408))(rcx, &arg_8, arg3, &var_18)

int64_t* rbx_1 = arg4[1]
*arg2 = rax

if (rbx_1 == 0)
    return arg2

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg2
