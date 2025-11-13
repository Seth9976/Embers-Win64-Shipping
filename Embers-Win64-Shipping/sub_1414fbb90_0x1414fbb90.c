// 函数: sub_1414fbb90
// 地址: 0x1414fbb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg1[0x2a]
int64_t i_2 = 4

if (rbp != 0)
    void* rbx_1 = &rbp[0xa]
    
    for (int64_t i = 4; i != 0; )
        int64_t* rcx = *(rbx_1 - 8)
        rbx_1 -= 0x10
        i -= 1
        
        if (rcx != 0 && *rbx_1 != 0)
            (*(*rcx + 0x10))(rcx, rbx_1)
            *(rbx_1 + 8) = 0
        
        sub_14081c9d0(rbx_1)
    
    sub_14081c9d0(&rbp[1])
    sub_1405d1550(rbp)
    j_sub_140a74f90(rbp)

void* rbx_2 = &arg1[0x33]
int64_t i_1

do
    rbx_2 -= 0x50
    sub_1405d1550(rbx_2)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
sub_1405d1550(&arg1[1])
return sub_1405d1550(arg1) __tailcall
