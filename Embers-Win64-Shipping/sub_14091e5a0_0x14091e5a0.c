// 函数: sub_14091e5a0
// 地址: 0x14091e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1fef8
arg1[0x16].d = 0
int64_t rcx = arg1[0x15]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140681eb0(&arg1[0xd])
arg1[0xc].d = 0
int64_t rcx_2 = arg1[0xb]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140681eb0(&arg1[3])
int64_t* rbx = arg1[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg1 = &data_142e1f8c0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
