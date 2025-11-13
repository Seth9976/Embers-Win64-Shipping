// 函数: sub_1403f0dd0
// 地址: 0x1403f0dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_758
int64_t rax_1 = __security_cookie ^ &var_758
int32_t rax_2 = *(arg1 + 0x11fc)
int32_t rdx = *(arg1 + 0x1238)
int32_t r14_1 = *(arg1 + 0x1204) + rdx
*(arg1 + 0x12cf) = 4
void var_6e8
int64_t result
int128_t zmm0
int128_t zmm6_1
float zmm7
int512_t zmm8
zmm0, result, zmm6_1, zmm7, zmm8 = sub_1403f2180(&var_6e8, arg3, arg4, r14_1, rax_2, rdx)
zmm8.o = zmm0

if (*(arg1 + 0x1230) != 0 && *(arg1 + 0x1258) == 0 && *(arg1 + 0x11fc) == 4)
    int32_t r12_1 = r14_1 * 2
    float var_68_1 = zmm7
    void var_728
    float zmm0_1
    float zmm8_1
    zmm0_1, zmm8_1 =
        sub_1403f2180(&var_728, arg3 + (sx.q(r12_1) << 2), zmm6_1, r14_1, 2, *(arg1 + 0x1238))
    zmm8_1 = zmm8_1 - zmm0_1
    sub_1403ec730(arg2, &var_728, *(arg1 + 0x1238))
    int32_t rsi_1 = 3
    float zmm7_1 = 3.40282347e+38f
    int32_t temp0_1
    
    do
        void var_a8
        sub_140410810(&var_a8, arg1 + 0x11ac, arg2, rsi_1.w, *(arg1 + 0x1238))
        sub_1403ec7b0(&var_728, &var_a8, *(arg1 + 0x1238))
        void var_6a8
        sub_1403f0b10(&var_6a8, &var_728, arg3, r12_1, *(arg1 + 0x1238))
        int64_t rbx_1 = sx.q(*(arg1 + 0x1238))
        double zmm6_2 = sub_1403ed620(&var_6a8 + ((sx.q(r14_1) + rbx_1) << 2), r14_1 - rbx_1.d)
        float zmm0_3[0x2]
        zmm0_3, result = sub_1403ed620(&var_6a8 + (rbx_1 << 2), r14_1 - rbx_1.d)
        float zmm1_1 = fconvert.s(zmm6_2 f+ zmm0_3)
        
        if (not(zmm8_1 <= zmm1_1))
            zmm8_1 = zmm1_1
            *(arg1 + 0x12cf) = rsi_1.b
        else if (zmm1_1 > zmm7_1)
            break
        
        temp0_1 = rsi_1
        rsi_1 -= 1
        zmm7_1 = zmm1_1
    while (temp0_1 - 1 s>= 0)

if (*(arg1 + 0x12cf) == 4)
    result = sub_1403ec730(arg2, &var_6e8, *(arg1 + 0x1238))

__security_check_cookie(rax_1 ^ &var_758)
return result
