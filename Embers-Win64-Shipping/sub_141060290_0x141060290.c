// 函数: sub_141060290
// 地址: 0x141060290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8

if (*(arg6 + 0x28) == 0)
    void var_b8
    int128_t* rax_4
    int512_t zmm0_1
    rax_4, zmm0_1 = sub_1410601b0(&var_b8, arg4, arg5)
    zmm0_1.o = *rax_4
    int32_t var_d8_1 = 0
    int128_t var_80 = zmm0_1.o
    uint128_t var_70_1 = rax_4[1]
    zmm0_1.o = rax_4[2]
    int128_t var_60_1 = zmm0_1.o
    uint64_t var_50_1 = rax_4[3].q
    uint64_t rax_6 =
        sub_1410004f0(**(arg1 + 0x20), arg3, &var_80, 4, zmm0_1, var_d8_1, arg4, arg5, arg6)
    
    if (*(rax_6 + 0xc8) != 0)
        *(rax_6 + 0x11) = 0
    
    *arg2 = rax_6
    *(rax_6 + 8) += 1
else
    void*** rax_2 = j_sub_140a82f30(0x168)
    void*** rcx_1
    
    if (rax_2 == 0)
        rcx_1 = nullptr
    else
        rcx_1 = sub_14105d090(rax_2)
    
    *arg2 = rcx_1
    
    if (rcx_1 != 0)
        rcx_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
