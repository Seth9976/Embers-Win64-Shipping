// 函数: sub_14221dba0
// 地址: 0x14221dba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1

if (arg5 != 0)
    arg1 = arg5

int64_t var_28
float rax_2
float zmm0[0x4]

if (arg4 == 0)
    zmm0 = zx.o(*arg3)
    rax_2 = arg3[1].d
else
    void* rax_1 = arg1[0x26]
    
    if (rax_1 == 0)
        float rax_3 = data_143dbb200
        var_28 = data_143dbb1f8.q
        zmm0 = zx.o(var_28)
        rax_2 = rax_3
    else
        float zmm1[0x4] = *(rax_1 + 0x1d0)
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float var_20_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        zmm0 = zx.o(var_28)
        rax_2 = var_20_1

float var_20_3 = rax_2
var_28 = zmm0.q
arg5 = nullptr
return sub_141dcf4f0(arg1, rdx, rdx, &var_28, 0, 0)
