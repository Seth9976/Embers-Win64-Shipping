// 函数: sub_1422974c0
// 地址: 0x1422974c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19f0)
void var_19f8
int64_t rax_1 = __security_cookie ^ &var_19f8
void* i = *(arg1 + 0x10)
int128_t zmm1 = *(i + 0x70)
int128_t var_1988 = *(i + 0x60)
int128_t var_1978 = zmm1
int128_t var_1958 = *(i + 0x60)
int128_t var_1948 = *(i + 0x70)
int64_t var_68 = 0
int32_t var_58 = 0
int32_t var_40 = 0
int128_t var_1938 = *(i + 0x80)
int32_t var_54 = 0x63
sub_1422a7cd0(&var_1988)
void** result
int512_t zmm3
int128_t zmm6
int128_t zmm7
result, zmm3, zmm6, zmm7 = sub_14228fab0(&var_1988)

if (i != 0)
    int128_t var_18_1 = zmm6
    zmm6 = 0x3ea2f983
    int128_t var_28_1 = zmm7
    zmm7 = 0x41200000
    
    do
        int32_t* rcx_3 = sx.q(var_40) * 0xb0 + *i
        int32_t* rax_4
        int128_t zmm0_1
        float zmm1_1
        
        if (arg3 == 0)
            int32_t var_19a8
            rax_4 = &var_19a8
            zmm0_1.d = rcx_3[4].d f* zmm6.d
            int32_t var_199c_1 = 0x3db7e5af
            zmm1_1 = rcx_3[0x10] f* zmm6.d
            var_19a8 = zmm0_1.d
            zmm0_1.d = rcx_3[0x1c].d f* zmm6.d
            float var_19a4_1 = zmm1_1
            int32_t var_19a0_1 = zmm0_1.d
        else
            zmm0_1 = rcx_3[0x29]
            int32_t var_19b8
            rax_4 = &var_19b8
            var_19b8 = zmm0_1.d
            int32_t var_19b4_1 = zmm0_1.d
            int32_t var_19b0_1 = zmm0_1.d
            int32_t var_19ac_1 = 0x3f800000
        
        int64_t rax_5 = *arg2
        zmm3.o = zmm7
        char var_19d8_1 = 0
        int128_t var_1998 = *rax_4
        zmm0_1.d = (*(arg1 + 0x18)).d f+ *rcx_3
        float zmm2_1 = rcx_3[2] f+ *(arg1 + 0x20)
        zmm1_1 = rcx_3[1] f+ *(arg1 + 0x1c)
        int32_t var_19c8 = zmm0_1.d
        float var_19c0_1 = zmm2_1
        float var_19c4_1 = zmm1_1
        (*(rax_5 + 0x38))(arg2, &var_19c8, &var_1998, zmm3, var_19d8_1)
        var_40 += 1
        result, zmm3, zmm6, zmm7 = sub_14228fab0(&var_1988)
    while (i != 0)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_19f8)
return result
