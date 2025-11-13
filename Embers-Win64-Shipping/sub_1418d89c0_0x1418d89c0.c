// 函数: sub_1418d89c0
// 地址: 0x1418d89c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = &arg1[0x89]
int64_t i_2 = 5
int64_t i_3 = 5
*arg1 = &data_142fef688
int64_t i

do
    int64_t* rcx = *rbx
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    rbx = &rbx[1]
    i = i_3
    i_3 -= 1
while (i != 1)
sub_1418e4390(arg1[0x61][0x360], arg1)

if (*(arg1 + 0x1a) != i_3.b)
    void* rsi = arg1[0x61]
    void* rbx_1 = &arg1[0x8e]
    int64_t i_1
    
    do
        int64_t rdx_1 = *rbx_1
        
        if (rdx_1 != 0)
            data_143efb850(*(rsi + 8), rdx_1, 0)
            *rbx_1 = 0
        
        rbx_1 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    *(arg1 + 0x1a) = 0

int64_t* rbx_2 = arg1[0x98]

if (rbx_2 != 0)
    int64_t rcx_4 = *rbx_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    j_sub_140a74f90(rbx_2)

sub_1418d2600(&arg1[0x62])
sub_1418f4ac0(&arg1[0xb])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
