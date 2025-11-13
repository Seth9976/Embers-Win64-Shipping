// 函数: sub_14111d1d0
// 地址: 0x14111d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x9c) & 8) == 0)
    return 

int64_t* rcx = *(arg2 + 0x80)
uint64_t rdx = zx.q(*(arg1 + 0x10))
int64_t arg_10 = 0
int64_t* rax_2 = (*(*rcx + 0x40))(rcx, rdx, &arg_10)
int64_t r14_1 = arg_10

if (r14_1 == 0)
    r14_1 = *(arg2 + 0x80)

int32_t rax
rax.b = (*(*rax_2 + 0x1d8))(rax_2) u> 1

if (rax.b != *(arg1 + 0x68) || (arg4 != 0 && *(arg4 + 0x37) s>= 0)
        || (*(*rax_2 + 0x20))(rax_2) == 3)
    return 

int64_t* r9 = rax_2

if (*(arg1 + 0x10) s>= 3)
    sub_1411359b0(arg1, arg2, arg3, r9, r14_1, arg4, arg5)
else
    sub_141136330(arg1, arg2, arg3, r9, r14_1, arg4, arg5)
