// 函数: sub_141eeffb0
// 地址: 0x141eeffb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t result = __security_cookie ^ &var_3a8
int64_t result_1 = result

if ((*(arg1 + 0x38a) & 0x20) != 0)
    void var_388
    sub_141f2db80(&var_388, arg1[0x16], zx.d(arg1[0x3e].b) u>> 7, 1)
    int512_t zmm1
    zmm1.o = arg2
    (*(*arg1 + 0x600))(arg1, zmm1)
    (*(*arg1 + 0x618))(arg1)
    *(arg1 + 0x38a) &= 0xdf
    result = sub_141f2f2c0(&var_388)

__security_check_cookie(result_1 ^ &var_3a8)
return result
