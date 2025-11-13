// 函数: sub_140f8bc30
// 地址: 0x140f8bc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14065da90(arg1 + 0x6a0, arg2)
*(arg1 + 0x6b8) = arg2[3].b
sub_140692f90(arg1 + 0x6c0, &arg2[4])
int32_t result = sub_140745b20(&arg2[4])
int64_t* rbx = arg2[1]

if (rbx != 0)
    result = rbx[1].d
    rbx[1].d -= 1
    
    if (result == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx + 8))(rbx, zx.q(rdi_1))

return result
