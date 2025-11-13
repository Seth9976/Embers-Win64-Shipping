// 函数: sub_1418f2f30
// 地址: 0x1418f2f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_20 = 0
*arg1 = &data_142ff18d8
int32_t var_38 = 1
int32_t rax_1 = (1 << (data_1439c7a34).b) - 1
int128_t var_48 = zx.o(0)
int32_t var_24 = rax_1
int128_t var_34 = data_143dbb1e0
int64_t var_18 = 0
int32_t var_10 = 0
sub_1418f2510(&arg1[1], *(arg3 + 0x10), arg4, *(arg3 + 0x34), arg5, arg6, arg7, *(arg3 + 0x58), 
    *(arg3 + 0x70), *(arg3 + 0x74), *(arg3 + 0x18), *(arg3 + 0x38), &var_48)
__builtin_memset(&arg1[0x10], 0, 0x14)
arg1[0x13] = 0
void* rax_10 = *arg2
arg1[0x14] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

void* rax_12

if (arg1[0xf].d != *(arg1 + 0x7c))
    rax_12 = j_sub_140a82f30(0x18)
    
    if (rax_12 == 0)
        rax_12 = nullptr
    else
        __builtin_memset(rax_12, 0, 0x14)
else
    rax_12 = &arg1[0x10]

arg1[0x13] = rax_12
sub_1418f8550(arg1)
int64_t* rcx_3 = *arg2
void* rax_14 = (*(*rcx_3 + 0x48))(rcx_3)
sub_1418f81f0(&arg1[1])
int64_t* rdx_1 = arg1[0x13]
arg1[3] = *(rax_14 + 0x18)
arg1[0x10] = *(rax_14 + 0x80)
arg1[0x11] = *(rax_14 + 0x88)
arg1[0x12].d = *(rax_14 + 0x90)

if (rdx_1 != &arg1[0x10])
    *rdx_1 = **(rax_14 + 0x98)
    arg1[0x13][1] = *(*(rax_14 + 0x98) + 8)
    arg1[0x13][2].d = *(*(rax_14 + 0x98) + 0x10)

return arg1
