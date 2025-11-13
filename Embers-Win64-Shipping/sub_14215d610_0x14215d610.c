// 函数: sub_14215d610
// 地址: 0x14215d610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432e0e08
int64_t* rcx = arg1[0x60]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[0x60] = 0

sub_1421390b0(&arg1[0x71])
arg1[0x6f].d = 0
int64_t rcx_2 = arg1[0x6e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x67].d = 0

if (*(arg1 + 0x33c) != 0)
    sub_1405a5410(&arg1[0x66], 0)

arg1[0x6c].d = 0xffffffff
*(arg1 + 0x364) = 0
sub_14059a8e0(&arg1[0x68], 0)
int64_t rcx_5 = arg1[0x6a]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x66]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x64]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rbx_1 = arg1[0x63]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_10 = arg1[0x5e]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_141fa6640(&arg1[0x3f])
int64_t rcx_12 = arg1[0x3d]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_1405ae080(&arg1[0x33])
arg1[0x32].d = 0
int64_t rcx_14 = arg1[0x31]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x2a].d = 0

if (*(arg1 + 0x154) != 0)
    sub_140638cc0(&arg1[0x29], 0)

arg1[0x2f].d = 0xffffffff
*(arg1 + 0x17c) = 0
sub_14059a8e0(&arg1[0x2b], 0)
int64_t rcx_17 = arg1[0x2d]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x29]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int32_t i_1 = arg1[0x28].d
int64_t* rbx_3 = arg1[0x27]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_19 = *rbx_3
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = arg1[0x27]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

sub_1405ae180(&arg1[0x1c])
return sub_14215d520(arg1) __tailcall
