// 函数: sub_140e9f420
// 地址: 0x140e9f420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x45]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_1405ae080(&arg1[0x39])
int64_t* rcx_3 = arg1[0x38]

if (rcx_3 != 0)
    int32_t temp2_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

int64_t* rdi_1 = arg1[0x35]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

sub_140596eb0(&arg1[0x31])
sub_140596eb0(&arg1[0x2e])
int64_t* rcx_8 = arg1[0x2d]

if (rcx_8 != 0)
    int32_t temp4_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rcx_8 + 8))(rcx_8, 1)

sub_140e97360(&arg1[0x2a])
sub_140745b20(&arg1[0x28])
sub_140e985f0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
