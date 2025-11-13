// 函数: sub_14215c540
// 地址: 0x14215c540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t rax = *(arg2 + 0x30)

if (rax == 0)
    rax = *(arg2 + 0x98)

arg1[1] = rax
arg1[2] = *(arg2 + 0x90)
__builtin_memset(&arg1[3], 0, 0x18)
int64_t* rsi = *(arg2 + 0x30)
void* rcx = *(arg1[2] + 0x130)
int64_t var_28
float var_20

if (rcx == 0)
    float rax_3 = data_143dbb200
    var_28 = data_143dbb1f8.q
    var_20 = rax_3
else
    float zmm1[0x4] = *(rcx + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_20 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28:4.d = temp0_1[0]

arg1[3] = var_28
arg1[4].d = var_20

if (rsi != 0)
    (*(*rsi + 0x660))(rsi, &var_28)
    (*(*rsi + 0x6f8))(rsi, &arg1[3], &var_28)
    void var_18
    int32_t* rax_7 = sub_140ae4210(&var_28, &var_18)
    *(arg1 + 0x24) = *rax_7
    *(arg1 + 0x2c) = rax_7[2]

return arg1
