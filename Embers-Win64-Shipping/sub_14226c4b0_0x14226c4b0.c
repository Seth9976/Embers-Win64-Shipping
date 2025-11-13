// 函数: sub_14226c4b0
// 地址: 0x14226c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_628
int64_t rax_1 = __security_cookie ^ &var_628
int128_t zmm6 = *(arg1 + 0x23c)
char rax_2 = 0
int512_t result
result.o = zx.o(0)
int32_t var_608 = 0

if (not(zmm6.d f> 0f))
    void var_5f8
    zmm6 = *((*(*arg1 + 0x660))(result, &var_5f8) + 0x18)
    rax_2 = 1

if ((rax_2 & 1) != 0)
    char var_38_1 = 0
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)

result.o = zmm6
__security_check_cookie(rax_1 ^ &var_628)
return result
