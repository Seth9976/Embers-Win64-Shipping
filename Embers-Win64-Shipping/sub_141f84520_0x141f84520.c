// 函数: sub_141f84520
// 地址: 0x141f84520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm3 = *arg3
float zmm5 = arg2.d
int128_t zmm6
zmm6.d = arg2.d f- arg1

if (zmm3.d f<= zmm5)
    arg2 = zmm3
    
    if (not(zmm3.d f>= arg1))
        arg2.d = arg2.d f- arg1
        arg2.d = arg2.d f/ zmm6.d
        arg2.d = arg2.d f+ arg2.d
        arg2.d = arg2.d f- 0.5f
        int32_t rax_4 = int.d(arg2.d) s>> 1
        *arg4 = rax_4
        arg2.d = (*arg3).d f- float.s(rax_4) f* zmm6.d
        *arg3 = arg2.d
else
    float zmm2 = (arg2.d f- zmm3.d) f/ zmm6.d
    int32_t rax_2 = int.d(zmm2 + zmm2 - 0.5f) s>> 1
    *arg4 = rax_2
    arg2.d = float.s(rax_2)
    arg2.d = arg2.d f* zmm6.d
    arg2.d = arg2.d f+ *arg3
    *arg3 = arg2.d

if (not(arg2.d f!= zmm5) && not(zmm3.d f>= arg1))
    *arg3 = arg1
label_141f845c5:
    
    if (not(zmm3.d f<= zmm5))
        *arg3 = zmm5
else if (not(arg2.d f!= arg1))
    goto label_141f845c5

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*arg4)
int32_t result = (temp1 ^ temp0) - temp0
*arg4 = result
return result
