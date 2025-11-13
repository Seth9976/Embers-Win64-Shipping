// 函数: sub_1427470e0
// 地址: 0x1427470e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
uint64_t rdx = zx.q(arg2 + 1)
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10
int128_t var_58 = zmm10
int64_t rax = *arg1

if (arg3 == 0)
    (*(rax + 0x948))(arg1, rdx, 0)
else
    (*(rax + 0x950))(arg1, rdx)
    int64_t* rcx = arg1[0xd0]
    void arg_20
    
    if (rcx != 0 && (*(*rcx + 0xd8))(rcx, &arg_20, zx.q(arg2)) != 0)
        int64_t* rcx_1 = arg1[0xd0]
        int32_t var_b8
        int32_t var_98
        sub_142742d50(&var_98, (*(*rcx_1 + 0xe0))(rcx_1, &var_b8, zx.q(arg2)))
        int32_t var_dc = var_98
        int32_t var_90
        int32_t var_d4_1 = var_90
        int32_t var_94
        int32_t var_d8_1 = var_94
        int32_t var_84
        int32_t var_cc_1 = var_84
        int32_t var_88
        int32_t var_d0_1 = var_88
        int32_t var_78
        int32_t var_c4_1 = var_78
        int32_t var_80
        int32_t var_c8_1 = var_80
        int32_t var_70
        int32_t var_bc_1 = var_70
        int32_t var_74
        int32_t var_c0_1 = var_74
        int32_t* rax_5 = sub_142742ed0(&var_b8, &var_dc)
        int32_t zmm6_1 = *rax_5
        int32_t zmm7_1 = rax_5[1]
        int32_t zmm8_1 = rax_5[2]
        int32_t zmm9_1 = rax_5[3]
        
        if (sub_142745840(arg1) == 0)
            sub_1422aeae0(arg1)
        else
            int32_t var_68
            int32_t var_e8 = var_68
            int32_t var_64
            int32_t var_e4_1 = var_64
            int32_t var_60
            int32_t var_e0_1 = var_60
            var_b8 = zmm6_1
            int32_t var_b4_1 = zmm7_1
            int32_t var_b0_1 = zmm8_1
            int32_t var_ac_1 = zmm9_1
            sub_1427472a0(arg1, arg2, &var_b8, &var_e8)

sub_141ee8690(arg1)
return sub_141ee8470(arg1) __tailcall
