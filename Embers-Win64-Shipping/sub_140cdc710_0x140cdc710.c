// 函数: sub_140cdc710
// 地址: 0x140cdc710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x20)
int64_t var_38

if (arg3 != 0)
    int64_t* rcx = *(arg1 + 0x78)
    int64_t var_28
    int64_t* rax_2 = (*(*rcx + 0x60))(rcx, &var_28, &var_38, zx.q(arg4) & 0xfffffffd)
    int64_t rsi_1 = 0
    
    if (&var_48 != rax_2)
        rsi_1 = *rax_2
        *rax_2 = 0
        int64_t var_40
        var_40.d = rax_2[1].d
        var_40:4.d = *(rax_2 + 0xc)
        rax_2[1] = 0
        var_48 = rsi_1
    
    int64_t rcx_3 = var_28
    rbx = rsi_1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int64_t* var_50 = &var_38
sub_140cdc810(arg1, arg2, arg3, zx.q(arg4), &var_48)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg2
