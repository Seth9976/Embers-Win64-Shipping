// 函数: sub_140ae3860
// 地址: 0x140ae3860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int32_t zmm4 = (zx.o(0)).d
int128_t zmm7 = arg4
int128_t zmm8 = arg5
int64_t zmm0
int64_t zmm5

if (not(zmm8.d f<= 0f))
    zmm5.d = (*arg3).d f- *arg2
    arg4.d = (*(arg3 + 4)).d f- arg2[1]
    zmm6.d = arg3[1].d.d f- arg2[2]
    zmm0.d = zmm5.d f* zmm5.d

if (zmm8.d f<= 0f || arg4.d f* arg4.d f+ zmm0.d + zmm6.d f* zmm6.d < 9.99999975e-05f)
    int32_t rax_1 = arg3[1].d
    *arg1 = *arg3
    arg1[2] = rax_1
else
    zmm7.d = zmm7.d f* zmm8.d
    
    if (not(zmm7.d f< 0f))
        zmm4 = __minss_xmmss_memss(zmm7.d, 0x3f800000)
    
    zmm5.d = zmm5.d f* zmm4
    arg4.d = arg4.d f* zmm4
    zmm5.d = zmm5.d f+ *arg2
    zmm6.d = zmm6.d f* zmm4
    arg4.d = arg4.d f+ arg2[1]
    zmm6.d = zmm6.d f+ arg2[2]
    *arg1 = zmm5.d
    arg1[1] = arg4.d
    arg1[2] = zmm6.d

return arg1
