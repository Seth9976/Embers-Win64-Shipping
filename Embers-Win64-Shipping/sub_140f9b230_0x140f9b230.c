// 函数: sub_140f9b230
// 地址: 0x140f9b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d82ab0
void* rcx = nullptr
int64_t* rdi = data_143e2b778
bool cond:0 = rdi != 0

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    cond:0 = rdi != 0

if (cond:0)
    rcx = data_143e2b770

if (rcx != 0)
    sub_1405a46b0(rcx + 0x410, arg1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_4 = arg1[0xae]

if (rcx_4 != 0)
    int32_t temp2_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

sub_140745b20(&arg1[0xab])
sub_140745b20(&arg1[0xa9])
sub_140745b20(&arg1[0xa7])
sub_140745b20(&arg1[0xa5])
sub_140745b20(&arg1[0xa3])
sub_140745b20(&arg1[0xa1])

if (*(arg1 + 0x501) != 0)
    *(arg1 + 0x501) = 0

sub_140745b20(&arg1[0x9e])
int64_t* rdi_1 = arg1[0x9c]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp6_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x9a]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp8_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg1[0x98]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp10_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rdi_4 = arg1[0x96]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp12_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

int64_t* rcx_20 = arg1[0x94]

if (rcx_20 != 0)
    int32_t temp11_1 = *(rcx_20 + 0xc)
    *(rcx_20 + 0xc) -= 1
    
    if (temp11_1 == 1)
        (*(*rcx_20 + 8))(rcx_20, 1)

sub_140745b20(&arg1[0x90])
int64_t rcx_22 = arg1[0x8d]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0x8b]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[0x89]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[0x87]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = arg1[0x85]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = arg1[0x83]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

sub_140745b20(&arg1[0x75])
return sub_1406922a0(arg1) __tailcall
