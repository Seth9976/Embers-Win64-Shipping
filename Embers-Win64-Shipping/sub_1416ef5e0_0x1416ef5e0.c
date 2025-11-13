// 函数: sub_1416ef5e0
// 地址: 0x1416ef5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rbx = arg1
int64_t* rcx = *arg4
(*(*rcx + 0x20))(rcx)
int32_t* rdi = *(rbx + 0x10)
void* rsi_1 = sx.q(*(rbx + 0x18)) * 0x1c + rdi
float var_168
float var_160
int32_t var_c0
int64_t result
uint128_t zmm0
float zmm1[0x4]
uint128_t zmm2
uint128_t zmm3
int32_t zmm4_1

if (rdi == rsi_1)
label_1416ef788:
    uint128_t* rdi_1 = *(rbx + 0x70)
    void* rsi_3 = sx.q(*(rbx + 0x78)) * 0x34 + rdi_1
    int32_t zmm5_1
    
    if (rdi_1 != rsi_3)
        float (* rbx_2)[0x4] = rdi_1 + 0x14
    label_1416ef7b8:
        zmm0.d = (*rdi_1).d f- *arg2
        zmm1 = rbx_2[-1][0]
        zmm1[0] = zmm1[0] f- arg2[1]
        int32_t r8_2 = 0
        void* rdx_2 = arg3 + 0x1c
        zmm3 = zx.o(0)
        var_c0 = zmm0.d
        result = 0
        zmm0.d = (*rbx_2)[-3].d f- arg2[2]
        float var_bc_2 = zmm1[0]
        zmm1 = (*rbx_2)[-2]
        zmm1[0] = zmm1[0] f- *arg2
        int32_t var_b8_2 = zmm0.d
        zmm0.d = (*rbx_2)[-1].d f- arg2[1]
        var_160 = zmm1[0]
        zmm1 = *rbx_2
        zmm1[0] = zmm1[0] f- arg2[2]
        int32_t var_15c_2 = zmm0.d
        zmm0 = 0x7f7fffff
        float var_158_2 = zmm1[0]
        
        while (true)
            zmm4_1 = zmm0.d
            void* rcx_3 = &var_c0 + result
            zmm5_1 = zmm3.d
            zmm2 = *rcx_3
            
            if (*rdx_2 == 0)
                zmm0 = *(&arg3[1] - &var_c0 + rcx_3)
                zmm1 = zmm0
                zmm0.d = zmm0.d f* *(&var_160 + result)
                zmm1[0] = zmm1[0] f* zmm2.d
            else
                if (zmm2.d f> 0f)
                    goto label_1416ef8c3
                
                if (0f f> *(&var_160 + result))
                    goto label_1416ef8c3
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0
            zmm0 = _mm_max_ss(zmm0.d, zmm1[0])
            zmm3 = _mm_min_ss(zmm3.d, zmm1[0])
            zmm0 = _mm_min_ss(zmm0.d, zmm4_1)
            zmm3 = _mm_max_ss(zmm3.d, zmm5_1)
            
            if (zmm3.d f> zmm0.d)
                goto label_1416ef8c3
            
            r8_2 += 1
            rdx_2 += 1
            result += 4
            
            if (r8_2 s>= 3)
                if (not(zmm3.d f> *(arg3 + 0x14)) && not(zmm0.d f< 0f))
                    var_168 = (*rbx_2)[1]
                    int64_t* rcx_4 = *arg4
                    
                    if ((*(*rcx_4 + 0x10))(rcx_4, &var_168, arg3).b == 0)
                        goto label_1416ef8e8
                
            label_1416ef8c3:
                rdi_1 += 0x34
                rbx_2 = &(*rbx_2)[0xd]
                
                if (rdi_1 != rsi_3)
                    goto label_1416ef7b8
                
                rbx = arg1
                break
    
    if (*(rbx + 0x94) == 0)
        bool cond:0_1 = *(rbx + 0x68) == 0
        int32_t rax_12 = *(rbx + 0x28)
        uint64_t var_138 = *(rbx + 0x20)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int32_t var_124_1 = *(rbx + 0x34)
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        uint64_t var_12c_1 = *(rbx + 0x2c)
        
        if (not(cond:0_1))
            zmm4_1 = *arg2
            void* r15_1 = &arg3[1]
            zmm5_1 = arg2[1]
            zmm0.d = var_138.d.d f- zmm4_1
            zmm6 = arg2[2]
            void* rdx_4 = arg3 + 0x1c
            zmm1 = var_12c_1.d
            int32_t* r10_1 = *arg3
            zmm1[0] = zmm1[0] f- zmm4_1
            int32_t r8_4 = 0
            void* var_c8_1 = r15_1
            var_c0 = zmm0.d
            int64_t* r14_1 = arg3
            zmm0.d = var_138:4.d.d f- zmm5_1
            zmm9 = zx.o(0)
            var_160 = zmm1[0]
            result = 0
            zmm1 = var_124_1
            zmm1[0] = zmm1[0] f- zmm6.d
            int32_t var_bc_3 = zmm0.d
            zmm0.d = rax_12.d f- zmm6.d
            float var_158_3 = zmm1[0]
            int32_t var_b8_3 = zmm0.d
            zmm0.d = var_12c_1:4.d.d f- zmm5_1
            int32_t var_15c_3 = zmm0.d
            zmm0 = 0x7f7fffff
            
            while (true)
                zmm2 = zmm0
                void* rcx_5 = &var_c0 + result
                zmm3 = zmm9
                zmm1 = *rcx_5
                
                if (*rdx_4 == 0)
                    zmm0 = *(rcx_5 + r15_1 - &var_c0)
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm0.d = zmm0.d f* *(&var_160 + result)
                else
                    if (zmm1[0] > 0f)
                        goto label_1416f00a7
                    
                    if (0f f> *(&var_160 + result))
                        goto label_1416f00a7
                    
                    zmm1 = zx.o(0)
                    zmm0 = 0x7f7fffff
                
                zmm9 = zmm0
                zmm0 = _mm_max_ss(zmm0.d, zmm1[0])
                zmm9 = _mm_min_ss(zmm9.d, zmm1[0])
                zmm0 = _mm_min_ss(zmm0.d, zmm2.d)
                zmm9 = _mm_max_ss(zmm9.d, zmm3.d)
                
                if (zmm9.d f> zmm0.d)
                    goto label_1416f00a7
                
                r8_4 += 1
                rdx_4 += 1
                result += 4
                
                if (r8_4 s>= 3)
                    if (zmm9.d f> *(r14_1 + 0x14))
                        break
                    
                    if (zmm0.d f< 0f)
                        break
                    
                    void* r13_1 = rbx + 0x20
                    float zmm10[0x4] = zmm9
                    zmm10[0] = zmm10[0] f* *r10_1
                    float zmm11[0x4] = zmm9
                    zmm11[0] = zmm11[0] f* r10_1[1]
                    zmm9.d = zmm9.d f* r10_1[2]
                    zmm10[0] = zmm10[0] f+ zmm4_1
                    zmm11[0] = zmm11[0] f+ zmm5_1
                    zmm9.d = zmm9.d f+ zmm6.d
                    zmm10[0] = zmm10[0] f- *r13_1
                    zmm2.d = zmm11.d f- *(r13_1 + 4)
                    zmm3.d = zmm9.d f- *(r13_1 + 8)
                    bool cond:4_1 = zmm10[0] >= 0f
                    zmm0.d = zmm10.d f/ *(r13_1 + 0x24)
                    int32_t rax_13 = int.d(zmm0.d)
                    zmm0.d = zmm2.d f/ *(r13_1 + 0x28)
                    var_c0 = rax_13
                    int32_t rdx_5 = int.d(zmm0.d)
                    zmm0.d = zmm3.d f/ *(r13_1 + 0x2c)
                    int32_t var_bc_4 = rdx_5
                    int32_t rcx_6 = int.d(zmm0.d)
                    
                    if (not(cond:4_1))
                        var_c0 = rax_13 - 1
                    
                    if (not(zmm2.d f>= 0f))
                        int32_t var_bc_5 = rdx_5 - 1
                    
                    if (not(zmm3.d f>= 0f))
                        rcx_6 -= 1
                    
                    int32_t var_148_1 = rcx_6
                    uint64_t var_150 = var_c0.q
                    int32_t* rax_16 = sub_1417a90d0(r13_1, &var_138, &var_150)
                    float rsi_4 = *(rbx + 0x40)
                    zmm0 = zx.o(*(rbx + 0x38))
                    var_168 = rsi_4
                    var_150.d = *rax_16
                    var_150:4.d = rax_16[1]
                    int32_t rax_17 = rax_16[2]
                    var_138 = zmm0.q
                    uint64_t r12_2 = var_138 u>> 0x20
                    uint64_t var_110_1 = r12_2
                    int32_t temp0_13
                    int32_t temp1_1
                    temp0_13:temp1_1 = sx.q(rsi_4 i* var_138.d * r12_2.d)
                    int64_t rbx_3 = sx.q((temp1_1 + (temp0_13 & 7)) s>> 3)
                    int64_t rax_24 = j_sub_140a82f30(rbx_3 + 1)
                    memset(rax_24, 0, rbx_3 + 1)
                    int32_t rbx_4
                    
                    while (true)
                        void* r10_3 = arg1
                        int32_t rcx_12 = var_150.d
                        int32_t rdx_9 = var_150:4.d
                        int32_t r8_7 = rax_17
                        int64_t* rax_32 = (
                            sx.q((*(r10_3 + 0x54) * rcx_12 + rdx_9) * *(r10_3 + 0x58) + r8_7) << 4)
                            + *(r10_3 + 0x60)
                        void* r9_6 = *rax_32
                        void* var_f0_1 = r9_6
                        void* rax_35 = sx.q(rax_32[1].d) * 0x34 + r9_6
                        var_160.q = rax_35
                        float zmm0_1[0x4]
                        uint128_t zmm4_2
                        
                        if (r9_6 != rax_35)
                            void* r13_2 = r9_6 + 0x14
                            void* var_118 = r13_2
                            
                            while (true)
                                int32_t rcx_13 = *(r13_2 + 0x14)
                                r15_1.b = 0
                                int32_t rdx_10 = *(r13_2 + 8)
                                bool cond:6_1 = rdx_10 s> rcx_13
                                
                                if (rdx_10 != rcx_13)
                                    goto label_1416efc29
                                
                                if (*(r13_2 + 0xc) != *(r13_2 + 0x18)
                                        || *(r13_2 + 0x10) != *(r13_2 + 0x1c))
                                    cond:6_1 = rdx_10 s> rcx_13
                                label_1416efc29:
                                    
                                    if (not(cond:6_1))
                                        int32_t r14_2 = *(r13_2 + 0x18)
                                        int32_t rax_38 = var_110_1.d
                                        rbx_4 = r12_2.d * rdx_10
                                        uint64_t i_2 = zx.q(rcx_13 - rdx_10 + 1)
                                        uint64_t i
                                        
                                        do
                                            int32_t r11_1 = *(r13_2 + 0xc)
                                            
                                            if (r11_1 s<= r14_2)
                                                int32_t rsi_5 = *(r13_2 + 0x10)
                                                int32_t r10_2 = *(r13_2 + 0x1c)
                                                
                                                do
                                                    int32_t r9_7 = rsi_5
                                                    
                                                    if (rsi_5 s<= r10_2)
                                                        int32_t r8_10 =
                                                            (rbx_4 + r11_1) i* var_168 + rsi_5
                                                        
                                                        do
                                                            int32_t rax_39 = r8_10
                                                            int32_t rcx_16 = r8_10 & 7
                                                            
                                                            if (r8_10 s< 0)
                                                                rax_39 = r8_10 + 7
                                                                rcx_16 -= 8
                                                            
                                                            if ((*(sx.q(rax_39 s>> 3) + rax_24)
                                                                    u>> rcx_16.b & 1) != 0)
                                                                r15_1.b = 1
                                                                break
                                                            
                                                            r9_7 += 1
                                                            r8_10 += 1
                                                        while (r9_7 s<= r10_2)
                                                    
                                                    r11_1 += 1
                                                while (r11_1 s<= r14_2)
                                                
                                                r13_2 = var_118
                                                rax_38 = var_110_1.d
                                            
                                            rbx_4 += rax_38
                                            i = i_2
                                            i_2 -= 1
                                        while (i != 1)
                                        
                                        if (r15_1.b != 0)
                                            r15_1 = var_c8_1
                                        label_1416efe13:
                                            r13_2 += 0x34
                                            r12_2 = var_110_1
                                            r9_6 = var_f0_1 + 0x34
                                            r14_1 = arg3
                                            var_f0_1 = r9_6
                                            var_118 = r13_2
                                            
                                            if (r9_6 != var_160.q)
                                                continue
                                            
                                            r8_7 = rax_17
                                            rdx_9 = var_150:4.d
                                            rcx_12 = var_150.d
                                            rsi_4 = var_168
                                            r13_1 = rbx + 0x20
                                            r10_3 = arg1
                                            break
                                        else
                                            r9_6 = var_f0_1
                                            r14_1 = arg3
                                
                                zmm0_1 = *r9_6
                                void* rdx_12 = r14_1 + 0x1c
                                zmm1 = *(r13_2 - 0x10)
                                int32_t r8_11 = 0
                                zmm3 = zx.o(0)
                                zmm0_1[0] = zmm0_1[0] f- *arg2
                                zmm1[0] = zmm1[0] f- arg2[1]
                                float var_e8 = zmm0_1[0]
                                zmm0_1 = *(r13_2 - 0xc)
                                zmm0_1[0] = zmm0_1[0] f- arg2[2]
                                float var_e4_1 = zmm1[0]
                                zmm1 = *(r13_2 - 8)
                                zmm1[0] = zmm1[0] f- *arg2
                                float var_e0_1 = zmm0_1[0]
                                zmm0_1 = *(r13_2 - 4)
                                zmm0_1[0] = zmm0_1[0] f- arg2[1]
                                var_138.d = zmm1[0]
                                zmm1 = *r13_2
                                zmm1[0] = zmm1[0] f- arg2[2]
                                r15_1 = &r14_1[1]
                                var_138:4.d = zmm0_1[0]
                                zmm0_1 = 0x7f7fffff
                                int64_t rax_42 = 0
                                float var_130_2 = zmm1[0]
                                
                                while (true)
                                    zmm2 = zmm0_1
                                    float (* rcx_17)[0x4] = &var_e8 + rax_42
                                    zmm4_2 = zmm3
                                    zmm1 = *rcx_17
                                    
                                    if (*rdx_12 == 0)
                                        zmm0_1 = *(rcx_17 + r15_1 - &var_e8)
                                        zmm1[0] = zmm1[0] * zmm0_1[0]
                                        zmm0_1[0] = zmm0_1[0] f* *(&var_138 + rax_42)
                                    else
                                        if (zmm1[0] > 0f)
                                            goto label_1416efe13
                                        
                                        if (0f f> *(&var_138 + rax_42))
                                            goto label_1416efe13
                                        
                                        zmm1 = zx.o(0)
                                        zmm0_1 = 0x7f7fffff
                                    
                                    float temp0_14[0x4] = _mm_max_ss(zmm0_1[0], zmm1[0])
                                    zmm3 = _mm_min_ss(zmm0_1.d, zmm1[0])
                                    zmm0_1 = _mm_min_ss(temp0_14[0], zmm2.d)
                                    zmm3 = _mm_max_ss(zmm3.d, zmm4_2.d)
                                    
                                    if (zmm3.d f> zmm0_1[0])
                                        goto label_1416efe13
                                    
                                    r8_11 += 1
                                    rdx_12 += 1
                                    rax_42 += 4
                                    
                                    if (r8_11 s>= 3)
                                        if (zmm3.d f> *(r14_1 + 0x14))
                                            goto label_1416efe13
                                        
                                        if (zmm0_1[0] < 0f)
                                            goto label_1416efe13
                                        
                                        var_118.d = *(r13_2 + 4)
                                        int64_t* rcx_18 = *arg4
                                        
                                        if ((*(*rcx_18 + 0x10))(rcx_18, &var_118, r14_1) != 0)
                                            goto label_1416efe13
                                        
                                        rbx_4.b = 0
                                        break
                                
                                goto label_1416f0082
                        
                        int32_t rcx_22 = (rcx_12 * r12_2.d + rdx_9) i* rsi_4 + r8_7
                        uint32_t rdx_15 = rcx_22 & 7
                        
                        if (rcx_22 s< 0)
                            rcx_22 += 7
                            rdx_15 -= 8
                        
                        zmm1 = zx.o(0)
                        int64_t rcx_24 = sx.q(rcx_22 s>> 3)
                        char rax_48 = *(rcx_24 + rax_24) | (1 << (rdx_15 u% 0x20)).b
                        rdx_15.b = 1
                        *(rcx_24 + rax_24) = rax_48
                        bool cond:5_1 = *(r14_1 + 0x1c) != 0
                        zmm1[0] = float.s(var_150.d)
                        zmm2.d = float.s(var_150:4.d)
                        zmm4_2.d = float.s(rax_17)
                        zmm3 = *(r14_1 + 0x14)
                        zmm1[0] = zmm1[0] + 0.5f
                        zmm2.d = zmm2.d f+ 0.5f
                        zmm4_2.d = zmm4_2.d f+ 0.5f
                        zmm1[0] = zmm1[0] f* *(r13_1 + 0x24)
                        zmm2.d = zmm2.d f* *(r13_1 + 0x28)
                        zmm4_2.d = zmm4_2.d f* *(r13_1 + 0x2c)
                        zmm1[0] = zmm1[0] f+ *r13_1
                        zmm2.d = zmm2.d f+ *(r13_1 + 4)
                        zmm4_2.d = zmm4_2.d f+ *(r13_1 + 8)
                        
                        if (cond:5_1)
                            var_c0 = 0x7f7fffff
                        else
                            int32_t* rax_50 = *r14_1
                            zmm0_1 = *(r10_3 + 0x44)
                            zmm0_1[0] = zmm0_1[0] * 0.5f
                            
                            if (0f f>= *rax_50)
                                zmm1[0] = zmm1[0] - zmm0_1[0]
                            else
                                zmm1[0] = zmm1[0] + zmm0_1[0]
                            
                            zmm1[0] = zmm1[0] - zmm10[0]
                            zmm1[0] = zmm1[0] f* *r15_1
                            var_c0 = zmm1[0]
                            rdx_15.b = zmm3.d <= zmm1[0]
                            zmm3 = _mm_min_ss(zmm1[0], zmm3.d)
                        
                        if (*(r14_1 + 0x1d) != 0)
                            int32_t var_bc_7 = 0x7f7fffff
                        else
                            void* rax_51 = *r14_1
                            zmm0_1 = *(r10_3 + 0x48)
                            zmm0_1[0] = zmm0_1[0] * 0.5f
                            
                            if (0f f>= *(rax_51 + 4))
                                zmm2.d = zmm2.d f- zmm0_1[0]
                            else
                                zmm2.d = zmm2.d f+ zmm0_1[0]
                            
                            zmm2.d = zmm2.d f- zmm11[0]
                            char rcx_25 = 0
                            zmm2.d = zmm2.d f* *(r14_1 + 0xc)
                            int32_t var_bc_6 = zmm2.d
                            bool cond:10_1 = zmm3[0] f<= zmm2.d
                            float temp0_19[0x4] = _mm_min_ss(zmm2[0], zmm3.d)
                            
                            if (cond:10_1)
                                rcx_25 = rdx_15.b
                            
                            rdx_15 = zx.d(rcx_25)
                            zmm3 = temp0_19
                        
                        if (*(r14_1 + 0x1e) != 0)
                            int32_t var_b8_5 = 0x7f7fffff
                        else
                            void* rax_53 = *r14_1
                            zmm1 = *(r10_3 + 0x4c)
                            zmm1[0] = zmm1[0] * 0.5f
                            
                            if (0f f>= *(rax_53 + 8))
                                zmm4_2.d = zmm4_2.d f- zmm1[0]
                                zmm1 = zmm4_2
                            else
                                zmm1[0] = zmm1[0] f+ zmm4_2.d
                            
                            zmm1[0] = zmm1[0] f- zmm9.d
                            char rcx_26 = 0
                            zmm1[0] = zmm1[0] f* r14_1[2].d
                            float var_b8_4 = zmm1[0]
                            bool cond:12_1 = zmm3.d f<= zmm1[0]
                            float temp0_20[0x4] = _mm_min_ss(zmm1[0], zmm3.d)
                            
                            if (cond:12_1)
                                rcx_26 = rdx_15.b
                            
                            rdx_15 = zx.d(rcx_26)
                            zmm3 = temp0_20
                        
                        if (rdx_15.b != 0)
                            break
                        
                        int32_t i_1 = 0
                        zmm0_1 = zmm3
                        int32_t* rcx_27 = nullptr
                        zmm0_1[0] = zmm0_1[0] + 0.00999999978f
                        
                        do
                            void* r10_4 = &var_c0 + rcx_27
                            int32_t rdx_16
                            
                            if (zmm0_1[0] f< *r10_4)
                                rdx_16 = 0
                            else
                                rdx_16 = -1
                                
                                if (0f f< *(rcx_27 + *r14_1))
                                    rdx_16 = 1
                            
                            int32_t r8_13 = rdx_16 + *(&var_150 + rcx_27)
                            *(&var_150 + rcx_27) = r8_13
                            
                            if (r8_13 s< 0)
                                goto label_1416f007d
                            
                            if (r8_13 s>= *(r10_3 - &var_c0 + r10_4 + 0x38))
                                goto label_1416f007d
                            
                            i_1 += 1
                            rcx_27 = &rcx_27[1]
                        while (i_1 s< 3)
                        
                        int32_t* rax_57 = *r14_1
                        zmm0_1 = zmm3
                        zmm1 = zmm3
                        zmm0_1[0] = zmm0_1[0] f* *rax_57
                        zmm1[0] = zmm1[0] f* rax_57[1]
                        zmm3.d = zmm3.d f* rax_57[2]
                        zmm0_1[0] = zmm0_1[0] + zmm10[0]
                        zmm1[0] = zmm1[0] + zmm11[0]
                        zmm3.d = zmm3.d f+ zmm9.d
                        zmm10 = zmm0_1
                        zmm11 = zmm1
                        zmm9 = zmm3
                    
                label_1416f007d:
                    rbx_4.b = 1
                label_1416f0082:
                    j_sub_140a74f90(rax_24)
                    result = zx.q(rbx_4.b)
                    goto label_1416f00c1
        
    label_1416f00a7:
        result.b = 1
    else
        result.b = 1
    
label_1416f00c1:
    __security_check_cookie(rax_1 ^ &var_188)
    return result

int128_t* rbx_1 = &rdi[6]

while (true)
    zmm0.d = (*(rbx_1 - 0x14)).d f- *arg2
    zmm1 = rbx_1[-1].d
    zmm1[0] = zmm1[0] f- arg2[1]
    int32_t r8 = 0
    void* rdx = arg3 + 0x1c
    zmm3 = zx.o(0)
    var_c0 = zmm0.d
    int64_t rax_4 = 0
    zmm0.d = (*(rbx_1 - 0xc)).d f- arg2[2]
    float var_bc_1 = zmm1[0]
    zmm1 = *(rbx_1 - 8)
    zmm1[0] = zmm1[0] f- *arg2
    int32_t var_b8_1 = zmm0.d
    zmm0.d = (*(rbx_1 - 4)).d f- arg2[1]
    var_160 = zmm1[0]
    zmm1 = *rbx_1
    zmm1[0] = zmm1[0] f- arg2[2]
    int32_t var_15c_1 = zmm0.d
    zmm0 = 0x7f7fffff
    float var_158_1 = zmm1[0]
    
    while (true)
        zmm2 = zmm0
        uint128_t* rcx_1 = &var_c0 + rax_4
        zmm4_1 = zmm3.d
        zmm1 = *rcx_1
        
        if (*rdx == 0)
            zmm0 = *(rcx_1 + &arg3[1] - &var_c0)
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm0.d = zmm0.d f* *(&var_160 + rax_4)
        else
            if (zmm1[0] > 0f)
                goto label_1416ef773
            
            if (0f f> *(&var_160 + rax_4))
                goto label_1416ef773
            
            zmm1 = zx.o(0)
            zmm0 = 0x7f7fffff
        
        zmm3 = zmm0
        zmm0 = _mm_max_ss(zmm0.d, zmm1[0])
        zmm3 = _mm_min_ss(zmm3.d, zmm1[0])
        zmm0 = _mm_min_ss(zmm0.d, zmm2.d)
        zmm3 = _mm_max_ss(zmm3.d, zmm4_1)
        
        if (zmm3.d f> zmm0.d)
            goto label_1416ef773
        
        r8 += 1
        rdx += 1
        rax_4 += 4
        
        if (r8 s>= 3)
            if (not(zmm3.d f> *(arg3 + 0x14)) && not(zmm0.d f< 0f))
                var_168 = *rdi
                int64_t* rcx_2 = *arg4
                
                if ((*(*rcx_2 + 0x10))(rcx_2, &var_168, arg3).b == 0)
                label_1416ef8e8:
                    result.b = 0
                    goto label_1416f00c1
            
        label_1416ef773:
            rdi = &rdi[7]
            rbx_1 += 0x1c
            
            if (rdi != rsi_1)
                break
            
            rbx = arg1
            goto label_1416ef788
