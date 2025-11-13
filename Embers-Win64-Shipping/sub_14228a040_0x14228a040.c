// 函数: sub_14228a040
// 地址: 0x14228a040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d1550(&arg1[0x4b])
sub_14081c9d0(&arg1[0x4a])
int64_t rcx_2 = arg1[0x47]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x46] = &data_143003d38
sub_1405d1550(&arg1[0x44])
sub_14081c9d0(&arg1[0x43])
int64_t rcx_5 = arg1[0x40]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x3f] = &data_143003d38
sub_1405d1550(&arg1[0x3d])
sub_14081c9d0(&arg1[0x3c])
int64_t rcx_8 = arg1[0x39]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

void* rbx = &arg1[0x31]
arg1[0x38] = &data_143003d38
sub_1405d1550(rbx + 0x28)
sub_14081c9d0(rbx + 0x20)
int64_t rcx_11 = *(rbx + 8)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

*rbx = &data_143003d38

for (int64_t i = 6; i != 0; )
    rbx -= 0x38
    i -= 1
    sub_1405d1550(rbx + 0x28)
    sub_14081c9d0(rbx + 0x20)
    int64_t rcx_14 = *(rbx + 8)
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    *rbx = &data_143003d38

sub_1405d1550(&arg1[5])
int64_t result = sub_14081c9d0(&arg1[4])
int64_t rcx_17 = arg1[1]

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

*arg1 = &data_143003d38
return result
