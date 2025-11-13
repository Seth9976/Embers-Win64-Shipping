// 函数: sub_14264f530
// 地址: 0x14264f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x30)
int64_t rbx = sx.q(arg4)

if (result s<= 1 || arg4 s< 0 || rbx.d s>= result)
    result.b = 0
    return result

float rax = arg3[1].d
int64_t r12
r12.b = 0
int128_t zmm6 = zx.o(0)
int128_t zmm7 = 0x3f800000
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int64_t var_d8 = *arg3
float zmm2 = var_d8:4.d
float zmm4 = var_d8.d
int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm11 = 0x322bcc77
float zmm1 = rax
int64_t rdi_1 = rbx << 5

do
    int64_t rax_1 = *(arg1 + 0x28)
    int64_t var_e8 = *(rdi_1 + rax_1)
    zmm8 = var_e8.d
    zmm9 = var_e8:4.d
    int32_t rax_2 = *(rdi_1 + rax_1 + 8)
    int64_t zmm3
    zmm3.d = zmm8.q.d f- zmm4
    zmm10 = rax_2
    zmm4 = zmm9.d - zmm2
    float zmm5 = zmm10.d - zmm1
    int64_t zmm0
    zmm0.d = zmm3.d f* zmm3.d
    
    if (not(zmm4 * zmm4 f+ zmm0.d + zmm5 * zmm5 f<= zmm11.d))
        int32_t var_b8 = zmm3.d
        float var_b4_1 = zmm4
        float var_b0_1 = zmm5
        
        if (arg6 == 0)
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
            
            char rax_4
            rax_4, zmm6, zmm7, zmm8, zmm9 = sub_1409cb460(arg2, &var_d8, &var_e8, &var_b8, &var_c8)
            
            if (rax_4 != 0)
                goto label_14264f75e
        else
            uint64_t var_a8[0x2]
            void var_98
            int32_t arg_8
            char rax_3
            rax_3, zmm6, zmm7, zmm11 =
                sub_140ad9790(arg2, &var_d8, &var_e8, arg6, &var_98, &var_a8, &arg_8)
            
            if (rax_3 != 0)
            label_14264f75e:
                r12.b = 1
                
                if (arg5 != 0)
                    *arg5 = rbx.d
                
                break
            
            zmm10 = rax_2
            zmm9 = var_e8:4.d
            zmm8 = var_e8.d
    
    rbx = zx.q(rbx.d + 1)
    rdi_1 += 0x20
    zmm4 = zmm8.d
    zmm2 = zmm9.d
    zmm1 = zmm10.d
    var_d8.d = zmm4
    var_d8:4.d = zmm2
    float var_d0_1 = zmm1
while (rbx.d s< *(arg1 + 0x30))

return zx.q(r12.b)
