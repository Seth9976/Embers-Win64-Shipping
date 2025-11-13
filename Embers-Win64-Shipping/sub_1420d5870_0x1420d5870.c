// 函数: sub_1420d5870
// 地址: 0x1420d5870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140aae6a0()
char rax = sub_140aac470(&data_143db9ce0, arg1, arg2, arg3)
int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_2 = *rbx_1
        (*rdx_2)(rbx_1, rdx_2)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return zx.q(rax)
