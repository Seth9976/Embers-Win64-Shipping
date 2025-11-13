// 函数: sub_1427b8c50
// 地址: 0x1427b8c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 5) != 0)
    *arg2 = 2
    *(arg2 + 8) = 0
    *(arg2 + 0x18) = 0
    arg2[4] = 0x63
    return arg2

sub_1427b8ff0(arg1 + 0x80, arg3, arg1[0x24])
int64_t* rcx_1 = arg1[0x24]

if ((*(*rcx_1 + 0x40))(rcx_1) == 0)
    char rax_5 = (*(*arg1 + 0x2d0))(arg1, arg3)
    void var_38
    void* rdx_2 = &var_38
    int64_t rbp_1 = *arg1[0x24]
    int64_t r9_1 = *(*arg1 + 0x2e8)
    
    if (rax_5 == 0)
        int64_t rax_8 = r9_1(arg1, rdx_2, arg3)
        (*(rbp_1 + 0x28))(arg1[0x24], rax_8)
        *arg2 = 2
    else
        int64_t rax_6 = r9_1(arg1, rdx_2, arg3)
        char rax_7 = (*(rbp_1 + 0x30))(arg1[0x24], rax_6)
        
        if (rax_7 != 0)
            *arg2 = 2
        else
            arg1[0x25].b = rax_7
            *arg2 = 3
else
    int64_t* rcx_2 = arg1[0x24]
    (*(*rcx_2 + 0x38))(rcx_2)
    arg1[0x25].b = 0
    *arg2 = 3

*(arg2 + 0x18) = 0
*(arg2 + 8) = 0
arg2[4] = 0x63
return arg2
