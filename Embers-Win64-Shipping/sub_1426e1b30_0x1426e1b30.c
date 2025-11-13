// 函数: sub_1426e1b30
// 地址: 0x1426e1b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
void* rax = *(arg1 + 0x70)
int16_t* var_38
int16_t* const rdi

if (rax == 0)
    rdi = &data_142d40450
else
    arg_8.q = *(rax + 0x18)
    sub_140b63b70(&arg_8, &var_38)
    rdi = &data_142d40450
    rsi = 1

int64_t var_28
int64_t* rax_2 = sub_1426b3750(arg1, &var_28)

if (rax_2[1].d != 0)
    rdi = *rax_2

sub_140a2e390(arg2, u"%s: '%s'", rdi)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if ((rsi & 1) != 0)
    int16_t* rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
