// 函数: sub_14188bee0
// 地址: 0x14188bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x2b8)
void*** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_14181e1b0(rax)

*arg1 = rax_1
int64_t rax_2 = *arg2
int64_t var_18 = 0
int32_t var_10 = 0
(*(rax_2 + 0x178))(arg2, 0)
int32_t rcx_3 = (*(*arg2 + 0x28))(arg2) + var_10
var_10 = rcx_3

if (rcx_3 s> 0)
    sub_1405daba0(&var_18)

int64_t rdi = *arg2
(*(rdi + 0x150))(arg2, var_18, (*(rdi + 0x28))(arg2))
char rax_7

if ((*(arg2 + 0x29) & 1) == 0)
    void*** rcx_7 = *arg1
    rax_7 = (*rcx_7)[0x28](rcx_7, &var_18)

if ((*(arg2 + 0x29) & 1) != 0 || rax_7 == 0)
    void*** rcx_8 = *arg1
    
    if (rcx_8 != 0)
        *arg1 = nullptr
        (**rcx_8)(rcx_8, 1)

int64_t rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return arg1
