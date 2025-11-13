// 函数: sub_14260cc60
// 地址: 0x14260cc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm14
int128_t var_c8 = zmm14
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
float zmm15[0x4] = arg4
int64_t r14 = arg6
int32_t* r13 = arg3
int64_t var_1b0 = r14
int64_t result

if (arg2 == 0)
    result = 0x80000008
else
    void* rbx_1 = *arg1
    
    if (sub_1426126b0(rbx_1, arg2) == 0)
        result = 0x80000008
    else
        char r8 = (*(rbx_1 + 0xa0)).b
        void* rbx_3 =
            *(rbx_1 + 0x90) + (((1 << (*(rbx_1 + 0x9c)).b) - 1) & zx.q((arg2 u>> r8).d)) * 0xb0
        void* r9_5 = ((zx.q((1 << r8).d - 1) & zx.q(arg2.d)) << 5) + *(rbx_3 + 0x10)
        
        if (arg5[0x43].b != 0)
            if ((*(*arg5 + 8))(arg5, arg2, rbx_3, r9_5) == 0)
                result = 0x80000008
            else
            label_14260cdd8:
                
                if (sub_142613610(arg1, rbx_3, arg2.d) == 0)
                    result = 0x80000008
                else
                    void* rbx_4 = arg1[0xd]
                    float zmm7[0x4]
                    float var_58_1[0x4] = zmm7
                    memset(*(rbx_4 + 8), 0xff, sx.q(*(rbx_4 + 0x1c)) * 2)
                    *(rbx_4 + 0x24) = 0
                    *(arg1[0xe] + 0xc) = 0
                    int32_t* rax_16 = sub_14260fcd0(arg1[0xd], arg2)
                    *rax_16 = *r13
                    rax_16[1] = r13[1]
                    rax_16[2] = r13[2]
                    rax_16[5] = 0x40000000
                    *(rax_16 + 0xc) = 0
                    *(rax_16 + 0x18) = arg2
                    sub_142613e10(arg1[0xe], rax_16)
                    zmm15[0] = zmm15[0] * zmm15[0]
                    int64_t var_108
                    __builtin_memset(&var_108, 0, 0x20)
                    float rcx_13 = 0f
                    float zmm6[0x4] = zx.o(0)
                    int32_t rdi_1 = 0
                    int64_t* rax_17 = arg1[0xe]
                    float var_1cc_1 = 0f
                    float var_1d0 = 0f
                    int32_t var_1c8_1 = 0
                    int64_t var_1c0
                    int64_t var_170
                    float zmm0_1[0x4]
                    float zmm1
                    
                    if (*(rax_17 + 0xc) != 0)
                        float zmm8[0x4]
                        float var_68_1[0x4] = zmm8
                        float zmm9[0x4]
                        float var_78_1[0x4] = zmm9
                        int128_t zmm10 = 0x3f800000
                        int128_t zmm11
                        int128_t var_98_1 = zmm11
                        
                        do
                            int32_t* rax_18
                            rax_18, zmm0_1 = sub_1426136c0(rax_17)
                            rax_18[5] &= 0x3fffffff
                            rax_18[5] |= 0x80000000
                            int64_t r12_2 = *(rax_18 + 0x18)
                            void* r9_6 = *arg1
                            var_1c0 = r12_2
                            uint64_t rcx_16 = zx.q(*(r9_6 + 0xa0))
                            int64_t i_6 =
                                ((1 << (*(r9_6 + 0x9c)).b) - 1) & zx.q((r12_2 u>> rcx_16.b).d)
                            uint64_t rdx_9 = i_6 * 0xb0 + *(r9_6 + 0x90)
                            uint64_t var_1d8_1 = rdx_9
                            int32_t* rbx_10 = ((zx.q((1 << rcx_16.b).d - 1) & zx.q(r12_2.d)) << 5)
                                + *(rdx_9 + 0x10)
                            int32_t* var_1a8_1 = rbx_10
                            int32_t var_208
                            int32_t* var_200
                            void* var_1f8
                            int32_t* var_1f0
                            int32_t* var_1e8
                            float zmm2[0x4]
                            float zmm4_1[0x4]
                            
                            if (*(rbx_10 + 0x1f) u< 0x40)
                                uint64_t r10_2 = zx.q(*(rbx_10 + 0x1e))
                                void* r11_1 = 2
                                zmm9 = zx.o(0)
                                
                                if (r10_2 u> 2)
                                    if (r10_2 u>= 6)
                                        r9_6 = *(rdx_9 + 0x18)
                                        void* rbx_11 = &rbx_10[2]
                                        i_6 = ((r10_2 - 6) u>> 2) + 1
                                        uint64_t rcx_17 = zx.q(rbx_10[1].w) * 3
                                        zmm10 = *(r9_6 + (rcx_17 << 2) + 8)
                                        zmm11 = *(r9_6 + (rcx_17 << 2))
                                        r11_1 = (i_6 << 2) + 2
                                        int64_t i
                                        
                                        do
                                            uint64_t rdx_10 = zx.q(*(rbx_11 - 2)) * 3
                                            uint64_t rax_24 = zx.q(*rbx_11)
                                            zmm2 = *(r9_6 + (rdx_10 << 2) + 8)
                                            zmm0_1 = *(r9_6 + (rdx_10 << 2))
                                            zmm2[0] = zmm2[0] f- zmm10.d
                                            zmm0_1[0] = zmm0_1[0] f- zmm11.d
                                            uint64_t rcx_18 = rax_24 * 3
                                            uint64_t rax_25 = zx.q(*(rbx_11 + 2))
                                            zmm7 = *(r9_6 + (rcx_18 << 2))
                                            zmm4_1 = *(r9_6 + (rcx_18 << 2) + 8)
                                            zmm7[0] = zmm7[0] f- zmm11.d
                                            zmm4_1[0] = zmm4_1[0] f- zmm10.d
                                            uint64_t rcx_19 = rax_25 * 3
                                            uint64_t rax_26 = zx.q(*(rbx_11 + 4))
                                            zmm6 = *(r9_6 + (rcx_19 << 2))
                                            arg4 = *(r9_6 + (rcx_19 << 2) + 8)
                                            zmm6[0] = zmm6[0] f- zmm11.d
                                            zmm2[0] = zmm2[0] * zmm7[0]
                                            arg4[0] = arg4[0] f- zmm10.d
                                            uint64_t rcx_20 = rax_26 * 3
                                            uint64_t rax_27 = zx.q(*(rbx_11 + 6))
                                            zmm0_1[0] = zmm0_1[0] * zmm4_1[0]
                                            rbx_11 += 8
                                            zmm8 = *(r9_6 + (rcx_20 << 2))
                                            zmm1 = zmm6[0]
                                            float zmm5_1[0x4] = *(r9_6 + (rcx_20 << 2) + 8)
                                            zmm8[0] = zmm8[0] f- zmm11.d
                                            zmm1 = zmm1 * zmm4_1[0]
                                            zmm2[0] = zmm2[0] - zmm0_1[0]
                                            rcx_16 = rax_27 * 3
                                            zmm5_1[0] = zmm5_1[0] f- zmm10.d
                                            arg4[0] = arg4[0] * zmm7[0]
                                            zmm2[0] = zmm2[0] + zmm9[0]
                                            zmm1 = zmm1 - arg4[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm6[0]
                                            zmm9 = zmm2
                                            zmm8[0] = zmm8[0] * arg4[0]
                                            zmm9[0] = zmm9[0] + zmm1
                                            zmm1 = *(r9_6 + (rcx_16 << 2)) f- zmm11.d
                                            zmm8[0] = zmm8[0] - zmm5_1[0]
                                            zmm0_1 = *(r9_6 + (rcx_16 << 2) + 8)
                                            zmm0_1[0] = zmm0_1[0] f- zmm10.d
                                            zmm1 = zmm1 * zmm5_1[0]
                                            zmm0_1[0] = zmm0_1[0] * zmm8[0]
                                            zmm9[0] = zmm9[0] + zmm8[0]
                                            zmm9[0] = zmm9[0] + zmm1 - zmm0_1[0]
                                            i = i_6
                                            i_6 -= 1
                                        while (i != 1)
                                        zmm10 = 0x3f800000
                                        zmm6 = var_1cc_1
                                        rdx_9 = var_1d8_1
                                        rbx_10 = var_1a8_1
                                    
                                    if (r11_1 s< r10_2)
                                        i_6 = *(rdx_9 + 0x18)
                                        r9_6 = rbx_10 + ((r11_1 + 2) << 1)
                                        void* i_7 = r10_2 - r11_1
                                        uint64_t rcx_21 = zx.q(rbx_10[1].w) * 3
                                        arg4 = *(i_6 + (rcx_21 << 2) + 8)
                                        zmm4_1 = *(i_6 + (rcx_21 << 2))
                                        void* i_1
                                        
                                        do
                                            rdx_9 = zx.q(*(r9_6 - 2)) * 3
                                            uint64_t rax_30 = zx.q(*r9_6)
                                            zmm2 = *(i_6 + (rdx_9 << 2) + 8)
                                            r9_6 += 2
                                            zmm2[0] = zmm2[0] - arg4[0]
                                            rcx_16 = rax_30 * 3
                                            zmm0_1 = *(i_6 + (rcx_16 << 2))
                                            zmm1 = *(i_6 + (rcx_16 << 2) + 8)
                                            zmm0_1[0] = zmm0_1[0] - zmm4_1[0]
                                            zmm1 = zmm1 - arg4[0]
                                            zmm2[0] = zmm2[0] * zmm0_1[0]
                                            zmm0_1 = *(i_6 + (rdx_9 << 2))
                                            zmm0_1[0] = zmm0_1[0] - zmm4_1[0]
                                            zmm2[0] = zmm2[0] - zmm1 * zmm0_1[0]
                                            zmm9[0] = zmm9[0] + zmm2[0]
                                            i_1 = i_7
                                            i_7 -= 1
                                        while (i_1 != 1)
                                
                                zmm6[0] = zmm6[0] + zmm9[0]
                                var_1cc_1 = zmm6[0]
                                r14(rcx_16, rdx_9, i_6, r9_6, var_208, var_200, var_1f8, var_1f0, 
                                    var_1e8)
                                zmm0_1[0] = zmm0_1[0] * zmm6[0]
                                
                                if (not(zmm0_1[0] > zmm9[0]))
                                    var_1d0 += 1
                                    int64_t rax_31 = sx.q(rdi_1)
                                    rdi_1 = (rdi_1 + 1) & 0x80000003
                                    var_1c8_1 = rdi_1
                                    (&var_108)[rax_31] = r12_2
                                    
                                    if (rdi_1 s< 0)
                                        rdi_1 = ((rdi_1 - 1) | 0xfffffffc) + 1
                                        var_1c8_1 = rdi_1
                                
                                rdx_9 = var_1d8_1
                            
                            int64_t var_1a0_1 = 0
                            int64_t r8_9 = 0
                            int32_t rax_33 = rax_18[5] & 0x3fffffff
                            
                            if (rax_33 != 0)
                                r8_9 = *((zx.q(rax_33 - 1) << 5) + *arg1[0xd] + 0x18)
                                var_1a0_1 = r8_9
                            
                            int32_t i_2 = *rbx_10
                            
                            if (i_2 != 0xffffffff)
                                do
                                    int32_t rcx_25 = *(*(rdx_9 + 8) + 0x20)
                                    int64_t* rax_38
                                    
                                    if (i_2 u>= rcx_25)
                                        rax_38 = (sx.q(i_2 - rcx_25) << 4) + *(rdx_9 + 0x80)
                                    else
                                        rax_38 = (zx.q(i_2) << 4) + *(rdx_9 + 0x20)
                                    
                                    int64_t rdi_5 = *rax_38
                                    i_2 = rax_38[1].d
                                    
                                    if (rdi_5 != 0 && rdi_5 != r8_9)
                                        char rcx_26 = *(rax_38 + 0xd)
                                        uint32_t rax_43
                                        
                                        if ((rcx_26 & 0x60) == 0x40)
                                            rax_43 = zx.d(rcx_26) u>> 4
                                            
                                            if (*(arg5 + 0x214) == 0)
                                                rax_43 = not.d(rax_43)
                                        
                                        if ((rcx_26 & 0x60) != 0x40 || (rax_43 & 1) != 0)
                                            void* r8_10 = *arg1
                                            char r9_8 = (*(r8_10 + 0xa0)).b
                                            void* r12_4 = (((1 << (*(r8_10 + 0x9c)).b) - 1)
                                                & zx.q((rdi_5 u>> r9_8).d)) * 0xb0 + *(r8_10 + 0x90)
                                            int32_t* rbx_14 = ((zx.q((1 << r9_8).d - 1)
                                                & zx.q(rdi_5.d)) << 5) + *(r12_4 + 0x10)
                                            
                                            if (arg5[0x43].b != 0)
                                                if ((*(*arg5 + 8))(arg5, rdi_5, r12_4, rbx_14, 
                                                    var_208, var_200, var_1f8, var_1f0, var_1e8) != 0)
                                                label_14260d302:
                                                    
                                                    if (sub_142613610(arg1, r12_4, rdi_5.d) != 0)
                                                        int32_t var_190
                                                        var_1e8 = &var_190
                                                        var_1f0 = &var_170
                                                        var_1f8 = r12_4
                                                        var_200 = rbx_14
                                                        var_208.q = rdi_5
                                                        
                                                        if (sub_1426108d0(arg1, var_1c0, var_1a8_1, 
                                                                var_1d8_1, var_208, var_200, var_1f8, 
                                                                var_1f0, var_1e8) != 0)
                                                            zmm6 = var_190
                                                            zmm8 = var_170.d
                                                            int32_t var_188
                                                            zmm7 = var_188
                                                            zmm6[0] = zmm6[0] - zmm8[0]
                                                            int32_t var_168
                                                            zmm9 = var_168
                                                            zmm7[0] = zmm7[0] - zmm9[0]
                                                            arg4 = *(arg3 + 8)
                                                            zmm4_1 = *arg3
                                                            zmm1 = zmm7[0]
                                                            zmm6[0] = zmm6[0] * zmm6[0]
                                                            arg4[0] = arg4[0] - zmm9[0]
                                                            zmm1 = zmm1 * zmm7[0] + zmm6[0]
                                                            zmm4_1[0] = zmm4_1[0] - zmm8[0]
                                                            arg4[0] = arg4[0] * zmm7[0]
                                                            zmm4_1[0] = zmm4_1[0] * zmm6[0]
                                                            arg4[0] = arg4[0] + zmm4_1[0]
                                                            
                                                            if (not(zmm1 <= 0f))
                                                                arg4[0] = arg4[0] / zmm1
                                                            
                                                            if (arg4[0] >= 0f)
                                                                zmm2 = _mm_min_ss(arg4[0], zmm10.d)
                                                            else
                                                                zmm2 = zx.o(0)
                                                            
                                                            zmm1 = zmm6[0]
                                                            zmm7[0] = zmm7[0] * zmm2[0]
                                                            zmm1 = zmm1 * zmm2[0]
                                                            zmm7[0] = zmm7[0] + zmm9[0]
                                                            zmm1 = zmm1 + zmm8[0]
                                                            zmm7[0] = zmm7[0] - arg4[0]
                                                            zmm1 = zmm1 - zmm4_1[0]
                                                            zmm7[0] = zmm7[0] * zmm7[0]
                                                            zmm7[0] = zmm7[0] + zmm1 * zmm1
                                                            
                                                            if (not(zmm7[0] > zmm15[0]))
                                                                int32_t* rax_59 =
                                                                    sub_14260fcd0(arg1[0xd], rdi_5)
                                                                
                                                                if (rax_59 != 0)
                                                                    int32_t rax_60 = rax_59[5]
                                                                    
                                                                    if (rax_60 s>= 0)
                                                                        if (rax_60 u>= 0x40000000)
                                                                            zmm6 = *rax_59
                                                                        else
                                                                            float var_18c
                                                                            zmm1 = var_18c f- var_170:4.d
                                                                            zmm6[0] = zmm6[0] * 0.5f
                                                                            zmm7[0] = zmm7[0] * 0.5f
                                                                            zmm6[0] = zmm6[0] + zmm8[0]
                                                                            zmm7[0] = zmm7[0] + zmm9[0]
                                                                            zmm1 = zmm1 * 0.5f f+ var_170:4.d
                                                                            *rax_59 = zmm6[0]
                                                                            rax_59[2] = zmm7[0]
                                                                            rax_59[1] = zmm1
                                                                        
                                                                        zmm0_1 = rax_59[2]
                                                                        zmm1 = rax_59[1] f- rax_18[1]
                                                                        zmm6[0] = zmm6[0] f- *rax_18
                                                                        zmm0_1[0] = zmm0_1[0] f- rax_18[2]
                                                                        zmm6[0] = zmm6[0] * zmm6[0]
                                                                        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                                                        zmm2 = _mm_sqrt_ss(0, 
                                                                            zmm1 * zmm1 + zmm6[0] + zmm0_1[0])
                                                                        zmm2[0] = zmm2[0] f+ rax_18[4]
                                                                        
                                                                        if ((0x40000000 & rax_60) == 0
                                                                                || not(zmm2[0] f>= rax_59[4]))
                                                                            int32_t r8_15 = rax_60 & 0x7fffffff
                                                                            *(rax_59 + 0x18) = rdi_5
                                                                            rax_59[5] = r8_15
                                                                            int32_t rcx_36 =
                                                                                ((rax_18 - *arg1[0xd]) s>> 5).d + 1
                                                                            rax_59[4] = zmm2[0]
                                                                            int32_t rcx_39 =
                                                                                ((rcx_36 ^ r8_15) & 0x3fffffff) ^ r8_15
                                                                            rax_59[5] = rcx_39
                                                                            
                                                                            if (rcx_39 u< 0x40000000)
                                                                                rax_59[5] =
                                                                                    (rcx_39 & 0x3fffffff) | 0x40000000
                                                                                sub_142613e10(arg1[0xe], rax_59)
                                                                            else
                                                                                sub_142612a00(arg1[0xe], rax_59)
                                            else
                                                int16_t rax_51 = rbx_14[7].w
                                                
                                                if ((arg5[0x42].w & rax_51) != 0
                                                        && (*(arg5 + 0x212) & rax_51) == 0)
                                                    uint64_t rax_53 = zx.q(*(rbx_14 + 0x1f)) & 0x3f
                                                    
                                                    if (not(3.40282347e+38f f<=
                                                            *(arg5 + (rax_53 << 2) + 8)) && not(
                                                            3.40282347e+38f f<=
                                                            *(arg5 + (rax_53 << 2) + 0x108)))
                                                        goto label_14260d302
                                            
                                            rdx_9 = var_1d8_1
                                    
                                    r8_9 = var_1a0_1
                                while (i_2 != 0xffffffff)
                                
                                zmm6 = var_1cc_1
                                rdi_1 = var_1c8_1
                            
                            rax_17 = arg1[0xe]
                            r14 = var_1b0
                        while (*(rax_17 + 0xc) != 0)
                        
                        r13 = arg3
                        rcx_13 = var_1d0
                    
                    __builtin_memset(&var_170, 0, 0x18)
                    float rax_62 = 5.60519386e-45f
                    int64_t var_14c
                    __builtin_memset(&var_14c, 0, 0x3c)
                    char r12_1 = 0
                    
                    if (rcx_13 s< 4)
                        rax_62 = rcx_13
                    
                    int64_t r15_1 = sx.q(rax_62 i- 1)
                    bool cond:1_1
                    
                    if (rax_62 i- 1 s< 0)
                    label_14260d832:
                        cond:1_1 = r12_1 != 0
                    else
                        while (true)
                            cond:1_1 = r12_1 != 0
                            
                            if (r12_1 != 0)
                                break
                            
                            void* r8_16 = *arg1
                            int64_t r14_2 = (&var_108)[r15_1]
                            void* rbx_15 = 1
                            char r9_11 = (*(r8_16 + 0xa0)).b
                            int64_t r10_3 = (((1 << (*(r8_16 + 0x9c)).b) - 1)
                                & zx.q((r14_2 u>> r9_11).d)) * 0xb0
                            int64_t rdx_22 = *(r8_16 + 0x90)
                            int64_t r8_17 = *(r10_3 + rdx_22 + 0x18)
                            void* rdi_11 = ((zx.q((1 << r9_11).d - 1) & zx.q(r14_2.d)) << 5)
                                + *(r10_3 + rdx_22 + 0x10)
                            uint64_t r10_4 = zx.q(*(rdi_11 + 0x1e))
                            uint64_t rcx_46 = zx.q(*(rdi_11 + 4)) * 3
                            zmm1 = *(r8_17 + (rcx_46 << 2) + 4)
                            float var_158 = (*(r8_17 + (rcx_46 << 2)))[0]
                            zmm0_1 = *(r8_17 + (rcx_46 << 2) + 8)
                            float var_150 = zmm0_1[0]
                            float var_154_1 = zmm1
                            
                            if (r10_4 u> 1)
                                if (r10_4 u>= 5)
                                    void* r9_12 = rdi_11 + 8
                                    int64_t i_9 = ((r10_4 - 5) u>> 2) + 1
                                    int64_t var_144
                                    int64_t* rdx_23 = &var_144
                                    rbx_15 = (i_9 << 2) + 1
                                    int64_t i_3
                                    
                                    do
                                        uint64_t rax_68 = zx.q(*(r9_12 - 2))
                                        rdx_23 = &rdx_23[6]
                                        r9_12 += 8
                                        uint64_t rcx_47 = rax_68 * 3
                                        rdx_23[-7].d = *(r8_17 + (rcx_47 << 2))
                                        *(rdx_23 - 0x34) = *(r8_17 + (rcx_47 << 2) + 4)
                                        rdx_23[-6].d = *(r8_17 + (rcx_47 << 2) + 8)
                                        uint64_t rcx_48 = zx.q(*(r9_12 - 8)) * 3
                                        *(rdx_23 - 0x2c) = *(r8_17 + (rcx_48 << 2))
                                        rdx_23[-5].d = *(r8_17 + (rcx_48 << 2) + 4)
                                        *(rdx_23 - 0x24) = *(r8_17 + (rcx_48 << 2) + 8)
                                        uint64_t rcx_49 = zx.q(*(r9_12 - 6)) * 3
                                        rdx_23[-4].d = *(r8_17 + (rcx_49 << 2))
                                        *(rdx_23 - 0x1c) = *(r8_17 + (rcx_49 << 2) + 4)
                                        rdx_23[-3].d = *(r8_17 + (rcx_49 << 2) + 8)
                                        uint64_t rcx_50 = zx.q(*(r9_12 - 4)) * 3
                                        *(rdx_23 - 0x14) = *(r8_17 + (rcx_50 << 2))
                                        rdx_23[-2].d = *(r8_17 + (rcx_50 << 2) + 4)
                                        *(rdx_23 - 0xc) = *(r8_17 + (rcx_50 << 2) + 8)
                                        i_3 = i_9
                                        i_9 -= 1
                                    while (i_3 != 1)
                                
                                if (rbx_15 s< r10_4)
                                    void* i_8 = r10_4 - rbx_15
                                    void* rdx_24 = &(&var_150)[rbx_15 * 3]
                                    void* r9_14 = rdi_11 + 4 + (rbx_15 << 1)
                                    void* i_4
                                    
                                    do
                                        uint64_t rax_85 = zx.q(*r9_14)
                                        rdx_24 += 0xc
                                        r9_14 += 2
                                        uint64_t rcx_51 = rax_85 * 3
                                        *(rdx_24 - 0x14) = *(r8_17 + (rcx_51 << 2))
                                        *(rdx_24 - 0x10) = *(r8_17 + (rcx_51 << 2) + 4)
                                        *(rdx_24 - 0xc) = *(r8_17 + (rcx_51 << 2) + 8)
                                        i_4 = i_8
                                        i_8 -= 1
                                    while (i_4 != 1)
                            
                            for (int32_t i_5 = 0; i_5 s< 4; i_5 += 1)
                                var_1b0()
                                var_1b0()
                                sub_142609670(&var_158, zx.d(*(rdi_11 + 0x1e)), &var_170, zmm0_1, 
                                    zmm0_1[0], &var_1c0)
                                zmm1 = var_1c0.d[0] f- *r13
                                int32_t var_1b8
                                zmm0_1 = var_1b8
                                zmm0_1[0] = zmm0_1[0] f- r13[2]
                                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                zmm0_1[0] = zmm0_1[0] + zmm1 * zmm1
                                
                                if (not(zmm0_1[0] >= zmm15[0]))
                                    var_1d0 = 0f
                                    int32_t rax_89
                                    rax_89, zmm0_1, zmm6, zmm7 =
                                        sub_142610360(arg1, r14_2, &var_1c0, &var_1d0)
                                    
                                    if ((rax_89 u>> 0x1f).b == 0)
                                        r12_1 = 1
                                        zmm0_1 = var_1d0
                                        var_1c0:4.d = zmm0_1[0]
                                        *arg8 = zmm6[0]
                                        arg8[1] = zmm0_1[0]
                                        arg8[2] = zmm7[0]
                                        *arg7 = r14_2
                                        break
                            
                            int64_t temp6_1 = r15_1
                            r15_1 -= 1
                            
                            if (temp6_1 - 1 s< 0)
                                goto label_14260d832
                    
                    result = 0x80000000
                    
                    if (cond:1_1)
                        result = 0x40000000
        else
            int16_t rax_9 = *(r9_5 + 0x1c)
            
            if ((arg5[0x42].w & rax_9) == 0 || (*(arg5 + 0x212) & rax_9) != 0)
                result = 0x80000008
            else
                uint64_t rax_11 = zx.q(*(r9_5 + 0x1f)) & 0x3f
                
                if (not(3.40282347e+38f f<= *(arg5 + (rax_11 << 2) + 8))
                        && 3.40282347e+38f f> *(arg5 + (rax_11 << 2) + 0x108))
                    goto label_14260cdd8
                
                result = 0x80000008

__security_check_cookie(rax_1 ^ &var_228)
return result
