// 函数: sub_142b45d40
// 地址: 0x142b45d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *arg1 != 9
int32_t arg_8 = 0
int128_t zmm2
int128_t zmm3

if (cond:0)
    int128_t zmm0_1 = sub_142aaaa70(arg3 + 0x18, *(arg1 + 8), &arg_8)
    int32_t rax_2 = sub_142aaa5b0(arg3 + 0x18, *(arg1 + 8), &arg_8)
    zmm0_1.q f- 0.0
    int32_t var_48
    
    if (is_unordered.q(zmm0_1.q, 0.0) || zmm0_1.q f!= 0.0)
        int32_t* rax_4 = sub_142b45840(&var_48, zmm0_1)
        zmm2 = *rax_4
        zmm3 = *(rax_4 + 0x10)
    else
        int16_t arg_22 = rax_2.w
        int16_t arg_24 = 0xffff
        int16_t arg_26 = 0xffff
        var_48 = 2
        int32_t var_30_1 = 4
        zmm2 = var_48.o
        zmm3 = rax_2.w.q.o
    int32_t rax_5 = arg_8
    
    if (rax_5 s> 0)
        *(arg2 + 8) = rax_5
        *arg2 = 9
        return arg2
else
    zmm2 = *arg1
    zmm3 = arg1[1]

*arg2 = zmm2
arg2[1] = zmm3
return arg2
