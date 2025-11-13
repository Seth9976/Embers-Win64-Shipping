// 函数: sub_14081d0c0
// 地址: 0x14081d0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x3c]
*arg1 = &data_142dd6c18

if (rbx != 0)
    *(rbx + 0x10) -= 1
    int64_t* rcx = arg1[0x3c]
    arg1[0x3c] = 0
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)

int64_t* rcx_1 = arg1[1]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

arg1[1] = 0
int64_t* rcx_2 = arg1[0x3c]

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2, 1)

int64_t rcx_3 = arg1[0x39]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x36]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[6] = &data_142dd5bb0
sub_14081d280(&arg1[0xd])
sub_14081c9d0(&arg1[0xc])
sub_140a1d5c0(&arg1[9])
arg1[8] = &data_142da7708
sub_1419948a0(&arg1[6])
sub_1408081b0(&arg1[2])
sub_1405ec8a0(&arg1[4])
sub_1405d1550(&arg1[3])
return sub_1405d1550(&arg1[2]) __tailcall
