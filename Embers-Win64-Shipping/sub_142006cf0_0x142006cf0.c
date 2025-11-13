// 函数: sub_142006cf0
// 地址: 0x142006cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg2
int16_t* rsi = arg2
int128_t zmm6 = zx.o(0)
float zmm7[0x4] = zx.o(0)
int16_t* rbx = nullptr
uint128_t zmm0

if (i != 0)
    uint64_t rdi
    uint64_t arg_8 = rdi
    
    do
        int32_t arg_10
        int32_t arg_18
        float zmm8_1
        zmm6, zmm7, zmm8_1 = sub_142003d30(arg1, i, &arg_10, &arg_18)
        rdi.b = 0
        
        if (rbx != 0)
            uint32_t rcx_1 = zx.d(*(arg1 + 0x30))
            rdi = zx.q(*rsi)
            int16_t rbx_1 = *rbx
            
            if (rcx_1 == 0)
                rdi = zx.q(*(arg1 + 0x6c))
            else if (rcx_1 != 1)
                rdi.b = 0
            else
                void* var_d8
                sub_142411870(sub_14240f390(), &var_d8)
                int64_t* var_d0
                
                if (var_d8 == 0)
                    if (var_d0 != 0)
                        var_d0[1].d -= 1
                        
                        if (var_d0[1].d == 1)
                            (**var_d0)(var_d0)
                            int32_t temp2_1 = *(var_d0 + 0xc)
                            *(var_d0 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*var_d0 + 8))(var_d0, 1)
                    
                    rdi.b = 0
                else
                    zmm0 = data_14399f5e0
                    int32_t r8_1 = *(arg1 + 0x13c)
                    int32_t var_c8 = 0
                    int16_t var_c4_1 = 0
                    int64_t var_c0_1 = 0
                    uint128_t var_b8_1 = zmm0
                    void var_a8
                    sub_140d93a40(&var_a8, arg1, r8_1, arg1 + 0x140, &var_c8)
                    char var_5c
                    char rax_2
                    rax_2, zmm6, zmm7 = sub_140da7dd0(
                        sub_140da4220(var_d8, &var_a8, zmm8_1, &data_143e20dd8), rbx_1, rdi.w, 
                        var_5c)
                    rdi = zx.q(rax_2)
                    int64_t* var_70
                    
                    if (var_70 != 0)
                        var_70[1].d -= 1
                        
                        if (var_70[1].d == 1)
                            int64_t rdx_5 = *var_70
                            (*rdx_5)(var_70, rdx_5)
                            int32_t temp4_1 = *(var_70 + 0xc)
                            *(var_70 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*var_70 + 8))(var_70, 1)
                    
                    if (var_d0 != 0)
                        var_d0[1].d -= 1
                        
                        if (var_d0[1].d == 1)
                            (**var_d0)(var_d0)
                            int32_t temp5_1 = *(var_d0 + 0xc)
                            *(var_d0 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*var_d0 + 8))(var_d0, 1)
        
        rbx = rsi
        float temp0_2[0x4] = _mm_max_ss(arg_18[0], zmm7[0])
        rsi = &rsi[1]
        i = *rsi
        zmm7 = temp0_2
        zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(rdi.b))).d f+ arg_10
        zmm6.d = zmm6.d f+ zmm0.d
    while (i != 0)

zmm6.d = zmm6.d f+ zmm6.d
zmm7[0] = zmm7[0] + zmm7[0]
zmm0.d = -0.5f f- zmm6.d
float zmm2 = -0.5f - zmm7[0]
*arg4 = neg.d(int.d(zmm0.d) s>> 1)
int32_t result = neg.d(int.d(zmm2) s>> 1)
*arg3 = result
return result
