// 函数: sub_140f90e70
// 地址: 0x140f90e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]
(*(*rcx + 0x28))(rcx)
sub_140eec610(*arg1)
sub_140eec530(*arg1)
sub_140eec710(*arg1)
int64_t* rcx_4 = arg1[2]
(*(*rcx_4 + 8))(rcx_4, arg2, *arg1)
void var_28
int64_t* rax_2 = sub_140a98020(&var_28)

if (&arg1[0xb] != rax_2)
    arg1[0xb] = *rax_2
    *rax_2 = 0
    sub_1405aeff0(&arg1[0xc], &rax_2[1])

arg1[0xd].w = rax_2[2].w
*(arg1 + 0x6a) = *(rax_2 + 0x12)
int32_t result = *(rax_2 + 0x14)
*(arg1 + 0x6c) = result
int64_t* var_20

if (var_20 != 0)
    result = var_20[1].d
    var_20[1].d -= 1
    
    if (result == 1)
        result = (**var_20)(var_20)
        int32_t rdi_2 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_2))

return result
