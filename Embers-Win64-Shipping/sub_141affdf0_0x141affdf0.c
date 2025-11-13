// 函数: sub_141affdf0
// 地址: 0x141affdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141afc370(&arg1[0x26])
sub_141afc270(&arg1[0x24])
sub_141afc5d0(&arg1[0x22])
sub_141afc560(&arg1[0x20])
int32_t i_2 = arg1[0x1f].d
void* rcx_4 = arg1[0x1e]

if (i_2 != 0)
    void*** rbx_1 = rcx_4 + 8
    int32_t i
    
    do
        sub_1405aec80(rbx_1)
        rbx_1 = &rbx_1[0x15]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_4 = arg1[0x1e]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_3 = arg1[0x1d].d
void* rcx_6 = arg1[0x1c]

if (i_3 != 0)
    void*** rbx_2 = rcx_6 + 8
    int32_t i_1
    
    do
        sub_140746700(rbx_2)
        rbx_2 = &rbx_2[0x13]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_6 = arg1[0x1c]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rbx_3 = arg1[0x1b]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_1408ec310(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
