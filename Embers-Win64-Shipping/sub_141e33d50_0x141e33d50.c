// 函数: sub_141e33d50
// 地址: 0x141e33d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* r15 = arg2
int64_t* r14 = arg1
sub_141e0acb0(*r15, arg1[2].d, arg2[2].d)
int32_t i_4 = 0
int64_t var_110

if (*(r14 + 0x1a) == 0 && *(r14 + 0x19) != 0)
    int16_t rax_2 = r14[0x13].w
    
    if (rax_2 != 0xffff && r14[0x12] != -1)
        void* rcx_1 = *r15
        
        if (rax_2 != *(rcx_1 + 0x420))
            int16_t rax_3 = _mm_extract_epi16(*(r14 + 0x90), 4) + 1
            
            if (rax_3 == 0xffff)
                rax_3 = 0
            
            if (data_143de5458 == -1 || rax_3 != *(rcx_1 + 0x420))
                int64_t rbx_1 = data_143f39708
                int64_t rcx_2
                
                if (data_143de5480 == 0)
                    rcx_2 = 0
                else
                    rcx_2.b = GetCurrentThreadId() != data_143de5470
                
                if (*(rbx_1 + (rcx_2 << 2)) == 1)
                    var_110 = *r15
                    (**r14)(r14, &var_110)

void* rcx_4 = *r15
r14[0x13].w = *(rcx_4 + 0x420)
r14[0x12] = *(rcx_4 + 0x418)
uint64_t result = zx.q(*(rcx_4 + 0x422))
*(r14 + 0x9a) = result.w
void* rdx_2 = r14[5]

if (rdx_2 != 0)
    int32_t rcx_5 = *(rdx_2 + 0x18)
    
    if (rcx_5 != 0)
        result = sx.q(*(r14 + 0x1c))
        
        if (result.d s>= 0 && result.d s< rcx_5)
            uint64_t rdi
            uint64_t var_30_1 = rdi
            
            if (*(r14 + 0x1a) != 0)
                arg3 = sub_141df39e0(*r15, *(result * 0x58 + *(rdx_2 + 0x10) + 0x1c))
            
            void* r13_1 = &r14[6]
            float zmm7[0x4] = 0x3f800000
            int32_t i = 0
            int32_t i_5 = 0
            int64_t var_c8
            int64_t var_b8_1
            
            do
                int64_t r8_1 = sx.q(*(r14 + 0x1c)) * 0x58
                int64_t rax_11 = r14[5]
                int32_t j_2 = 0xffffffff
                void* var_f0_1 = nullptr
                rdi.b = 0
                void* var_d8_1 = nullptr
                int32_t var_d0_1 = 0
                int32_t var_cc_1 = 3
                var_b8_1 = 0
                int32_t var_b0_1 = 0
                int32_t var_ac_1 = 4
                sub_141e201b0(r14, r15, r8_1 + *(rax_11 + 0x10), &j_2, &var_c8)
                
                if (var_b8_1 != 0)
                    sub_140a74f90(var_b8_1)
                
                int32_t j = j_2
                
                if (j != 0xffffffff && var_f0_1 != 0 && *(var_f0_1 + 8) != 0xffffffff)
                    int64_t rax_13 = sx.q(r14[7].d)
                    char var_118_1 = 1
                    
                    if (rax_13.d s> 0)
                        int64_t rcx_10 = rax_13 * 0xc8
                        int64_t rax_14 = *r13_1
                        
                        if (*(rcx_10 + rax_14 - 6) != 0)
                            sub_141df39e0(*r15, *(rcx_10 + rax_14 - 0x88))
                            j = j_2
                    
                    int64_t r13_2 = sx.q(*(r14 + 0x1c))
                    sub_141df39e0(*r15, *(r13_2 * 0x58 + *(r14[5] + 0x10) + 0x20))
                    sub_141df39e0(*r15, *(sx.q(j) * 0x58 + *(r14[5] + 0x10) + 0x1c))
                    int128_t zmm0_2 = sub_141e24b90(r14, j)
                    int64_t rax_18 = sx.q(r14[7].d)
                    int512_t zmm6_1
                    zmm6_1.o = zmm0_2
                    
                    if (rax_18.d s> 0)
                        int64_t rdx_11 = rax_18 - 1
                        int32_t* r8_5 = r14[6] + 0x34 + rdx_11 * 0xc8
                        
                        while (*r8_5 != j)
                            r8_5 -= 0xc8
                            int64_t temp2_1 = rdx_11
                            rdx_11 -= 1
                            
                            if (temp2_1 - 1 s< 0)
                                break
                    
                    void* rcx_18 = &r14[6]
                    int64_t rbx_2 = sx.q(*(rcx_18 + 8))
                    void* rdi_3 = (sx.q(*(var_f0_1 + 8)) << 6) + *(r14[5] + 0x20)
                    int32_t rax_21 = (rbx_2 + 1).d
                    *(rcx_18 + 8) = rax_21
                    
                    if (rax_21 s> *(rcx_18 + 0xc))
                        sub_1405c5190(rcx_18)
                        rcx_18 = &r14[6]
                    
                    int64_t rbx_3 = rbx_2 * 0xc8
                    int64_t* rbx_4 = rbx_3 + *rcx_18
                    
                    if (rbx_3 != neg.q(*rcx_18))
                        *rbx_4 = 0
                        rbx_4[2] = 0
                        rbx_4[3] = 0
                        rbx_4[4].d = 0xffffffff
                        *(rbx_4 + 0x24) = 0
                        rbx_4[5] = 0
                        rbx_4[6].d = j
                        *(rbx_4 + 0x34) = r13_2.d
                        rbx_4[7].d = *(rdi_3 + 0x14)
                        *(rbx_4 + 0x3c) = *(rdi_3 + 0x18)
                        rbx_4[8].d = *(rdi_3 + 0x1c)
                        __builtin_memset(&rbx_4[9], 0, 0x20)
                        rbx_4[0xf] = 0
                        rbx_4[0x10].d = 0
                        *(rbx_4 + 0x84) = 3
                        float zmm6_2
                        float zmm8_1
                        float zmm9_1
                        zmm6_2, zmm7, zmm8_1, zmm9_1 = sub_141ddd6c0(&rbx_4[0x11], 0x3e4ccccd)
                        float zmm2_2 = zmm7[0]
                        rbx_4[0x17] = *(rdi_3 + 0x30)
                        zmm2_2 = zmm2_2 - zmm6_2
                        char rcx_20 = *(rdi_3 + 0x20)
                        rbx_4[0x18].b = rcx_20
                        char rax_26 = *(rdi_3 + 0x38)
                        *(rbx_4 + 0xc1) = rax_26
                        *(rbx_4 + 0xc2) = 1
                        float zmm1_3
                        
                        if (rax_26 != 1)
                            if (rcx_20 == 2)
                                float zmm0_3 = zmm2_2 * zmm2_2
                                zmm1_3 =
                                    zmm0_3 * zmm2_2 * zmm8_1 - (zmm0_3 + zmm0_3) + zmm2_2 * zmm9_1
                            else if (zmm2_2 >= 0f)
                                zmm1_3 = _mm_min_ss(zmm2_2, zmm7[0])
                            else
                                zmm1_3 = (zx.o(0)).d
                            
                            zmm1_3 = zmm1_3 f* *(rdi_3 + 0x10)
                        else
                            zmm1_3 = (zx.o(0)).d
                        
                        rbx_4[1].d = zmm1_3
                        sub_141defc90(&rbx_4[0x11], zmm1_3)
                        sub_141defc80(&rbx_4[0x11], rbx_4[0x18].b)
                        sub_141defe60(&rbx_4[0x11], *(rdi_3 + 0x28))
                        sub_141df0060(&rbx_4[0x11], (zx.o(0)).d, zmm7[0])
                        
                        if (var_f0_1 != 0)
                            sub_141e29d20(rbx_4, r15, var_f0_1)
                            
                            if (*(rdi_3 + 0x38) == 1)
                                int64_t* rax_27
                                int512_t zmm1_5
                                rax_27, zmm1_5 = sub_141e10ce0(r15)
                                
                                if (rax_27 != 0)
                                    zmm1_5.o = *(rdi_3 + 0x10)
                                    (*(*rax_27 + 0xd0))(rax_27, zmm1_5)
                            
                            void* rdi_4 = &rbx_4[0xd]
                            void var_e8
                            
                            if (rdi_4 != &var_e8)
                                int64_t r12 = sx.q(var_d0_1)
                                int32_t r8_7 = *(rdi_4 + 0x1c)
                                *(rdi_4 + 0x18) = r12.d
                                
                                if (r12.d != 0 || r8_7 != 0)
                                    sub_141e30770(rdi_4, r12.d, r8_7)
                                    void* rax_28 = *(rdi_4 + 0x10)
                                    void* rdx_18 = &var_e8
                                    
                                    if (var_d8_1 != 0)
                                        rdx_18 = var_d8_1
                                    
                                    if (rax_28 != 0)
                                        rdi_4 = rax_28
                                    
                                    memcpy(rdi_4, rdx_18, (r12 << 2).d)
                                else
                                    *(rdi_4 + 0x1c) = 3
                                
                                i_4 = 0
                            
                            if (*(r14 + 0x1a) == 0)
                                sub_141df39e0(*r15, rbx_4[7].d)
                    
                    sub_141e312c0(r14, r15, j)
                    r13_1 = &r14[6]
                    rdi = zx.q(var_118_1)
                    i = i_5 + 1
                    i_5 = i
                
                if (var_d8_1 != 0)
                    sub_140a74f90(var_d8_1)
                
                if (rdi.b == 0)
                    break
            while (i s< *(r14 + 0x14))
            
            int512_t zmm6
            zmm6.o = arg3
            
            if (*(r14 + 0x1a) != 0)
                if (r14[3].b != 0)
                    sub_141e30220(r13_1, 0)
                
                *(r14 + 0x1a) = 0
            
            result = zx.q(*(r14 + 0x5c))
            void* rbx_6 = &r14[0xa]
            *(rbx_6 + 8) = 0
            
            if (result.d s< 0 && result.d != 0)
                result = sub_1405dadb0(rbx_6, 0)
            
            float zmm0_1[0x4]
            
            if (r14[7].d s> 0)
                int32_t rdi_5 = 0
                int32_t var_114_1 = 0
                int128_t* rsi_1 = nullptr
                int32_t r9_2
                
                do
                    void* r13_4 = *r13_1
                    char var_118_2 = 0
                    float zmm1_1[0x4]
                    
                    if (*(rsi_1 + r13_4 + 0xc2) != 0)
                        zmm0_1 = r15[3].d
                        void* rbx_7 = rsi_1 + r13_4
                        zmm0_1[0] = zmm0_1[0] f+ *(rsi_1 + r13_4)
                        *(rsi_1 + r13_4) = zmm0_1[0]
                        float zmm7_1[0x4] = sub_141df01a0(rbx_7 + 0x88, r15[3].d)
                        int32_t zmm1_6 = *(rsi_1 + r13_4 + 8)
                        float zmm0_4[0x4] = zmm7_1
                        
                        if (not(zmm1_6 f<= 0f))
                            zmm0_4 = *(rsi_1 + r13_4)
                            zmm0_4[0] = zmm0_4[0] f/ zmm1_6
                        
                        *(rsi_1 + r13_4 + 4) =
                            sub_141de16d0(zmm0_4, *(rsi_1 + r13_4 + 0xac), *(rbx_7 + 0x88))
                        result, zmm7 = sub_141ded470(rbx_7 + 0x88)
                        
                        if (result.b != 0)
                            *(rsi_1 + r13_4 + 0xc2) = 0
                            var_118_2 = 1
                        
                        if (*(rsi_1 + r13_4 + 0xb8) != 0)
                            int32_t rax_29 = 0
                            var_110.d = 0
                            int64_t* rcx_38 = r13_4 + 0x58 + rsi_1
                            
                            for (int64_t i_1 = 0; i_1 s< 0x80; )
                                int64_t r14_1 = *rcx_38
                                zmm1_1 = *(rsi_1 + r13_4 + 4)
                                
                                if (rax_29 != 0)
                                    zmm7[0] = zmm7[0] - zmm1_1[0]
                                    zmm1_1 = zmm7
                                
                                bool cond:5_1 = *(i_1 + r14_1 + 0x38) s<= 0
                                int32_t j_1 = 0
                                *(i_1 + r14_1 + 0x10) = zmm1_1[0]
                                
                                if (not(cond:5_1))
                                    float* r15_1 = nullptr
                                    
                                    do
                                        int64_t r12_1 = *(i_1 + r14_1 + 0x30)
                                        zmm0_1 = sub_141e41040(*(rsi_1 + r13_4 + 0xb8), j_1)
                                        rax_29 = var_110.d
                                        
                                        if (rax_29 != 0)
                                            zmm7[0] = zmm7[0] / zmm0_1[0]
                                            zmm0_1 = zmm7
                                        
                                        zmm0_1[0] = zmm0_1[0] f* *(i_1 + r14_1 + 0x10)
                                        j_1 += 1
                                        *(r15_1 + r12_1) = zmm0_1[0]
                                        r15_1 = &r15_1[1]
                                    while (j_1 s< *(i_1 + r14_1 + 0x38))
                                    
                                    i_4 = 0
                                    rcx_38 = r13_4 + 0x58 + rsi_1
                                
                                rax_29 += 1
                                i_1 += 0x40
                                var_110.d = rax_29
                            
                            result, zmm7 = sub_141e653f0(rcx_38)
                            r14 = arg1
                            r15 = arg2
                            rdi_5 = var_114_1
                    
                    if (*(rsi_1 + r13_4 + 0xc2) == 0 || var_118_2 == 0)
                        int64_t rbx_8 = r14[6]
                        r13_1 = &r14[6]
                        
                        if (*(rsi_1 + rbx_8 + 0xc2) != 0)
                            uint32_t rcx_44 = zx.d(*(rsi_1 + rbx_8 + 0xc1))
                            
                            if (rcx_44 == 0)
                                int64_t rax_39 = *r15
                                zmm1_1 = r15[3].d
                                int32_t rdx_30 = *(rsi_1 + rbx_8 + 0x34)
                                var_b8_1:4.d = (*(r15 + 0x14))[0]
                                zmm7[0] = zmm7[0] f- *(rsi_1 + rbx_8 + 4)
                                var_c8 = rax_39
                                float var_b0_3 = zmm1_1[0]
                                int64_t var_c0_2 = r15[1]
                                zmm7[0] = zmm7[0] f* r15[2].d
                                var_b8_1.d = zmm7[0]
                                sub_141e33530(r14, rdx_30, &var_c8)
                                zmm1_1 = r15[3].d
                                int32_t rdx_31 = *(rsi_1 + rbx_8 + 0x30)
                                var_b8_1:4.d = *(r15 + 0x14)
                                float zmm0_6 = *(rsi_1 + rbx_8 + 4) f* r15[2].d
                                var_c8 = *r15
                                float var_b0_4 = zmm1_1[0]
                                var_b8_1.d = zmm0_6
                                int64_t var_c0_3 = r15[1]
                                result = sub_141e33530(r14, rdx_31, &var_c8)
                            else if (rcx_44 == 1)
                                result = sub_141e33530(r14, *(rsi_1 + rbx_8 + 0x30), r15)
                            else if (rcx_44 == 2 && *(rsi_1 + rbx_8 + 0x20) != 0xffffffff)
                                int64_t* rcx_46 = *(rsi_1 + rbx_8 + 0x28)
                                
                                if (rcx_46 != 0)
                                    result = (*(*rcx_46 + 0x10))(rcx_46, r15)
                                
                                for (int32_t i_2 = 0; i_2 s>= 0; i_2 += 1)
                                    if (i_2 s>= *(rsi_1 + rbx_8 + 0x50))
                                        break
                                    
                                    void* rdx_27 = *(*(rsi_1 + rbx_8 + 0x48) + (sx.q(i_2) << 3))
                                    result = zx.q(*(rdx_27 + 0x51))
                                    
                                    if (result.b == 0 || (result.b == 2 && *(rdx_27 + 0x4c) s> 0))
                                        result.b = 1
                                    else
                                        result.b = 0
                                    
                                    if (result.b != 0)
                                        char rax_36 = *(rdx_27 + 0x50)
                                        int32_t rdx_28
                                        
                                        if (rax_36 != 0)
                                            rdx_28 = *(rsi_1 + rbx_8 + 0x30)
                                        else
                                            rdx_28 = *(rsi_1 + rbx_8 + 0x34)
                                        
                                        zmm0_1 = *(rsi_1 + rbx_8 + 4)
                                        float zmm2_1
                                        
                                        if (rax_36 != 0)
                                            zmm2_1 = zmm0_1[0]
                                        else
                                            zmm2_1 = zmm7[0] - zmm0_1[0]
                                        
                                        zmm2_1 = zmm2_1 f* r15[2].d
                                        var_c8 = *r15
                                        var_b8_1.d = zmm2_1
                                        int64_t var_c0_1 = r15[1]
                                        var_b8_1:4.d = (*(r15 + 0x14))[0]
                                        float var_b0_2 = r15[3].d[0]
                                        result = sub_141e33530(r14, rdx_28, &var_c8)
                                
                                rdi_5 = var_114_1
                    else
                        r13_1 = &r14[6]
                        result = zx.q(r14[7].d - 1)
                        
                        if (rdi_5 == result.d)
                            sub_141df39e0(*r15, *(rsi_1 + *r13_1 + 0x3c))
                            result = sub_141df39e0(*r15, 
                                *(sx.q(*(r14 + 0x1c)) * 0x58 + *(r14[5] + 0x10) + 0x24))
                    
                    r9_2 = r14[7].d
                    rdi_5 += 1
                    rsi_1 += 0xc8
                    var_114_1 = rdi_5
                while (rdi_5 s< r9_2)
                
                int32_t r9_3 = r9_2 - 1
                
                if (r9_2 - 1 s>= 0)
                    int64_t rdx_32 = sx.q(r9_3)
                    char* r8_18 = *r13_1 + 0xc2 + rdx_32 * 0xc8
                    int64_t temp5_1
                    
                    do
                        if (*r8_18 == 0)
                            int32_t r8_19 = r9_3 + 1
                            r9_3.b = 1
                            result = sub_141e2fed0(r13_1, 0, r8_19, r9_3.b)
                            break
                        
                        r9_3 -= 1
                        r8_18 -= 0xc8
                        temp5_1 = rdx_32
                        rdx_32 -= 1
                    while (temp5_1 - 1 s>= 0)
                
                rbx_6 = &r14[0xa]
            
            if (r14[7].d == 0)
                void* r8_20 = r14[5]
                int64_t rdx_33 = sx.q(*(r14 + 0x1c))
                
                if (r8_20 != 0 && rdx_33.d s< *(r8_20 + 0x18))
                    result = *(r8_20 + 0x10)
                
                if (r8_20 == 0 || rdx_33.d s>= *(r8_20 + 0x18)
                        || *(rdx_33 * 0x58 + result + 0x28) == 0)
                    int32_t* i_3 = *rbx_6
                    result = sx.q(*(rbx_6 + 8))
                    void* r8_21
                    
                    for (r8_21 = &i_3[result]; i_3 != r8_21; i_3 = &i_3[1])
                        if (*i_3 == rdx_33.d)
                            goto label_141e34790
                    
                    result = r14[8]
                    int64_t* rcx_57 = *(result + rdx_33 * 0x10 + 8)
                    
                    if (rcx_57 != 0)
                        result = (*(*rcx_57 + 0x10))(rcx_57, r15, r8_21)
            
        label_141e34790:
            bool cond:4_1 = r14[9].d s<= 0
            zmm0_1 = r15[3].d
            zmm0_1[0] = zmm0_1[0] f+ r14[4].d
            r14[4].d = zmm0_1[0]
            
            if (not(cond:4_1))
                do
                    int32_t zmm0_7
                    zmm0_7, result = sub_141e24b90(r14, i_4)
                    
                    if (not(zmm0_7 f<= 0f))
                        int32_t zmm1_7
                        
                        if (i_4 != *(r14 + 0x1c))
                            zmm1_7 = (zx.o(0)).d
                        else
                            zmm1_7 = r14[4].d
                        
                        int32_t* var_128_1
                        var_128_1.d = zmm1_7
                        result = sub_141e0acd0(*r15, r14[2].d, i_4, zmm0_7)
                    
                    i_4 += 1
                while (i_4 s< r14[9].d)

__security_check_cookie(rax_1 ^ &var_148)
return result
