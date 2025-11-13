// 函数: sub_1426fbc90
// 地址: 0x1426fbc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 - 0x170)
float rax_1
float zmm0[0x4]

if (rax == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_1 = data_143dbb200
else
    void* rcx = *(rax + 0xb0)
    
    if (rcx == 0)
        zmm0 = zx.o(data_143b58088)
        rax_1 = data_143b58090
    else
        float zmm1[0x4] = *(rcx + 0x1d0)
        int64_t var_28
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rcx + 0x114)
        zmm0 = zx.o(var_28)
        rax_1 = temp0_2[0]

*arg2 = zmm0.q
arg2[1].d = rax_1
return arg2
