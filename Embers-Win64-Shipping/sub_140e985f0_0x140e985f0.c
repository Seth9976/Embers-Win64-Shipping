// 函数: sub_140e985f0
// 地址: 0x140e985f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142eda1d0
int64_t* rdi = arg1[0x27]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_2 = arg1[0x24]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rcx_3 = arg1[0x22]

if (rcx_3 != 0)
    int32_t temp3_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

sub_140745b20(&arg1[0x1e])
int64_t* rdi_1 = arg1[0x1c]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp6_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x1a]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp8_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rcx_9 = arg1[0x18]

if (rcx_9 != 0)
    int32_t temp7_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp7_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

int64_t* rdi_3 = arg1[0x16]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp11_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

sub_140596d80(&arg1[0x13])
sub_140596d80(&arg1[0x11])
sub_140d94cb0(&arg1[0xf])
int64_t* rdi_4 = arg1[0xe]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp12_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

arg1[0xc].d = 0
int64_t rcx_17 = arg1[0xb]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t result = sub_1407ece30(&arg1[3], 0)
int64_t rcx_19 = arg1[7]

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[3]

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

int64_t* rcx_21 = arg1[2]

if (rcx_21 != 0)
    int32_t temp13_1 = *(rcx_21 + 0xc)
    *(rcx_21 + 0xc) -= 1
    
    if (temp13_1 == 1)
        return (*(*rcx_21 + 8))(rcx_21, 1)

return result
