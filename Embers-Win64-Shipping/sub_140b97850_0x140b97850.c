// 函数: sub_140b97850
// 地址: 0x140b97850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e82ce8

if (sub_140a80c80() != 0)
    sub_1405a46b0(&sub_140a752e0()[8], arg1)

sub_1405a46b0(&data_1439a9660, arg1)
sub_1405a46b0(&data_1439a9678, arg1)
sub_1405ae080(&arg1[0xc])
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b96810(&arg1[8])
int64_t* rbx = arg1[7]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

DeleteCriticalSection(&arg1[1])
*arg1 = &data_142dd6680
return &data_142dd6680
