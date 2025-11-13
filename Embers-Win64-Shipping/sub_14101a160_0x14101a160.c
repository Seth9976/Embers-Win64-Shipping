// 函数: sub_14101a160
// 地址: 0x14101a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t r10 = zx.q(arg5)

if (*(arg7 + 0x28) == 0)
    int64_t var_d0_1 = 0
    int512_t zmm0
    zmm0.o = 1
    int32_t rax_4 = (zmm0.o).q.d
    
    if ((arg6.b & 8) != 0)
        rax_4 = 4
    
    int32_t var_c0_1 = 1
    int64_t var_b4_1 = 1
    int64_t var_70_1
    var_70_1.d = rax_4
    int128_t zmm1 = 1.o
    int128_t zmm2 = r10.o
    int128_t zmm3 = 0x10001:4.o
    int128_t var_a0_1 = zmm1
    int128_t var_90_1 = zmm2
    int128_t var_80_1 = zmm3
    
    if (not(test_bit(arg6, 9)))
        var_70_1.d = rax_4 | 8
    
    int64_t** rax_6 = *(arg1 + 0x20)
    zmm0.o = zx.o(var_70_1)
    int32_t var_f0_1 = r10.d
    int128_t var_68 = zmm1
    int128_t var_58_1 = zmm2
    int128_t var_48_1 = zmm3
    int64_t var_38_1 = (zmm0.o).q
    uint64_t rax_7 = sub_140fff8d0(*rax_6, arg3, &var_68, 4, zmm0, arg4, var_f0_1, arg6, arg7)
    
    if (*(rax_7 + 0xd0) != 0)
        *(rax_7 + 0x11) = 0
    
    *arg2 = rax_7
    *(rax_7 + 8) += 1
else
    void*** rax_2 = j_sub_140a82f30(0x170)
    void*** rcx_1
    
    if (rax_2 == 0)
        rcx_1 = nullptr
    else
        rcx_1 = sub_14100b140(rax_2)
    
    *arg2 = rcx_1
    
    if (rcx_1 != 0)
        rcx_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_118)
return arg2
