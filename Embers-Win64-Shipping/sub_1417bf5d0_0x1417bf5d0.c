// 函数: sub_1417bf5d0
// 地址: 0x1417bf5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
void* rdx = &arg1[4]
arg1[2] = 0
arg1[3] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
sub_1405af100(&arg1[2], arg4)
arg1[0xc] = 0
int32_t rbp = *(*arg1 + 8)
void*** rax_2 = j_sub_140a82f30(0x20)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    *(rbx + 0xc) = rbp
    rbx[1].b = 0
    *rbx = &data_142fc9630
    rbx[2] = 0
    rbx[3] = 0
    int32_t rdx_2 = *(rbx + 0xc)
    
    if (rdx_2 s> 0)
        sub_1405c5570(&rbx[2], rdx_2)

void arg_8

if (&arg1[0xc] != &arg_8)
    void*** rcx_2 = arg1[0xc]
    arg1[0xc] = rbx
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
else if (rbx != 0)
    (**rbx)(rbx, 1)

int64_t rbx_1 = arg1[0xc]
int32_t var_28
sub_1405b3620(&arg1[2], &var_28)
int32_t rax_4 = var_28
int32_t* var_20
*var_20 = 4
*(var_20 + 8) = rbx_1
var_20[4] = 0xffffffff
sub_14104a220(&arg1[2], &arg_8, *var_20, var_20, rax_4, nullptr)
return arg1
