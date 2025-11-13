// 函数: sub_140f2d0d0
// 地址: 0x140f2d0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6_1 = sub_140f2e0d0(arg1, &arg1[0x5a], &arg1[0x5c])
float zmm0 = data_143dbb1f0.d
uint64_t i_2 = zx.q(arg1[0x5b].d)
arg1[0x5e].d = zmm0
float zmm2 = data_143dbb1f0:4.d
*(arg1 + 0x2f4) = zmm2

if (i_2.d s> 0)
    float* rax_1 = arg1[0x5a]
    uint64_t i
    
    do
        zmm0 = zmm0 + *rax_1
        rax_1 = &rax_1[1]
        arg1[0x5e].d = zmm0
        i = i_2
        i_2 -= 1
    while (i != 1)

uint64_t i_3 = zx.q(arg1[0x5d].d)

if (i_3.d s> 0)
    float* rax_2 = arg1[0x5c]
    zmm0 = zmm2
    uint64_t i_1
    
    do
        zmm0 = zmm0 + *rax_2
        rax_2 = &rax_2[1]
        *(arg1 + 0x2f4) = zmm0
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return sub_140dc1da0(arg1, zmm6_1) __tailcall
