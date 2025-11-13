// 函数: sub_140cddf60
// 地址: 0x140cddf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 1)
    return &__return_addr

void** var_a8
sub_140b4c2a0(&var_a8)
char var_7e
char var_7e_1 = var_7e | 0x80
char var_7d
char var_7d_1 = var_7d | 2
int64_t rdi_1 = 0
var_a8 = &data_142e2a750
int64_t rax = 0
int64_t var_10_1 = 0
int64_t var_18_1 = 0

if (arg1 != 0)
    (*(*arg1 + 0xa0))(arg1, &var_a8)
    rax = var_10_1

*(arg2 + 8) += rax
int64_t* var_b8 = nullptr
int32_t var_b0_1 = 0
sub_140d3ccc0(arg1, &var_b8, 0, 0, 0)
int64_t* rbx_1 = var_b8
void* rcx_3 = &rbx_1[sx.q(var_b0_1)]
uint64_t rbp_4 = (rcx_3 - rbx_1 + 7) u>> 3

if (rbx_1 u> rcx_3)
    rbp_4 = 0

if (rbp_4 != 0)
    do
        int64_t* rcx_4 = *rbx_1
        (*(*rcx_4 + 0x160))(rcx_4, arg2)
        rdi_1 += 1
        rbx_1 = &rbx_1[1]
    while (rdi_1 != rbp_4)
    
    rbx_1 = var_b8

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return sub_140b4cb40(&var_a8)
