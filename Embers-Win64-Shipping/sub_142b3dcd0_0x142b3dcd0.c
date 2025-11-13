// 函数: sub_142b3dcd0
// 地址: 0x142b3dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t* rsi = arg4
char var_b0 = 0
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x18)

if (*arg4 s<= 0)
    int16_t var_6c
    void* var_78 = &var_6c:1
    int32_t var_70_1 = 0x28
    var_6c = 0
    int32_t var_40_1 = 0
    void var_88
    uint128_t zmm1 = *sub_142a85330(&var_88, "Currencies/")
    sub_142a8cbd0(&var_78, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, rsi)
    zmm1 = *sub_142a85330(&var_88, arg3)
    sub_142a8cbd0(&var_78, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, rsi)
    int32_t var_b8 = *rsi
    char** rax_5 = sub_142a641c0("icudt64l-curr", *(arg2 + 0x28), &var_b8)
    sub_142a62230(rax_5, var_78, rax_5, &var_b8)
    int32_t rax_6 = var_b8
    
    if (rax_6 s> 0)
        goto label_142b3de41
    
    if (sub_142a63b10(rax_5) s<= 2)
        rax_6 = var_b8
    label_142b3de41:
        
        if (rax_6 != 2)
            *rsi = rax_6
    else
        sub_142a620c0(rax_5, 2, rax_5, &var_b8)
        var_b0 = 1
        void var_b4
        var_a8.q = sub_142a63b20(rax_5, 0, &var_b4, &var_b8)
        var_a8:8.q = sub_142a63b20(rax_5, 1, &var_b4, &var_b8)
        void* var_98_1 = sub_142a63b20(rax_5, 2, &var_b4, &var_b8)
        *rsi = var_b8
    
    if (rax_5 != 0)
        sub_142a5f860(rax_5)
    
    if (var_6c.b != 0)
        sub_142a7dcd0(var_78)

*arg1 = var_b0.o
arg1[1] = var_a8
__security_check_cookie(rax_1 ^ &var_d8)
return arg1
