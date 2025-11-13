// 函数: sub_1426ed850
// 地址: 0x1426ed850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg1[2]
int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rax_1
int32_t rdi

if (r9 == 0)
    rax_1 = (**arg1)(arg3, &var_28)
    rdi = 2
else
    rax_1 = (*(*r9 + 0x268))(r9, &var_18, arg1[3])
    rdi = 1

*arg2 = 0
*arg2 = *rax_1
*rax_1 = 0
arg2[1].d = rax_1[1].d
*(arg2 + 0xc) = *(rax_1 + 0xc)
rax_1[1] = 0

if ((rdi.b & 2) != 0)
    int64_t rcx_2 = var_28
    rdi &= 0xfffffffd
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rdi.b & 1) != 0)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg2
