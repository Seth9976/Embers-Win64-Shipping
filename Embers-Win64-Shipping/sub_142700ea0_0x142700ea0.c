// 函数: sub_142700ea0
// 地址: 0x142700ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *arg3
void* rax_1 = sub_140d3c6e0(&arg_10)
float rax_3
float zmm0[0x4]

if (rax_1 == 0)
    zmm0 = zx.o(data_143b580a8)
    rax_3 = data_143b580b0
else
    void* rax_2 = *(rax_1 + 0x130)
    
    if (rax_2 == 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        rax_3 = data_143dbb200
    else
        float zmm1[0x4] = *(rax_2 + 0x1d0)
        int64_t var_28
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        zmm0 = zx.o(var_28)
        rax_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]

*arg2 = zmm0.q
arg2[1].d = rax_3
return arg2
