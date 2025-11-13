// 函数: sub_14186c050
// 地址: 0x14186c050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7b88
arg1[0x1a].d = 0
int64_t rcx = arg1[0x19]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14187ff10(&arg1[0x11], 0)
int64_t rcx_2 = arg1[0x15]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x11]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1418221b0(&arg1[0xf])
arg1[0xe].d = 0
int64_t rcx_5 = arg1[0xd]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_141837360(&arg1[5], 0)
int64_t rcx_7 = arg1[9]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[5]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rbx = arg1[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

*arg1 = &data_142dd6680

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
