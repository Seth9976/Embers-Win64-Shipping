// 函数: sub_141a00920
// 地址: 0x141a00920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[8].d = arg2
*(arg1 + 0x44) = arg3

if (arg5 != 0)
    int64_t* rcx = *arg1
    (*(*rcx + 0x10))(rcx)
    int64_t* rcx_1 = arg1[4]
    (*(*rcx_1 + 0x10))(rcx_1, zx.q(arg1[8].d))
    int64_t* rcx_2 = arg1[2]
    (*(*rcx_2 + 0x10))(rcx_2, zx.q(arg1[8].d))
    int64_t* rcx_3 = arg1[6]
    (*(*rcx_3 + 0x10))(rcx_3, zx.q(*(arg1 + 0x44) * arg1[8].d))
    arg2 = arg1[8].d

int64_t* rcx_4 = *arg1
(*(*rcx_4 + 8))(rcx_4, arg2, zx.q(arg4))
int64_t* rcx_5 = *arg1
int64_t rax_7 = (*(*rcx_5 + 0x30))(rcx_5)
int64_t* rcx_6 = arg1[4]
uint64_t rdx_4 = zx.q(arg1[8].d)
arg1[1] = rax_7
(*(*rcx_6 + 8))(rcx_6, rdx_4, zx.q(arg4))
int64_t* rcx_7 = arg1[4]
int64_t rax_10 = (*(*rcx_7 + 0x30))(rcx_7)
int64_t* rcx_8 = arg1[2]
uint64_t rdx_5 = zx.q(arg1[8].d)
arg1[5] = rax_10
(*(*rcx_8 + 8))(rcx_8, rdx_5, zx.q(arg4))
int64_t* rcx_9 = arg1[2]
int64_t rax_13 = (*(*rcx_9 + 0x30))(rcx_9)
int64_t* rcx_10 = arg1[6]
uint64_t rdx_7 = zx.q(*(arg1 + 0x44) * arg1[8].d)
arg1[3] = rax_13
(*(*rcx_10 + 8))(rcx_10, rdx_7, zx.q(arg4))
int64_t* rcx_11 = arg1[6]
int64_t result = (*(*rcx_11 + 0x30))(rcx_11)
arg1[7] = result
return result
