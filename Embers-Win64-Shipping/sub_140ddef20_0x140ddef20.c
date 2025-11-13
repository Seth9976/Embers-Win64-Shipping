// 函数: sub_140ddef20
// 地址: 0x140ddef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0x58)
int64_t* rbx = *(arg1 + 0x40)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t result = sub_140745b20(arg1 + 0x28)
int64_t* rbx_1 = *(arg1 + 0x10)

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
