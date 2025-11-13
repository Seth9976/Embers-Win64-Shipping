// 函数: sub_1420c24b0
// 地址: 0x1420c24b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t rax_1
int64_t* rcx_1
int32_t rdi

if (arg2 == 0)
    int64_t var_20_1 = 0
    rcx_1 = &var_28
    rdi = 2
    rax_1 = 0
else
    arg_8.q = *(arg2 + 0x18)
    sub_140b63b70(&arg_8, &var_18)
    rax_1 = var_18
    rcx_1 = &var_18
    rdi = 1

*arg1 = rax_1
*rcx_1 = 0
arg1[1].d = rcx_1[1].d
*(arg1 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rdi.b & 2) != 0)
    int64_t rcx_2 = var_28
    rdi &= 0xfffffffd
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rdi.b & 1) != 0)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg1
