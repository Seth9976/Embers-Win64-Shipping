// 函数: sub_140f54cd0
// 地址: 0x140f54cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t var_68 = *(arg4 + 0x50)
char var_64 = 1
char rax_3 = sub_140e19910(arg1, *(arg4 + 0xc), &var_68, arg5)
char rax_4

if (rax_3 != 0)
    rax_4 = sub_140f4a4b0(arg1)

if (rax_3 == 0 || rax_4 != 0)
    *arg2 = 0
else
    char var_5c_1 = 1
    int32_t rax_5
    rax_5.b = arg1[0x5c].d != 0
    char var_58_1 = 1
    int64_t var_50 = 0
    int32_t var_60 = rax_5 + 3
    int32_t var_48_1 = 0
    sub_140e23ec0(arg1, &var_60)
    sub_140745b20(&var_50)
    int64_t rbx_1 = *arg1
    int128_t zmm0_1
    int512_t zmm1
    zmm0_1, zmm1 = sub_140f5a560(arg1, arg3, arg4 + 0x20)
    zmm1.o = zmm0_1
    (*(rbx_1 + 0x240))(arg1, zmm1)
    sub_140f5be70(arg1)
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
__security_check_cookie(rax_1 ^ &var_88)
return arg2
