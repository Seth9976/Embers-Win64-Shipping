// 函数: sub_1408c4230
// 地址: 0x1408c4230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint32_t zmm1[0x4] = *arg4
zmm1[0] = zmm1[0] f* 0.5f
void* r12_1 = arg2
float zmm8[0x4] = arg3
arg3 = *(arg4 + 0x1c)
float zmm0[0x4] = zmm1
zmm0[0] = zmm0[0] f* *(arg4 + 0x1c)
zmm1[0] = zmm1[0] f* arg4[2].d
int128_t zmm7
zmm7.d = (*(arg4 + 4)).d f* 0.5f
int128_t zmm6 = zmm7
zmm7.d = zmm7.d f* *(arg4 + 0x28)
zmm6.d = zmm6.d f* *(arg4 + 0x24)
zmm7.d = zmm7.d f+ zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0x55)
zmm6.d = zmm6.d f+ zmm0[0]
zmm7.d = zmm7.d f+ arg4[3].d
zmm6.d = zmm6.d f+ *(arg4 + 0x2c)
int128_t zmm0_1
float zmm6_1[0x4]
zmm0_1, zmm6_1 = sub_140a3f4a0(temp0_1, arg3)
int64_t rax
float zmm0_2
int64_t zmm6_2
float zmm8_1[0x4]
int32_t zmm9_1
zmm0_2, rax, zmm6_2, zmm8_1, zmm9_1 = sub_1408c4a00(r12_1, zmm8, arg4, 
    _mm_unpacklo_ps(zmm6_1, zmm7.q)[0].q, zmm0_1.d, zmm0_1.d, 0x3f800000, 0f)
int32_t zmm7_1 = *(r12_1 + 0x58)
int32_t rdi_1 = 0
int32_t i = 0
float zmm10_1 = *(r12_1 + 0x54)

if (*(arg1 + 0x18) s<= 0)
    return 

int64_t r14_1 = 0

do
    int64_t* rbx_2 = *(arg1 + 0x10) + r14_1
    int32_t var_98
    sub_1408be510(rbx_2, &var_98, r12_1)
    rax = sx.q(var_98)
    
    if (rax.d != 0xffffffff)
        int64_t rcx_2 = *rbx_2 + rax * 0x18
        int64_t* rbx_3 = rcx_2 + 8
        
        if (rcx_2 == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            int64_t* rbx_4 = *rbx_3
            
            if (rbx_4 != 0)
                int32_t rsi_2 = rbx_4[3].d - *(rbx_4 + 0x14)
                
                if (rsi_2 s> 0)
                    do
                        void* rax_4
                        
                        if (rdi_1 s>= rbx_4[3].d - *(rbx_4 + 0x14))
                        label_1408c43f4:
                            rax_4 = nullptr
                        else
                            int64_t rcx_3 = sx.q(rbx_4[1].d)
                            int32_t rax_3 = rdi_1
                            int64_t r8_3 = 0
                            
                            if (rcx_3.d s<= 0)
                            label_1408c43f4_1:
                                rax_4 = nullptr
                            else
                                int64_t* rdx_2 = *rbx_4
                                void* rcx_4
                                
                                while (true)
                                    rcx_4 = *rdx_2
                                    
                                    if (rcx_4 != 0)
                                        int32_t r9_1 = *(rcx_4 + 8)
                                        
                                        if (rax_3 s< r9_1)
                                            break
                                        
                                        rax_3 -= r9_1
                                    
                                    r8_3 += 1
                                    rdx_2 = &rdx_2[1]
                                    
                                    if (r8_3 s>= rcx_3)
                                        goto label_1408c43f4_2
                                
                                if (rax_3 s< 0)
                                label_1408c43f4_2:
                                    rax_4 = nullptr
                                else
                                    rax_4 = sx.q(rax_3) * 0x2a8 + *rcx_4
                        
                        zmm0_2, rax, zmm6_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408c4a00(rax_4, 
                            zmm8_1, arg4, zmm6_2, zmm0_2, zmm9_1, zmm7_1, zmm10_1)
                        rdi_1 += 1
                    while (rdi_1 s< rsi_2)
                    
                    r12_1 = arg2
                
                rdi_1 = 0
    
    i += 1
    r14_1 += 0x50
while (i s< *(arg1 + 0x18))
