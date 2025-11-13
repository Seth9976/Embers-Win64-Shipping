// 函数: sub_142381600
// 地址: 0x142381600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433365d8
sub_14238b8b0(arg1[0x40], 1)
int64_t* rcx_1 = arg1[0x40]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1, 1)

void* rdi = arg1[0x41]
int64_t* rcx_2 = *(rdi + 0x58)

if (rcx_2 == 0)
    bool z_1
    
    if (0 == *(rdi + 0x48))
        *(rdi + 0x48) = 0
        z_1 = true
    else
        *(rdi + 0x48)
        z_1 = false
    
    if (not(z_1))
        sub_1423ae170(rdi + 8)
        *(rdi + 0x48) -= 1
    
    goto label_142381697

if ((*(*rcx_2 + 0x18))(rcx_2, rdi) == 0)
label_142381697:
    
    if (*(rdi + 0x58) != 0)
        int64_t* rcx_6 = *(rdi + 0x50)
        (*(*rcx_6 + 0x20))(rcx_6, 0xffffffff, 0)
        *(rdi + 0x58) = 0
else
    sub_1423ae170(rdi + 8)
    *(rdi + 0x48) -= 1
    int64_t* rcx_4 = *(rdi + 0x50)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)
    
    *(rdi + 0x58) = 0

sub_140d21fd0()
sub_1405a46b0(&data_1439aad30, arg1)
memset(&arg1[0x72], 0, 0xc8)
DeleteCriticalSection(&arg1[0xb0])
arg1[0xaf].d = 0
int64_t rcx_9 = arg1[0xae]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_1405df330(&arg1[0xa6])
int64_t rcx_11 = arg1[0xa4]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x68]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x65]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg1[0x64].d = 0
int64_t rcx_14 = arg1[0x63]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x5c].d = 0

if (*(arg1 + 0x2e4) != 0)
    sub_140638cc0(&arg1[0x5b], 0)

arg1[0x61].d = 0xffffffff
*(arg1 + 0x30c) = 0
sub_14059a8e0(&arg1[0x5d], 0)
int64_t rcx_17 = arg1[0x5f]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x5b]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

arg1[0x5a].d = 0
int64_t rcx_19 = arg1[0x59]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

arg1[0x52].d = 0

if (*(arg1 + 0x294) != 0)
    sub_1405a5410(&arg1[0x51], 0)

arg1[0x57].d = 0xffffffff
*(arg1 + 0x2bc) = 0
sub_14059a8e0(&arg1[0x53], 0)
int64_t rcx_22 = arg1[0x55]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0x51]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[0x4f]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[0x4d]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = arg1[0x4b]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

arg1[0x42] = &data_143336590
sub_14239a380(&arg1[0x44])
int64_t rcx_28 = arg1[0x49]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t* rcx_29 = arg1[0x46]

if (rcx_29 != 0)
    rcx_29[1].d -= 1
    
    if (rcx_29[1].d == 1)
        (**rcx_29)(rcx_29, 1)

sub_142380e30(&arg1[0x43])
arg1[0x42] = &data_142fe1158
void* rcx_31 = arg1[0x41]

if (rcx_31 != 0)
    int32_t temp1_1 = *(rcx_31 + 0x68)
    *(rcx_31 + 0x68) -= 1
    
    if (temp1_1 == 1)
        (**(rcx_31 + 0x60))(rcx_31 + 0x60, 1)

int64_t rcx_33 = arg1[0x34]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = arg1[0x32]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

arg1[0x17].d = 0
int64_t rcx_35 = arg1[0x16]

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

sub_140669e00(&arg1[0xe])
arg1[0xd].d = 0
int64_t rcx_37 = arg1[0xc]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405a5410(&arg1[4], 0)

arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
sub_14059a8e0(&arg1[6], 0)
int64_t rcx_40 = arg1[8]

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = arg1[4]

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

sub_142381000(&arg1[2])
*arg1 = &data_142e0f078
return &data_142e0f078
