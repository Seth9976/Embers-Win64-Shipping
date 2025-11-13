// 函数: sub_141866c70
// 地址: 0x141866c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7e98
arg1[1] = &data_142fe7ec8
*(arg1 + 0x84)
*(arg1 + 0x84) = 1

if (arg1[0xe] != 0)
    while (true)
        void* rcx = arg1[0xe]
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

while (arg1[0x5b] != 0)
    int64_t* rcx_2 = arg1[0x5b]
    arg1[0x5b] = *rcx_2
    j_sub_140a74f90(rcx_2)

arg1[0x59].d = 0
int64_t rcx_3 = arg1[0x58]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x51].d = 0

if (*(arg1 + 0x28c) != 0)
    sub_1405a5130(&arg1[0x50], 0)

*(arg1 + 0x2b4) = 0
arg1[0x56].d = 0xffffffff
sub_14059a8e0(&arg1[0x52], 0)
int64_t rcx_6 = arg1[0x54]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x50]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

while (arg1[0x4f] != 0)
    int64_t* rcx_8 = arg1[0x4f]
    arg1[0x4f] = *rcx_8
    j_sub_140a74f90(rcx_8)

arg1[0x4d].d = 0
int64_t rcx_9 = arg1[0x4c]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0x45].d = 0

if (*(arg1 + 0x22c) != 0)
    sub_1405a5130(&arg1[0x44], 0)

arg1[0x4a].d = 0xffffffff
*(arg1 + 0x254) = 0
sub_14059a8e0(&arg1[0x46], 0)
int64_t rcx_12 = arg1[0x48]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x44]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg1[0x43].d = 0
int64_t rcx_14 = arg1[0x42]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x3b].d = 0

if (*(arg1 + 0x1dc) != 0)
    sub_1405a5130(&arg1[0x3a], 0)

arg1[0x40].d = 0xffffffff
*(arg1 + 0x204) = 0
sub_14059a8e0(&arg1[0x3c], 0)
int64_t rcx_17 = arg1[0x3e]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x3a]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

arg1[0x39].d = 0
int64_t rcx_19 = arg1[0x38]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_1417c7800(&arg1[0x30])
sub_1405ae000(&arg1[0x26])
sub_141865a10(&arg1[0x24])
arg1[0x23].d = 0
int64_t rcx_23 = arg1[0x22]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

arg1[0x1b].d = 0

if (*(arg1 + 0xdc) != 0)
    sub_1405a5130(&arg1[0x1a], 0)

arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
sub_14059a8e0(&arg1[0x1c], 0)
int64_t rcx_26 = arg1[0x1e]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = arg1[0x1a]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

if (arg1[0x12] != 0)
    void* rax_5 = arg1[0x14]
    void* rcx_28 = &arg1[0x16]
    
    if (rax_5 != 0)
        rcx_28 = rax_5
    
    (*(*rcx_28 + 0x10))(rcx_28)

int64_t* rdi_4 = arg1[0xf]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t rsi_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, zx.q(rsi_1))

int32_t i_1 = arg1[3].d
int64_t* rdi_5 = arg1[2]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_31 = *rdi_5
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        rdi_5 = &rdi_5[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_5 = arg1[2]

if (rdi_5 != 0)
    sub_140a74f90(rdi_5)

arg1[1] = &data_142d56fa0
*arg1 = &data_142e52080
return &data_142e52080
