// 函数: sub_140f24df0
// 地址: 0x140f24df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d952d0(&arg1[0xaa])
int64_t* rbx = arg1[0xa9]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&arg1[0xa6])
sub_140745b20(&arg1[0xa3])
int64_t* rbx_1 = arg1[0x9f]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return sub_140691bd0(arg1) __tailcall
