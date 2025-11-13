// 函数: sub_142690e60
// 地址: 0x142690e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rsi = arg2
int128_t zmm8 = *(arg1 + 0x144)
void* rdi = arg3
int64_t rdx = sx.q(*(*(arg3 + 8) + 8))
int32_t r15 = 0
void** const var_128 = &data_143459b90
int64_t* result

if (rdx.d s> 0)
    int64_t r12_1 = 0
    int128_t* r14_1 = nullptr
    
    do
        int64_t rbx_1 = **(rdi + 8)
        int32_t var_a8_1 = *(arg1 + 0x60)
        int32_t var_a4_1 = *(arg1 + 0x64)
        int32_t var_b0
        __builtin_strncpy(&var_b0, "RLTD", 4)
        int32_t var_ac_1 = 1
        int32_t var_a0_1 = r15
        double zmm2[0x2] = *(r14_1 + rbx_1)
        int32_t var_9c_1 = zmm2[0].d
        int32_t zmm4 = *(r14_1 + rbx_1 + 4)
        int32_t var_98_1 = zmm4
        double zmm0[0x2] = *(r14_1 + rbx_1 + 8)
        int32_t var_94_1 = zmm0[0].d
        uint128_t zmm3 = *(r14_1 + rbx_1 + 0xc)
        int32_t var_90_1 = zmm3.d
        int32_t zmm5 = *(r14_1 + rbx_1 + 0x10)
        int32_t var_8c_1 = zmm5
        uint128_t zmm1 = *(r14_1 + rbx_1 + 0x14)
        int32_t var_88_1 = zmm1.d
        int16_t rax_7 = *(r14_1 + rbx_1 + 0x20)
        int16_t rax_8 = *(r14_1 + rbx_1 + 0x24)
        int16_t var_7c_1 = *(r14_1 + rbx_1 + 0x28)
        int16_t var_7a_1 = *(r14_1 + rbx_1 + 0x2c)
        int16_t var_78_1 = *(r14_1 + rbx_1 + 0x30)
        int16_t var_76_1 = *(r14_1 + rbx_1 + 0x34)
        int16_t var_84_1 = *(r14_1 + rbx_1 + 0x38)
        int16_t var_82_1 = *(r14_1 + rbx_1 + 0x3c)
        int32_t var_160 = (zmm2 ^ 0x80000000)[0].d
        int32_t var_15c_1 = (zmm0 ^ 0x80000000)[0].d
        int32_t var_158_1 = zmm4
        int32_t var_154_1 = (zmm3 ^ 0x80000000).d
        int32_t var_150_1 = (zmm1 ^ 0x80000000).d
        int32_t var_14c_1 = zmm5
        float var_148[0x4]
        sub_140acc6d0(&var_148, &var_160, 2)
        int128_t* var_170 = nullptr
        uint32_t count = 0
        float var_140 = var_140 f- zmm8.d
        float var_134 = var_134 f+ zmm8.d
        
        if ((sub_142625b70(&var_128, &var_b0, *(r14_1 + rbx_1 + 0x40), *(r14_1 + rbx_1 + 0x48), 
                *(r14_1 + rbx_1 + 0x50), &var_170, &count) u>> 0x1f).b != 0)
            sub_14262d160(rsi, 3, "RecastBuildTileCache: failed to build layer.", 
                sub_142609160(var_170))
            result.b = 0
            goto label_14269122a
        
        int64_t rax_18 = j_sub_1426075c0(zx.q(count), 0)
        
        if (rax_18 == 0)
            sub_14262d160(rsi, 3, "RecastBuildTileCache: Out of memory 'CompressedData'.", 
                sub_142609160(var_170))
            result.b = 0
            goto label_14269122a
        
        memcpy(rax_18, var_170, count)
        uint32_t count_1 = count
        int32_t var_130
        int32_t var_f0_1 = var_130
        float var_108[0x4] = var_148
        int64_t var_138
        int64_t var_f8_1 = var_138
        void var_e8
        int32_t* rax_19 = sub_1426701c0(&var_e8, rax_18, count_1, r15, &var_108)
        int64_t rsi_1 = sx.q(*(rdi + 0x20))
        int32_t rcx_6 = (rsi_1 + 1).d
        *(rdi + 0x20) = rcx_6
        
        if (rcx_6 s> *(rdi + 0x24))
            sub_1407c3b60(rdi + 0x18)
        
        int32_t* rcx_9 = rsi_1 * 0x38 + *(rdi + 0x18)
        *rcx_9 = *rax_19
        *(rcx_9 + 4) = *(rax_19 + 4)
        *(rcx_9 + 0x14) = *(rax_19 + 0x14)
        rcx_9[7] = rax_19[7]
        rcx_9[8] = rax_19[8]
        *(rcx_9 + 0x28) = *(rax_19 + 0x28)
        void* rax_24 = *(rax_19 + 0x30)
        *(rcx_9 + 0x30) = rax_24
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
        
        int64_t* var_b8
        
        if (var_b8 != 0)
            if (0 == var_b8[1].d)
                var_b8[1].d = 0
            else
                var_b8[1].d
            
            if (var_b8 != 0)
                var_b8[1].d -= 1
                
                if (var_b8[1].d == 1)
                    (**var_b8)(var_b8)
                    int32_t rax_28 = *(var_b8 + 0xc)
                    *(var_b8 + 0xc) -= 1
                    
                    if (rax_28 == 1)
                        (*(*var_b8 + 8))(var_b8, 1)
        
        sub_142609160(var_170)
        rsi = arg2
        uint64_t r9_3 = zx.q(*(arg1 + 0x60))
        zmm3 = _mm_cvtepi32_ps(zx.o(count))
        zmm0 = zmm3
        zmm3.d = zmm3.d f* 0.0009765625f
        int32_t rax_32 = *(arg1 + 0x64)
        zmm1 = _mm_cvtepi32_ps(zx.o((zx.d(rax_8) * zx.d(rax_7) + 0x14) * 3))
        zmm0[0].d = zmm0[0].d f/ zmm1.d
        zmm1.d = zmm1.d f* 0.0009765625f
        int64_t var_188_1 = (_mm_cvtps_pd(zmm0[0])).q
        uint64_t var_190_1 = (_mm_cvtps_pd(zmm1.q)).q
        int64_t var_198_2 = (_mm_cvtps_pd(zmm3.q)).q
        int128_t** var_1a0_1
        var_1a0_1.d = r15
        float (* var_1a8_2)[0x4]
        var_1a8_2.d = rax_32
        sub_14262d160(rsi, 1, ">> Cache[%d,%d:%d] = %.2fkB (full:%.2fkB rate:%.2f%%)", r9_3)
        rdi = arg3
        r15 += 1
        r12_1 += 1
        r14_1 += 0x58
    while (r12_1 s< rdx)

sub_142671d90(arg1 + 0x2c0, rdi + 0x18)
result.b = 1
label_14269122a:
__security_check_cookie(rax_1 ^ &var_1c8)
return result
