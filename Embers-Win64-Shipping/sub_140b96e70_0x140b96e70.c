// 函数: sub_140b96e70
// 地址: 0x140b96e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e838e8
arg1[1] = &data_142e83918

if (arg1[3] != 0)
    sub_140bac910()
    int64_t* rcx = arg1[3]
    
    if (rcx != 0)
        (*(*rcx + 0x20))(rcx, 1)
    
    int64_t* rcx_1 = arg1[5]
    arg1[3] = 0
    sub_140a4fc50(rcx_1)
    int64_t* rcx_2 = arg1[6]
    arg1[5] = 0
    sub_140a4fc50(rcx_2)
    int64_t* rcx_3 = arg1[7]
    arg1[6] = 0
    sub_140a4fc50(rcx_3)
    int64_t* rcx_4 = arg1[8]
    arg1[7] = 0
    sub_140a4fc50(rcx_4)
    arg1[8] = 0

sub_140b975a0(&arg1[0x68])
sub_140ae6d30(&arg1[0x66])
arg1[0x64].d = 0
int64_t rcx_7 = arg1[0x63]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[0x5c].d = 0

if (*(arg1 + 0x2e4) != 0)
    sub_1405a5410(&arg1[0x5b], 0)

arg1[0x61].d = 0xffffffff
*(arg1 + 0x30c) = 0
sub_14059a8e0(&arg1[0x5d], 0)
int64_t rcx_10 = arg1[0x5f]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x5b]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x59]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

DeleteCriticalSection(&arg1[0x52])
arg1[0x51].d = 0
int64_t rcx_14 = arg1[0x50]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x49].d = 0

if (*(arg1 + 0x24c) != 0)
    sub_140638cc0(&arg1[0x48], 0)

arg1[0x4e].d = 0xffffffff
*(arg1 + 0x274) = 0
sub_14059a8e0(&arg1[0x4a], 0)
int64_t rcx_17 = arg1[0x4c]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x48]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

DeleteCriticalSection(&arg1[0x43])
int64_t rcx_20 = arg1[0x41]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

sub_1405ae080(&arg1[0x37])
int64_t rcx_22 = arg1[0x35]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

DeleteCriticalSection(&arg1[0x30])
sub_1405ae080(&arg1[0x26])
int64_t rcx_25 = arg1[0x24]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = arg1[0x22]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

DeleteCriticalSection(&arg1[0x1d])
sub_1405ae080(&arg1[0x13])
int64_t rcx_29 = arg1[0x11]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

DeleteCriticalSection(&arg1[0xb])
int64_t rcx_31 = arg1[9]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

arg1[1] = &data_142e3aa40
*arg1 = &data_142d565e8
return &data_142d565e8
