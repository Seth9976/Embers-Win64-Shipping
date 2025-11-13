// 函数: sub_141c54f20
// 地址: 0x141c54f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143209b70
int64_t* rdi = arg1[0x5a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x58]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

int64_t rcx_4 = arg1[0x54]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x46] = &data_142d6a040
int64_t rcx_5 = arg1[0x51]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1405ae180(&arg1[0x47])
*arg1 = &data_143209b40
arg1[0x3d] = &data_143209588
arg1[0x35] = &data_143209588
arg1[0x2d] = &data_143209588
arg1[0x1f] = &data_143209588
arg1[0x16] = &data_143209588
arg1[0xd] = &data_143209588
arg1[4] = &data_143209588

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
