// 函数: sub_141d4e750
// 地址: 0x141d4e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rcx_2
int32_t rdi_1

if (rcx == 0)
    var_28 = 0
    rcx_2 = &var_28
    int64_t var_20_1 = 0
    rdi_1 = 2
else
    int64_t* rax_2 = (*(*rcx + 0x38))(rcx)
    rcx_2 = (*(*rax_2 + 0x30))(rax_2, &var_18, zx.q(arg3), zx.q(arg4))
    rdi_1 = 1

*arg2 = 0
*arg2 = *rcx_2
*rcx_2 = 0
arg2[1].d = rcx_2[1].d
*(arg2 + 0xc) = *(rcx_2 + 0xc)
rcx_2[1] = 0

if ((rdi_1.b & 2) != 0)
    int64_t rcx_3 = var_28
    rdi_1 &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rdi_1.b & 1) != 0)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
