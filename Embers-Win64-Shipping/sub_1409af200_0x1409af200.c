// 函数: sub_1409af200
// 地址: 0x1409af200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x17]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_1409b8c00(&arg1[0xf], 0)
int64_t rcx_3 = arg1[0x13]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xf]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1409b8cb0(&arg1[8], 0)
int64_t rcx_6 = arg1[0xc]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[8]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
