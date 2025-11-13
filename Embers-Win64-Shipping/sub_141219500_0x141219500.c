// 函数: sub_141219500
// 地址: 0x141219500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f40cb0
arg1[0x33][6](&arg1[0x33])
arg1[0x38][6](&arg1[0x38])
int64_t i_2 = 2
void* rbx = &arg1[2]
int64_t i_4 = 2
int64_t i

do
    int64_t j_1 = 7
    int64_t j
    
    do
        int64_t* rcx_2 = *rbx
        *rbx = 0
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2)
        
        rbx += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_4
    i_4 -= 1
while (i != 1)
void* rdi_1 = &arg1[0x10]
int64_t* rbx_1 = *rdi_1
rbx_1[2].d = 0
sub_1405d16e0(rbx_1, nullptr)
sub_1405d16e0(&rbx_1[1], nullptr)
sub_1405d16e0(&rbx_1[3], nullptr)
int64_t* rbx_2 = *rdi_1

if (rbx_2 != 0)
    sub_1405d1550(&rbx_2[3])
    sub_1405ec8a0(&rbx_2[1])
    sub_14081c9d0(rbx_2)
    j_sub_140a74f90(rbx_2)

sub_140837d00(arg1[0x11])
int64_t* rbx_3 = arg1[0x11]

if (rbx_3 != 0)
    sub_140837d00(rbx_3)
    sub_1405ec8a0(&rbx_3[2])
    sub_1405d1550(&rbx_3[1])
    sub_14081c9d0(rbx_3)
    j_sub_140a74f90(rbx_3)

void* rbx_4 = &arg1[0x28]
int64_t i_5 = 2
int64_t i_1

do
    int64_t* rcx_16 = *rbx_4
    *rbx_4 = 0
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x38))(rcx_16)
    
    rbx_4 += 8
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
int64_t* rbx_5 = arg1[0x25]
rbx_5[2].d = 0
sub_1405d16e0(rbx_5, nullptr)
sub_1405d16e0(&rbx_5[1], nullptr)
sub_1405d16e0(&rbx_5[3], nullptr)
int64_t* rbx_6 = arg1[0x25]

if (rbx_6 != 0)
    sub_1405d1550(&rbx_6[3])
    sub_1405ec8a0(&rbx_6[1])
    sub_14081c9d0(rbx_6)
    j_sub_140a74f90(rbx_6)

sub_140837d00(arg1[0x26])
int64_t* rbx_7 = arg1[0x26]

if (rbx_7 != 0)
    sub_140837d00(rbx_7)
    sub_1405ec8a0(&rbx_7[2])
    sub_1405d1550(&rbx_7[1])
    sub_14081c9d0(rbx_7)
    j_sub_140a74f90(rbx_7)

j_sub_140a74f90(arg1[0x15])
int64_t rcx_31 = arg1[0x3c]
arg1[0x38] = &data_142f40c70

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

sub_1405d1550(&arg1[0x3b])
sub_1419948a0(&arg1[0x38])
int64_t rcx_34 = arg1[0x37]
arg1[0x33] = &data_142f40c70

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_1405d1550(&arg1[0x36])
sub_1419948a0(&arg1[0x33])
void* rbx_8 = &arg1[0x2a]
int64_t* rcx_37 = *rbx_8

if (rcx_37 != 0)
    (*(*rcx_37 + 0x38))(rcx_37)

do
    int64_t* rcx_38 = *(rbx_8 - 8)
    rbx_8 -= 8
    i_2 -= 1
    
    if (rcx_38 != 0)
        (*(*rcx_38 + 0x38))(rcx_38)
while (i_2 != 0)

for (int64_t i_3 = 0xe; i_3 != 0; )
    int64_t* rcx_39 = *(rdi_1 - 8)
    rdi_1 -= 8
    i_3 -= 1
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x38))(rcx_39)

*arg1 = &data_142d5a028
return &data_142d5a028
