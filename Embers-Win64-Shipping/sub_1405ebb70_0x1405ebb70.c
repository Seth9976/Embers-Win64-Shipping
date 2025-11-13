// 函数: sub_1405ebb70
// 地址: 0x1405ebb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int64_t var_28 = -2
*arg1 = &data_142d5ecd0
arg1[1] = &data_142d5ed98
arg1[2] = &data_142d5edb0
arg1[3] = 0
arg1[4] = arg2
arg1[5] = 0
arg1[6] = 0
void*** rax = j_sub_140a82f30(0x100)
void*** arg_10 = rax
void*** rcx_1

if (rax == 0)
    rcx_1 = nullptr
else
    rcx_1 = sub_1405ebcc0(rax)

arg1[7] = rcx_1

if (rcx_1 != 0)
    (*rcx_1)[1]()

void*** rax_3 = j_sub_140a82f30(0x1d0)
void*** rbx = rax_3
arg_10 = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx = &data_142d62b20
    sub_1405ebde0(&rbx[2])

arg1[8] = &rbx[2]
void*** rbx_1 = rbx
arg1[9] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rbx

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*rbx_1)[1](rbx_1, zx.q(rsi_1))

return arg1
