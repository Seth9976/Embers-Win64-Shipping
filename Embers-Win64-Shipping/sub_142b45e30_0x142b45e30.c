// 函数: sub_142b45e30
// 地址: 0x142b45e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 9)
    int128_t zmm0_1 = sub_142aaaa70(arg3 + 0x18, *(arg1 + 8), arg4)
    int32_t rax_1 = sub_142aaa5b0(arg3 + 0x18, *(arg1 + 8), arg4)
    zmm0_1.q f- 0.0
    int128_t zmm0_2
    int128_t zmm1_1
    int32_t var_38
    
    if (is_unordered.q(zmm0_1.q, 0.0) || zmm0_1.q f!= 0.0)
        int32_t* rax_3 = sub_142b45840(&var_38, zmm0_1)
        zmm0_2 = *rax_3
        zmm1_1 = *(rax_3 + 0x10)
    else
        int16_t arg_a = rax_1.w
        int16_t arg_c = 0xffff
        int16_t arg_e = 0xffff
        var_38 = 2
        int32_t var_20_1 = 4
        zmm0_2 = var_38.o
        zmm1_1 = rax_1.w.q.o
    *arg2 = zmm0_2
    arg2[1] = zmm1_1
else
    int128_t zmm1 = arg1[1]
    *arg2 = *arg1
    arg2[1] = zmm1

return arg2
