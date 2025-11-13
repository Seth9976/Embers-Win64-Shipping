// 函数: sub_1405e6b80
// 地址: 0x1405e6b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = **(arg1 + 8)

if (rbp == 0)
    int64_t* rax
    rax.b = 0
    return rax

sub_1405e68c0(arg2, rbp + 8)
void* rdi = *(arg1 + 8)
*(arg1 + 8) = rbp
int64_t var_38
__builtin_memset(&var_38, 0, 0x28)
sub_1405e68c0(rbp + 8, &var_38)
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (rdi != 0)
    int64_t rcx_4 = *(rdi + 0x18)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *(rdi + 8)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    j_sub_140a74f90(rdi)

int64_t* rax_1
rax_1.b = 1
return rax_1
