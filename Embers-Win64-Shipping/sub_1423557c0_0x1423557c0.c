// 函数: sub_1423557c0
// 地址: 0x1423557c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rbx_1 = *arg2
int32_t i_1 = arg2[1].d
int32_t rbp_1 = 0

if (i_1 s> 0)
    do
        int64_t* rcx = *rbx_1
        rcx[1].d -= 1
        
        if (rcx[1].d == 1 && rcx != 0)
            (**rcx)(rcx, 1)
        
        *rbx_1 = 0
        rbp_1 += 1
        i_1 = arg2[1].d
        rbx_1 = &rbx_1[1]
    while (rbp_1 s< i_1)
    
    rbx_1 = *arg2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140638c50(arg2, 0)

sub_142351ab0(&arg2[2])
sub_140dde9c0(arg2)
j_sub_140a74f90(arg2)
