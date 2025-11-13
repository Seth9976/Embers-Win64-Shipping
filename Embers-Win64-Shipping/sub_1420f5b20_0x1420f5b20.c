// 函数: sub_1420f5b20
// 地址: 0x1420f5b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597700(&arg1[0x34])
sub_141ff65a0(&arg1[0x1b])
sub_140596eb0(&arg1[0x18])
int32_t i_1 = arg1[0x16].d
void*** rbx = arg1[0x15]

if (i_1 != 0)
    int32_t i
    
    do
        sub_1422dbdb0(rbx)
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x15]

if (rbx != 0)
    sub_140a74f90(rbx)

arg1[9] = &data_142e259e0
int64_t rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rbx_1 = arg1[0xb]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140b0bbe0(&arg1[5])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
