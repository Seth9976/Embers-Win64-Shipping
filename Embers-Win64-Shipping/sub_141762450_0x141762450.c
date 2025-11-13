// 函数: sub_141762450
// 地址: 0x141762450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = arg1[0x40]

if (rdi != 0)
    sub_1417059c0(rdi)
    j_sub_140a74f90(rdi)

*arg1 = &data_142fc6e10
sub_1405ae080(&arg1[0xd])
int32_t result = sub_1417620b0(&arg1[0xa])
int64_t* rbx_1 = arg1[9]

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
