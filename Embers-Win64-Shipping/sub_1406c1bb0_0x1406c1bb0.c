// 函数: sub_1406c1bb0
// 地址: 0x1406c1bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6

if (*(arg1 + 0x1c0) == 2)
    int64_t rax_1 = av_gettime_relative()
    bool cond:1_1 = *(arg1 + 0x6c0) == 0xffffffd8
    *(arg1 + 0x6e0) = float.d(rax_1) f* 9.9999999999999995e-07 f- *(arg1 + 0x608) f+ *(arg1 + 0x6e0)
    
    if (not(cond:1_1))
        *(arg1 + 0x61c) = 0
    
    int32_t rbx_1 = *(arg1 + 0x618)
    int128_t zmm0_2 = sub_1406bc060(arg1 + 0x5f8)
    int64_t rax_2 = av_gettime_relative()
    *(arg1 + 0x5f8) = zmm0_2.q
    *(arg1 + 0x618) = rbx_1
    int64_t zmm1_1 = float.d(rax_2) f* 9.9999999999999995e-07
    zmm6.q = zmm0_2.q f- zmm1_1
    *(arg1 + 0x608) = zmm1_1
    *(arg1 + 0x600) = zmm6.q

int32_t rbx_2 = *(arg1 + 0x648)
int128_t zmm0_3 = sub_1406bc060(arg1 + 0x628)
int64_t rax_3 = av_gettime_relative()
*(arg1 + 0x628) = zmm0_3.q
*(arg1 + 0x648) = rbx_2
int64_t zmm1_2 = float.d(rax_3) f* 9.9999999999999995e-07
zmm6.q = zmm0_3.q f- zmm1_2
*(arg1 + 0x638) = zmm1_2
*(arg1 + 0x630) = zmm6.q
int32_t result = *(arg1 + 0x1c0)

if (result == 2 || result == 5)
    result.b = 0
else
    result.b = 1

*(arg1 + 0x5ec) = result.b
*(arg1 + 0x61c) = result.b
*(arg1 + 0x64c) = result.b
return result
