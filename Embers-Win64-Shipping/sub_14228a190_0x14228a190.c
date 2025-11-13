// 函数: sub_14228a190
// 地址: 0x14228a190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d1550(arg1 + 0x1f8)
sub_14081c9d0(arg1 + 0x1f0)
int64_t rcx_2 = *(arg1 + 0x1d8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rbx = arg1 + 0x198
*(arg1 + 0x1d0) = &data_143003d38
sub_1405d1550(rbx + 0x28)
sub_14081c9d0(rbx + 0x20)
int64_t rcx_5 = *(rbx + 8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*rbx = &data_143003d38

for (int64_t i = 6; i != 0; )
    rbx -= 0x38
    i -= 1
    sub_1405d1550(rbx + 0x28)
    sub_14081c9d0(rbx + 0x20)
    int64_t rcx_8 = *(rbx + 8)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *rbx = &data_143003d38

sub_1405d1550(arg1 + 0x38)
int64_t result = sub_14081c9d0(arg1 + 0x30)
int64_t rcx_11 = *(arg1 + 0x18)

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

*(arg1 + 0x10) = &data_143003d38
return result
