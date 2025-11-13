// 函数: sub_1421ce4a0
// 地址: 0x1421ce4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_168
void* var_68_1 = __security_cookie ^ &var_168
uint64_t r15_1 = zx.q(arg3)
int32_t rdx = *(arg2 + 0x118)
void* rdi_1 = arg1
int32_t var_110_1 = r15_1.d

if (rdx s> 0)
    int64_t r12_1 = *(arg2 + 0xf0)
    
    if (r12_1 != 0)
        int64_t r13_1 = *(arg2 + 0xf8)
        
        if (r13_1 != 0)
            void* r9_1 = *(arg2 + 0x18)
            void* rax_2 = *(r9_1 + 0xa8)
            
            if (rax_2 == 0)
                rax_2 = sub_141ee69e0(r9_1)
                r9_1 = *(arg2 + 0x18)
                rdx = *(arg2 + 0x118)
                r13_1 = *(arg2 + 0xf8)
                r12_1 = *(arg2 + 0xf0)
            
            int32_t i = 0
            int64_t var_f0_1 = 0
            
            if (rax_2 != 0)
                var_f0_1 = *(rax_2 + 0x1b0)
            
            int32_t r11_1 = *(arg2 + 0x114)
            int64_t r8 = 0
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x2c)
            void* r10_1 = nullptr
            int32_t var_8c_1 = 0x80
            int32_t var_88_1 = 0xffffffff
            int32_t var_84_1 = 0
            void* var_78_1 = nullptr
            int32_t var_70_1 = 0
            int32_t var_114_1 = r11_1
            void* rax_4 = *(arg2 + 0x28)
            int32_t var_100_1 = 0x3f800000
            _mm_unpacklo_ps(0x3f800000, 0x3f800000)
            void* rcx_1 = *(rax_4 + 0x30)
            char rax_5 = *(rcx_1 + 0x59) & 1
            uint32_t rax_6 = zx.d(*(rcx_1 + 0x58))
            float var_10c_1 = 1f
            
            if (r9_1 != 0)
                float zmm2[0x4] = *(r9_1 + 0x1e0)
                var_10c_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
            
            int64_t rsi_1 = sx.q(rdx - 1)
            
            if (rdx - 1 s>= 0)
                uint128_t zmm6
                uint128_t var_48_1 = zmm6
                int64_t temp0_6
                
                do
                    void* rbx_3 = zx.q(zx.d(*(r13_1 + (rsi_1 << 1))) * r11_1) + r12_1
                    
                    if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                        int64_t* r15_2 = r15_1 + rbx_3
                        uint32_t var_148
                        int64_t* var_140
                        char var_138
                        int64_t var_130
                        char var_128
                        int128_t zmm0_1
                        int128_t zmm1_1
                        int512_t zmm6_1
                        zmm0_1, zmm1_1, zmm6_1 = sub_141fe5610(rdi_1 + 0x80, *(rbx_3 + 0xc), 
                            *(arg2 + 0x18), nullptr, var_148, var_140, var_138, var_130, var_128)
                        zmm6_1.o = zmm0_1
                        var_140 = nullptr
                        var_148 = 0
                        void var_d0
                        int64_t* rax_9
                        float zmm7_1[0x4]
                        float zmm8_1[0x4]
                        float zmm9_1[0x4]
                        rax_9, zmm6, zmm7_1, zmm8_1, zmm9_1 = sub_141fe56b0(rdi_1 + 0x38, &var_d0, 
                            *(rbx_3 + 0xc), zmm1_1, (*(arg2 + 0x18)).d, var_148)
                        float zmm0_2[0x4] = zmm6
                        float zmm1[0x4] = zmm6
                        zmm0_2[0] = zmm0_2[0] f* *rax_9
                        zmm1[0] = zmm1[0] f* *(rax_9 + 4)
                        zmm6.d = zmm6.d f* rax_9[1].d
                        *r15_2 = (_mm_unpacklo_ps(zmm0_2, zmm1[0].q)).q
                        r15_2[1].d = zmm6.d
                        
                        if (*(rdi_1 + 0x118) != 0)
                            if (r15_2[2] == 0)
                                rdi_1 = arg1
                            else
                                void var_e0
                                sub_1407d1070(&var_b8, &var_e0, &r15_2[2], nullptr)
                                rdi_1 = arg1
                                int64_t* rdx_3 = r15_2[2]
                                float var_100_3 = var_10c_1
                                var_128 = 1
                                var_130 = var_f0_1
                                var_138 = rax_5
                                int64_t var_108
                                var_140 = &var_108
                                var_148 = rax_6
                                var_108 = zmm7_1.q
                                sub_1421cffe0(rdi_1, rdx_3, r15_2, rbx_3, zmm6, zmm7_1, zmm8_1, 
                                    zmm9_1, var_148, var_140.b, var_138, var_130.b)
                        
                        r11_1 = var_114_1
                        r15_1 = zx.q(var_110_1)
                    
                    temp0_6 = rsi_1
                    rsi_1 -= 1
                while (temp0_6 - 1 s>= 0)
                r10_1 = var_78_1
                i = 0
                r8 = var_b8
            
            int64_t var_b0
            
            if (*(rdi_1 + 0x118) != 0 && *(arg2 + 0x1c8) s> 0)
                int64_t* rsi_2 = nullptr
                
                do
                    int64_t* r9_4 = *(rsi_2 + *(arg2 + 0x1c0))
                    
                    if (r9_4 != 0)
                        if (var_b0.d == var_84_1)
                        label_1421ce815:
                            (*(*r9_4 + 0x3a0))(r9_4, 0)
                            int32_t rdx_6 = *(arg2 + 0x1c8)
                            int32_t rax_26 = rdx_6 - i - 1
                            
                            if (rax_26 s>= 1)
                                rax_26 = 1
                            
                            if (rax_26 != 0)
                                int64_t rcx_12 = *(arg2 + 0x1c0)
                                memcpy(rcx_12 + (sx.q(i) << 3), 
                                    rcx_12 + (sx.q(rdx_6 - rax_26) << 3), rax_26 << 3)
                                rdx_6 = *(arg2 + 0x1c8)
                            
                            *(arg2 + 0x1c8) = rdx_6 - 1
                            sub_1405c53d0(arg2 + 0x1c0)
                            r10_1 = var_78_1
                            i -= 1
                            r8 = var_b8
                            rsi_2 -= 8
                        else
                            void var_80
                            void* rax_21 = &var_80
                            
                            if (r10_1 != 0)
                                rax_21 = r10_1
                            
                            int32_t rax_22 = *(rax_21 + ((sx.q((r9_4 u>> 0x20).d * 0x17 + r9_4.d)
                                & sx.q(var_70_1 - 1)) << 2))
                            
                            if (rax_22 == 0xffffffff)
                                goto label_1421ce815
                            
                            while (true)
                                int64_t rcx_10 = sx.q(rax_22) * 2
                                
                                if (*(r8 + (rcx_10 << 3)) == r9_4)
                                    break
                                
                                rax_22 = *(r8 + (rcx_10 << 3) + 8)
                                
                                if (rax_22 == 0xffffffff)
                                    goto label_1421ce815
                            
                            if (rax_22 == 0xffffffff)
                                goto label_1421ce815
                    
                    i += 1
                    rsi_2 = &rsi_2[1]
                while (i s< *(arg2 + 0x1c8))
            
            int32_t var_70_2 = 0
            
            if (r10_1 != 0)
                sub_140a74f90(r10_1)
            
            bool cond:1_1 = var_b0:4.d == 0
            var_b0.d = 0
            
            if (not(cond:1_1))
                sub_1405a5410(&var_b8, 0)
            
            int32_t var_88_2 = 0xffffffff
            int32_t var_84_2 = 0
            int64_t var_a8
            sub_14059a8e0(&var_a8, 0)
            int64_t var_98
            
            if (var_98 != 0)
                sub_140a74f90(var_98)
            
            int64_t rcx_19 = var_b8
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)

__security_check_cookie(var_68_1 ^ &var_168)
