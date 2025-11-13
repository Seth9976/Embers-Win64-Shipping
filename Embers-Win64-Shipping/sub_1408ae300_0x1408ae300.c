// 函数: sub_1408ae300
// 地址: 0x1408ae300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3.d
int32_t rdx = 1
float arg_30
float rdi = arg_30
int32_t rbx = arg1
int128_t zmm6 = arg4
int128_t zmm7 = arg2
arg2 = 0x3f800000
int32_t arg_8 = arg1
*arg6 = *arg5
int64_t zmm0 = zmm6.q
arg6[1].d = arg5[1].d

if (rdi s> 1)
    if (rdi s> 8)
        uint64_t rax_4 = zx.q(((rdi - 9) u>> 3) + 1)
        uint64_t i_3 = zx.q(rax_4.d)
        rdx = ((rax_4 << 3) + 1).d
        uint64_t i
        
        do
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rdi s<= 8 || rdx s< rdi)
        uint64_t i_4 = zx.q(rdi i- rdx)
        uint64_t i_1
        
        do
            arg2.d = arg2.d f+ zmm0.d
            zmm0.d = zmm0.d f* zmm6.d
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

zmm7.d = zmm7.d f/ arg2.d
arg_30 = zmm7.d
void arg_38
int64_t result
float zmm6_1
float zmm7_1
float zmm8_1
float zmm9_1
result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_1408b1220(&arg_8, &arg_30, &arg_18, &arg_38, arg6)

if (rdi s> 1)
    uint64_t i_5 = zx.q(rdi i- 1)
    uint64_t i_2
    
    do
        rbx += 1
        arg_8 = rbx
        arg_18 = zmm8_1 * zmm9_1
        arg_30 = zmm7_1 * zmm6_1
        result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
            sub_1408b1220(&arg_8, &arg_30, &arg_18, &arg_38, arg6)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
