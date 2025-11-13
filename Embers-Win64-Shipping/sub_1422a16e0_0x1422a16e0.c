// 函数: sub_1422a16e0
// 地址: 0x1422a16e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143f5b298
int128_t var_18 = *arg2

if (arg3 != 0)
    int128_t* rdx = rax + 0x964
    
    if (*(rax + 0x974) == 0)
        rdx = rax + 0x934
    
    var_18 = *rdx

float zmm2

if (arg5 == 0)
    zmm2 = 1f
else
    zmm2 = *(rax + 0x9a0)

int128_t zmm0

if (arg3 != 0)
    zmm0 = 0x3f000000
else if (arg4 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = 0x3e19999a

zmm0.d = zmm0.d f* zmm2
zmm0.d = zmm0.d f+ 0.5f
float zmm0_1 = powf(zmm0.d, 2.20000005f)
*arg1 = zmm0_1 f* var_18.d
arg1[1] = zmm0_1 f* var_18:4.d
arg1[2] = zmm0_1 f* var_18:8.d
arg1[3] = var_18:0xc.d
return arg1
