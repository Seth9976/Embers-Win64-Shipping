// 函数: sub_140e54610
// 地址: 0x140e54610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x73])
sub_140745b20(&arg1[0x70])
int64_t* rbx = arg1[0x6e]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140691a20(&arg1[0x59])
sub_140745b20(&arg1[0x57])
return sub_140de0ac0(arg1) __tailcall
