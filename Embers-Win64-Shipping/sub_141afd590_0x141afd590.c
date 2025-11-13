// 函数: sub_141afd590
// 地址: 0x141afd590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141afc370(&arg1[0xe])
sub_141afc270(&arg1[0xc])
sub_141afc5d0(&arg1[0xa])
sub_141afc560(&arg1[8])
int32_t i_2 = arg1[7].d
void* rcx_4 = arg1[6]

if (i_2 != 0)
    void*** rbx_1 = rcx_4 + 8
    int32_t i
    
    do
        sub_140746700(rbx_1)
        rbx_1 = &rbx_1[0x13]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_4 = arg1[6]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_3 = arg1[5].d
void* rcx_6 = arg1[4]

if (i_3 != 0)
    void*** rbx_2 = rcx_6 + 8
    int32_t i_1
    
    do
        sub_1405aec80(rbx_2)
        rbx_2 = &rbx_2[0x15]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_6 = arg1[4]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*arg1 = &data_142d4b9d8
return &data_142d4b9d8
