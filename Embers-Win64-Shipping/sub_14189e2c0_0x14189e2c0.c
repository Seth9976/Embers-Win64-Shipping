// 函数: sub_14189e2c0
// 地址: 0x14189e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe8620
arg1[1] = &data_142fe8658

while (arg1[0x51] != 0)
    int64_t* rcx = arg1[0x51]
    arg1[0x51] = *rcx
    j_sub_140a74f90(rcx)

arg1[0x4f].d = 0
int64_t rcx_1 = arg1[0x4e]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x47].d = 0

if (*(arg1 + 0x23c) != 0)
    sub_1405a5130(&arg1[0x46], 0)

arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 0
sub_14059a8e0(&arg1[0x48], 0)
int64_t rcx_4 = arg1[0x4a]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x46]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x45].d = 0
int64_t rcx_6 = arg1[0x44]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x3d].d = 0

if (*(arg1 + 0x1ec) != 0)
    sub_1405a5130(&arg1[0x3c], 0)

arg1[0x42].d = 0xffffffff
*(arg1 + 0x214) = 0
sub_14059a8e0(&arg1[0x3e], 0)
int64_t rcx_9 = arg1[0x40]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x3c]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int32_t i_1 = arg1[0x3b].d
int64_t* rdi_2 = arg1[0x3a]

if (i_1 != 0)
    int32_t i
    
    do
        sub_1418220b0(rdi_2)
        rdi_2 = &rdi_2[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_2 = arg1[0x3a]

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

arg1[0x39].d = 0
int64_t rcx_13 = arg1[0x38]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg1[0x31].d = 0

if (*(arg1 + 0x18c) != 0)
    sub_1405a5130(&arg1[0x30], 0)

arg1[0x36].d = 0xffffffff
*(arg1 + 0x1b4) = 0
sub_14059a8e0(&arg1[0x32], 0)
int64_t rcx_16 = arg1[0x34]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x30]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

arg1[0x2f].d = 0
int64_t rcx_18 = arg1[0x2e]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

arg1[0x27].d = 0

if (*(arg1 + 0x13c) != 0)
    sub_1405a5130(&arg1[0x26], 0)

arg1[0x2c].d = 0xffffffff
*(arg1 + 0x164) = 0
sub_14059a8e0(&arg1[0x28], 0)
int64_t rcx_21 = arg1[0x2a]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0x26]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

arg1[0x25].d = 0
int64_t rcx_23 = arg1[0x24]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

arg1[0x1d].d = 0

if (*(arg1 + 0xec) != 0)
    sub_1405a5130(&arg1[0x1c], 0)

arg1[0x22].d = 0xffffffff
*(arg1 + 0x114) = 0
sub_14059a8e0(&arg1[0x1e], 0)
int64_t rcx_26 = arg1[0x20]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = arg1[0x1c]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

if (arg1[0x14] != 0)
    void* rax_2 = arg1[0x16]
    void* rcx_28 = &arg1[0x18]
    
    if (rax_2 != 0)
        rcx_28 = rax_2
    
    (*(*rcx_28 + 0x10))(rcx_28)

sub_1405ae080(&arg1[2])
arg1[1] = &data_142d56fa0
*arg1 = &data_142e52080
return &data_142e52080
