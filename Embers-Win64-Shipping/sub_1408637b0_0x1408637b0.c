// 函数: sub_1408637b0
// 地址: 0x1408637b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ddc568
sub_1408677d0(arg1)
arg1[0xa3].d = 0
int64_t rcx = arg1[0xa2]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140865610(&arg1[0x9a], 0)
int64_t rcx_2 = arg1[0x9e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x9a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t i_3 = arg1[0x99].d
int64_t* rbx = arg1[0x98]

if (i_3 != 0)
    int32_t i
    
    do
        int64_t* rcx_4 = *rbx
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        rbx = &rbx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx = arg1[0x98]

if (rbx != 0)
    sub_140a74f90(rbx)

arg1[0x97].d = 0
int64_t rcx_6 = arg1[0x96]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140865780(&arg1[0x8e], 0)
int64_t rcx_8 = arg1[0x92]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x8e]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x8a]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t i_4 = 7
void* rbx_1 = &arg1[0x7d]

for (int64_t i_1 = 7; i_1 != 0; )
    rbx_1 -= 0x50
    i_1 -= 1
    *(rbx_1 + 0x48) = 0
    int64_t rcx_11 = *(rbx_1 + 0x40)
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    sub_1405b8bd0(rbx_1, 0)
    int64_t rcx_13 = *(rbx_1 + 0x20)
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t rcx_14 = *rbx_1
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

void* rbx_2 = &arg1[0x2d]
sub_1405ae080(rbx_2)
int64_t i_2

do
    rbx_2 -= 0x30
    sub_1423baf20(rbx_2)
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
*arg1 = &data_142d44d70
void* rcx_17 = data_143e1a338

if (rcx_17 != 0 && arg1[1].b != 0)
    return sub_140bb6e00(rcx_17, arg1)

return &data_142d44d70
