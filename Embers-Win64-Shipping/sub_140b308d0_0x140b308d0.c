// 函数: sub_140b308d0
// 地址: 0x140b308d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e781f8
DeleteCriticalSection(&arg1[0x75])

if (arg1[0x74].b != 0)
    arg1[0x74].b = 0
    int64_t rcx_1 = arg1[0x72]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

int32_t i_4 = arg1[0x71].d
int64_t* rbx = arg1[0x70]

if (i_4 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_4
        i_4 -= 1
    while (i != 1)
    rbx = arg1[0x70]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_5 = arg1[0x6f].d
int64_t* rbx_1 = arg1[0x6e]

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0x6e]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_6 = arg1[0x6d].d
int64_t* rbx_2 = arg1[0x6c]

if (i_6 != 0)
    int32_t i_2
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    rbx_2 = arg1[0x6c]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int32_t i_7 = arg1[0x6b].d
int64_t* rbx_3 = arg1[0x6a]

if (i_7 != 0)
    int32_t i_3
    
    do
        int64_t rcx_8 = *rbx_3
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_3 = &rbx_3[2]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    rbx_3 = arg1[0x6a]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

sub_140745b20(&arg1[0x68])
sub_140596eb0(&arg1[0x65])
sub_140596eb0(&arg1[0x62])
arg1[0x61].d = 0
int64_t rcx_13 = arg1[0x60]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140597460(&arg1[0x58])
arg1[0x56].d = 0
int64_t rcx_15 = arg1[0x55]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_140b2fce0(&arg1[0x4d])
sub_140b2f9f0(&arg1[0xb])
arg1[0xa].d = 0
int64_t rcx_18 = arg1[9]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_1405b8bd0(&arg1[1], 0)
int64_t rcx_20 = arg1[5]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[1]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return sub_140b0be90(arg1) __tailcall
