// 函数: sub_1423acb70
// 地址: 0x1423acb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rax_2 = *arg1
void* rcx_2 = &rax_2[sx.q(arg1[1].d) * 2]
void* result

if (rax_2 == rcx_2)
label_1423acbd9:
    arg1[0xd].d = 0
    result = sub_1423de100()
    
    if (result != 0)
        uint128_t zmm0_1 = sub_142005cc0(sub_1423de100())
        int64_t* rcx_4 = *(arg2 + 0x58)
        int32_t var_218
        result = (*(*rcx_4 + 0x18))(rcx_4, &var_218)
        int32_t r12_1 = int.d(zmm0_1.d * 1.10000002f)
        void var_208
        
        if (*(arg3 + 9) == 0)
            int32_t rbx_4 = arg3[6]
            int32_t rbx_5 = rbx_4 - 1
            
            if (rbx_4 - 1 s>= 0)
                int64_t rdi_2 = sx.q(rbx_5) << 5
                int32_t temp3_1
                
                do
                    int64_t* rsi_2 = *(arg3 + 0x10) + rdi_2
                    result = sub_140ab3dc0(rsi_2)
                    
                    if (result.b == 0)
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(arg4[2] - *arg4)
                        int32_t rax_17 = ((temp5_1 - temp4_1) s>> 1) + *arg4
                        int32_t var_214_2 = _mm_cvtepi32_ps(zx.o(arg4[3])).d
                        var_218 = _mm_cvtepi32_ps(zx.o(rax_17)).d
                        sub_1420767c0(&var_208, &var_218, rsi_2, sub_1423de100(), arg5)
                        int32_t var_1cc_2 = 0x3dcccccd
                        char var_17e_2 = 1
                        int128_t var_17c_2 = data_14399f5e0
                        char var_180_2 = 1
                        sub_142409810(arg2, &var_208)
                        arg4[3] -= r12_1
                        zmm0_1.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f+ arg1[0xd].d
                        arg1[0xd].d = zmm0_1.d
                        result = sub_141fa61e0(&var_208)
                    
                    rdi_2 -= 0x20
                    temp3_1 = rbx_5
                    rbx_5 -= 1
                while (temp3_1 - 1 s>= 0)
        else
            int64_t* rbx_3 = (sx.q(*arg3) << 5) + *(arg3 + 0x10)
            result = sub_140ab3dc0(rbx_3)
            
            if (result.b == 0)
                int32_t rax_6 = arg4[2] - *arg4
                arg4[3] -= 0x18
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rax_6)
                int32_t rax_10 = ((temp2_1 - temp1_1) s>> 1) + *arg4
                int32_t var_214_1 = _mm_cvtepi32_ps(zx.o(arg4[3])).d
                var_218 = _mm_cvtepi32_ps(zx.o(rax_10)).d
                sub_1420767c0(&var_208, &var_218, rbx_3, sub_1423de100(), arg5)
                int32_t var_1cc_1 = 0x3dcccccd
                char var_17e_1 = 1
                char var_180_1 = 1
                int128_t var_17c_1 = data_14399f5e0
                sub_142409810(arg2, &var_208)
                uint128_t zmm0_3
                zmm0_3.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f+ arg1[0xd].d
                arg1[0xd].d = zmm0_3.d
                result = sub_141fa61e0(&var_208)
else
    while (rax_2[1].d == 0 || *rax_2 == 0)
        rax_2 = &rax_2[2]
        
        if (rax_2 == rcx_2)
            goto label_1423acbd9
    
    result = sub_1423ace50(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_248)
return result
