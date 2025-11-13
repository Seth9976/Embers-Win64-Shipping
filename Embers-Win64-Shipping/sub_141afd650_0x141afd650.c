// 函数: sub_141afd650
// 地址: 0x141afd650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae180(&arg1[0xa])
int32_t i_2 = arg1[9].d
void* rcx_1 = arg1[8]

if (i_2 != 0)
    char* rax_1 = rcx_1 + 4
    int32_t i
    
    do
        if (*rax_1 != 0)
            *rax_1 = 0
        
        rax_1 = &rax_1[8]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_3 = arg1[4].d
int64_t* rbx = arg1[3]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx = arg1[3]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_5 = arg1[1]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d4bb80
return &data_142d4bb80
