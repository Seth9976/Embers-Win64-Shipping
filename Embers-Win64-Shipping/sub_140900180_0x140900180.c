// 函数: sub_140900180
// 地址: 0x140900180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1ac98
arg1[1] = &data_142e1ad60
arg1[2] = &data_142e1ad78
arg1[3] = &data_142e1add8
arg1[4] = &data_142e1ae10
arg1[5] = &data_142e1ae78
sub_140900ec0(arg1)
int64_t* rdi = arg1[0x15]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x12]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_7 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0xf]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))

int64_t rcx_6 = arg1[9]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[5] = &data_142d57548
arg1[4] = &data_142d574e0
arg1[3] = &data_142d575a0
arg1[2] = &data_142d573b8
arg1[1] = &data_142d573a0
*arg1 = &data_142d57418
return &data_142d57418
