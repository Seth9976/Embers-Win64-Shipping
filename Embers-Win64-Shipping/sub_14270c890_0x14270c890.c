// 函数: sub_14270c890
// 地址: 0x14270c890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x47].d

if (rax == 0xffffffff || arg2 == 0xffffffff || (arg2 != rax && arg2 != 0 && rax != 0))
    return rax

void* rax_1 = arg1[0x1d]
int64_t var_28
float rax_2
float zmm0[0x4]

if (rax_1 == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_2 = data_143dbb200
else
    void* rcx = *(rax_1 + 0xb0)
    
    if (rcx == 0)
        float rax_3 = data_143b58090
        var_28 = data_143b58088
        zmm0 = zx.o(var_28)
        rax_2 = rax_3
    else
        float zmm1[0x4] = *(rcx + 0x1d0)
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rcx + 0x114)
        zmm0 = zx.o(var_28)
        rax_2 = temp0_2[0]

var_28 = zmm0.q
float var_20_3 = rax_2
int64_t rax_5 = sub_142716380(arg1, &var_28)

if (arg1[0x4c].d == 0xffffffff)
    return sub_14270c9b0(arg1, zx.q(data_143f7206c)) __tailcall

arg1[0x37].b = 3
return rax_5
