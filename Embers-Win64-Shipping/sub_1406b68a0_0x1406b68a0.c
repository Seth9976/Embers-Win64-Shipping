// 函数: sub_1406b68a0
// 地址: 0x1406b68a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8db08
arg1[1] = &data_142d8db40
arg1[2] = &data_142d8dba8
__ld12mul(arg1)
void* rbp = arg1[3]

if (rbp != 0)
    int64_t* rdi_1 = *(rbp + 8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_3 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    j_sub_140a74f90(rbp)

arg1[3] = 0
void* rbp_1 = arg1[0x2b]

if (rbp_1 != 0)
    int64_t* rdi_2 = *(rbp_1 + 8)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rsi_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))
    
    j_sub_140a74f90(rbp_1)

arg1[0x2b] = 0
int64_t* rcx_6 = arg1[0xfe]

if (rcx_6 != 0)
    int64_t rdx
    rdx.b = rcx_6 != &arg1[0xf7]
    (*(*rcx_6 + 0x20))(rcx_6, rdx)
    arg1[0xfe] = 0

int64_t rcx_7 = arg1[0xdf]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rdi_4 = arg1[0xd2]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp3_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

int64_t* rdi_5 = arg1[0xd0]

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp5_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

int64_t* rdi_6 = arg1[0xce]

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp6_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_6 + 8))(rdi_6, 1)

int64_t* rcx_14 = arg1[0xcc]

if (rcx_14 != 0)
    sub_140a4fc50(rcx_14)

sub_1406bbec0(&arg1[0xae])
int64_t* rcx_16 = arg1[0xb8]

if (rcx_16 != 0)
    sub_140a4fc50(rcx_16)

DeleteCriticalSection(&arg1[0xb3])
sub_1406bbec0(&arg1[0xa3])
int64_t* rcx_19 = arg1[0xad]

if (rcx_19 != 0)
    sub_140a4fc50(rcx_19)

DeleteCriticalSection(&arg1[0xa8])
sub_1406bbec0(&arg1[0x98])
int64_t* rcx_22 = arg1[0xa2]

if (rcx_22 != 0)
    sub_140a4fc50(rcx_22)

DeleteCriticalSection(&arg1[0x9d])
sub_1406b6cc0(&arg1[0x7e])
sub_1406b6cc0(&arg1[0x64])
sub_1406b6cc0(&arg1[0x4a])

while (arg1[0x37] != 0)
    int64_t* rcx_27 = arg1[0x37]
    arg1[0x37] = *rcx_27
    j_sub_140a74f90(rcx_27)

sub_1406b6190(&arg1[0x32])
arg1[0x2c] = &data_142d5eeb0
arg1[0x2d] = &data_142d5eed0
sub_1405ec780(&arg1[0x30])
arg1[0x2d] = &data_142d5ee90
arg1[0x2c] = &data_142d5ee90
sub_1406b6190(&arg1[0x26])
arg1[0x20] = &data_142d5eeb0
arg1[0x21] = &data_142d5eed0
sub_1405ec780(&arg1[0x24])
arg1[0x21] = &data_142d5ee90
arg1[0x20] = &data_142d5ee90
int64_t rcx_32 = arg1[0x1b]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t rcx_33 = arg1[0x19]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

DeleteCriticalSection(&arg1[0x14])
sub_1406b6190(&arg1[0x12])
arg1[0xc] = &data_142d5eeb0
arg1[0xd] = &data_142d5eed0
sub_1405ec780(&arg1[0x10])
arg1[0xd] = &data_142d5ee90
arg1[0xc] = &data_142d5ee90
sub_1406b6190(&arg1[0xa])
arg1[4] = &data_142d5eeb0
arg1[5] = &data_142d5eed0
sub_1405ec780(&arg1[8])
arg1[5] = &data_142d5ee90
arg1[4] = &data_142d5ee90
arg1[2] = &data_142d573b8
arg1[1] = &data_142d574e0
*arg1 = &data_142d575a0
return &data_142d575a0
