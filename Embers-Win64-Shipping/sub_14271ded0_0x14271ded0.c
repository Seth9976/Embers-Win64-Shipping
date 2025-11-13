// 函数: sub_14271ded0
// 地址: 0x14271ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14263bb40(arg1)
(*(*arg1 + 0x2b8))(arg1)
(*(*arg1 + 0x2c0))(arg1)

if (arg1[0x1e].d != 0xffffffff)
    void* rcx_2 = arg1[0xd]
    int64_t* rcx_3
    
    if (rcx_2 == 0)
        rcx_3 = nullptr
    else
        rcx_3 = *(rcx_2 + 0x2d8)
    
    if (rcx_3 != 0 && rcx_3[0x37].b != 0)
        (*(*rcx_3 + 0x418))(rcx_3, arg1, 0x10, zx.q(arg1[0x1e].d), 0)

int64_t* var_10 = nullptr
int64_t var_18
int32_t result = &var_18

if (&arg1[0x1f] != &var_18)
    arg1[0x1f] = 0
    var_18 = 0
    result = sub_1405aeff0(&arg1[0x20], &var_10)
    int64_t* rcx_6 = var_10
    
    if (rcx_6 != 0)
        result = rcx_6[1].d
        rcx_6[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_10
            result = (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_8 = var_10
                return (*(*rcx_8 + 8))(rcx_8, zx.q(rdi_1))

return result
