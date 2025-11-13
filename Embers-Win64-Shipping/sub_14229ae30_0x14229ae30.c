// 函数: sub_14229ae30
// 地址: 0x14229ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_e0
int32_t* rbx = &var_e0
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9 = arg6
int128_t zmm10 = arg5
int64_t var_e8 = *arg2
int64_t zmm0 = *(arg2 + 0xc)
var_e0 = arg2[1].d
int128_t zmm14 = var_e0
int128_t zmm12 = zmm0:4.d
int128_t zmm13 = zmm0.d
int128_t zmm11 = *(arg2 + 0x14)
int64_t i_1 = 2
int64_t result
int64_t i

do
    zmm6 = rbx[-2]
    int32_t* rdi_1 = &var_e0
    zmm7 = rbx[-1]
    int64_t j_1 = 2
    zmm8 = *rbx
    int64_t j
    
    do
        zmm0 = rdi_1[-1]
        int64_t rax_2 = *arg1
        int32_t var_f8 = zmm6.d
        int32_t var_108 = zmm6.d
        int32_t var_f4_1 = zmm0.d
        int32_t var_104_1 = zmm0.d
        (*(rax_2 + 0x30))(arg1, &var_f8, &var_108, arg3, arg4, zmm10.d, zmm9.d, arg7, var_108, 
            zmm11.d, var_f8, zmm14.d, var_e8)
        zmm0 = *rdi_1
        int64_t rax_3 = *arg1
        int32_t var_f0_2 = zmm0.d
        int32_t var_100_2 = zmm0.d
        var_f8 = var_e8.d.d
        int32_t var_f4_2 = zmm7.d
        int32_t var_104_2 = zmm7.d
        var_108 = zmm13.d
        (*(rax_3 + 0x30))(arg1, &var_f8, &var_108, arg3, arg4, zmm10.d, zmm9.d, arg7, var_108, 
            var_100_2, var_f8, var_f0_2)
        zmm0 = rdi_1[-2]
        int64_t rax_4 = *arg1
        int32_t var_f0_3 = zmm8.d
        int32_t var_100_3 = zmm8.d
        var_f8 = zmm0.d
        var_108 = zmm0.d
        int32_t var_f4_3 = var_e8:4.d.d
        int32_t var_104_3 = zmm12.d
        result = (*(rax_4 + 0x30))(arg1, &var_f8, &var_108, arg3, arg4, zmm10.d, zmm9.d, arg7, 
            var_108, var_100_3, var_f8, var_f0_3)
        rdi_1 = &rdi_1[3]
        j = j_1
        j_1 -= 1
    while (j != 1)
    rbx = &rbx[3]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
