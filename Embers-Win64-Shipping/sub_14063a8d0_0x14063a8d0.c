// 函数: sub_14063a8d0
// 地址: 0x14063a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *(arg4 + 8)
int32_t zmm4 = arg2
int128_t zmm3 = *arg4
arg2 = (zx.o(0)).d
float zmm5 = *(arg3 + 8)
int128_t zmm2 = *(arg4 + 4)
int128_t zmm6 = *(arg3 + 4)
int128_t zmm7
zmm7.d = zmm0.d f+ zmm5
zmm5 = zmm5 f- zmm0.d
zmm0 = *arg1
int128_t zmm10 = *arg3
int128_t zmm9
zmm9.d = zmm2.d f+ zmm6.d
int128_t zmm8
zmm8.d = zmm3.d f+ zmm10.d
zmm10.d = zmm10.d f- zmm3.d
zmm6.d = zmm6.d f- zmm2.d

if (not(zmm0.d f>= zmm10.d))
    arg2 = zmm0.d f- zmm10.d
    arg2 = arg2 f* arg2
else if (not(zmm0.d f<= zmm8.d))
    arg2 = zmm0.d f- zmm8.d
    arg2 = arg2 f* arg2

zmm0 = *(arg1 + 4)

if (not(zmm0.d f>= zmm6.d))
    zmm0.d = zmm0.d f- zmm6.d
    zmm0.d = zmm0.d f* zmm0.d
    arg2 = arg2 f+ zmm0.d
else if (not(zmm0.d f<= zmm9.d))
    zmm0.d = zmm0.d f- zmm9.d
    zmm0.d = zmm0.d f* zmm0.d
    arg2 = arg2 f+ zmm0.d

zmm0 = *(arg1 + 8)

if (not(zmm0.d f>= zmm5))
    zmm0.d = zmm0.d f- zmm5
    zmm0.d = zmm0.d f* zmm0.d
    arg2 = arg2 f+ zmm0.d
else if (not(zmm0.d f<= zmm7.d))
    zmm0.d = zmm0.d f- zmm7.d
    zmm0.d = zmm0.d f* zmm0.d
    arg2 = arg2 f+ zmm0.d

int64_t result
result.b = zmm4 f* zmm4 f>= arg2
return result
