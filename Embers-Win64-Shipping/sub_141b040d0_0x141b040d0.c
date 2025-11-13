// 函数: sub_141b040d0
// 地址: 0x141b040d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* result = arg6
int128_t zmm6 = *(arg1 + 8)
int128_t zmm7

if (arg4 == 1)
    zmm6.d = zmm6.d f* arg3.d
    
    if ((arg2[1].b & 1) != 0)
        zmm6.d = zmm6.d f+ *arg2
    
    *arg2 = zmm6.d
    arg2[1] |= 1
    zmm7.d = arg3.d f+ arg2[2]
    arg2[2] = zmm7.d
else if (arg4 == 4)
    if (arg2[7].b == 0)
        arg2[6] = 0
        arg2[7].b = 1
        int32_t zmm0
        zmm0, zmm6 = sub_141b225f0(result, arg5, zmm6)
        int32_t var_34_1 = 1
        result = zmm0.q
        *(arg2 + 0x14) = result
    
    zmm6.d = zmm6.d f+ arg2[5]
    zmm6.d = zmm6.d f* arg3.d
    
    if ((arg2[1].b & 1) != 0)
        zmm6.d = zmm6.d f+ *arg2
    
    *arg2 = zmm6.d
    arg2[1] |= 1
    zmm7.d = arg3.d f+ arg2[2]
    arg2[2] = zmm7.d
else if (arg4 == 2)
    zmm6.d = zmm6.d f* arg3.d
    
    if ((arg2[4].b & 1) != 0)
        zmm6.d = zmm6.d f+ arg2[3]
    
    arg2[3] = zmm6.d
    arg2[4] |= 1
__security_check_cookie(rax_1 ^ &var_58)
return result
