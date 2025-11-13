// 函数: sub_14264f1f0
// 地址: 0x14264f1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int32_t rcx = *(arg1 + 0x140)
uint64_t var_a8
uint128_t zmm0
uint128_t zmm3
uint128_t zmm5

if (((rcx u>> 2).b & 1) == 0)
    int64_t* rax_8 = *(arg1 + 0x28)
    int32_t rax_9 = rax_8[1].d
    var_a8 = *rax_8
    int32_t var_a0_2 = rax_9
    void* result
    
    if ((rcx.b & 1) == 0)
        result = sub_142656820(arg1)
    else
        result = arg1 + 0x130
    
    int32_t temp0 = *(result + 8)
    
    if (rbx.d u< temp0)
        int64_t rax_10 = *result
        int64_t rcx_5 = rbx << 5
        rbx = zx.q(rbx.d + 1)
        zmm0.d = (*(rcx_5 + rax_10 + 8)).d f- *(rcx_5 + rax_10 + 0x14)
        zmm5.d = (*(rcx_5 + rax_10)).d f- *(rcx_5 + rax_10 + 0xc)
        zmm3.d = (*(rcx_5 + rax_10 + 4)).d f- *(rcx_5 + rax_10 + 0x10)
        zmm0.d = zmm0.d f* 0.5f
        zmm5.d = zmm5.d f* 0.5f
        zmm0.d = zmm0.d f+ *(rcx_5 + rax_10 + 0x14)
        zmm3.d = zmm3.d f* 0.5f
        zmm5.d = zmm5.d f+ *(rcx_5 + rax_10 + 0xc)
        zmm3.d = zmm3.d f+ *(rcx_5 + rax_10 + 0x10)
        int32_t var_a0_3 = zmm0.d
        var_a8 = (_mm_unpacklo_ps(zmm5, zmm3.q)).q
    label_14264f4f9:
        
        if (sub_14264fae0(arg1, arg2, &var_a8, rbx.d, arg4, arg5).b != 0)
            result.b = 1
            return result
    else if (rbx.d u<= temp0)
        goto label_14264f4f9
    
    result.b = 0
    return result

int64_t rcx_1 = sx.q(*(arg1 + 0x30))
int64_t r14
r14.b = 0

if (rcx_1.d s> 1 && arg3 s>= 0 && rbx.d s< rcx_1.d)
    int64_t rdx = *(arg1 + 0x28)
    int64_t rax_3 = rbx << 5
    int32_t rsi_1 = (rbx + 1).d
    float rax_4 = *(rax_3 + rdx + 8)
    uint64_t var_c8 = *(rax_3 + rdx)
    
    if (rsi_1 s< rcx_1.d)
        float zmm1 = rax_4
        float zmm2 = var_c8:4.d
        float zmm4 = var_c8.d
        int128_t zmm6 = zx.o(0)
        uint128_t zmm7 = 0x3f800000
        uint128_t zmm8
        uint128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int64_t rdi_1 = sx.q(rsi_1)
        uint128_t zmm10
        uint128_t var_78_1 = zmm10
        int64_t* rbx_3 = (rdi_1 << 5) + rdx
        
        do
            var_a8 = *rbx_3
            zmm8 = var_a8.d
            zmm9 = var_a8:4.d
            zmm3.d = zmm8.d f- zmm4
            zmm10 = rbx_3[1].d
            zmm4 = zmm9.d - zmm2
            zmm5.d = zmm10.d f- zmm1
            zmm0.d = zmm3.d f* zmm3.d
            
            if (not(zmm4 * zmm4 f+ zmm0.d + zmm5.d f* zmm5.d <= 9.99999994e-09f))
                int32_t var_98 = zmm3.d
                float var_94_1 = zmm4
                int32_t var_90_1 = zmm5.d
                float var_b8
                
                if (zmm3.d f== zmm6.d)
                    var_b8 = 3.39999995e+38f
                else
                    zmm0.d = zmm7.d f/ zmm3.d
                    var_b8 = zmm0.d
                
                if (zmm4 f== zmm6.d)
                    int32_t var_b4_2 = 0x7f7fc99e
                else
                    zmm0.d = zmm7.d f/ zmm4
                    int32_t var_b4_1 = zmm0.d
                
                if (zmm5.d f== zmm6.d)
                    int32_t var_b0_2 = 0x7f7fc99e
                else
                    zmm0.d = zmm7.d f/ zmm5.d
                    int32_t var_b0_1 = zmm0.d
                
                char rax_6
                rax_6, zmm6, zmm7, zmm8, zmm9 =
                    sub_1409cb460(arg2, &var_c8, &var_a8, &var_98, &var_b8)
                
                if (rax_6 != 0)
                    r14.b = 1
                    
                    if (arg4 != 0)
                        *arg4 = rsi_1
                    
                    break
            
            rsi_1 += 1
            rdi_1 += 1
            rbx_3 = &rbx_3[4]
            zmm4 = zmm8.d
            var_c8.d = zmm4
            zmm2 = zmm9.d
            var_c8:4.d = zmm2
            zmm1 = zmm10.d
            float var_c0_2 = zmm1
        while (rdi_1 s< rcx_1)

return zx.q(r14.b)
