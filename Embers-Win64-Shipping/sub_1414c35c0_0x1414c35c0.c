// 函数: sub_1414c35c0
// 地址: 0x1414c35c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c8830 == 0)
    return 

void* rcx = *(arg1 + 0x18)
char rax

if (rcx != 0)
    rax = sub_1414d7390(rcx, arg4)

if (rcx != 0 && rax == 0)
    return 

int64_t* rcx_1 = *(arg2 + 0x80)
uint64_t rdx_1 = zx.q(*(arg1 + 0x10))
int64_t* var_28 = rcx_1
int64_t* rax_2 = (*(*rcx_1 + 0x40))(rcx_1, rdx_1, &var_28)
int64_t rdx_2 = *rax_2
rax = (*(rdx_2 + 0x40))(rax_2, rdx_2)

if ((*(arg2 + 0x9c) & 8) == 0 || rax == 0)
    return 

int64_t arg_8 = sub_141261c60(arg2)
int32_t rax_4 = sub_141261c10(arg2, rax_2, &arg_8)
int32_t rax_5 = sub_141261bd0(arg2, rax_2, &arg_8)
sub_1414d7430(arg1, arg2, arg3, arg5, arg4, var_28, rax_2, rax_4, rax_5)
