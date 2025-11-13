// 函数: sub_140ce3390
// 地址: 0x140ce3390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg2
char arg_8
char* var_10 = &arg_8
arg_8 = 0
void*** (* var_18)() = j_sub_140cd6f60
void* rax = sub_140a756e0(&var_18, &data_1439aa2e0)
int64_t rdi = sx.q(*(rax + 0x18))
int32_t rcx_1 = (rdi + 1).d
*(rax + 0x18) = rcx_1

if (rcx_1 s> *(rax + 0x1c))
    sub_1405a4d70(rax + 0x10)

int64_t result = *(rax + 0x10)
*(result + (rdi << 3)) = arg2
return result
