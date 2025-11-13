// 函数: sub_142942120
// 地址: 0x142942120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x330)
void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t var_2e8
int32_t rax_2

if ((*(arg3 + 0x3f) & 0xe0) == 0)
    rax_2 = sub_1429451c0(&var_2e8, arg4)

uint64_t result

if ((*(arg3 + 0x3f) & 0xe0) != 0 || rax_2 != 0)
    result = 0
else
    int128_t zmm0 = *arg3
    var_2e8 = neg.d(var_2e8)
    int128_t zmm1 = arg3[1]
    int32_t var_2e4
    int32_t var_2e4_1 = neg.d(var_2e4)
    int32_t var_2e0
    int32_t var_2e0_1 = neg.d(var_2e0)
    int32_t var_2dc
    int32_t var_2dc_1 = neg.d(var_2dc)
    int32_t var_2d8
    int32_t var_2d8_1 = neg.d(var_2d8)
    int32_t var_2d4
    int32_t var_2d4_1 = neg.d(var_2d4)
    int32_t var_2d0
    int32_t var_2d0_1 = neg.d(var_2d0)
    int32_t var_2cc
    int32_t var_2cc_1 = neg.d(var_2cc)
    int32_t var_2c8
    int32_t var_2c8_1 = neg.d(var_2c8)
    int32_t var_2c4
    int32_t var_2c4_1 = neg.d(var_2c4)
    int32_t var_270
    int32_t var_270_1 = neg.d(var_270)
    int32_t var_26c
    int32_t var_26c_1 = neg.d(var_26c)
    int32_t var_268
    int32_t var_268_1 = neg.d(var_268)
    int32_t var_264
    int32_t var_264_1 = neg.d(var_264)
    int32_t var_260
    int32_t var_260_1 = neg.d(var_260)
    int32_t var_25c
    int32_t var_25c_1 = neg.d(var_25c)
    int32_t var_258
    int32_t var_258_1 = neg.d(var_258)
    int32_t var_254
    int32_t var_254_1 = neg.d(var_254)
    int32_t var_250
    int32_t var_250_1 = neg.d(var_250)
    int32_t var_24c
    int32_t var_24c_1 = neg.d(var_24c)
    int128_t var_a0 = zmm0
    int128_t var_90_1 = zmm1
    zmm1 = arg3[3]
    int128_t var_e8 = arg3[2]
    int128_t var_d8_1 = zmm1
    void var_1c8
    sub_1428c98a0(&var_1c8)
    sub_1428c9950(&var_1c8, arg3, 0x20)
    sub_1428c9950(&var_1c8, arg4, 0x20)
    sub_1428c9950(&var_1c8, arg1, arg2)
    void var_78
    sub_1428c90a0(&var_78, &var_1c8)
    sub_142948b70(&var_78)
    void var_248
    sub_142944a70(&var_248, &var_78, &var_2e8, &var_e8)
    void var_1f8
    sub_142942950(&var_e8, &var_1f8)
    void var_310
    sub_142942bd0(&var_310, &var_248, &var_e8)
    void var_338
    void var_220
    sub_142942bd0(&var_338, &var_220, &var_e8)
    char var_c0[0x1f]
    sub_1429444b0(&var_c0, &var_338)
    sub_1429444b0(&var_e8, &var_310)
    char var_a1
    char var_a1_1 = var_a1 ^ var_e8.b << 7
    int32_t result_1
    result_1.b = sub_1428bc500(&var_c0, &var_a0, 0x20) == 0
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_358)
return result
