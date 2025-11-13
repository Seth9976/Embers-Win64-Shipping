// 函数: sub_14266a5a0
// 地址: 0x14266a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint64_t result
int32_t zmm6_1
result, zmm6_1 = sub_141ddad60(arg1, arg2, arg3, arg4)
int64_t rdx = sx.q(arg1[0x61].d)
int64_t* rsi_2 = arg1[0x60] - 0x10 + (rdx << 4)
int32_t rdi = (rdx - 1).d

if (rdi s>= 0)
    int64_t rbx_2 = sx.q(rdi) << 4
    int32_t temp2_1
    
    do
        if (*rsi_2 == 0)
        label_14266a637:
            int64_t* rcx_3 = *(rbx_2 + arg1[0x60] + 8)
            
            if (rcx_3 != 0)
                int32_t rax_3 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (rax_3 == 1 && rcx_3 != 0)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            int32_t rdx_5 = arg1[0x61].d
            int32_t rcx_6 = rdx_5 - rdi - 1
            
            if (rcx_6 s>= 1)
                rcx_6 = 1
            
            if (rcx_6 != 0)
                int64_t rax_5 = arg1[0x60]
                memcpy(rax_5 + rbx_2, (sx.q(rdx_5 - rcx_6) << 4) + rax_5, rcx_6 << 4)
                rdx_5 = arg1[0x61].d
            
            result = zx.q(rdx_5 - 1)
            arg1[0x61].d = result.d
        else
            void* rcx_2 = rsi_2[1]
            
            if (rcx_2 == 0)
                goto label_14266a637
            
            result = 0
            
            if (0 == *(rcx_2 + 8))
                *(rcx_2 + 8) = 0
            else
                result = zx.q(*(rcx_2 + 8))
            
            if (result.d s<= 0)
                goto label_14266a637
        
        rbx_2 -= 0x10
        rsi_2 -= 0x10
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

uint128_t zmm0 = arg1[0x66].d
int128_t zmm7 = zx.o(0)

if (not(zmm0.d f< 0f))
    zmm0.d = zmm0.d f- zmm6_1
    arg1[0x66].d = zmm0.d
    
    if (not(zmm0.d f> 0f))
        result = zx.q(arg1[0x63].d)
        
        if (result.d s> *(arg1 + 0x32c))
            sub_1405a5130(&arg1[0x64], result.d)
            result = zx.q(arg1[0x63].d)
        
        int32_t r13_1 = (result - 1).d
        
        if (r13_1 s>= 0)
            int64_t r15_2 = sx.q(r13_1) << 4
            int64_t r12_1 = r15_2
            int32_t temp7_1
            
            do
                int64_t rcx_9 = arg1[0x62]
                
                if (*(r15_2 + rcx_9) == 0)
                label_14266aa0a:
                    int64_t* rcx_27 = *(r12_1 + arg1[0x62] + 8)
                    
                    if (rcx_27 != 0)
                        int32_t rax_35 = *(rcx_27 + 0xc)
                        *(rcx_27 + 0xc) -= 1
                        
                        if (rax_35 == 1 && rcx_27 != 0)
                            (*(*rcx_27 + 8))(rcx_27, 1)
                    
                    int32_t rdx_19 = arg1[0x63].d
                    int32_t rcx_30 = rdx_19 - r13_1 - 1
                    
                    if (rcx_30 s>= 1)
                        rcx_30 = 1
                    
                    if (rcx_30 != 0)
                        int64_t rax_37 = arg1[0x62]
                        memcpy(r12_1 + rax_37, (sx.q(rdx_19 - rcx_30) << 4) + rax_37, rcx_30 << 4)
                        rdx_19 = arg1[0x63].d
                    
                    arg1[0x63].d = rdx_19 - 1
                else
                    void* rcx_10 = *(r15_2 + rcx_9 + 8)
                    
                    if (rcx_10 == 0)
                        goto label_14266aa0a
                    
                    int32_t rax_6 = 0
                    
                    if (0 == *(rcx_10 + 8))
                        *(rcx_10 + 8) = 0
                    else
                        rax_6 = *(rcx_10 + 8)
                    
                    if (rax_6 s<= 0)
                        goto label_14266aa0a
                    
                    int64_t rdx_7 = arg1[0x62]
                    void* rdi_1 = nullptr
                    int64_t* rbx_3 = *(r15_2 + rdx_7 + 8)
                    
                    if (rbx_3 != 0)
                        int32_t rax_7 = 0
                        bool z_1
                        
                        if (0 == rbx_3[1].d)
                            rbx_3[1].d = 0
                            z_1 = true
                        else
                            rax_7 = rbx_3[1].d
                            z_1 = false
                        
                        if (z_1)
                        label_14266a795:
                            rbx_3 = nullptr
                        else
                            while (true)
                                bool z_2
                                
                                if (rax_7 == rbx_3[1].d)
                                    rbx_3[1].d = rax_7 + 1
                                    z_2 = true
                                else
                                    rbx_3[1].d
                                    z_2 = false
                                
                                if (z_2)
                                    if (rbx_3 != 0)
                                        rdi_1 = *(r15_2 + rdx_7)
                                    
                                    break
                                
                                rax_7 = 0
                                bool z_3
                                
                                if (0 == rbx_3[1].d)
                                    rbx_3[1].d = 0
                                    z_3 = true
                                else
                                    rax_7 = rbx_3[1].d
                                    z_3 = false
                                
                                if (z_3)
                                    goto label_14266a795
                    
                    char rax_9
                    
                    if ((*(rdi_1 + 0x98) & 0x400) != 0)
                        rax_9 = sub_140d3e110(rdi_1 + 0x40)
                    
                    if ((*(rdi_1 + 0x98) & 0x400) == 0 || rax_9 == 0)
                        int64_t* rcx_20 = *(r12_1 + arg1[0x62] + 8)
                        
                        if (rcx_20 != 0)
                            int32_t rax_26 = *(rcx_20 + 0xc)
                            *(rcx_20 + 0xc) -= 1
                            
                            if (rax_26 == 1 && rcx_20 != 0)
                                (*(*rcx_20 + 8))(rcx_20, 1)
                        
                        int32_t rdx_14 = arg1[0x63].d
                        int32_t rcx_23 = rdx_14 - r13_1 - 1
                        
                        if (rcx_23 s>= 1)
                            rcx_23 = 1
                        
                        if (rcx_23 != 0)
                            int64_t rax_28 = arg1[0x62]
                            memcpy(r12_1 + rax_28, (sx.q(rdx_14 - rcx_23) << 4) + rax_28, 
                                rcx_23 << 4)
                            rdx_14 = arg1[0x63].d
                        
                        arg1[0x63].d = rdx_14 - 1
                    else
                        int64_t* rcx_13 = *(rdi_1 + 0x48)
                        int64_t* rax_11
                        uint128_t zmm1
                        void var_158
                        
                        if (rcx_13 == 0)
                            void* rcx_15 = *(sub_140d3c6e0(rdi_1 + 0x40) + 0x130)
                            uint64_t* rax_13
                            
                            if (rcx_15 == 0)
                                int32_t var_18c_1 = data_143dbb200
                                uint64_t var_194
                                rax_13 = &var_194
                                var_194 = data_143dbb1f8.q
                            else
                                zmm1 = *(rcx_15 + 0x1d0)
                                int32_t var_1a0
                                rax_13 = &var_1a0
                                var_1a0 = zmm1.d
                                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                uint128_t var_128_1 = zmm1
                                int32_t var_198_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                                int32_t var_19c_1 = zmm0.d
                            
                            int32_t var_180_1 = rax_13[1].d
                            uint64_t var_188
                            rax_11 = &var_188
                            var_188 = *rax_13
                        else
                            rax_11 = (*(*rcx_13 + 0x18))(rcx_13, &var_158)
                        zmm1 = zx.o(*rax_11)
                        zmm0 = zmm1
                        float zmm2 = *(rdi_1 + 0xf0) f- zmm1.d
                        uint64_t var_1c0_1 = zmm1.q
                        zmm1.d = (*(rdi_1 + 0xf8)).d f- rax_11[1].d
                        float zmm3 = *(rdi_1 + 0xf4) f- _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                        zmm1.d = zmm1.d f* zmm1.d
                        int32_t rax_17
                        rax_17.b = zmm3 * zmm3 + zmm2 * zmm2 f+ zmm1.d f> *(rdi_1 + 0xec)
                        
                        if (rax_17 == 1)
                            if (rbx_3 != 0)
                                rbx_3[1].d += 1
                                *(rbx_3 + 0xc) += 1
                                rbx_3[1].d -= 1
                                
                                if (rbx_3[1].d == 1)
                                    (**rbx_3)(rbx_3)
                                    int32_t rax_21 = *(rbx_3 + 0xc)
                                    *(rbx_3 + 0xc) -= 1
                                    
                                    if (rax_21 == 1)
                                        (*(*rbx_3 + 8))(rbx_3, 1)
                            
                            int64_t rsi_3 = sx.q(arg1[0x65].d)
                            int32_t rax_23 = (rsi_3 + 1).d
                            arg1[0x65].d = rax_23
                            
                            if (rax_23 s> *(arg1 + 0x32c))
                                sub_1405a4df0(&arg1[0x64])
                            
                            int64_t rax_24 = arg1[0x64]
                            int64_t rcx_19 = rsi_3 * 3
                            *(rax_24 + (rcx_19 << 3)) = rdi_1
                            *(rax_24 + (rcx_19 << 3) + 8) = rbx_3
                            *(rax_24 + (rcx_19 << 3) + 0x10) = 0
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t rax_32 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (rax_32 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                
                r12_1 -= 0x10
                r15_2 -= 0x10
                temp7_1 = r13_1
                r13_1 -= 1
            while (temp7_1 - 1 s>= 0)
            result = zx.q(arg1[0x63].d)
        
        if (result.d s> 0)
            result = zx.q(arg1[0x56].d)
            arg1[0x66].d = result.d

if (arg1[0x65].d s> 0)
    void* rax_40 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_40 != 0)
        zmm7 = *(rax_40 + 0x520)
    
    (*(*arg1 + 0x150))(arg1)
    void* r13_2 = &arg1[0x64]
    void* var_1d8 = nullptr
    int32_t rbx_4 = *(r13_2 + 8)
    int64_t rdi_2 = *r13_2
    int32_t var_1d0_1 = rbx_4
    
    if (rbx_4 != 0)
        sub_140808f70(&var_1d8, rbx_4, 0)
        void* rax_42 = var_1d8
        int32_t* rdi_3 = rdi_2 - rax_42
        void* rcx_35 = rax_42 + 0x10
        int32_t i
        
        do
            *(rcx_35 - 0x10) = *(rdi_3 + rcx_35 - 0x10)
            void* rax_44 = *(rdi_3 + rcx_35 - 8)
            *(rcx_35 - 8) = rax_44
            
            if (rax_44 != 0)
                *(rax_44 + 0xc) += 1
            
            *rcx_35 = *(rdi_3 + rcx_35)
            rcx_35 += 0x18
            i = rbx_4
            rbx_4 -= 1
        while (i != 1)
        rbx_4 = var_1d0_1
    else
        int32_t var_1cc_1 = 0
    
    if (rbx_4 s<= 0x3e8)
        result = zx.q(*(r13_2 + 0xc))
        void* rcx_40 = *r13_2
        int32_t i_7 = *(r13_2 + 8)
        
        if (result.d s< 0)
            if (i_7 != 0)
                void* rbx_9 = rcx_40 + 8
                int32_t i_1
                
                do
                    int64_t* rcx_42 = *rbx_9
                    
                    if (rcx_42 != 0)
                        int32_t rax_53 = *(rcx_42 + 0xc)
                        *(rcx_42 + 0xc) -= 1
                        
                        if (rax_53 == 1 && rcx_42 != 0)
                            (*(*rcx_42 + 8))(rcx_42, 1)
                    
                    rbx_9 += 0x18
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
                result = zx.q(*(r13_2 + 0xc))
                rbx_4 = var_1d0_1
            
            *(r13_2 + 8) = 0
            
            if (result.d != 0)
                result = sub_1405a5130(r13_2, 0)
        else
            if (i_7 != 0)
                int64_t** rbx_8 = rcx_40 + 8
                int32_t i_2
                
                do
                    int64_t* rcx_41 = *rbx_8
                    
                    if (rcx_41 != 0)
                        result = zx.q(*(rcx_41 + 0xc))
                        *(rcx_41 + 0xc) -= 1
                        
                        if (result.d == 1 && rcx_41 != 0)
                            result = (*(*rcx_41 + 8))(rcx_41, 1)
                    
                    rbx_8 = &rbx_8[3]
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
                rbx_4 = var_1d0_1
            
            *(r13_2 + 8) = 0
    else
        if (rbx_4 != 0x3e8)
            void* r15_3 = var_1d8
            int32_t i_6 = rbx_4 - 0x3e8
            int64_t* rbx_5 = r15_3 + 0x5dc8
            int32_t i_3
            
            do
                int64_t* rcx_36 = *rbx_5
                
                if (rcx_36 != 0)
                    int32_t rax_46 = *(rcx_36 + 0xc)
                    *(rcx_36 + 0xc) -= 1
                    
                    if (rax_46 == 1 && rcx_36 != 0)
                        (*(*rcx_36 + 8))(rcx_36, 1)
                
                rbx_5 = &rbx_5[3]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            int32_t rbx_7 = var_1d0_1 - (rbx_4 - 0x3e8)
            
            if (rbx_7 != 0x3e8)
                memmove(r15_3 + 0x5dc0, var_1d8 + sx.q(rbx_4) * 0x18, (rbx_7 - 0x3e8) * 0x18)
            
            var_1d0_1 = rbx_7
            sub_1405fde90(&var_1d8)
            rbx_4 = var_1d0_1
        
        result = sub_1426654d0(r13_2, 0, 0x3e8, 1)
    
    bool cond:3_1 = rbx_4 == 0
    
    if (rbx_4 s> 0)
        result = zx.q(rbx_4)
        void* r12_3 = var_1d8 + 0x10
        uint64_t var_1c0_2 = result
        uint64_t i_4
        
        do
            int64_t* rdi_4 = *(r12_3 - 8)
            
            if (rdi_4 != 0)
                result = 0
                bool z_4
                
                if (0 == rdi_4[1].d)
                    rdi_4[1].d = 0
                    z_4 = true
                else
                    result = zx.q(rdi_4[1].d)
                    z_4 = false
                
                if (not(z_4))
                    bool z_6
                    
                    do
                        bool z_5
                        
                        if (result.d == rdi_4[1].d)
                            rdi_4[1].d = (result + 1).d
                            z_5 = true
                        else
                            rdi_4[1].d
                            z_5 = false
                        
                        if (z_5)
                            int64_t* rsi_5 = *(r12_3 - 0x10)
                            
                            if (rsi_5 != 0)
                                void* rax_58 = sub_140d3c6e0(&rsi_5[0x15])
                                
                                if (rax_58 != 0)
                                    void* rax_60 = sub_140d21950(rax_58, sub_142548ca0())
                                    
                                    if (rax_60 == 0)
                                        goto label_14266ade6
                                    
                                    int64_t rdx_24 = *rax_60
                                    
                                    if ((*(rdx_24 + 0x40))(rax_60, rdx_24) == 0)
                                        goto label_14266ade6
                                    
                                    int64_t rbx_11 = sx.q(*(r13_2 + 8))
                                    int32_t rax_62 = (rbx_11 + 1).d
                                    *(r13_2 + 8) = rax_62
                                    
                                    if (rax_62 s> *(r13_2 + 0xc))
                                        sub_1405a4df0(r13_2)
                                    
                                    int64_t rcx_51 = rbx_11 * 3
                                    int64_t rdx_26 = *r13_2
                                    *(rdx_26 + (rcx_51 << 3)) = *(r12_3 - 0x10)
                                    void* rax_64 = *(r12_3 - 8)
                                    *(rdx_26 + (rcx_51 << 3) + 8) = rax_64
                                    
                                    if (rax_64 != 0)
                                        *(rax_64 + 0xc) += 1
                                    
                                    *(rdx_26 + (rcx_51 << 3) + 0x10) = *r12_3
                                    goto label_14266ad28
                                
                            label_14266ade6:
                                int64_t* var_178 = rsi_5
                                int64_t* var_170_1 = rdi_4
                                rdi_4[1].d += 1
                                void var_118
                                sub_142642a00(&var_118, &var_178, nullptr)
                                rdi_4[1].d += 1
                                rdi_4[1].d += 1
                                uint128_t zmm0_1 = rsi_5.o
                                int64_t* var_1b0_1
                                uint128_t var_d0
                                var_1b0_1.o = var_d0
                                void* rcx_53 = _mm_bsrli_si128(var_d0, 8).q
                                uint128_t var_88_1 = zmm0_1
                                var_d0 = zmm0_1
                                
                                if (rcx_53 != 0)
                                    int32_t rax_66 = *(rcx_53 + 8)
                                    *(rcx_53 + 8) -= 1
                                    
                                    if (rax_66 == 1)
                                        (**rdi_4)(rdi_4)
                                        int32_t rax_68 = *(rdi_4 + 0xc)
                                        *(rdi_4 + 0xc) -= 1
                                        
                                        if (rax_68 == 1)
                                            (*(*rdi_4 + 8))(rdi_4, 1)
                                
                                rdi_4[1].d -= 1
                                
                                if (rdi_4[1].d == 1)
                                    (**rdi_4)(rdi_4)
                                    int32_t rax_72 = *(rdi_4 + 0xc)
                                    *(rdi_4 + 0xc) -= 1
                                    
                                    if (rax_72 == 1)
                                        (*(*rdi_4 + 8))(rdi_4, 1)
                                
                                void var_148
                                void var_c0
                                int64_t* rax_74 = arg1[0x57](&var_148, &var_c0, &var_118)
                                void* rcx_59 = *rax_74
                                int64_t* rbx_13 = rax_74[1]
                                rax_74[1] = 0
                                *rax_74 = 0
                                int32_t r13_3 = rax_74[2].d
                                int64_t* var_140
                                
                                if (var_140 != 0)
                                    var_140[1].d -= 1
                                    
                                    if (var_140[1].d == 1)
                                        (**var_140)(var_140)
                                        int32_t rax_77 = *(var_140 + 0xc)
                                        *(var_140 + 0xc) -= 1
                                        
                                        if (rax_77 == 1)
                                            (*(*var_140 + 8))(var_140, 1)
                                
                                rsi_5[0x1d].d = zmm7.d
                                
                                if (r13_3 == 3 || (r13_3 != 1 && rcx_59 != 0
                                        && ((*(rcx_59 + 0x98) u>> 2).b & 1) != 0))
                                    sub_14266cb10(rsi_5)
                                    int32_t r15_5 = *r12_3
                                    int32_t rax_83 = (rsi_5[0x13].d & 0xfffffeff) | 1
                                    rsi_5[0x13].d = rax_83
                                    
                                    if (test_bit(rax_83, 9))
                                        (*(*rsi_5 + 0x60))(rsi_5, zx.q(r15_5))
                                    
                                    sub_142649ec0(&rsi_5[0x10], rsi_5, 
                                        *(&data_143451450 + (zx.q(r15_5.b) << 2)))
                                    
                                    if (*r12_3 == 1)
                                        int64_t* var_168 = rsi_5
                                        int64_t* var_160_1 = rdi_4
                                        rdi_4[1].d += 1
                                        sub_1426638c0(arg1, &var_168)
                                else
                                    sub_142649ec0(&rsi_5[0x10], rsi_5, 5)
                                    rsi_5[0x13].d &= 0xfffffeff
                                
                                if (rbx_13 != 0)
                                    rbx_13[1].d -= 1
                                    
                                    if (rbx_13[1].d == 1)
                                        (**rbx_13)(rbx_13)
                                        int32_t rax_88 = *(rbx_13 + 0xc)
                                        *(rbx_13 + 0xc) -= 1
                                        
                                        if (rax_88 == 1)
                                            (*(*rbx_13 + 8))(rbx_13, 1)
                                
                                int64_t var_a0
                                
                                if (var_a0 != 0)
                                    sub_140a74f90(var_a0)
                                
                                int64_t* rbx_14 = var_d0:8.q
                                
                                if (rbx_14 != 0)
                                    rbx_14[1].d -= 1
                                    
                                    if (rbx_14[1].d == 1)
                                        (**rbx_14)(rbx_14)
                                        int32_t rax_92 = *(rbx_14 + 0xc)
                                        *(rbx_14 + 0xc) -= 1
                                        
                                        if (rax_92 == 1)
                                            (*(*rbx_14 + 8))(rbx_14, 1)
                                
                                int64_t* var_f0
                                
                                if (var_f0 != 0)
                                    var_f0[1].d -= 1
                                    
                                    if (var_f0[1].d == 1)
                                        (**var_f0)(var_f0)
                                        int32_t rax_96 = *(var_f0 + 0xc)
                                        *(var_f0 + 0xc) -= 1
                                        
                                        if (rax_96 == 1)
                                            (*(*var_f0 + 8))(var_f0, 1)
                                
                                result = zx.q(rdi_4[1].d)
                                rdi_4[1].d -= 1
                                
                                if (result.d == 1)
                                    (**rdi_4)(rdi_4)
                                    result = zx.q(*(rdi_4 + 0xc))
                                    *(rdi_4 + 0xc) -= 1
                                    
                                    if (result.d == 1)
                                        result = (*(*rdi_4 + 8))(rdi_4, 1)
                                
                                r13_2 = &arg1[0x64]
                            else
                            label_14266ad28:
                                result = zx.q(rdi_4[1].d)
                                rdi_4[1].d -= 1
                                
                                if (result.d == 1)
                                    (**rdi_4)(rdi_4)
                                    result = zx.q(*(rdi_4 + 0xc))
                                    *(rdi_4 + 0xc) -= 1
                                    
                                    if (result.d == 1)
                                        result = (*(*rdi_4 + 8))(rdi_4, 1)
                            
                            break
                        
                        result = 0
                        
                        if (0 == rdi_4[1].d)
                            rdi_4[1].d = 0
                            z_6 = true
                        else
                            result = zx.q(rdi_4[1].d)
                            z_6 = false
                    while (not(z_6))
            
            r12_3 += 0x18
            i_4 = var_1c0_2
            var_1c0_2 -= 1
        while (i_4 != 1)
        rbx_4 = var_1d0_1
        cond:3_1 = rbx_4 == 0
    
    if (not(cond:3_1))
        void* rdi_6 = var_1d8 + 8
        int32_t i_5
        
        do
            int64_t* rcx_76 = *rdi_6
            
            if (rcx_76 != 0)
                result = zx.q(*(rcx_76 + 0xc))
                *(rcx_76 + 0xc) -= 1
                
                if (result.d == 1 && rcx_76 != 0)
                    result = (*(*rcx_76 + 8))(rcx_76, 1)
            
            rdi_6 += 0x18
            i_5 = rbx_4
            rbx_4 -= 1
        while (i_5 != 1)
    
    void* rcx_77 = var_1d8
    
    if (rcx_77 != 0)
        result = sub_140a74f90(rcx_77)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
