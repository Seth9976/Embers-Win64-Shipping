// 函数: sub_140f6c650
// 地址: 0x140f6c650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 0x340)
uint128_t zmm6 = zx.o(0)
float zmm7[0x4] = zx.o(0)
void var_58
sub_140f756b0(arg1, &var_58, arg3)
int32_t var_54
int32_t var_50
uint128_t zmm0

if (not(var_50.d f<= 0f))
    zmm0 = var_54

int32_t arg_8

if (var_50.d f<= 0f || zmm0.d f<= 0f)
    if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s> 0)
        int32_t rbp_1 = 0
        
        if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s> 0)
            int64_t rsi_1 = 0
            int32_t rax_8
            
            do
                int64_t* rax_6 = sub_140e13cf0(*(*(*(arg1 + 0x2b8) + rsi_1) + 0x10), &arg_8)
                uint128_t zmm1_1 = *rax_6
                uint128_t zmm2_1 = *(rax_6 + 4)
                
                if (*(arg1 + 0x340) != 1)
                    zmm0 = zmm1_1
                    zmm1_1 = zmm2_1
                else
                    zmm0 = zmm2_1
                
                int64_t rax_7 = *(arg1 + 0x2a8)
                zmm0.d = zmm0.d f+ zmm6.d
                zmm7 = _mm_max_ss(zmm7[0], zmm1_1.d)
                rbp_1 += 1
                rsi_1 += 8
                zmm6 = zmm0
                rax_8 = (*rax_7)(arg1 + 0x2a8)
            while (rbp_1 s< rax_8)
        
        zmm6.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o((**(arg1 + 0x2a8))(arg1 + 0x2a8))).d
else
    sub_140f756b0(arg1, &var_58, zmm0.d)
    zmm7 = var_50
    zmm6 = var_54

zmm6.d = zmm6.d f* _mm_cvtepi32_ps(zx.o(*(arg1 + 0x344))).d
float arg_10

if (r15 != 1)
    arg_8 = zmm6.d
    float arg_c = zmm7[0]
else
    arg_10 = zmm7[0]
    int32_t arg_14 = zmm6.d

int32_t* rax_11 = &arg_8

if (r15 == 1)
    rax_11 = &arg_10

*arg2 = *rax_11
return arg2
