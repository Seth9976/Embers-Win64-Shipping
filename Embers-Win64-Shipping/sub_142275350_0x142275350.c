// 函数: sub_142275350
// 地址: 0x142275350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x53]
int64_t result

if (rbx == 0)
    result.b = 0
else
    void* rax = sub_142531230()
    void* r10_1 = rbx[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(r10_1 + 0x38))
        result.b = 0
    else if (*(*(r10_1 + 0x30) + (result << 3)) != rax + 0x30)
        result.b = 0
    else
        void* rdx = rbx[0xe]
        
        if (rdx == 0)
            result.b = 0
        else
            int64_t rax_1 = *rbx
            int128_t var_78
            __builtin_memset(&var_78, 0, 0x20)
            int32_t var_108
            
            if ((*(rax_1 + 0x2b8))(rbx, *(rdx + 0xb8), 0, &var_108).b == 0)
                result.b = 0
            else
                float var_58[0x2][0x4]
                sub_141b99680(&var_108, &var_58)
                int128_t var_68
                int32_t arg_8
                
                if (sub_1422f0230(arg2, &var_68, &var_58, &arg_8).b == 0)
                    result.b = 0
                else
                    uint128_t zmm3_1 = arg_8
                    int64_t zmm4_1 = arg5
                    
                    if (arg4 != 0)
                        int64_t rax_2 = var_68.q
                        zmm3_1.d = zmm3_1.d f- _mm_cvtepi32_ps(zx.o(rax_2.d)).d
                        zmm4_1.d = zmm4_1.d f- _mm_cvtepi32_ps(zx.o((rax_2 u>> 0x20).d)).d
                        arg_8 = zmm3_1.d
                        arg5 = zmm4_1.d
                    
                    uint128_t zmm1_1
                    zmm1_1.d = (*arg2).d f- var_108
                    int32_t var_100
                    uint128_t zmm0_1
                    zmm0_1.d = (*(arg2 + 8)).d f- var_100
                    float var_104
                    float zmm2_1 = *(arg2 + 4) - var_104
                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    *arg3 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
                    arg3[1].d = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 f+ zmm1_1.d f+ zmm0_1.d).d
                    int32_t rax_5 = *(arg2 + 8)
                    int64_t rax_6 = *arg1
                    uint64_t var_118 = *arg2
                    (*(rax_6 + 0xab8))(arg1, &var_118, &arg_8, zx.q(arg4), var_118, rax_5)
                    result.b = 1

return result
