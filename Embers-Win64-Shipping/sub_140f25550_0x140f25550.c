// 函数: sub_140f25550
// 地址: 0x140f25550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x7f])
sub_140745b20(&arg1[0x7d])
sub_140745b20(&arg1[0x7b])
sub_140745b20(&arg1[0x79])
sub_140745b20(&arg1[0x77])
sub_140745b20(&arg1[0x73])
sub_140745b20(&arg1[0x6e])
sub_140745b20(&arg1[0x6b])
int64_t* rbx = arg1[0x69]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&arg1[0x63])
int64_t* rbx_1 = arg1[0x61]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(&arg1[0x5a])
sub_140745b20(&arg1[0x57])
return sub_140de0ac0(arg1) __tailcall
