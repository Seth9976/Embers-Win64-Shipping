// 函数: sub_140d958a0
// 地址: 0x140d958a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec2888
DeleteCriticalSection(&arg1[0x1d])
sub_140596eb0(&arg1[0x1a])
sub_140596eb0(&arg1[0x17])
int64_t* rbx = arg1[0x16]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140d72800(&arg1[9])
int64_t* rbx_1 = arg1[5]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return sub_140d94cb0(&arg1[2]) __tailcall
