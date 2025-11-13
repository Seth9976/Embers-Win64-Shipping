// 函数: sub_1426b1600
// 地址: 0x1426b1600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax = sub_1426b2ca0(arg2)
int64_t var_28
int64_t var_18
int64_t rax_2
int64_t* rcx_3
int32_t rdi_1

if (rax == 0)
    int64_t var_20_1 = 0
    rcx_3 = &var_28
    rdi_1 = 2
    rax_2 = 0
else
    sub_1426a2700(rax, &var_18, sub_1426b21d0(rax, arg3 + 0x10))
    rax_2 = var_18
    rcx_3 = &var_18
    rdi_1 = 1

*arg1 = rax_2
*rcx_3 = 0
arg1[1].d = rcx_3[1].d
*(arg1 + 0xc) = *(rcx_3 + 0xc)
rcx_3[1] = 0

if ((rdi_1.b & 2) != 0)
    int64_t rcx_4 = var_28
    rdi_1 &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((rdi_1.b & 1) != 0)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg1
