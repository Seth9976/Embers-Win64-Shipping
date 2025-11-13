// 函数: sub_14081d360
// 地址: 0x14081d360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dd6138
sub_140829930(arg1)
arg1[0x74].d = 0
int64_t rcx = arg1[0x73]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140825300(&arg1[0x6b], 0)
int64_t rcx_2 = arg1[0x6f]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x6b]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x6a].d = 0
int64_t rcx_4 = arg1[0x69]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140825300(&arg1[0x61], 0)
int64_t rcx_6 = arg1[0x65]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x61]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x5f]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_1408081b0(&arg1[0x5a])
sub_1405ec8a0(&arg1[0x5c])
sub_1405d1550(&arg1[0x5b])
sub_1405d1550(&arg1[0x5a])
int32_t i_1 = arg1[0x42].d
int64_t* rbx = arg1[0x41]

if (i_1 != 0)
    int32_t i
    
    do
        sub_14081c910(rbx)
        rbx = &rbx[0xb]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x41]

if (rbx != 0)
    sub_140a74f90(rbx)

sub_140a1d5c0(&arg1[0x3d])
sub_140a1d5c0(&arg1[0x3a])
sub_140a1d5c0(&arg1[0x36])
sub_140a1d5c0(&arg1[0x33])
sub_140a1d5c0(&arg1[0x2f])
sub_140a1d5c0(&arg1[0x2c])
sub_140a1d5c0(&arg1[0x28])
sub_140a1d5c0(&arg1[0x25])
sub_14081cbc0(&arg1[6])
sub_14081c840(&arg1[4])
int64_t* rcx_25 = arg1[3]

if (rcx_25 != 0)
    rcx_25[1].d -= 1
    
    if (rcx_25[1].d == 1)
        (**rcx_25)(rcx_25, 1)

*arg1 = &data_142dd5c80
return &data_142dd5c80
