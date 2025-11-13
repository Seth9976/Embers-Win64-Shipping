// 函数: sub_140ce10b0
// 地址: 0x140ce10b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_10 = 0
void* rax = sub_140d21d80(arg1)
int64_t var_18
char rax_2

if (rax != 0)
    rdi = 1
    rax_2 = sub_140bacd80(sub_140d21e10(rax, &var_18, 0))

int64_t rbx

if (rax == 0 || rax_2 == 0)
    rbx.b = 0
else
    rbx = 1

if ((rdi & 1) != 0)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return zx.q(rbx.b)
