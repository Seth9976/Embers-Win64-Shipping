// 函数: sub_140939540
// 地址: 0x140939540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_18 = 0
int32_t r8 = 0
int64_t var_10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        r8 = var_10:4.d
        rdx = var_10.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_10.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

int64_t* rbx_3 = *(arg1 + 8)
int32_t rcx_3 = rbx_3[4].d
int16_t arg_8

if (((rcx_3 - 2) & 0xfffffff5) != 0 || rcx_3 == 0xa)
    int64_t* rcx_4 = rbx_3[1]
    arg_8 = 0x2c
    (*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)

sub_14067f880(rbx_3[1])
int32_t i_2 = *(rbx_3 + 0x24)
int64_t* rdi_1 = rbx_3[1]

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_4 = *rdi_1
        arg_8 = 9
        (*(rax_4 + 0x150))(rdi_1, &arg_8, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*rbx_3 + 0x10))(rbx_3, &var_18)
int64_t* rcx_8 = rbx_3[1]
arg_8 = 0x3a
(*(*rcx_8 + 0x150))(rcx_8, &arg_8, 2)
int64_t* rcx_9 = rbx_3[1]
arg_8 = 0x20
int64_t result = (*(*rcx_9 + 0x150))(rcx_9, &arg_8, 2)
rbx_3[4].d = 0xc
int64_t rcx_10 = var_18

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
