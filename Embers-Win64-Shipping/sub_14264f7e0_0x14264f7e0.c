// 函数: sub_14264f7e0
// 地址: 0x14264f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x30)

if (r10 s<= 1 || arg3 s< 0 || arg3 s>= r10)
    int64_t result
    result.b = 0
    return result

int64_t rax = *(arg1 + 0x28)
int32_t i = arg3 + 1
int64_t rcx_1 = sx.q(arg3) << 5
int64_t r12
r12.b = 0
float rax_1 = *(rcx_1 + rax + 8)
int64_t var_d8 = *(rcx_1 + rax)

if (i s< r10)
    float zmm1 = rax_1
    float zmm2 = var_d8:4.d
    float zmm4 = var_d8.d
    int128_t zmm6 = zx.o(0)
    int128_t zmm7 = 0x3f800000
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11 = 0x322bcc77
    int64_t rdi_2 = sx.q(i) << 5
    
    do
        int64_t* rax_2 = *(arg1 + 0x28)
        int64_t var_e8 = *(rax_2 + rdi_2)
        zmm8 = var_e8.d
        zmm9 = var_e8:4.d
        int32_t rax_3 = *(rax_2 + rdi_2 + 8)
        int64_t zmm3
        zmm3.d = zmm8.q.d f- zmm4
        zmm10 = rax_3
        zmm4 = zmm9.d - zmm2
        float zmm5 = zmm10.d - zmm1
        int64_t zmm0
        zmm0.d = zmm3.d f* zmm3.d
        
        if (not(zmm4 * zmm4 f+ zmm0.d + zmm5 * zmm5 f<= zmm11.d))
            int32_t var_b8 = zmm3.d
            float var_b4_1 = zmm4
            float var_b0_1 = zmm5
            
            if (arg5 == 0)
                float var_c8
                
                if (zmm3.d f== zmm6.d)
                    var_c8 = 3.39999995e+38f
                else
                    zmm0.d = zmm7.q.d f/ zmm3.d
                    var_c8 = zmm0.d
                
                if (zmm4 f== zmm6.d)
                    int32_t var_c4_2 = 0x7f7fc99e
                else
                    zmm0.d = zmm7.q.d f/ zmm4
                    int32_t var_c4_1 = zmm0.d
                
                if (zmm5 f== zmm6.d)
                    int32_t var_c0_2 = 0x7f7fc99e
                else
                    zmm0.d = zmm7.q.d f/ zmm5
                    int32_t var_c0_1 = zmm0.d
                
                char rax_5
                rax_5, zmm6, zmm7, zmm8, zmm9 =
                    sub_1409cb460(arg2, &var_d8, &var_e8, &var_b8, &var_c8)
                
                if (rax_5 != 0)
                    goto label_14264fa29
            else
                uint64_t var_a8[0x2]
                void var_98
                int32_t arg_8
                char rax_4
                rax_4, zmm6, zmm7, zmm11 =
                    sub_140ad9790(arg2, &var_d8, &var_e8, arg5, &var_98, &var_a8, &arg_8)
                
                if (rax_4 != 0)
                label_14264fa29:
                    r12.b = 1
                    
                    if (arg4 != 0)
                        *arg4 = i
                    
                    break
                
                zmm10 = rax_3
                zmm9 = var_e8:4.d
                zmm8 = var_e8.d
        
        i += 1
        rdi_2 += 0x20
        zmm4 = zmm8.d
        zmm2 = zmm9.d
        zmm1 = zmm10.d
        var_d8.d = zmm4
        var_d8:4.d = zmm2
        float var_d0_1 = zmm1
    while (i s< *(arg1 + 0x30))

return zx.q(r12.b)
