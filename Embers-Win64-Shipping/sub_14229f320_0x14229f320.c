// 函数: sub_14229f320
// 地址: 0x14229f320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t r9 = *arg1
int64_t rax_2 = arg3
arg3.b = 1
void* rax_3 = (*(r9 + 0x6a8))(arg1, rax_2, arg3, r9)

if (rax_3 == 0)
    *arg2 = data_143dbb1f8.q
    arg2[2] = data_143dbb200
else
    void var_48
    float zmm1_1[0x4] = sub_142217930(rax_3, &var_48)[1]
    *arg2 = zmm1_1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    arg2[2] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
    arg2[1] = temp0_1[0]

__security_check_cookie(rax_1 ^ &var_68)
return arg2
