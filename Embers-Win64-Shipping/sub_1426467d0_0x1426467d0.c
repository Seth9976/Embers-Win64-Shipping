// 函数: sub_1426467d0
// 地址: 0x1426467d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143455198
arg1[0x44] = &data_1434557c8
arg1[0x45] = &data_143455820
sub_140745b20(&arg1[0x60])
int64_t* rdi = arg1[0x5f]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t rcx_3 = arg1[0x4d]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x45] = &data_143455070
arg1[0x44] = &data_142d6b458
sub_1405ae4b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
