// 函数: sub_140932d10
// 地址: 0x140932d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_28 = 0
int32_t r9 = 0
int64_t var_20 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r9 = var_20:4.d
        rdx = var_20.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_20.d = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, arg2, (rbx_1.d + 1) * 2)

sub_140939040(*(arg1 + 8), &var_28)
int64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rdi_1 = *arg3
int64_t rsi_3 = (sx.q(arg3[1].d) << 4) + rdi_1
int16_t arg_8

while (rdi_1 != rsi_3)
    int64_t* rbx_3 = *(arg1 + 8)
    int32_t rcx_5 = rbx_3[4].d
    
    if (((rcx_5 - 2) & 0xfffffff5) != 0 || rcx_5 == 0xa)
        int64_t* rcx_6 = rbx_3[1]
        arg_8 = 0x2c
        (*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
    
    (*(*rbx_3 + 0x10))(rbx_3, rdi_1)
    rdi_1 += 0x10
    rbx_3[4].d = 7

void* rbx_4 = *(arg1 + 8)
arg_8 = 0x5d
int64_t* rcx_8 = *(rbx_4 + 8)
*(rbx_4 + 0x24) -= 1
(*(*rcx_8 + 0x150))(rcx_8, &arg_8, 2)
*(rbx_4 + 0x18) -= 1
int64_t result = sub_140679af0(rbx_4 + 0x10)
*(rbx_4 + 0x20) = 5
return result
