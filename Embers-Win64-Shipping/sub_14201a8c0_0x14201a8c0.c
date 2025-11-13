// 函数: sub_14201a8c0
// 地址: 0x14201a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14329f4c8
arg1[5] = &data_14329f810
arg1[7] = &data_14329f9e0
sub_1405a46b0(&data_1439a0108, arg1)
sub_1405a46b0(&data_1439a0120, arg1)
sub_1405a46b0(&data_1439a0138, arg1)
sub_1405a46b0(&data_1439a0150, arg1)
void* rdi = arg1[0x64]

if (rdi != 0)
    int64_t rcx = *(rdi + 0x18)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *(rdi + 8)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    j_sub_140a74f90(rdi)
    arg1[0x64] = 0

int64_t rcx_3 = arg1[0x63]

if (rcx_3 != 0)
    j_sub_140a74f90(rcx_3)
    arg1[0x63] = 0

sub_140596eb0(&arg1[0x60])
sub_140596eb0(&arg1[0x5d])
sub_140745b20(&arg1[0x5b])
sub_140596eb0(&arg1[0x58])
sub_140596eb0(&arg1[0x55])
sub_140596eb0(&arg1[0x52])
sub_140596eb0(&arg1[0x4f])
sub_140596eb0(&arg1[0x4c])
sub_140596eb0(&arg1[0x49])
sub_140596eb0(&arg1[0x46])
sub_140745b20(&arg1[0x44])
sub_140596eb0(&arg1[0x41])
arg1[0x3f].d = 0
int64_t rcx_16 = arg1[0x3e]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

sub_1407ece30(&arg1[0x36], 0)
int64_t rcx_18 = arg1[0x3a]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[0x36]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_1405ae080(&arg1[0x2c])
sub_1405ae080(&arg1[0x22])
int64_t* rcx_22 = arg1[0x21]

if (rcx_22 != 0)
    int32_t temp0_1 = *(rcx_22 + 0xc)
    *(rcx_22 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_22 + 8))(rcx_22, 1)

int64_t* rcx_23 = arg1[0x1e]

if (rcx_23 != 0)
    int32_t temp1_1 = *(rcx_23 + 0xc)
    *(rcx_23 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_23 + 8))(rcx_23, 1)

int64_t* rcx_24 = arg1[0x1c]

if (rcx_24 != 0)
    int32_t temp2_1 = *(rcx_24 + 0xc)
    *(rcx_24 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_24 + 8))(rcx_24, 1)

int64_t* rcx_25 = arg1[0x1a]

if (rcx_25 != 0)
    int32_t temp3_1 = *(rcx_25 + 0xc)
    *(rcx_25 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_25 + 8))(rcx_25, 1)

sub_141e71cd0(&arg1[0x12])
int32_t i_1 = arg1[0xc].d
int64_t* rdi_1 = arg1[0xb]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_27 = *rdi_1
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_1 = arg1[0xb]

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t rcx_29 = arg1[9]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

sub_140b0bbe0(&arg1[7])
arg1[5] = &data_14306d778
int64_t rax_5 = data_143f5b268

if (rax_5 == &arg1[5])
    rax_5 = 0

data_143f5b268 = rax_5
arg1[5] = &data_14306d5b0
return sub_140d163b0(arg1) __tailcall
