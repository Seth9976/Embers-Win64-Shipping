// 函数: sub_1420798e0
// 地址: 0x1420798e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432af990
int64_t* var_10 = nullptr
int64_t var_18

if (&arg1[2] != &var_18)
    arg1[2] = 0
    var_18 = 0
    sub_1405aeff0(&arg1[3], &var_10)
    int64_t* rcx_2 = var_10
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* rbx_1 = var_10
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_4 = var_10
                (*(*rcx_4 + 8))(rcx_4, 1)

sub_1405ec8a0(&arg1[0x14])
arg1[0x11] = &data_142dda848
sub_1405d1550(&arg1[0x13])
sub_1419948a0(&arg1[0x11])
sub_1405ec8a0(&arg1[0x10])
arg1[0xd] = &data_142dda848
sub_1405d1550(&arg1[0xf])
sub_1419948a0(&arg1[0xd])
sub_1405ec8a0(&arg1[0xc])
arg1[9] = &data_142dda848
sub_1405d1550(&arg1[0xb])
sub_1419948a0(&arg1[9])
sub_1405ec8a0(&arg1[8])
arg1[5] = &data_142dda848
sub_1405d1550(&arg1[7])
sub_1419948a0(&arg1[5])
int64_t* rbx_2 = arg1[3]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return sub_1419948a0(arg1) __tailcall
