// 函数: sub_140968850
// 地址: 0x140968850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x110)
int32_t arg_8 = 0
int64_t var_28
int64_t var_18
int64_t* rcx_1
int32_t rdi

if (rcx == 0)
    var_28 = 0
    rcx_1 = &var_28
    int64_t var_20_1 = 0
    rdi = 2
else
    rcx_1 = (*(*rcx + 0x78))(rcx, &var_18)
    rdi = 1

*arg2 = 0
*arg2 = *rcx_1
*rcx_1 = 0
arg2[1].d = rcx_1[1].d
*(arg2 + 0xc) = *(rcx_1 + 0xc)
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

return arg2
