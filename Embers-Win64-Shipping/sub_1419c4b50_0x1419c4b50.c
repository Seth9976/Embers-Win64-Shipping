// 函数: sub_1419c4b50
// 地址: 0x1419c4b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rbx_1 = arg2[3]
int64_t rdi_1 = 0
uint64_t r14_2 = sx.q(arg2[4].d) << 3 u>> 3

if (rbx_1 u> &rbx_1[arg2[4]])
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t* rcx = *rbx_1
        
        if (rcx != 0)
            sub_141997f50(rcx)
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != r14_2)

int64_t* rcx_1 = *arg2
(*(*rcx_1 + 0x60))(rcx_1)
int64_t rcx_2 = arg2[3]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_14100dda0(&arg2[1])
sub_1405d1550(arg2)
j_sub_140a74f90(arg2)
