// 函数: sub_1426701c0
// 地址: 0x1426701c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg4
arg1[8] = arg3
int64_t zmm1 = arg5[1].q
int32_t rax_1 = *(arg5 + 0x18)
*(arg1 + 4) = *arg5
*(arg1 + 0x14) = zmm1
arg1[7] = rax_1
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
int64_t* rax_2 = j_sub_140a82f30(8)
int64_t* rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    *rax_2 = arg2

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_14345a2a8
    rbx_1[2] = rsi

int64_t* var_18 = rsi
void*** var_10 = rbx_1

if (&arg1[0xa] != &var_18)
    *(arg1 + 0x28) = rsi
    var_18 = nullptr
    sub_1405aeff0(&arg1[0xc], &var_10)
    rbx_1 = var_10

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*rbx_1)[1](rbx_1, zx.q(rsi_1))

return arg1
