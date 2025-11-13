// 函数: sub_140746af0
// 地址: 0x140746af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d9fe98
arg1[0x57].d = 0
sub_1405d16e0(&arg1[0x55], nullptr)
sub_1405d16e0(&arg1[0x56], nullptr)
DeleteCriticalSection(&arg1[0x58])
sub_1405ec8a0(&arg1[0x56])
sub_1405d1550(&arg1[0x55])
int64_t rcx_5 = arg1[0x53]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x51]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x4f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x4d]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x4b]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x49]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x47]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rcx_12 = arg1[0x46]

if (rcx_12 != 0)
    (**rcx_12)(rcx_12, 1)

int64_t* rcx_13 = arg1[0x45]

if (rcx_13 != 0)
    (**rcx_13)(rcx_13, 1)

int32_t i_1 = arg1[0x44].d
int64_t* rbx = arg1[0x43]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_14 = *rbx
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x43]

if (rbx != 0)
    sub_140a74f90(rbx)

void* rbx_1 = arg1[0x42]

if (rbx_1 != 0)
    int64_t rcx_16 = *(rbx_1 + 8)
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    j_sub_140a74f90(rbx_1)

int64_t rcx_18 = arg1[0x40]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return sub_140746c90(arg1) __tailcall
