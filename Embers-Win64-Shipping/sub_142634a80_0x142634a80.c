// 函数: sub_142634a80
// 地址: 0x142634a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_198
int64_t rax_2 = __security_cookie ^ &var_198
int64_t r10_1 = sx.q(arg3)

if (arg3 s>= 0 && r10_1.d s< arg2[1].d)
    void* rax_3 = arg2[4]
    void* r8 = &arg2[2]
    
    if (rax_3 != 0)
        r8 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1.d)
    
    if (test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r10_1.d & 0x1f))
        void* rsi_2 = *arg2
        int32_t rax_8 = 0x10
        int64_t rdi_1 = r10_1 * 0x88
        int32_t var_16c_1 = 1
        int32_t var_160_1 = 0xffffffff
        int32_t rcx_3 = *(rdi_1 + rsi_2 + 0x40) - *(rdi_1 + rsi_2 + 0x6c)
        
        if (rcx_3 s<= 0x10)
            rax_8 = rcx_3
        
        void* rbx_2 = rsi_2 + 0x38 + rdi_1
        *(arg1 + 0x190) = rax_8
        int32_t r10_2 = *(rbx_2 + 0x28)
        void* r9 = rbx_2 + 0x10
        void* var_168 = r9
        int32_t rcx_4 = 0
        int32_t var_170 = 0
        int32_t r14_1 = 0
        int64_t var_15c_1 = 0
        int32_t r8_1 = 0
        
        if (r10_2 != 0)
            void* rax_9 = *(r9 + 0x10)
            
            if (rax_9 != 0)
                r9 = rax_9
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_2 - 1)
            int32_t rdx_5 = *r9
            
            if (rdx_5 != 0)
            label_142634bcb:
                int32_t rax_16 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
                int32_t var_16c_2 = rax_16
                int32_t rax_17
                
                if (rax_16 == 0)
                    rax_17 = 0x20
                else
                    rax_17 = 0x1f - temp0_2
                
                var_15c_1.d = r8_1 - rax_17 + 0x1f
                
                if (r8_1 - rax_17 + 0x1f s> r10_2)
                    var_15c_1.d = r10_2
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_4)
                    r8_1 += 0x20
                    rcx_4 += 1
                    var_15c_1:4.d = r8_1
                    var_170 = rcx_4
                    
                    if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9 + (rdx_6 << 2) + 4)
                    var_160_1 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_142634bcb
                
                var_15c_1.d = r10_2
        
        double zmm2[0x2] = var_160_1.o
        void* var_138 = rbx_2
        double var_120_1[0x2] = zmm2
        double var_130[0x2] = var_170.o
        double zmm1[0x2] = var_130
        var_170.o = var_138.o
        uint32_t rax_20 = (zmm2[0] u>> 0x20).d
        int64_t var_150_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_160_1.o = zmm1
        
        if (rax_20 s< r10_2)
            int32_t i_3
            int32_t i = i_3
            void* rbx_3 = arg1 + 0x110
            
            do
                rbx_3 += 8
                r14_1 += 1
                *(rbx_3 - 8) = *(*var_170.q + sx.q(i) * 0x10)
                
                if (r14_1 s>= *(arg1 + 0x190))
                    break
                
                var_15c_1:4.d &= not.d(var_168:4.d)
                sub_14059bdd0(&var_168)
                i = i_3
            while (i s< *(var_160_1.q + 0x18))
        
        __builtin_memset(&var_138, 0, 0x2c)
        int32_t var_10c_1 = 0x80
        int32_t var_108_1 = 0xffffffff
        int32_t var_104_1 = 0
        void* var_f8_1 = nullptr
        int32_t var_f0_1 = 0
        float var_148
        
        if (arg9 s> 0)
            int64_t* rbx_4 = arg8
            uint64_t i_4 = zx.q(arg9)
            uint64_t i_1
            
            do
                sub_1407d1070(&var_138, &var_148, rbx_4, nullptr)
                rbx_4 = &rbx_4[1]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        *(arg1 + 0x10c) = 0
        int32_t i_2 = 0
        
        if (*(rdi_1 + rsi_2 + 0x30) s> 0)
            double (* rbx_5)[0x2] = nullptr
            uint128_t zmm8 = arg5
            int128_t zmm9
            int128_t var_88_1 = zmm9
            uint128_t zmm7
            uint128_t var_68_1 = zmm7
            zmm8.d = zmm8.d f* zmm8.d
            
            do
                float var_178 = 0f
                int64_t r15_1 = sx.q(i_2) * 5
                float* rdx_10 = *(rdi_1 + rsi_2 + 0x28) + (r15_1 << 3)
                zmm9 = sub_1426090a0(arg4, rdx_10, &rdx_10[3], &var_178)
                
                if (not(zmm9.d f> zmm8.d))
                    int64_t r8_5 = *(rdi_1 + rsi_2 + 0x28)
                    float zmm3_1 = var_178
                    zmm2 = *(r8_5 + rbx_5 + 0x10)
                    zmm2[0].d = zmm2[0].d f- *(r8_5 + rbx_5 + 4)
                    zmm2[0].d = zmm2[0].d f* zmm3_1
                    zmm2[0].d = zmm2[0].d f+ *(r8_5 + rbx_5 + 4)
                    zmm2[0].d = zmm2[0].d f- arg4[1]
                    
                    if (not(_mm_and_ps(zmm2, 0x7fffffff)[0].d f> 50f))
                        int32_t r15_2
                        int128_t zmm0_1
                        uint128_t zmm1_1
                        
                        if (arg6 == 0)
                            r15_2 = 0
                        else
                            float* rdx_11 = r8_5 + (r15_1 << 3)
                            var_148 = 0f
                            zmm0_1 = sub_1426090a0(arg7, rdx_11, &rdx_11[3], &var_148)
                            r8_5 = *(rdi_1 + rsi_2 + 0x28)
                            zmm3_1 = var_178
                            zmm1_1.d = zmm8.d f* 0.0625f
                            r15_2.b = zmm1_1.d f> zmm0_1.d
                        
                        if (var_130[0].d == var_104_1)
                        label_142634f21:
                            int64_t rax_47 = *(rdi_1 + rsi_2 + 0x28)
                            zmm7.d = (*(rbx_5 + rax_47 + 0xc)).d f- *(rbx_5 + rax_47)
                            double zmm6_1[0x2] = *(rbx_5 + rax_47 + 0x14)
                            zmm6_1[0].d = zmm6_1[0].d f- *(rbx_5 + rax_47 + 8)
                            zmm0_1.d = (*(rbx_5 + rax_47 + 0x10)).d f- *(rbx_5 + rax_47 + 4)
                            zmm7.d = zmm7.d f* zmm3_1
                            zmm6_1[0].d = zmm6_1[0].d f* zmm3_1
                            zmm7.d = zmm7.d f+ *(rbx_5 + rax_47)
                            zmm0_1.d = zmm0_1.d f* zmm3_1
                            zmm6_1[0].d = zmm6_1[0].d f+ *(rbx_5 + rax_47 + 8)
                            zmm0_1.d = zmm0_1.d f+ *(rbx_5 + rax_47 + 4)
                            zmm7.d = zmm7.d f- *arg4
                            zmm6_1[0].d = zmm6_1[0].d f- arg4[2]
                            zmm0_1.d = zmm0_1.d f- arg4[1]
                            zmm1_1.d = zmm7.d f* zmm7.d
                            zmm0_1.d = zmm0_1.d f* zmm0_1.d
                            zmm6_1[0].d = zmm6_1[0].d f* zmm6_1[0].d
                            zmm0_1.d = zmm0_1.d f+ zmm1_1.d
                            zmm0_1.d = zmm0_1.d f+ zmm6_1[0].d
                            double zmm0_2[0x2] = sub_142609970(zmm0_1.d)
                            int64_t rax_48 = *(rdi_1 + rsi_2 + 0x28)
                            zmm2 = 0x3f800000
                            zmm2[0].d = 1f f/ zmm0_2[0].d
                            var_170.o = *(rbx_5 + rax_48)
                            int32_t var_160_2 = (*(rbx_5 + rax_48 + 0x10))[0].d
                            var_15c_1.d = (*(rbx_5 + rax_48 + 0x14)).d
                            zmm2[0].d = zmm2[0].d f* zmm6_1[0].d
                            zmm2[0].d = zmm2[0].d f* zmm7.d
                            zmm2[0].d = zmm2[0].d f* arg10[2]
                            zmm2[0].d = zmm2[0].d f* *arg10
                            zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                            zmm1_1.d = 1f f- zmm2[0].d
                            zmm1_1.d = zmm1_1.d f* 0.5f
                            zmm1_1.d = zmm1_1.d f* zmm9.d
                            sub_142620930(arg1, zmm1_1, &var_170, r15_2)
                        else
                            void var_100
                            void* r9_3 = &var_100
                            int64_t r8_7 = *(r8_5 + rbx_5 + 0x18)
                            int64_t r10_3 = sx.q(var_f0_1 - 1)
                            
                            if (var_f8_1 != 0)
                                r9_3 = var_f8_1
                            
                            int32_t rax_38 =
                                *(r9_3 + ((sx.q((r8_7 u>> 0x20).d * 0x17 + r8_7.d) & r10_3) << 2))
                            
                            if (rax_38 == 0xffffffff)
                                goto label_142634f21
                            
                            void* rdx_12 = var_138
                            
                            while (true)
                                int64_t rcx_13 = sx.q(rax_38) * 2
                                
                                if (*(rdx_12 + (rcx_13 << 3)) == r8_7)
                                    break
                                
                                rax_38 = *(rdx_12 + (rcx_13 << 3) + 8)
                                
                                if (rax_38 == 0xffffffff)
                                    goto label_142634f21
                            
                            if (rax_38 == 0xffffffff)
                                goto label_142634f21
                            
                            int64_t r8_8 = *(rbx_5 + *(rdi_1 + rsi_2 + 0x28) + 0x20)
                            int32_t rax_46 =
                                *(r9_3 + ((sx.q((r8_8 u>> 0x20).d * 0x17 + r8_8.d) & r10_3) << 2))
                            
                            if (rax_46 == 0xffffffff)
                                goto label_142634f21
                            
                            while (true)
                                int64_t rcx_15 = sx.q(rax_46) * 2
                                
                                if (*(rdx_12 + (rcx_15 << 3)) == r8_8)
                                    break
                                
                                rax_46 = *(rdx_12 + (rcx_15 << 3) + 8)
                                
                                if (rax_46 == 0xffffffff)
                                    goto label_142634f21
                            
                            if (rax_46 == 0xffffffff)
                                goto label_142634f21
                
                i_2 += 1
                rbx_5 = &(*rbx_5)[5]
            while (i_2 s< *(rdi_1 + rsi_2 + 0x30))
        
        int32_t var_f0_2 = 0
        
        if (var_f8_1 != 0)
            sub_140a74f90(var_f8_1)
        
        var_130[0].d = 0
        
        if (var_130[0]:4.d != 0)
            sub_1405a5410(&var_138, 0)
        
        int32_t var_108_2 = 0xffffffff
        int32_t var_104_2 = 0
        sub_14059a8e0(&var_130[1], 0)
        double rcx_20 = var_120_1[1]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        void* rcx_21 = var_138
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)

__security_check_cookie(rax_2 ^ &var_198)
