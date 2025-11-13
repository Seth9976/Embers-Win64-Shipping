// 函数: sub_140e58640
// 地址: 0x140e58640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ed8e60
sub_140596eb0(&arg1[0x21])
int64_t* rbx = arg1[0x20]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_1405ae080(&arg1[0x15])
arg1[0x14].d = 0
int64_t rcx_4 = arg1[0x13]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140e53410(&arg1[0xb])
arg1[0xa].d = 0
int64_t rcx_6 = arg1[9]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140e620e0(&arg1[1], 0)
int64_t rcx_8 = arg1[5]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[1]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
