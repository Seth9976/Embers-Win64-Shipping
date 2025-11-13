// 函数: sub_14223cea0
// 地址: 0x14223cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* result = sub_14183e350(arg2)
int64_t* result_1 = result

if (result != 0)
    int64_t rdx = *result
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    int64_t* rax_2 = (*(rdx + 0x30))(result, rdx)
    int128_t* rcx_2 = *arg1
    float zmm10[0x4] = *rcx_2
    float zmm11[0x4] = *(rcx_2 + 4)
    float zmm12[0x4] = *(rcx_2 + 8)
    float var_168
    float (* rax_3)[0x4] = sub_140ade170(arg1[1], &var_168)
    int64_t r8_1 = *result_1
    float zmm6_1[0x4] = *rax_3
    int32_t var_128
    (*(r8_1 + 0xa0))(result_1, &var_128, r8_1)
    float var_138_1 = zmm10[0]
    float var_134_1 = zmm11[0]
    float var_130_1 = zmm12[0]
    float var_148[0x4] = zmm6_1
    int128_t var_d8
    int128_t* rax_4 = sub_1417cbc40(&var_d8, &var_148)
    void* rcx_6 = arg1[2]
    float zmm2_1[0x4] = *rax_4
    *(rcx_6 + 0x110) = zmm2_1
    *(rcx_6 + 0x120) = rax_4[1]
    *(rcx_6 + 0x130) = rax_4[2]
    void* rax_5 = arg1[2]
    *(rax_5 + 0xe0) = zmm2_1
    *(rax_5 + 0xf0) = *(rcx_6 + 0x120)
    *(rax_5 + 0x100) = *(rcx_6 + 0x130)
    result = arg1[2]
    
    if (result[0x29] == 0)
        int64_t* rax_7 = (*(*rax_2 + 0x30))(rax_2)
        int64_t r8_2 = *rax_7
        int64_t* rax_8
        int64_t r8_3
        rax_8, r8_3 = (*(r8_2 + 0xb0))(rax_7, &var_148, r8_2)
        r8_3.b = 1
        int64_t r9_1 = *rax_8
        (*(r9_1 + 0x168))(rax_8, 1, r8_3, r9_1)
        int64_t rdx_5 = *rax_8
        (*(rdx_5 + 0xf8))(rax_8, rdx_5)
        int64_t rax_9 = *rax_8
        var_168 = 1f
        int32_t var_164_1 = 0x3f800000
        int32_t var_160_1 = 0x3f800000
        (*(rax_9 + 0x110))(rax_8, &var_168)
        int32_t r14_1 = 0
        rax_8[2] = 0
        (*(*rax_2 + 0x50))(rax_2, rax_8)
        *(arg1[2] + 0x150) = rax_8
        int32_t var_11c
        zmm9 = var_11c
        int32_t var_120
        zmm11 = var_120 ^ 0x80000000
        zmm12 = var_128 ^ 0x80000000
        int32_t var_124
        zmm10 = var_124 ^ 0x80000000
        float var_118
        float zmm5_1 = var_138_1 - var_118
        float var_114
        float zmm4_1 = var_134_1 - var_114
        float var_110
        float zmm8_1 = var_130_1 - var_110
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm5_1 = zmm5_1 + zmm5_1
        var_168 = zmm12[0]
        zmm4_1 = zmm4_1 + zmm4_1
        float var_164_2 = zmm10[0]
        zmm9[0] = zmm9[0] - 0.5f
        zmm8_1 = zmm8_1 + zmm8_1
        float var_160_2 = zmm11[0]
        float zmm7_1 = zmm10[0]
        float var_15c_1 = zmm9[0]
        zmm12[0] = zmm12[0] * zmm5_1
        zmm10[0] = zmm10[0] * zmm4_1
        zmm10[0] = zmm10[0] + zmm12[0]
        zmm11[0] = zmm11[0] * zmm8_1
        zmm11[0] = zmm11[0] * zmm5_1
        zmm11[0] = zmm11[0] * zmm4_1
        zmm10[0] = zmm10[0] + zmm11[0]
        zmm7_1 = zmm7_1 * zmm8_1 - zmm11[0]
        zmm9[0] = zmm9[0] * zmm5_1
        zmm10[0] = zmm10[0] * zmm12[0]
        zmm7_1 * zmm9[0] + zmm9[0]
        zmm10[0]
        zmm12[0] = zmm12[0] * zmm4_1
        zmm12[0] = zmm12[0] * zmm8_1
        zmm10[0] = zmm10[0] * zmm11[0]
        zmm11[0] = zmm11[0] - zmm12[0]
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm10[0] = zmm10[0] * zmm5_1
        zmm9[0] = zmm9[0] * zmm4_1
        zmm12[0] = zmm12[0] - zmm10[0]
        zmm11[0] = zmm11[0] * zmm9[0]
        zmm9[0] = zmm9[0] * zmm8_1
        zmm11[0] = zmm11[0] + zmm9[0]
        zmm12[0] = zmm12[0] * zmm9[0]
        zmm12[0] = zmm12[0] + zmm9[0]
        zmm11[0] = zmm11[0] + zmm10[0]
        zmm12[0] = zmm12[0] + zmm10[0]
        float var_ec[0x5]
        float* rax_12
        int32_t zmm6_2
        int32_t zmm7_2
        rax_12, zmm6_2, zmm7_2 = sub_1417c7990(&var_168, &var_ec, &var_148)
        var_168 = (*rax_12).d
        int32_t var_164_3 = rax_12[1]
        int32_t var_160_3 = rax_12[2].d
        int64_t rax_13 = *rax_2
        int32_t var_15c_2 = rax_12[3]
        int32_t var_158_1 = zmm7_2
        int32_t var_154_1 = zmm6_2
        float var_150_1 = zmm12[0]
        int128_t var_108 = data_142d3f660
        int64_t var_f8_1 = 0
        int32_t var_f0_1 = 0
        void*** rax_15 =
            sub_1427e8f00((*(rax_13 + 0x30))(rax_2), rax_8, &var_108, result_1, &var_168)
        
        if (rax_15 != 0)
            rax_15[2] = 0
            *(arg1[2] + 0x148) = rax_15
            int32_t rcx_16 = *(arg1[2] + 0xc0)
            int32_t rsi_2 = rcx_16 u>> 1 & 2
            
            if ((rcx_16.b & 2) != 0 || *arg1[3] == 0)
                r14_1 = 2
            
            (*rax_15)[0x1d](rax_15, 0, zx.q(rsi_2))
            (*rax_15)[0x1d](rax_15, 1, zx.q(rsi_2))
            (*rax_15)[0x1d](rax_15, 2, zx.q(rsi_2))
            void** rax_22 = *rax_15
            var_d8 = data_142d3f660
            int64_t var_c8_1 = 0
            int32_t var_c0_1 = 0
            rax_22[0x2a](rax_15, &var_d8)
            (*rax_15)[0x1d](rax_15, 3, zx.q(r14_1))
            (*rax_15)[0x1d](rax_15, 4, zx.q(r14_1))
            (*rax_15)[0x1d](rax_15, 5, zx.q(r14_1))
            void* rdx_11 = arg1[2]
            *(rdx_11 + 0xc0) ^= (zx.d(*arg1[3]) ^ *(rdx_11 + 0xc0)) & 1
            int64_t* rcx_27 = arg1[2]
            result = (*(*rcx_27 + 0x400))(rcx_27)
        else
            result = arg1[2]
            result[0x29] = 0

__security_check_cookie(rax_1 ^ &var_198)
return result
