// 函数: sub_14183a670
// 地址: 0x14183a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void arg_10

if (*sub_14062d6e0(arg1 + 0x108, &arg_10, arg3) == 0xffffffff)
    return arg2

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rsi = rax_1

if (rax_1 == 0)
    rsi = nullptr
else
    int32_t arg_8
    sub_14062d6e0(arg1 + 0x108, &arg_8, arg3)
    int64_t rcx_2 = sx.q(arg_8)
    void* const rdx_2
    
    if (rcx_2.d == 0xffffffff)
        rdx_2 = nullptr
    else
        rdx_2 = *(arg1 + 0x108) + rcx_2 * 0x28
    
    *rsi = &data_142fe32f0
    sub_140596d10(&rsi[1], rdx_2 + 0x10)

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rsi

void*** var_28 = rsi
void*** var_20 = rbx_1

if (arg2 != &var_28)
    *arg2 = rsi
    var_28 = nullptr
    sub_1405aeff0(&arg2[1], &var_20)
    rbx_1 = var_20

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*rbx_1)[1](rbx_1, zx.q(rsi_1))

return arg2
