// 函数: sub_14100f5d0
// 地址: 0x14100f5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xf1]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

int64_t* rcx_1 = arg1[0xf0]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t i = 4
void* rbx = &arg1[0x124]

do
    void* rdi_1 = *(rbx - 0x2f0)
    rbx -= 0x1b8
    i -= 1
    
    if (rdi_1 != 0)
        sub_14100f420(rdi_1)
        j_sub_140a74f90(rdi_1)
    
    *(rbx + 8) = 0
    int64_t rcx_4 = *rbx
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(rbx - 0x38) = 0
    
    if (*(rbx - 0x34) != 0)
        sub_1405a5410(rbx - 0x40, 0)
    
    *(rbx - 0x10) = 0xffffffff
    *(rbx - 0xc) = 0
    sub_14059a8e0(rbx - 0x30, 0)
    int64_t rcx_7 = *(rbx - 0x20)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *(rbx - 0x40)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(rbx - 0x48) = 0
    int64_t rcx_9 = *(rbx - 0x50)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *(rbx - 0x88) = 0
    
    if (*(rbx - 0x84) != 0)
        sub_1405a5410(rbx - 0x90, 0)
    
    *(rbx - 0x60) = 0xffffffff
    *(rbx - 0x5c) = 0
    sub_14059a8e0(rbx - 0x80, 0)
    int64_t rcx_12 = *(rbx - 0x70)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = *(rbx - 0x90)
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    sub_14081c910(rbx - 0xa0)
    sub_14100dea0(rbx - 0xb0)
    int64_t rcx_16 = *(rbx - 0xd8)
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
        sub_140a74f90(*(rbx - 0xd0))
        sub_140a74f90(*(rbx - 0xc8))
    
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x20)
    int128_t zmm0_1 = var_38.o
    *(rbx - 0xc0) = 0
    *(rbx - 0xbc) = 0
    *(rbx - 0xe0) = zmm0_1
    *(rbx - 0xb8) = 0
    int128_t var_30
    *(rbx - 0xd0) = var_30
    sub_14100e1e0(rbx - 0x130)
    void* rcx_20 = *(rbx - 0x140)
    
    if (rcx_20 != 0)
        (*(*(rcx_20 + 0x20) + 0x10))(rcx_20 + 0x20)
    
    sub_140a1d5c0(rbx - 0x160)
    *(rbx - 0x168) = &data_142da7708
while (i != 0)

int64_t rcx_23 = arg1[0x11]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

sub_14100dda0(&arg1[0xf])
int64_t rcx_25 = arg1[0xd]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_14100dda0(&arg1[0xb])
int64_t rcx_27 = arg1[9]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

sub_14100dda0(&arg1[7])
int64_t rcx_29 = arg1[5]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

sub_14100dda0(&arg1[3])
*arg1 = &data_142d3ff08
return &data_142d3ff08
