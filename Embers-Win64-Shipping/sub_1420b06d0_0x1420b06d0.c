// 函数: sub_1420b06d0
// 地址: 0x1420b06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432bfd00
int64_t* rcx = arg1[0x21]

if (rcx != 0)
    sub_142394bf0(rcx, arg2)

int64_t* rbx = arg1[0x22]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_142381c50(&arg1[4])
int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d857b8
return &data_142d857b8
