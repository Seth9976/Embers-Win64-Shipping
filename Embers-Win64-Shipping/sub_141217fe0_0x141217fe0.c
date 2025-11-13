// 函数: sub_141217fe0
// 地址: 0x141217fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg2[3].d
int32_t rdi_1 = arg1[1].d << 4

if (rdx u< rdi_1)
    arg2[3].d = 0
    sub_1405d16e0(&arg2[1], nullptr)
    sub_1405d16e0(&arg2[2], nullptr)
    (*(*arg2 + 8))(arg2, 0x10, zx.q(rdi_1 u>> 4), 1, 4)
    rdx = arg2[3].d

int64_t* rcx_3 = data_143f0f180
int64_t rax_3 = (*(*rcx_3 + 0x130))(rcx_3, &data_143f02b98, arg2[1], 0, rdx, 1)
arg2[4] = rax_3
memcpy(rax_3, *arg1, arg1[1].d << 4)
int64_t* rcx_5 = data_143f0f180
int64_t result = (*(*rcx_5 + 0x138))(rcx_5, &data_143f02b98, arg2[1])
arg2[4] = 0
return result
