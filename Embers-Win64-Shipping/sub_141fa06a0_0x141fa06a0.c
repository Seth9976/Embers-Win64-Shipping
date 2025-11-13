// 函数: sub_141fa06a0
// 地址: 0x141fa06a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3[0x14].d
int64_t* arg_8 = arg2
sub_140b560b0(arg3, arg4)
int64_t rbx
rbx.b = arg_8 == *(arg1 + 0x70)
sub_140b560b0(arg3, rbx.b)

if (rbx.b == 0)
    (*(*arg3 + 0x130))(arg3, &arg_8)
    int64_t* rcx_3 = *(*(arg1 + 0x28) + 0x58)
    
    if ((*(*rcx_3 + 0x368))(rcx_3) != 0)
        int64_t* rcx_4 = arg_8
        
        if ((*(*rcx_4 + 0x1b8))(rcx_4) == 0)
            sub_140b560b0(arg3, 0)
            int64_t rax_8 = *arg3
            int64_t arg_10 = arg_8[2]
            (*(rax_8 + 0x130))(arg3, &arg_10)
        else
            sub_140b560b0(arg3, 1)

int32_t arg_20 = *(arg5 + 0xa0)
(*(*arg3 + 0x168))(arg3, &arg_20)
int64_t r9 = *arg3
int32_t rbx_1 = (arg3[0x14]).d
(*(r9 + 0x158))(arg3, *(arg5 + 0x90), *(arg5 + 0xa0), r9)
return zx.q(rbx_1 - rbp)
