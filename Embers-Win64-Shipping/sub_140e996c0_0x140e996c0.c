// 函数: sub_140e996c0
// 地址: 0x140e996c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x6b])
sub_140745b20(&arg1[0x68])
sub_140745b20(&arg1[0x65])
sub_140745b20(&arg1[0x5f])
int32_t i_1 = arg1[0x5a].d
int64_t* rbx = arg1[0x59]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_4 = *rbx
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x5a].d = 0

if (*(arg1 + 0x2d4) != 0)
    sub_140638c50(&arg1[0x59], 0)

int64_t rcx_6 = arg1[0x59]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x57] = &data_142d82a88
int64_t* rbx_1 = arg1[0x56]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return sub_140de0ac0(arg1) __tailcall
