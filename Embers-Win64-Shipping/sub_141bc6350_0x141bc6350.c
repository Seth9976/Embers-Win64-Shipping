// 函数: sub_141bc6350
// 地址: 0x141bc6350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x35]
char arg_8 = 0
int64_t rax = *(rdi + 0x28)

if (rax != 0)
    int64_t arg_10 = rax
    sub_141b972f0(&arg_8, &arg_10)
    void* rcx_1 = *(rdi + 0x28)
    int64_t (* var_18)(int64_t arg1, int64_t* arg2) = sub_141b972f0
    char* var_10_1 = &arg_8
    sub_141ba8640(rcx_1, &var_18)

(*(*arg1 + 0x310))(arg1)
jump(*(*arg1 + 0x318))
