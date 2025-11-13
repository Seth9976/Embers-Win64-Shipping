// 函数: sub_140bc0110
// 地址: 0x140bc0110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e85f80
arg1[1] = &data_142e85fb0

if (arg1[2] != 0)
    sub_140d21fd0()
    sub_1405a46b0(&data_1439aad30, arg1)
    sub_140d21f60()
    sub_1405a46b0(&data_1439aad48, arg1)
    int64_t* rcx = arg1[2]
    
    if (rcx != 0)
        (*(*rcx + 0x20))(rcx, 1)
    
    int64_t* rcx_1 = arg1[7]
    arg1[2] = 0
    sub_140a4fc50(rcx_1)
    int64_t* rcx_2 = arg1[8]
    arg1[7] = 0
    sub_140a4fc50(rcx_2)
    int64_t* rcx_3 = arg1[9]
    arg1[8] = 0
    sub_140a4fc50(rcx_3)
    arg1[9] = 0

data_143e1a8d8 = 0
int64_t rcx_4 = arg1[0x180088]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x180086]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t i_3 = arg1[0x79].d
int64_t* rdi = arg1[0x78]

if (i_3 != 0)
    int32_t i
    
    do
        sub_140bd6750(rdi)
        rdi = &rdi[7]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rdi = arg1[0x78]

if (rdi != 0)
    sub_140a74f90(rdi)

sub_140bd6750(&arg1[0x71])
int64_t rcx_9 = arg1[0x6e]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140bc0500(&arg1[0x50])
int64_t rcx_11 = arg1[0x4d]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[0x4b].d = 0
int64_t rcx_12 = arg1[0x4a]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg1[0x43].d = 0

if (*(arg1 + 0x21c) != 0)
    sub_1405a5410(&arg1[0x42], 0)

arg1[0x48].d = 0xffffffff
*(arg1 + 0x244) = 0
sub_14059a8e0(&arg1[0x44], 0)
int64_t rcx_15 = arg1[0x46]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x42]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x40]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

DeleteCriticalSection(&arg1[0x39])
arg1[0x38].d = 0
int64_t rcx_19 = arg1[0x37]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

arg1[0x30].d = 0

if (*(arg1 + 0x184) != 0)
    sub_140638cc0(&arg1[0x2f], 0)

arg1[0x35].d = 0xffffffff
*(arg1 + 0x1ac) = 0
sub_14059a8e0(&arg1[0x31], 0)
int64_t rcx_22 = arg1[0x33]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0x2f]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

while (arg1[0x2d] != 0)
    int64_t* rcx_24 = arg1[0x2d]
    arg1[0x2d] = *rcx_24
    j_sub_140a74f90(rcx_24)

sub_1405ae080(&arg1[0x21])
DeleteCriticalSection(&arg1[0x1c])
int64_t rcx_27 = arg1[0x1a]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = arg1[0x18]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

DeleteCriticalSection(&arg1[0x13])
int64_t rcx_30 = arg1[0x11]

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

DeleteCriticalSection(&arg1[0xc])
int64_t rcx_32 = arg1[0xa]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int32_t i_2 = arg1[5].d
void*** rcx_33 = arg1[4]

if (i_2 != 0)
    int32_t i_1
    
    do
        *rcx_33 = &data_142d565e8
        rcx_33 = &rcx_33[8]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_33 = arg1[4]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

arg1[1] = &data_142e3aa40
*arg1 = &data_142d565e8
return &data_142e3aa40
