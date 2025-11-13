// 函数: sub_140038f00
// 地址: 0x140038f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4[0].o
int128_t zmm7 = arg3[0].o
int128_t zmm8 = arg5
sub_140038bf0(arg1.d)
int32_t rax = data_1439b8f70
uint32_t zmm10[0x8]

if (rax s>= 5)
    arg3[0].o = zmm7
    arg4[0].o = zmm6
    int64_t k0
    int32_t zmm13[0x4]
    float zmm21[0x4]
    float zmm22[0x4]
    float zmm23[0x4]
    float zmm25[0x4]
    float zmm27[0x4]
    float zmm28[0x4]
    return sub_140008e30(arg1, arg2, arg3, arg4[0].o, k0, zmm10[0].o, zmm13, zmm21, zmm22, zmm23, 
        zmm25, zmm27, zmm28, zmm8.d)

float zmm15[0x4]

if (rax s>= 3)
    arg3[0].o = zmm7
    arg4[0].o = zmm6
    float zmm9[0x4]
    return sub_140014250(arg1, arg2, arg3, arg4, zmm9, zmm10, zmm15, zmm8.d)

if (rax s>= 2)
    arg3[0].o = zmm7
    arg4[0].o = zmm6
    float zmm14[0x4]
    return sub_14001f870(arg1, arg2, arg3, arg4, zmm14, zmm15, zmm8.d)

if (rax s> 0)
    arg3[0].o = zmm7
    arg4[0].o = zmm6
    return sub_14002b2d0(arg1, arg2, arg3[0].o, arg4[0].o, zmm8.d)

if (rax s< 0)
    abort()
    noreturn

arg3[0].o = zmm7
arg4[0].o = zmm6
return sub_1400374a0(arg1, arg2, arg3[0].o, arg4[0].o, zmm8.d)
