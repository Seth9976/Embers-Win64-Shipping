// 函数: sub_1426cb280
// 地址: 0x1426cb280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0xa9].d
int64_t* rbx = arg1[0xa8]

if (i_1 != 0)
    int32_t i
    
    do
        sub_1426ca9a0(rbx)
        rbx = &rbx[0x2d]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0xa8]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rbx_1 = arg1[0xa7]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_4 = arg1[0xa4]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1420794e0(&arg1[0x9b])
int64_t rcx_6 = arg1[0x99]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x97] = &data_14346e1a8
sub_1426ca880(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
