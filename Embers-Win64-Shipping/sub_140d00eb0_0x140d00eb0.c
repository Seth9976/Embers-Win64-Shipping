// 函数: sub_140d00eb0
// 地址: 0x140d00eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t rdi = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x40)
int64_t var_68
int64_t var_58
int64_t var_48

if (arg3 != 0)
    int64_t* rcx = *(arg1 + 0x78)
    int32_t rsi_2 = arg4 & 0xfffffffd
    int64_t var_38
    int64_t* rax_2 = (*(*rcx + 0x60))(rcx, &var_38, &var_48, zx.q(rsi_2))
    
    if (&var_68 != rax_2)
        rdi = *rax_2
        *rax_2 = 0
        int64_t var_60
        var_60.d = rax_2[1].d
        int32_t var_5c_1 = *(rax_2 + 0xc)
        rax_2[1] = 0
        var_68 = rdi
    
    int64_t rcx_3 = var_38
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t* rcx_4 = *(arg1 + 0x80)
    int64_t* rax_4 = (*(*rcx_4 + 0x60))(rcx_4, &var_38, &var_58, zx.q(rsi_2))
    int64_t rsi_3 = 0
    
    if (&var_78 != rax_4)
        rsi_3 = *rax_4
        *rax_4 = 0
        int64_t var_70
        var_70.d = rax_4[1].d
        var_70:4.d = *(rax_4 + 0xc)
        rax_4[1] = 0
        var_78 = rsi_3
    
    int64_t rcx_7 = var_38
    rbx = rsi_3
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int64_t* var_80 = &var_58
sub_140d018d0(arg1, arg2, arg3, zx.q(arg4), &var_68, &var_48, &var_78)
int64_t rcx_9 = var_58

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
