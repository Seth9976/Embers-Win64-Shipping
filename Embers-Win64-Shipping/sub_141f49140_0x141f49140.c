// 函数: sub_141f49140
// 地址: 0x141f49140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0xffffffff)
    return 

void var_98
float (* var_18_1)[0x4] = __security_cookie ^ &var_98
*(arg1 + 0x7a0) = arg2
*(arg1 + 0x7b0) = data_143dbb0c0
*(arg1 + 0x7c0) = data_143dbb0d0
*(arg1 + 0x7d0) = data_143dbb0e0
int32_t rcx = *(arg1 + 0x808)

if (rcx s> 0)
    float (* rax)[0x4] = sx.q(*(arg1 + 0x7a0))
    float zmm0[0x4]
    
    if (rax.d s< 0 || rax.d s>= rcx)
        *(arg1 + 0x7a0) = 0xffffffff
        *(arg1 + 0x7b0) = data_143dbb0c0
        *(arg1 + 0x7c0) = data_143dbb0d0
        zmm0 = data_143dbb0e0
    else
        void var_78
        float var_48[0x3][0x4]
        rax = sub_140ad7d70(arg1 + 0x1c0, &var_48, 
            sub_142218ad0(*(*(arg1 + 0x800) + (rax << 3)), &var_78, 1, 0))
        *(arg1 + 0x7b0) = *rax
        *(arg1 + 0x7c0) = rax[1]
        zmm0 = rax[2]
    
    *(arg1 + 0x7d0) = zmm0

__security_check_cookie(var_18_1 ^ &var_98)
