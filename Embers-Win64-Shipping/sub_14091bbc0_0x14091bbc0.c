// 函数: sub_14091bbc0
// 地址: 0x14091bbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1fb18
sub_140596eb0(&arg1[0xb])
sub_140596eb0(&arg1[8])
int32_t result = sub_140596eb0(&arg1[5])
int64_t* rbx = arg1[4]

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        (**rbx)(rbx)
        result = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return result
