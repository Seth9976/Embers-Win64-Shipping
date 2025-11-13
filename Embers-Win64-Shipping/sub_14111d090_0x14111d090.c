// 函数: sub_14111d090
// 地址: 0x14111d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x9c) & 8) == 0)
    return 

int64_t* rcx = *(arg2 + 0x80)
uint64_t rdx = zx.q(*(arg1 + 0x10))
int64_t var_38 = 0
int64_t* rax_2 = (*(*rcx + 0x40))(rcx, rdx, &var_38)
int64_t r14_1 = var_38

if (r14_1 == 0)
    r14_1 = *(arg2 + 0x80)

int32_t rax_4 = (*(*rax_2 + 0x1d8))(rax_2)
int64_t var_30 = sub_141261c60(arg2)
int32_t rax_6 = sub_141261c10(arg2, rax_2, &var_30)
int32_t arg_10 = sub_141261bd0(arg2, rax_2, &var_30)

if (rax_4 u<= 1 || (arg4 != 0 && *(arg4 + 0x37) s>= 0))
    return 

int64_t rdx_3 = *rax_2

if ((*(rdx_3 + 0x20))(rax_2, rdx_3) != 3 && (*(*rax_2 + 0x210))(rax_2).b != 0)
    sub_141135720(arg1, arg2, arg3, arg4, arg5, arg6, r14_1, rax_2, rax_6, arg_10)
