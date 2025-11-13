// 函数: sub_141f7eab0
// 地址: 0x141f7eab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143284628
arg1[0x3b][6](&arg1[0x3b])
arg1[0x2a][6](&arg1[0x2a])
arg1[0x43][6](&arg1[0x43])
arg1[0x4b][6](&arg1[0x4b])
arg1[0x50][6](&arg1[0x50])
int64_t* rbx = arg1[0x9b]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_7 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[0x99]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

int64_t rcx_9 = arg1[0x92]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_1405d1550(&arg1[0x90])
sub_14081d2f0(&arg1[0x50])
int64_t rcx_12 = arg1[0x4e]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg1[0x4b] = &data_142e0ef98
sub_14081c9d0(&arg1[0x4d])
sub_1419948a0(&arg1[0x4b])
sub_142289b70(&arg1[0x43])
sub_142289c80(&arg1[0x3b])
sub_1422b5620(&arg1[0x2a])
sub_142289fd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
