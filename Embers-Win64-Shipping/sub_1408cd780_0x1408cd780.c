// 函数: sub_1408cd780
// 地址: 0x1408cd780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e0b8a0
int64_t rcx = arg1[0x4b]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x49]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x3d]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x3b].d = 0
int64_t rcx_3 = arg1[0x3a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x33].d = 0

if (*(arg1 + 0x19c) != 0)
    sub_1406106e0(&arg1[0x32], 0)

arg1[0x38].d = 0xffffffff
*(arg1 + 0x1c4) = 0
sub_14059a8e0(&arg1[0x34], 0)
int64_t rcx_6 = arg1[0x36]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x32]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t i_3 = arg1[0x2f].d
void* rcx_8 = arg1[0x2e]

if (i_3 != 0)
    int32_t i
    
    do
        *(rcx_8 + 0x60) = &data_142e0b890
        *rcx_8 = &data_142e0b890
        rcx_8 += 0xb8
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx_8 = arg1[0x2e]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0x2d].d = 0
int64_t rcx_9 = arg1[0x2c]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140597460(&arg1[0x24])
int64_t rcx_11 = arg1[0x22]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int32_t i_4 = arg1[0x1e].d
void* rcx_12 = arg1[0x1d]

if (i_4 != 0)
    int64_t* rdi_1 = rcx_12 + 0x10
    int32_t i_1
    
    do
        sub_140745b20(rdi_1)
        rdi_1 = &rdi_1[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rcx_12 = arg1[0x1d]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int32_t i_5 = arg1[0x1c].d
void* rcx_14 = arg1[0x1b]

if (i_5 != 0)
    int64_t* rdi_2 = rcx_14 + 0x10
    int32_t i_2
    
    do
        sub_140745b20(rdi_2)
        rdi_2 = &rdi_2[4]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rcx_14 = arg1[0x1b]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x1a].d = 0
int64_t rcx_16 = arg1[0x19]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

arg1[0x12].d = 0

if (*(arg1 + 0x94) != 0)
    sub_1405a5130(&arg1[0x11], 0)

arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
sub_14059a8e0(&arg1[0x13], 0)
int64_t rcx_19 = arg1[0x15]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x11]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[0xf]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0xd]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0xb]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[9]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[7]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return sub_140d163b0(arg1) __tailcall
