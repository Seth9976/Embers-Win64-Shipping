// 函数: sub_141da5c30
// 地址: 0x141da5c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x75].d = 0
int64_t rcx = arg1[0x74]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141da5aa0(&arg1[0x6c])
arg1[0x6a].d = 0
int64_t rcx_2 = arg1[0x69]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_14059ad90(&arg1[0x61], 0)
int64_t rcx_4 = arg1[0x65]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x61]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rdi = arg1[0x60]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596d80(&arg1[0x5d])
arg1[0x5a] = &data_143238880
sub_141d8e7a0(&arg1[0x5b])
arg1[0x5a] = &data_142e1f570
sub_140745b20(&arg1[0x56])
sub_140745b20(&arg1[0x54])
int64_t rcx_12 = arg1[0x51]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x4c]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x45]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x42]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x40]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x3d]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_140b4cb40(&arg1[0x2b])
int64_t rcx_19 = arg1[0x28]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_140b4cb40(&arg1[0x16])
int64_t rcx_21 = arg1[0x13]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

sub_140b4cb40(&arg1[1])
*arg1 = &data_1432388f0
return &data_1432388f0
