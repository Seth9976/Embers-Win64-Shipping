// 函数: sub_140e54370
// 地址: 0x140e54370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ed7718
sub_140e53c00(&arg1[0x59])
sub_140e53680(&arg1[0x50])
int64_t* rcx_2 = arg1[0x4f]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rcx_3 = arg1[0x4b]

if (rcx_3 != 0)
    int32_t temp1_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

sub_140d94cb0(&arg1[0x48])
arg1[0x47].d = 0
int64_t rcx_5 = arg1[0x46]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140e53250(&arg1[0x3e])
int64_t* rcx_7 = arg1[0x3d]

if (rcx_7 != 0)
    int32_t temp2_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

int64_t* rdi = arg1[0x3b]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x39].d = 0
int64_t rcx_10 = arg1[0x38]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140e53190(&arg1[0x30])
arg1[0x2f].d = 0
int64_t rcx_12 = arg1[0x2e]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140e53250(&arg1[0x26])
sub_1405ae200(&arg1[0x1c])
sub_1405ae200(&arg1[0x12])
int64_t* rdi_1 = arg1[0x10]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp7_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rcx_18 = arg1[0xe]

if (rcx_18 != 0)
    int32_t temp6_1 = *(rcx_18 + 0xc)
    *(rcx_18 + 0xc) -= 1
    
    if (temp6_1 == 1)
        (*(*rcx_18 + 8))(rcx_18, 1)

int64_t result = sub_140d94cb0(&arg1[0xb])
int64_t* rcx_20 = arg1[0xa]

if (rcx_20 != 0)
    int32_t temp8_1 = *(rcx_20 + 0xc)
    *(rcx_20 + 0xc) -= 1
    
    if (temp8_1 == 1)
        result = (*(*rcx_20 + 8))(rcx_20, 1)

int64_t* rcx_21 = arg1[8]

if (rcx_21 != 0)
    int32_t temp9_1 = *(rcx_21 + 0xc)
    *(rcx_21 + 0xc) -= 1
    
    if (temp9_1 == 1)
        result = (*(*rcx_21 + 8))(rcx_21, 1)

int64_t* rdi_2 = arg1[5]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp12_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp12_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rcx_24 = arg1[2]

if (rcx_24 != 0)
    int32_t temp11_1 = *(rcx_24 + 0xc)
    *(rcx_24 + 0xc) -= 1
    
    if (temp11_1 == 1)
        return (*(*rcx_24 + 8))(rcx_24, 1)

return result
