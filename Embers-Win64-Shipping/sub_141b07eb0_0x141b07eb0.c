// 函数: sub_141b07eb0
// 地址: 0x141b07eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int64_t* rax_1 = (*(*rcx + 0x78))(rcx)
int64_t r8 = *rax_1
void* rax_3 = sub_142437e30((*(r8 + 0x150))(rax_1, arg3, r8), 0, 1)

if (rax_3 == 0)
    arg2[4].b = (arg2[4].b & 0xfe) | 2
    return arg2

int32_t zmm0 = *(rax_3 + 0x2ec)
arg2[4].b = (arg2[4].b & 0xfe) | 3
*arg2 = &data_143059ec8
arg2[1].d = zmm0
return arg2
