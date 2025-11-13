// 函数: sub_1422136d0
// 地址: 0x1422136d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_38[0x4] = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rcx = arg1[2]
int32_t r14 = *(*arg1 + 8)
(*(*rcx + 0x260))(rcx)
int32_t r14_1 = r14 - 1
int64_t result

if (r14 - 1 s< 0)
label_142213b76:
    result.b = 1
else
    zmm6 = 0x7fffffff
    zmm7 = 0x38d1b717
    zmm8 = 0xbf800000
    int64_t rax_4 = sx.q(r14_1)
    int32_t var_124_1 = r14_1 + 1
    int64_t rdx_1 = rax_4 << 3
    int64_t r12_2 = rax_4 * 0x30
    int64_t var_120_1 = rdx_1
    
    while (true)
        int16_t* rbx_1 = *(rdx_1 + **arg1)
        int64_t r13_1 = *arg1[1]
        uint32_t zmm1[0x4] = *(r12_2 + r13_1 + 0x20)
        int96_t var_118_1 = zmm1[0].12
        int64_t* rax_6
        
        if (_mm_and_ps(zmm1, zmm6)[0] f> zmm7.d)
            rax_6.b = 0
        else if (_mm_and_ps(var_118_1:4.d, zmm6)[0] f> zmm7.d)
            rax_6.b = 0
        else if (_mm_and_ps(var_118_1:8.d, zmm6)[0] f> zmm7.d)
            rax_6.b = 0
        else
            rax_6.b = 1
        
        if (rax_6.b == 0)
            var_118_1 = zmm1[0].12
        
        var_118_1.q = &rbx_1[0x7c]
        sub_140d3a3a0(&rbx_1[0x7c], arg1[3])
        sub_140d3a3a0(&rbx_1[0x80], arg1[2])
        float zmm2[0x4] = *(r12_2 + r13_1 + 0x20)
        float var_c8_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        *(rbx_1 + 0x10) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        *(rbx_1 + 0x18) = var_c8_1
        char rax_9 = rbx_1[6].b
        void* rcx_5
        
        if ((rax_9 & 0x40) != 0)
            rcx_5 = arg1[7]
        
        if ((rax_9 & 0x40) != 0 && (rcx_5 == 0 || (*(rcx_5 + 0x2b4) & 0x40) != 0))
            rcx_5.b = 0x40
        else
            rcx_5.b = 0
        
        rax_9 = (rax_9 & 0xbf) | rcx_5.b
        rbx_1[6].b = rax_9
        
        if (arg1[6].b == 0 && rax_9 s< 0 && sub_142216be0(rbx_1) != 1)
            void* rax_11 = arg1[3]
            
            if (rax_11 != 0)
                void* rsi_1 = *(rax_11 + 0xc0)
                
                if (rsi_1 != 0)
                    void* rax_12 = sub_142577430()
                    void* rdx_4 = *(rsi_1 + 0x10)
                    int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                    
                    if (rax_13.d s<= *(rdx_4 + 0x38)
                            && *(*(rdx_4 + 0x30) + (rax_13 << 3)) == rax_12 + 0x30)
                        void* rcx_8 = arg1[3]
                        void* rax_15 = *(rcx_8 + 0xa8)
                        
                        if (rax_15 != 0)
                        label_1422138b3:
                            
                            if (sub_14243ade0(rax_15) != 0)
                                int64_t* rcx_10 = arg1[3]
                                
                                if ((*(*rcx_10 + 0x6e0))(rcx_10, rsi_1, rcx_10[0x19], 0).b != 0)
                                    result.b = 0
                                    break
                        else
                            rax_15 = sub_141ee69e0(rcx_8)
                            
                            if (rax_15 != 0)
                                goto label_1422138b3
        
        if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(&rbx_1[0x78]) == 0)
            if (arg1[6].b == 0 && *(arg1[8] + 1) != 0)
                rbx_1[6].b ^= (*(arg1 + 0x31) << 4 ^ rbx_1[6].b) & 0x10
                float zmm0_1[0x4] = *(arg1 + 0x34)
                
                if (not(zmm0_1[0] f== zmm8.d))
                    *(rbx_1 + 0xcc) = zmm0_1[0]
            
            int16_t* var_d8_1 = rbx_1
            *(rbx_1 + 0x110) = 1.o
            int32_t rax_32
            rax_32.b = sub_142216be0(rbx_1) - 2 u<= 1
            char rcx_24
            
            if (rax_32.b != 0 || arg1[9].b == rax_32.b)
                rcx_24 = 0
            else
                rcx_24 = 1
            
            float zmm1_1[0x4] = *(r12_2 + r13_1 + 0x10)
            int128_t var_a8_1 = *(r12_2 + r13_1)
            bool cond:2_1 = arg1[6].b == 0
            int128_t zmm0_2 = *(r12_2 + r13_1 + 0x20)
            uint8_t var_76_1 = rbx_1[6].b u>> 6 & 1
            char var_77_1 = rcx_24
            int64_t var_b8
            int64_t* rcx_25 = &var_b8
            var_b8 = arg1[4]
            char var_78_1 = 0
            int64_t var_70_1 = 0
            float var_98_1[0x4] = zmm1_1
            int128_t var_88_1 = zmm0_2
            int16_t* var_b0_1 = rbx_1
            void* r13_2
            
            if (cond:2_1)
                int512_t zmm1_2 = sub_142264ca0(rcx_25, &rbx_1[0x78])
                sub_142278220(&rbx_1[0x78], rbx_1[6].b & 1)
                r13_2 = &rbx_1[0x80]
                char rdx_15
                
                if ((rbx_1[6].b & 0x10) == 0)
                    rdx_15 = 1
                else
                    void var_128
                    
                    if (sub_140d3e110(r13_2) == 0)
                        rdx_15 = 1
                    else if (*sub_142230430(sub_140d3c6e0(r13_2), &var_128, zmm1_2) == 3)
                        rdx_15 = 1
                    else
                        rdx_15 = 0
                
                sub_142278f30(&rbx_1[0x78], rdx_15)
                sub_14227a2a0(&rbx_1[0x78], *(rbx_1 + 0xd) u>> 1 & 1)
            else
                char var_78_2 = 1
                sub_142264ca0(rcx_25, &rbx_1[0x78])
                r13_2 = &rbx_1[0x80]
            
            char rax_38
            rax_38, zmm6, zmm7, zmm8 = sub_142213bc0(arg1, rbx_1)
            
            if (rax_38 == 0)
                sub_142277d00(&rbx_1[0x78], &rbx_1[0x88])
            else
                sub_142275cd0(&rbx_1[0x78], arg1[4], 0)
                int64_t var_f8
                sub_140d3a3a0(&var_f8, nullptr)
                *(rbx_1 + 0xf8) = var_f8
                int64_t var_f0
                sub_140d3a3a0(&var_f0, nullptr)
                *r13_2 = var_f0
                int64_t var_e8
                sub_140d3a3a0(&var_e8, nullptr)
                *(rbx_1 + 0x60) = var_e8
        else
            int64_t var_108
            sub_140d3a3a0(&var_108, nullptr)
            *var_118_1.q = var_108
            int64_t var_100
            sub_140d3a3a0(&var_100, nullptr)
            int64_t rsi_3 = sx.q(var_124_1)
            *(rbx_1 + 0x100) = var_100
            int64_t* rbx_2 = *arg1
            int32_t rax_21 = rbx_2[1].d
            int32_t rdx_7 = rax_21 - r14_1
            
            if (rdx_7 != 1)
                int64_t rcx_15 = *rbx_2
                memmove(rcx_15 + (sx.q(r14_1) << 3), rcx_15 + (rsi_3 << 3), (rdx_7 - 1) << 3)
                rax_21 = rbx_2[1].d
            
            rbx_2[1].d = rax_21 - 1
            sub_1405c53d0(rbx_2)
            int64_t* rbx_3 = arg1[1]
            int32_t rcx_18 = rbx_3[1].d
            int32_t rax_25 = rcx_18 - r14_1
            
            if (rax_25 != 1)
                memmove(sx.q(r14_1) * 0x30 + *rbx_3, rsi_3 * 0x30 + *rbx_3, (rax_25 - 1) * 0x30)
                rcx_18 = rbx_3[1].d
            
            rbx_3[1].d = rcx_18 - 1
            sub_1407c4120(rbx_3)
        
        r12_2 -= 0x30
        var_124_1 -= 1
        rdx_1 = var_120_1 - 8
        int32_t temp3_1 = r14_1
        r14_1 -= 1
        var_120_1 = rdx_1
        
        if (temp3_1 - 1 s< 0)
            goto label_142213b76

__security_check_cookie(rax_1 ^ &var_148)
return result
