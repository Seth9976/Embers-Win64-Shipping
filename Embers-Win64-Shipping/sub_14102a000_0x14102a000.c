// 函数: sub_14102a000
// 地址: 0x14102a000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108

if (*(arg6 + 0x28) == 0)
    int512_t zmm0
    zmm0.o = 1
    int32_t rax_5 = (zmm0.o).q.d
    int64_t var_c0_1 = 0
    int128_t zmm1 = 1.o
    int32_t var_b0_1 = 1
    
    if ((arg5.b & 8) != 0)
        rax_5 = 4
    
    int64_t var_a4_1 = 1
    int64_t var_60_1
    var_60_1.d = rax_5
    int128_t zmm2 = zx.o(arg4)
    int128_t zmm3 = 0x10001:4.o
    int128_t var_90_1 = zmm1
    int128_t var_80_1 = zmm2
    int128_t var_70_1 = zmm3
    
    if (not(test_bit(arg5, 9)))
        var_60_1.d = rax_5 | 8
    
    int64_t** rax_7 = *(arg1 + 0x20)
    zmm0.o = zx.o(var_60_1)
    int128_t var_58 = zmm1
    int128_t var_48_1 = zmm2
    int128_t var_38_1 = zmm3
    int64_t var_28_1 = (zmm0.o).q
    uint64_t rax_8 = sub_140fff8d0(*rax_7, nullptr, &var_58, 4, zmm0, arg3, arg4, arg5, arg6)
    
    if (*(rax_8 + 0xd0) != 0)
        *(rax_8 + 0x11) = 0
    
    *arg2 = rax_8
    *(rax_8 + 8) += 1
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

__security_check_cookie(rax_1 ^ &var_108)
return arg2
