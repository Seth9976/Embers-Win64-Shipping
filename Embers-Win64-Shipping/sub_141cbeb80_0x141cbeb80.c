// 函数: sub_141cbeb80
// 地址: 0x141cbeb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143213a80
sub_141cc1810(arg1)
data_143f35848 = 0
sub_1405ae080(&arg1[0x38])
int64_t rcx_1 = arg1[0x36]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140596d80(&arg1[0x33])
int64_t rcx_3 = arg1[0x31]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t i_1 = arg1[0x2f].d
int64_t* rbx = arg1[0x2e]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x2e]

if (rbx != 0)
    sub_140a74f90(rbx)

arg1[0x2d].d = 0
int64_t rcx_6 = arg1[0x2c]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x25].d = 0

if (*(arg1 + 0x12c) != 0)
    sub_1405a5410(&arg1[0x24], 0)

arg1[0x2a].d = 0xffffffff
*(arg1 + 0x154) = 0
sub_14059a8e0(&arg1[0x26], 0)
int64_t rcx_9 = arg1[0x28]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x24]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x23].d = 0
int64_t rcx_11 = arg1[0x22]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[0x1b].d = 0

if (*(arg1 + 0xdc) != 0)
    sub_1405a5410(&arg1[0x1a], 0)

arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
sub_14059a8e0(&arg1[0x1c], 0)
int64_t rcx_14 = arg1[0x1e]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x1a]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x18]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x16]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

arg1[0x15].d = 0
int64_t rcx_18 = arg1[0x14]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_141b83c60(&arg1[0xc])
int64_t* rbx_3 = arg1[0xb]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_140596eb0(&arg1[7])
return sub_140d163b0(arg1) __tailcall
