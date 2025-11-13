// 函数: sub_141c99d90
// 地址: 0x141c99d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
void* rcx = *arg2
int32_t arg_10 = 0
int64_t var_18
char rax_2

if (rcx != 0)
    rdi = 1
    rax_2 = sub_140a32a50(sub_140b63b70(rcx + 0x10, &var_18), *arg1, 1)

int64_t** rbx

if (rcx == 0 || rax_2 == 0)
    rbx.b = 0
else
    rbx = 1

if ((rdi & 1) != 0)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return zx.q(rbx.b)
