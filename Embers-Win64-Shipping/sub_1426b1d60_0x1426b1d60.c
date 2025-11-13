// 函数: sub_1426b1d60
// 地址: 0x1426b1d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float rax_1
float zmm0[0x4]

if (arg3 == 0)
    zmm0 = zx.o(data_143b57f80)
    rax_1 = data_143b57f88
else
    void* rax = *(arg3 + 0x130)
    
    if (rax == 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        rax_1 = data_143dbb200
    else
        float zmm1[0x4] = *(rax + 0x1d0)
        int64_t var_28
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        zmm0 = zx.o(var_28)
        rax_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]

*arg2 = zmm0.q
arg2[1].d = rax_1
return arg2
