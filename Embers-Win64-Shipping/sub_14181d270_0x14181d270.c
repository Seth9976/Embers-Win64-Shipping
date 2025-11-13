// 函数: sub_14181d270
// 地址: 0x14181d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax != 0)
    rcx = rax

void var_28
int64_t* rax_3 = (*arg2)(&var_28, (*(*rcx + 8))(rcx))
int64_t var_48 = *rax_3
int64_t* rcx_3 = rax_3[1]
__builtin_memset(rax_3, 0, 0x20)
int64_t rcx_4 = rax_3[2]
int32_t var_30 = rax_3[3].d
int32_t var_2c = *(rax_3 + 0x1c)
int64_t var_18

if (var_18 != 0)
    arg5 = sub_140a74f90(var_18)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_7 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_20 + 8))(var_20, 1)

int32_t result = sub_1418197a0(arg1, &var_48, arg3, arg4, arg5)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

if (rcx_3 != 0)
    result = rcx_3[1].d
    rcx_3[1].d -= 1
    
    if (result == 1)
        result = (**rcx_3)(rcx_3)
        int32_t rdi_1 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return result
