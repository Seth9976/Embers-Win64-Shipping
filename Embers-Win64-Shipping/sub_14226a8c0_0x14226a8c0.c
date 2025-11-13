// 函数: sub_14226a8c0
// 地址: 0x14226a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_628
int64_t rax_1 = __security_cookie ^ &var_628
int128_t zmm6 = arg1[0x34c].d
int128_t zmm7 = *((*(*arg1 + 0x150))() + 0x520)

if (not(zmm6.d f== zmm7.d))
    int64_t rbx_1 = *arg1
    void var_608
    (*(rbx_1 + 0x658))(arg1, (*(rbx_1 + 0x660))(arg1, &var_608))
    char var_48_1 = 0
    int64_t var_98
    
    if (var_98 != 0)
        sub_140a74f90(var_98)
    
    arg1[0x408].d = zmm6.d

int64_t result = (*(*arg1 + 0x650))(arg1, arg2)
arg1[0x34c].d = zmm7.d
__security_check_cookie(rax_1 ^ &var_628)
return result
