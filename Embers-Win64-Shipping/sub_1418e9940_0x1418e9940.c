// 函数: sub_1418e9940
// 地址: 0x1418e9940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t* r12 = arg3
void* rax_3 = (*(*arg2 + 8))(arg2)
int32_t rsi_2 = (r12[3] - r12[1]) * (r12[2] - *r12)
int64_t result

if (data_143efb330 != 2)
    sub_1418c2d40(*(arg1 + 0x58))
    void* rax_7 = *(*(arg1 + 0x58) + 0x1a50)
    void*** rax_8 = sub_1418c0d30(*(rax_7 + 0x240))
    int32_t rcx_10 = *(rax_3 + 0x88)
    int32_t rbx_2 = 0
    int32_t r13_1
    
    if (rcx_10 != 0x5c)
        r13_1 = 1
    
    if (rcx_10 == 0x5c || rcx_10 - 0x5f u<= 2)
        r13_1 = 0
    
    uint64_t r13_4 = zx.q(((r13_1 + 1) * rsi_2) << 2)
    void*** rax_9 = sub_1418ba820(*(arg1 + 0x58) + 0x3f0, r13_4.d, 2, 8)
    bool cond:2_1 = data_143efb330 != 0
    void*** var_128 = rax_9
    int32_t var_138
    int32_t var_130
    int64_t var_120
    void* r15_3
    
    if (cond:2_1)
        r15_3 = &rax_8[8]
        data_143efba20(*r15_3, rax_9[3], 0, r13_4, 0xffffffff)
    else
        uint32_t r9 = zx.d(*(arg5 + 0x11))
        uint32_t r8_2 = 1
        char rcx_15 = r9.b
        int32_t rax_10 = *(rax_3 + 0x64)
        uint32_t rdx_3 = *(rax_3 + 0x60) u>> rcx_15
        int64_t var_b0 = 0
        int32_t var_98_1 = 0
        
        if (rdx_3 u>= 1)
            r8_2 = rdx_3
        
        int64_t var_90_1 = 0
        uint32_t rax_11 = rax_10 u>> rcx_15
        uint32_t rcx_16 = 1
        uint32_t var_a8_1 = r8_2
        uint32_t var_84_1 = r8_2
        int64_t r8_3 = *(rax_3 + 0x80)
        
        if (rax_11 u>= 1)
            rcx_16 = rax_11
        
        int32_t var_88_1 = 0
        int32_t var_a0_1 = *(rax_3 + 0xe0)
        uint32_t var_a4_1 = rcx_16
        uint32_t var_80_1 = rcx_16
        uint32_t var_9c_1 = r9
        void* rax_14 = *(arg1 + 0x58)
        int32_t var_94_1 = 1
        int32_t var_7c_1 = 1
        var_130 = 0
        void* r15_1 = *(rax_14 + 0x1a50)
        var_120 = r8_3
        sub_140865c40(r15_1 + 0x2e8, &var_138, r8_3)
        int64_t rax_15 = sx.q(var_138)
        void* const rcx_18
        
        if (rax_15.d == 0xffffffff)
            rcx_18 = nullptr
        else
            rcx_18 = *(r15_1 + 0x2e8) + rax_15 * 0x18
        
        int32_t* r12_1 = rcx_18 + 8
        
        if (rcx_18 == 0)
            r12_1 = nullptr
        
        if (r12_1 == 0)
            r12_1 = sub_1418ca3c0(r15_1 + 0x2e8, &var_120, &var_130)
        
        int32_t rax_18 = *r12_1
        int64_t rcx_20 = *(rax_3 + 0x80)
        r15_3 = &rax_8[8]
        var_130 = rax_18
        
        if (rax_18 != 6)
            var_120 = 1
            int32_t var_168
            var_168.q = &var_120
            int32_t var_118_1 = 0xffffffff
            int32_t var_114_1 = 0
            int32_t var_110_1 = 1
            sub_1418f0770(*r15_3, rcx_20, rax_18, 6, var_168)
            rcx_20 = *(rax_3 + 0x80)
        
        data_143efba10(*r15_3, rcx_20, 6, var_128[3], 1, &var_b0)
        int32_t r9_3
        
        if (var_130 != 0)
            r9_3 = *r12_1
        
        if (var_130 == 0 || r9_3 == 6)
            *r12_1 = 6
            r12 = arg3
        else
            int64_t rdx_9 = *(rax_3 + 0x80)
            int64_t rcx_23 = *r15_3
            int32_t var_168_1
            var_168_1.q = &var_120
            var_120 = 1
            int32_t var_118_2 = 0xffffffff
            int32_t var_114_2 = 0
            int32_t var_110_2 = 1
            sub_1418f0770(rcx_23, rdx_9, 6, r9_3, var_168_1)
            r12 = arg3
    
    int64_t var_140_1 = 0
    int32_t var_148_1 = 0
    int32_t var_e8
    int32_t* var_150_1 = &var_e8
    int64_t var_c8_1 = var_128[3]
    int32_t var_158_1 = 1
    int64_t var_e4_1 = 0
    int32_t var_dc_1 = 0
    int64_t var_d0_1 = 0
    var_e8 = 0x2c
    int32_t var_d8_1 = 0x1000
    int32_t var_d4_1 = 0x8000
    int64_t var_c0_1 = 0
    uint64_t var_b8_1 = r13_4
    data_143efba60(*r15_3, 0x1000, 0x4000, 0, 0, 0, var_158_1, var_150_1, var_148_1, var_140_1)
    int128_t zmm6_1 = sub_1418c86c0(*(rax_7 + 0x240), 0, 0)
    sub_1418c2e90(*(arg1 + 0x58))
    void* rcx_29 = var_128[2]
    sub_1418c2300(*(rcx_29 + 0x28), zx.q(*(rcx_29 + 0x1c)), zx.q(*(rcx_29 + 0x18)))
    int32_t rax_22 = arg4[1].d
    
    if (rsi_2 s> rax_22)
        arg4[1].d = rsi_2
        
        if (rsi_2 s> *(arg4 + 0xc))
            sub_1406105e0(arg4)
    else if (rsi_2 s< rax_22 && rsi_2 != rax_22)
        arg4[1].d = rsi_2
        sub_1405dac90(arg4)
    
    int32_t rdx_13 = *r12
    int32_t r11_1 = r12[1]
    uint64_t rsi_4 = zx.q(r12[2] - rdx_13)
    int32_t rax_23 = *(rax_3 + 0x88)
    int32_t r12_3 = r12[3] - r11_1
    uint64_t r13_5 = *arg4
    
    if (rax_23 != 0x61)
        int128_t var_58_1 = zmm6_1
        uint128_t zmm0_1
        
        if (rax_23 == 0x40)
            void*** rax_29 = var_128
            int32_t r8_12 = *(rax_3 + 0x60)
            var_130 = r8_12
            void* rcx_34 = rax_29[2]
            int64_t rdx_18 = zx.q((rdx_13 + r8_12 * r11_1) << 2) + *(*(rcx_34 + 0x28) + 0x18)
                + zx.q(*(rcx_34 + 0x24))
            int64_t var_108_1 = rdx_18
            
            if (r12_3 != 0)
                do
                    int32_t* rdi_4 = zx.q((rbx_2 * r8_12) << 2) + rdx_18
                    
                    if (rsi_4.d != 0)
                        uint64_t i_4 = zx.q(rsi_4.d)
                        void* r15_9 = (zx.q(rbx_2 * rsi_4.d) << 2) - rdi_4 + r13_5
                        uint64_t i
                        
                        do
                            int32_t rcx_35 = *rdi_4
                            zmm0_1.d = float.s(zx.q(rcx_35) & 0x3ff)
                            zmm0_1.d = zmm0_1.d f* 0.000977517106f
                            var_120.d = zmm0_1.d
                            zmm0_1.d = float.s(zx.q(rcx_35 u>> 0xa) & 0x3ff)
                            zmm0_1.d = zmm0_1.d f* 0.000977517106f
                            var_120:4.d = zmm0_1.d
                            zmm0_1.d = float.s(zx.q(rcx_35 u>> 0x14) & 0x3ff)
                            zmm0_1.d = zmm0_1.d f* 0.000977517106f
                            int32_t var_118_3 = zmm0_1.d
                            zmm0_1.d = float.s(zx.q(rcx_35 u>> 0x1e))
                            zmm0_1.d = zmm0_1.d f* 0.333333343f
                            int32_t var_114_3 = zmm0_1.d
                            rdi_4 = &rdi_4[1]
                            *(rdi_4 + r15_9 - 4) = *sub_140addff0(&var_120, &var_138)
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        rdx_18 = var_108_1
                        r8_12 = var_130
                    
                    rbx_2 += 1
                while (rbx_2 u< r12_3)
        else if (rax_23 == 0x25)
            int32_t r10_2 = *(rax_3 + 0x60)
            void* rcx_39 = var_128[2]
            int64_t r9_11 = zx.q((r10_2 * r11_1 + rdx_13) << 2) + *(*(rcx_39 + 0x28) + 0x18)
                + zx.q(*(rcx_39 + 0x24))
            
            if (r12_3 != 0)
                do
                    void* rdx_23 = zx.q((rbx_2 * r10_2) << 2) + r9_11
                    
                    if (rsi_4.d != 0)
                        uint64_t i_3 = zx.q(rsi_4.d)
                        void* r8_17 = (zx.q(rbx_2 * rsi_4.d) << 2) - rdx_23 + r13_5
                        uint64_t i_1
                        
                        do
                            char rax_47 = *(rdx_23 + 2)
                            rdx_23 += 4
                            var_138.b = rax_47
                            var_138:1.b = *(rdx_23 - 3)
                            var_138:2.b = *(rdx_23 - 4)
                            var_138:3.b = *(rdx_23 - 1)
                            *(rdx_23 + r8_17 - 4) = var_138
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                    
                    rbx_2 += 1
                while (rbx_2 u< r12_3)
        else if (rax_23 == 0x5b)
            void*** rax_52 = var_128
            int32_t r8_18 = *(rax_3 + 0x60)
            var_130 = r8_18
            void* rcx_40 = rax_52[2]
            int64_t rdx_27 = zx.q((rdx_13 + r8_18 * r11_1) << 3) + *(*(rcx_40 + 0x28) + 0x18)
                + zx.q(*(rcx_40 + 0x24))
            int64_t var_108_2 = rdx_27
            
            if (r12_3 != 0)
                do
                    int16_t* rdi_8 = zx.q((rbx_2 * r8_18) << 3) + rdx_27
                    uint64_t r14_2 = (zx.q(rbx_2 * rsi_4.d) << 2) + r13_5
                    
                    if (rsi_4.d != 0)
                        uint64_t i_5 = zx.q(rsi_4.d)
                        uint64_t i_2
                        
                        do
                            uint32_t rax_60 = zx.d(rdi_8[1])
                            zmm0_1 = _mm_cvtepi32_ps(zx.o(*rdi_8))
                            uint32_t rax_61 = zx.d(rdi_8[2])
                            zmm0_1.d = zmm0_1.d f* 1.52590219e-05f
                            uint128_t zmm1_1
                            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_60)).d f* 1.52590219e-05f
                            var_120.d = zmm0_1.d
                            uint32_t rax_62 = zx.d(rdi_8[3])
                            var_120:4.d = zmm1_1.d
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_61)).d f* 1.52590219e-05f
                            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_62)).d f* 1.52590219e-05f
                            int32_t var_118_4 = zmm0_1.d
                            int32_t var_114_4 = zmm1_1.d
                            r14_2 += 4
                            rdi_8 = &rdi_8[4]
                            *(r14_2 - 4) = *sub_140addff0(&var_120, &var_138)
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                        rdx_27 = var_108_2
                        r8_18 = var_130
                    
                    rbx_2 += 1
                while (rbx_2 u< r12_3)
        else if (rax_23 == 0x2c)
            uint64_t r8_19 = zx.q(*(rax_3 + 0x60))
            void* rcx_43 = var_128[2]
            uint32_t r14_3 = (r8_19 << 2).d
            int64_t rdi_14 = zx.q((r8_19.d * r11_1 + rdx_13) << 2) + *(*(rcx_43 + 0x28) + 0x18)
                + zx.q(*(rcx_43 + 0x24))
            uint32_t count = (rsi_4 << 2).d
            
            if (count == r14_3)
                memcpy(r13_5, rdi_14, (r12_3 * rsi_4.d) << 2)
            else if (r12_3 != 0)
                do
                    memcpy((zx.q(rbx_2 * rsi_4.d) << 2) + r13_5, zx.q(rbx_2 * r14_3) + rdi_14, 
                        count)
                    rbx_2 += 1
                while (rbx_2 u< r12_3)
    else
        int64_t var_160_2
        var_160_2.b = 0
        int32_t var_168_3
        var_168_3.q = r13_5
        void* r10_1 = var_128[2]
        uint64_t rax_25 = zx.q(*(rax_3 + 0x60))
        sub_140fe0f50(rsi_4.d, r12_3, 
            zx.q((rdx_13 + rax_25.d * r11_1) << 3) + *(*(r10_1 + 0x28) + 0x18)
                + zx.q(*(r10_1 + 0x24)), 
            (rax_25 << 3).d, var_168_3, var_160_2.b)
    
    sub_1418c5270(*(arg1 + 0x58) + 0x3f0, rax_8, &var_128)
    result = sub_1418c2ee0(*(rax_7 + 0x240))
else
    int32_t rcx_3 = *(arg4 + 0xc)
    int32_t rbx_1 = 0
    arg4[1].d = 0
    
    if (rcx_3 != 0)
        sub_140679c00(arg4, 0)
        rcx_3 = *(arg4 + 0xc)
        rbx_1 = arg4[1].d
    
    int32_t rax_4 = rbx_1 + rsi_2
    arg4[1].d = rax_4
    
    if (rax_4 s> rcx_3)
        sub_1406105e0(arg4)
    
    result = memset(*arg4 + (sx.q(rbx_1) << 2), 0, sx.q(rsi_2) << 2)

__security_check_cookie(rax_1 ^ &var_188)
return result
