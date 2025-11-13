// 函数: sub_141fbfd20
// 地址: 0x141fbfd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x13].d s<= 0)
    return 

void* rcx = *arg1[0x12]

if (rcx == 0 || *(rcx + 0x134) == 1)
    return 

int64_t* arg_8
sub_141fab4a0(arg1, &arg_8, sub_141dc9840(arg2))

if ((*(arg3 + 0xb0) & 0x4000) != 0)
    int64_t rbx
    
    if (arg2 == 0 || *(arg2 + 0x5f) != 3)
        rbx = 0
    else
        rbx.b = 1
        sub_141dd9f90(arg2)
    
    int64_t* rbp_1 = arg2
    int64_t** rbx_1 = arg1[0x12]
    
    if (rbx.b == 0)
        rbp_1 = nullptr
    
    char rax_3 = (*(*arg1 + 0x368))(arg1)
    sub_14216af80(arg1, arg2, arg7, *rbx_1, arg3, arg4, arg5, arg6, rax_3)
    
    if (rbp_1 != 0)
        sub_141dd9f90(rbp_1)

int64_t* rbx_2 = arg_8

if (rbx_2 == 0)
    return 

int64_t* rcx_7 = *rbx_2
(*(*rcx_7 + 0x2a8))(rcx_7, 0)
int64_t* rcx_8 = rbx_2[1]
int64_t rdx_2 = sx.q(*(rbx_2 + 0x14))

if (rdx_2.d s< rcx_8[1].d)
    int64_t r8_3 = rdx_2 * 0x28
    
    do
        r8_3 += 0x28
        rdx_2 = zx.q(rdx_2.d + 1)
        *(*rcx_8 + r8_3 - 4) = rbx_2[2].d
        rcx_8 = rbx_2[1]
    while (rdx_2.d s< rcx_8[1].d)

j_sub_140a74f90(rbx_2)
