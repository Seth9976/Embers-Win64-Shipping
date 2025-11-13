// 函数: sub_141827150
// 地址: 0x141827150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x11)
*(arg2 + 0x14) = 0
*(arg2 + 0x1c) = 0
int64_t var_38 = 0
int64_t var_30 = 0
sub_14183e090(arg1, &var_38)
int64_t* rcx = *arg1[2]
char arg_8
int64_t* rax_2 = (*(*rcx + 8))(rcx, arg1, &arg_8)
sub_140597df0(arg2, arg1)
char rax_3

if (arg_8 != 0 || rax_2 == 0)
    rax_3 = 0
else
    rax_3 = 1

arg2[2].b = rax_3
*(arg2 + 0x14) = var_38.o

if (rax_3 != 0)
    void* var_20
    void var_18
    (*(*rax_2 + 8))(rax_2, &var_18, &var_20)
    void* rcx_3 = var_20
    int32_t rdx_8 = (*(rcx_3 + 0x14) ^ var_30:4.d) | (*(rcx_3 + 0x10) ^ var_30.d)
        | (*(rcx_3 + 0xc) ^ var_38:4.d) | (*(rcx_3 + 8) ^ var_38.d)
    
    if (rdx_8 != 0)
        arg2[2].b = 0
    
    (*(*rax_2 + 0x18))(rax_2, rdx_8)

if (rax_2 != 0)
    (**rax_2)(rax_2, 1)

return arg2
