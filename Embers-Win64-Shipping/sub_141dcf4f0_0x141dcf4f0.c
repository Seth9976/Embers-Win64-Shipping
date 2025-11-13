// 函数: sub_141dcf4f0
// 地址: 0x141dcf4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg3

if (arg3 == 0)
    rsi = arg1[0x23]

int32_t result
int512_t zmm2
int128_t zmm6_1
result, zmm2, zmm6_1 = sub_141dcdc50(arg1)

if (result == 3 || rsi == 0)
    return result

uint64_t* rdx
uint64_t var_38

if (0f f!= *arg4 || 0f f!= arg4[1] || 0f f!= arg4[2])
    rdx = &var_38
    int32_t rax_3 = arg4[2]
    var_38 = *arg4
    int32_t var_30_2 = rax_3
else
    void* rax = arg1[0x26]
    int32_t var_30_1
    
    if (rax == 0)
        int32_t rax_1 = data_143dbb200
        var_38 = data_143dbb1f8.q
        var_30_1 = rax_1
    else
        uint128_t zmm1_1 = *(rax + 0x1d0)
        var_38.d = zmm1_1.d
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_30_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
        var_38:4.d = zmm0_1.d
    
    uint64_t var_2c
    rdx = &var_2c
    var_2c = var_38
    int32_t var_24_1 = var_30_1
int64_t* rcx = nullptr
zmm2.o = zmm6_1

if (data_143f38c68 != 0)
    rcx = data_143f38c60

int64_t r8 = *rcx
return (*(r8 + 0x48))(rcx, arg1, r8, rsi, rdx, arg5.d, arg6)
