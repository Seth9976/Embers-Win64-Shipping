// 函数: sub_140ee3ff0
// 地址: 0x140ee3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142edf4d8
sub_140745b20(&arg1[0x24])
int64_t rcx_1 = arg1[0x21]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[0x20]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rdi = arg1[0x1f]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x1d]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x1b]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

arg1[0x10].d = 0
int64_t rcx_9 = arg1[0xf]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    sub_140638cc0(&arg1[7], 0)

arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
sub_14059a8e0(&arg1[9], 0)
int64_t rcx_12 = arg1[0xb]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[7]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140ee39e0(&arg1[5])
int64_t result = sub_140ee38f0(&arg1[3])
int64_t* rcx_16 = arg1[2]

if (rcx_16 != 0)
    int32_t temp6_1 = *(rcx_16 + 0xc)
    *(rcx_16 + 0xc) -= 1
    
    if (temp6_1 == 1)
        return (*(*rcx_16 + 8))(rcx_16, 1)

return result
