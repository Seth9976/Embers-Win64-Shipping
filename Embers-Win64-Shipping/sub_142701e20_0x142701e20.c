// 函数: sub_142701e20
// 地址: 0x142701e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x100)
int32_t rax_3
int64_t zmm0

if (r8 == 0)
    zmm0 = data_143dbb1f8.q
    rax_3 = data_143dbb200
else
    char rax = (*(r8 + 0x98)).b
    
    if ((rax & 2) == 0 || *(r8 + 0x30) s<= 1 || (rax & 1) == 0)
        zmm0 = data_143dbb1f8.q
        rax_3 = data_143dbb200
    else
        int64_t* rcx_2 = (sx.q(*(r8 + 0x30) - 1) << 5) + *(r8 + 0x28)
        zmm0 = *rcx_2
        rax_3 = rcx_2[1].d

*arg2 = zmm0
arg2[1].d = rax_3
return arg2
