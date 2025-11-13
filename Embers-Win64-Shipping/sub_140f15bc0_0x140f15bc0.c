// 函数: sub_140f15bc0
// 地址: 0x140f15bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *arg2
char rax_1 = arg2[1]
int64_t var_20 = 0
int32_t var_18 = 0
sub_140692f90(&var_20, &arg2[8])
void* rdi = *(arg1 + 0x4d0)
*(rdi + 0x3a8) = rax
*(rdi + 0x3a9) = rax_1
sub_140692f90(rdi + 0x3b0, &var_20)
void* rcx_2 = *(rdi + 0x2b0)
*(rcx_2 + 0x10) = *(rdi + 0x3a8)
*(rcx_2 + 0x11) = *(rdi + 0x3a9)
sub_140692f90(rcx_2 + 0x18, rdi + 0x3b0)
sub_140745b20(&var_20)
return sub_140745b20(&arg2[8]) __tailcall
