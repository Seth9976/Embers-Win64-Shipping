// 函数: sub_1408cae90
// 地址: 0x1408cae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x270))(arg1, zx.q(*arg3))
int128_t zmm6 = arg5

if (not(arg5.d f!= 0f))
    zmm6 = arg4

int128_t zmm7
zmm7.d = arg2.d f+ arg3[1]
arg3[1] = zmm7.d
(*(*arg1 + 0x280))(arg1)
arg2 = arg3[1]

if (not(arg2.d f<= arg5.d))
    arg2.d = arg2.d f/ arg5.d
    truncf(arg2.d)
    arg5.d = arg2.d f* arg5.d
    arg2.d = arg3[1].d f- arg5.d
    arg3[1] = arg2.d

float result

if (arg2.d f<= zmm6.d)
    result.b = 0
else
    *arg3 += 1
    arg2.d = arg2.d f- zmm6.d
    arg3[1] = arg2.d
    result = (*(*arg1 + 0x278))(arg1)
    
    if (*arg3 s>= result)
        float rcx_2 = 0f
        
        if (arg6 == 0)
            rcx_2 = result i- 1
        
        *arg3 = rcx_2
    
    result.b = 1

return result
