// 函数: sub_142702cb0
// 地址: 0x142702cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xe8)
int64_t var_28
float rax_2
float zmm0[0x4]

if (rax == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_2 = data_143dbb200
else
    void* rax_1 = *(rax + 0xb0)
    
    if (rax_1 == 0)
        float rax_3 = data_143b58090
        var_28 = data_143b58088
        zmm0 = zx.o(var_28)
        rax_2 = rax_3
    else
        float zmm1[0x4] = *(rax_1 + 0x1d0)
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rax_1 + 0x114)
        zmm0 = zx.o(var_28)
        rax_2 = temp0_2[0]

var_28 = zmm0.q
float var_20_3 = rax_2

if (not(arg4.d f!= -1f))
    arg4 = *(arg1 + 0x110)

if ((arg3 & 0xfd) == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(arg1 + 0x11c)

return sub_142703ae0(arg1, arg2, zx.o(0), zx.o(0), &var_28, arg4.d, zmm0[0])
