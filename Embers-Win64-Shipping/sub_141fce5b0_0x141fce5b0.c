// 函数: sub_141fce5b0
// 地址: 0x141fce5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1405ba450(arg1 + 0x3c8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rbx

if (rax.d == 0xffffffff)
    rbx = 0
else
    rbx = *(arg1 + 0x3c8) + rax * 0x28

void* rbx_1 = *(rbx + 8)

if (*(rbx_1 + 0x28) == 0)
    rax.b = 0
    return rax

int64_t arg_18
sub_140d3a3a0(&arg_18, arg2)
void* rdi = *(arg1 + 0x150)
sub_141f87aa0(rdi + 0x50, &arg_8, arg_18)
int64_t rax_1 = sx.q(arg_8)
void* const rcx_3

if (rax_1.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = *(rdi + 0x50) + rax_1 * 0x14

int32_t* rdi_1 = rcx_3 + 8

if (rcx_3 == 0)
    rdi_1 = nullptr

int32_t rax_6

if (rdi_1 == 0)
    rax_6 = *(rbx_1 + 0x2c)
    *(rbx_1 + 0x28) = 0
    
    if (rax_6 s<= 0xffffffff)
        sub_1405c5510(rbx_1 + 0x20, 0)
    
    *(rbx_1 + 0x30) = 0
    rax_6.b = 0
else
    int64_t var_28
    sub_140d3a3a0(&var_28, arg2)
    int32_t rax_3 = *rdi_1
    int64_t rdi_2 = sx.q(*(arg1 + 0xe90))
    int32_t rax_4 = (rdi_2 + 1).d
    *(arg1 + 0xe90) = rax_4
    
    if (rax_4 s> *(arg1 + 0xe94))
        sub_14083a7e0(arg1 + 0xe88)
    
    int64_t rax_5 = *(arg1 + 0xe88)
    int64_t rcx_6 = rdi_2 * 3
    *(rax_5 + (rcx_6 << 2)) = var_28
    *(rax_5 + (rcx_6 << 2) + 8) = rax_3
    rax_6.b = 1

return rax_6
