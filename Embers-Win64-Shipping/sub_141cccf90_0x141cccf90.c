// 函数: sub_141cccf90
// 地址: 0x141cccf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x56]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x54]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x51]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

while (arg1[0x4f] != 0)
    int64_t* rcx_6 = arg1[0x4f]
    arg1[0x4f] = *rcx_6
    j_sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x4c]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

while (arg1[0x4b] != 0)
    int64_t* rcx_8 = arg1[0x4b]
    arg1[0x4b] = *rcx_8
    j_sub_140a74f90(rcx_8)

while (arg1[0x49] != 0)
    int64_t* rcx_9 = arg1[0x49]
    arg1[0x49] = *rcx_9
    j_sub_140a74f90(rcx_9)

while (arg1[0x47] != 0)
    int64_t* rcx_10 = arg1[0x47]
    arg1[0x47] = *rcx_10
    j_sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x44]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rdi_3 = arg1[0x42]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp7_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

sub_140596d80(&arg1[0x3f])
int64_t rcx_15 = arg1[0x3b]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_140b4cb40(&arg1[0x29])
int64_t rcx_17 = arg1[0x24]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_140b4cb40(&arg1[0x12])
sub_140745b20(&arg1[0x10])

if (arg1[8] != 0)
    void* rax_13 = arg1[0xa]
    void* rcx_20 = &arg1[0xc]
    
    if (rax_13 != 0)
        rcx_20 = rax_13
    
    (*(*rcx_20 + 0x10))(rcx_20)

sub_140745b20(&arg1[5])
sub_140745b20(&arg1[3])
*arg1 = &data_142d40478
return &data_142d40478
