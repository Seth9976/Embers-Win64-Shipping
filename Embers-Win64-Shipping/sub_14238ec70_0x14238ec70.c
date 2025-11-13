// 函数: sub_14238ec70
// 地址: 0x14238ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
int64_t result = EnterCriticalSection(arg1 + 0x580)

if (arg2 != 0)
    void* rax = sub_1425b0810()
    void* r8 = *(arg2 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(r8 + 0x38))
        int64_t result_1 = result
        result = *(r8 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            int64_t* r14_1 = *(rsi + 0x340)
            int64_t r15_1 = 0
            uint64_t r12_2 = sx.q(*(rsi + 0x348)) << 3 u>> 3
            
            if (r14_1 u> &r14_1[sx.q(*(rsi + 0x348))])
                r12_2 = 0
            
            void* var_a0
            int32_t i_1
            void var_74
            
            if (r12_2 != 0)
                do
                    void* rsi_1 = *r14_1
                    
                    if (rsi_1 != 0)
                        sub_14239a450(rsi_1 + 0x20)
                        void* rdx = *(rsi_1 + 0x30)
                        *(rsi_1 + 0x38) = 0
                        
                        if (rdx != 0)
                            sub_1423a4df0(&var_a0, rdx, arg2)
                            
                            if (i_1 != 0xffffffff)
                                int32_t i
                                
                                do
                                    int32_t* rax_3 = sub_1423afa20(&var_a0, &var_74)
                                    int64_t rsi_2 = sx.q(arg3[1].d)
                                    char var_78_1 = 1
                                    float zmm6_1[0x4] = *rax_3
                                    float zmm2_1[0x4] = rax_3[2]
                                    int64_t zmm5_1 = rax_3[1]
                                    zmm2_1[0] = zmm2_1[0] f+ rax_3[5]
                                    zmm6_1[0] = zmm6_1[0] f- rax_3[3]
                                    zmm2_1[0] = zmm2_1[0] f- rax_3[5]
                                    zmm6_1[0] = zmm6_1[0] f+ rax_3[3]
                                    int64_t zmm7_1 = zmm5_1
                                    zmm5_1.d = zmm5_1.d f- rax_3[4]
                                    zmm7_1.d = zmm7_1.d f+ rax_3[4]
                                    float var_a4_1 = zmm2_1[0]
                                    float var_88_1 = zmm2_1[0]
                                    int64_t var_90_1 = (_mm_unpacklo_ps(zmm6_1, zmm5_1)).q
                                    float var_7c_1 = var_a4_1
                                    int32_t rax_6 = (rsi_2 + 1).d
                                    int64_t var_84_1 = (_mm_unpacklo_ps(zmm6_1, zmm7_1)).q
                                    arg3[1].d = rax_6
                                    
                                    if (rax_6 s> *(arg3 + 0xc))
                                        sub_1405c50f0(arg3)
                                    
                                    int64_t rcx_5 = *arg3
                                    float (* rdx_3)[0x4] = rsi_2 * 0x1c
                                    *(rdx_3 + rcx_5) = var_90_1.o
                                    *(rdx_3 + rcx_5 + 0x10) = var_84_1
                                    *(rdx_3 + rcx_5 + 0x18) = var_78_1.d
                                    i = *(*(var_a0 + 0x20) + sx.q(i_1) * 0x28 + 0x20)
                                    i_1 = i
                                while (i != 0xffffffff)
                    
                    r14_1 = &r14_1[1]
                    r15_1 += 1
                while (r15_1 != r12_2)
                
                rsi = arg1
            
            result = sub_14239a380(rsi + 0x220)
            void* rdx_5 = *(rsi + 0x230)
            *(rsi + 0x238) = 0
            
            if (rdx_5 != 0)
                result = sub_1423a4df0(&var_a0, rdx_5, arg2)
                
                if (i_1 != 0xffffffff)
                    do
                        int32_t* rax_10 = sub_1423afa20(&var_a0, &var_74)
                        int64_t rsi_3 = sx.q(arg3[1].d)
                        char var_78_2 = 1
                        float zmm6_2[0x4] = *rax_10
                        float zmm4_1[0x4] = rax_10[3]
                        uint128_t zmm1_2 = rax_10[5]
                        int64_t zmm3_1 = rax_10[4]
                        zmm4_1[0] = zmm4_1[0] + zmm6_2[0]
                        float zmm2_2 = rax_10[2]
                        zmm6_2[0] = zmm6_2[0] - zmm4_1[0]
                        int64_t zmm5_2 = rax_10[1]
                        float zmm0_2[0x4] = zmm1_2
                        zmm0_2[0] = zmm0_2[0] + zmm2_2
                        int64_t zmm7_2
                        zmm7_2.d = zmm3_1.d f+ zmm5_2.d
                        zmm5_2.d = zmm5_2.d f- zmm3_1.d
                        float var_b0_2 = zmm0_2[0]
                        float var_88_2 = zmm2_2 f- zmm1_2.d
                        int64_t var_90_2 = (_mm_unpacklo_ps(zmm6_2, zmm5_2)).q
                        float var_7c_2 = var_b0_2
                        int32_t rax_13 = (rsi_3 + 1).d
                        int64_t var_84_2 = (_mm_unpacklo_ps(zmm4_1, zmm7_2)).q
                        arg3[1].d = rax_13
                        
                        if (rax_13 s> *(arg3 + 0xc))
                            sub_1405c50f0(arg3)
                        
                        int64_t rcx_11 = *arg3
                        float (* rdx_8)[0x4] = rsi_3 * 0x1c
                        *(rdx_8 + rcx_11) = var_90_2.o
                        *(rdx_8 + rcx_11 + 0x10) = var_84_2
                        *(rdx_8 + rcx_11 + 0x18) = var_78_2.d
                        result = zx.q(*(*(var_a0 + 0x20) + sx.q(i_1) * 0x28 + 0x20))
                        i_1 = result.d
                    while (result.d != 0xffffffff)

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580)
