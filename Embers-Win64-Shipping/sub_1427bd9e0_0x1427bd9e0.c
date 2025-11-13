// 函数: sub_1427bd9e0
// 地址: 0x1427bd9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
void* rcx = arg1 + 0x28

if (rax != 0)
    rcx = rax

void var_38
int128_t* rax_3 = (*(arg1 + 8))(&var_38, (*(*rcx + 8))(rcx), arg3)
int128_t zmm1 = rax_3[1]
*arg2 = *rax_3
uint128_t zmm0 = zx.o(rax_3[2].q)
arg2[1] = zmm1
arg2[2].q = zmm0.q
return arg2
