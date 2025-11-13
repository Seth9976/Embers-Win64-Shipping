// 函数: sub_14261a2e0
// 地址: 0x14261a2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t zmm6 = arg2
sub_142623430(*(arg1 + 0x6c0))
int32_t i = 0

if (*(arg1 + 4) s> 0)
    do
        void* rdx_1 = *(*(arg1 + 0x10) + (sx.q(i) << 3))
        void* rcx_2 = *(arg1 + 0x6c0)
        arg2 = *(rdx_1 + 0x280)
        float zmm3[0x4] = *(rdx_1 + 0x234)
        float zmm2[0x4] = *(rdx_1 + 0x22c)
        float zmm4_1 = zmm3[0] f+ arg2.d
        float zmm0_1 = zmm2[0] f+ arg2.d
        zmm3[0] = zmm3[0] f- arg2.d
        zmm2[0] = zmm2[0] f- arg2.d
        sub_142620740(rcx_2, i.w, zmm2, zmm3, zmm0_1, zmm4_1)
        i += 1
    while (i s< *(arg1 + 4))

void* r12 = arg1 + 0x378
uint64_t result = sub_1426204c0(r12, zmm6.d)
int32_t i_1 = 0

if (*(arg1 + 4) s> 0)
    void** r15_1 = nullptr
    void** var_88_1 = nullptr
    
    do
        result = *(arg1 + 0x10)
        void* rbx = *(r15_1 + result)
        
        if (*(rbx + 0x327) == 1)
            int64_t* rcx_4 = *(rbx + 0x270)
            *(*(arg1 + 0x2b18) + 8) = rcx_4
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))()
            
            int32_t r8_1 = *(rbx + 0x50)
            float var_c8
            float var_c0
            int32_t rax_14
            int32_t* rbp_2
            float zmm7_1
            float zmm8_1[0x4]
            
            if (*(arg1 + 0x2b20) == 0)
                int64_t r9_5
                
                if (r8_1 == 0)
                    r9_5 = 0
                else
                    r9_5 = **(rbx + 0x48)
                
                rbp_2 = rbx + 0x22c
                var_c0.q = arg1 + 0x6e0 + zx.q(*(rbx + 0x2af)) * 0x220
                var_c8.q = *(arg1 + 0x2b18)
                rax_14, zmm7_1, zmm8_1 =
                    sub_14261b780(r12, rbp_2, *(rbx + 0x290), r9_5, var_c8, var_c0)
            else
                char r10_1 = 0x3f
                int64_t rdx_3
                
                if (r8_1 == 0)
                    rdx_3 = 0
                else
                    rdx_3 = **(rbx + 0x48)
                
                int64_t* r15_2 = *(arg1 + 0x2b18)
                
                if (rdx_3 != 0)
                    void* rbp_1 = *r15_2
                    char r12_1 = (*(rbp_1 + 0x9c)).b
                    char r14_1 = (*(rbp_1 + 0xa0)).b
                    int32_t r9_3 = ((1 << r14_1).d - 1) & rdx_3.d
                    int32_t r11_3 = ((1 << r12_1).d - 1) & (rdx_3 u>> r14_1).d
                    
                    if (r11_3 u>= *(rbp_1 + 0x30))
                        r12 = arg1 + 0x378
                    else
                        int64_t rsi_1 = *(rbp_1 + 0x90)
                        int32_t* r11_4 = zx.q(r11_3) * 0xb0
                        
                        if (*(r11_4 + rsi_1) != ((rdx_3 u>> (r12_1 + r14_1)).d
                                & ((1 << (*(rbp_1 + 0x98)).b).d - 1)))
                            r12 = arg1 + 0x378
                        else
                            void* rax_11 = *(r11_4 + rsi_1 + 8)
                            
                            if (rax_11 == 0)
                                r12 = arg1 + 0x378
                            else
                                r12 = arg1 + 0x378
                                
                                if (r9_3 u< *(rax_11 + 0x18))
                                    r10_1 =
                                        *((zx.q(r9_3) << 5) + *(r11_4 + rsi_1 + 0x10) + 0x1f) & 0x3f
                
                int64_t r9_4
                
                if (r8_1 == 0)
                    r9_4 = 0
                else
                    r9_4 = **(rbx + 0x48)
                
                rbp_2 = rbx + 0x22c
                var_c0.b = r10_1
                var_c8.q = r15_2
                rax_14, zmm7_1, zmm8_1 =
                    sub_14261b430(r12, rbp_2, *(rbx + 0x290), r9_4, var_c8, var_c0.b)
                r15_1 = var_88_1
            
            float zmm0_2 = *(rbx + 0x58) f- *rbp_2
            float zmm6_1 = *(rbx + 0x290)
            float zmm1[0x4] = *(rbx + 0x60)
            zmm1[0] = zmm1[0] f- rbp_2[2]
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm1[0] = zmm1[0] + zmm0_2 * zmm0_2
            
            if (zmm1[0] > zmm6_1 * zmm6_1 * zmm7_1)
                goto label_14261a600
            
            if (sub_14262d050(rbx + 0x58, *(arg1 + 0x2b18), 
                    arg1 + 0x6e0 + zx.q(*(rbx + 0x2af)) * 0x220) == 0)
                zmm6_1 = *(rbx + 0x290)
            label_14261a600:
                int64_t r8_4 = sx.q(*(rbx + 0x304))
                char r10_2
                
                if (r8_4.d == 0 || (*(r8_4 + rbx + 0x2ff) & 6) == 0)
                    r10_2 = 0
                else
                    r10_2 = 1
                
                int64_t var_7c_1 = 0
                float zmm3_1
                float zmm4_2[0x4]
                float zmm5_1[0x4]
                
                if (r8_4.d == 0)
                    zmm3_1 = *(rbx + 0x25c)
                    zmm4_2 = *(rbx + 0x260)
                    zmm5_1 = *(rbx + 0x264)
                else
                    zmm4_2 = *(rbx + 0x2bc)
                    zmm5_1 = *(rbx + 0x2c0)
                    zmm3_1 = *(rbx + 0x2b8) f- *(rbx + 0x2b0)
                    zmm4_2[0] = zmm4_2[0] f- *(rbx + 0x2b4)
                    zmm5_1[0] = zmm5_1[0] f- *(rbx + 0x2b8)
                
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm4_2[0] = zmm4_2[0] + zmm3_1 * zmm3_1
                zmm4_2[0] = zmm4_2[0] + zmm5_1[0]
                float temp0_1 = _mm_sqrt_ss(0, zmm4_2[0])
                zmm8_1[0] = zmm8_1[0] / temp0_1
                zmm3_1 = zmm3_1 * zmm8_1[0]
                zmm4_2[0] = zmm4_2[0] * zmm8_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm8_1[0]
                float var_80 = zmm3_1
                var_7c_1.d = zmm4_2[0]
                var_7c_1:4.d = zmm5_1[0]
                int32_t r9_6
                
                if (*(arg1 + 0x2b20) == 0)
                    r9_6 = 0
                else
                    r9_6 = *(rbx + 0x50)
                
                void* var_90_1 = arg1 + 0x6e0 + zx.q(*(rbx + 0x2af)) * 0x220
                int64_t var_98_1 = *(arg1 + 0x2b18)
                int32_t var_b0
                var_b0.q = *(rbx + 0x48)
                var_c0.b = r10_2
                sub_142634a80(rbx + 0x58, r12, rax_14, rbp_2, zmm6_1, var_c0.b, 
                    rbx + ((sx.q((r8_4.d - 1) * 3) + 0xac) << 2), var_b0, r9_6, &var_80)
            
            void* rsi_2 = rbx + 0x1f4
            int32_t var_a8 = (*(arg1 + 0x6c0)).d
            var_c8.q = rsi_2
            result = sub_14260f9d0(rbp_2, *(rbx + 0x284), *(rbx + 0x290), rbx, var_c8, 
                8.40779079e-45f, *(arg1 + 0x10), *(arg1 + 4))
            int32_t j = 0
            *(rbx + 0x224) = result.d
            
            if (result.d s> 0)
                do
                    int64_t rcx_21 = sx.q(*rsi_2)
                    rsi_2 += 8
                    j += 1
                    int64_t r8_9 = *(*(arg1 + 0x10) + (rcx_21 << 3)) - *(arg1 + 8)
                    int64_t rax_30
                    int64_t rdx_12
                    rdx_12:rax_30 = muls.dp.q(-0x5dc83cd4e930288d, r8_9)
                    result = (rdx_12 + r8_9) s>> 9 u>> 0x3f
                    *(rsi_2 - 8) = (r8_9 s/ 0x328).d
                while (j s< *(rbx + 0x224))
                
                r15_1 = var_88_1
        
        r15_1 = &r15_1[1]
        i_1 += 1
        var_88_1 = r15_1
    while (i_1 s< *(arg1 + 4))

__security_check_cookie(rax_1 ^ &var_e8)
return result
