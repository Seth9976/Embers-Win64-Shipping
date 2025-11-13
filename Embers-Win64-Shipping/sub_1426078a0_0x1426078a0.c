// 函数: sub_1426078a0
// 地址: 0x1426078a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
void var_248
uint64_t var_e0 = __security_cookie ^ &var_248
int64_t* r14 = arg1
int32_t rdx = *(arg1 + 0x2c)
int32_t var_1cc = rdx
uint64_t result

if (rdx s> 6)
    result.b = 0
else
    result = zx.q(arg1[1].d)
    
    if (result.d s>= 0xffff || result.d == 0 || *arg1 == 0 || arg1[5].d == 0 || arg1[2] == 0)
        result.b = 0
    else
        int32_t rcx = arg1[0xe].d
        zmm8 = 0x3f800000
        uint64_t r15_1 = 0
        uint64_t result_1 = 0
        int32_t r13_1 = 0
        int32_t var_1d0_1 = 0
        zmm9 = zx.o(0)
        int32_t var_1b8_1 = 0
        int32_t var_140_1 = 2
        int32_t var_170
        int32_t var_160
        uint128_t zmm1
        uint128_t zmm2
        uint128_t zmm3
        
        if (rcx s<= 0)
        label_1426080e0:
            uint64_t r12_1 = zx.q(r14[5].d)
            int16_t j = data_143b502a0
            int32_t rcx_26 = (r12_1 + r15_1).d
            int64_t rdi_2 = sx.q(rdx)
            int32_t rax_25 = r14[1].d + (r15_1 << 1).d
            int32_t rcx_27 = 0
            uint64_t r13_3 = zx.q((r13_1 << 4) + rax_25)
            int32_t r10_1 = 0
            int32_t var_150_1 = r13_3.d
            uint64_t r9_3 = 0
            
            if (r12_1.d s> 0)
                int16_t* r11_2 = r14[2]
                uint64_t i_16 = zx.q(r12_1.d)
                uint64_t i
                
                do
                    int64_t rdx_12 = 0
                    
                    if (rdi_2 s> 0)
                        int16_t* rcx_28 = r11_2
                        
                        while (*rcx_28 != j)
                            int16_t rax_27 = rcx_28[rdi_2]
                            r10_1 += 1
                            
                            if (rax_27 s< 0)
                                rax_27.b &= 0xf
                                
                                if (rax_27.b != 0xf)
                                    r9_3 = zx.q(r9_3.d + 1)
                            
                            rdx_12 += 1
                            rcx_28 = &rcx_28[1]
                            
                            if (rdx_12 s>= rdi_2)
                                break
                        
                        rcx_27 = 0
                    
                    r11_2 = &r11_2[sx.q(rdx * 2)]
                    i = i_16
                    i_16 -= 1
                while (i != 1)
                rdx = var_1cc
            
            int32_t r10_2 = r10_1 + (r9_3 << 1).d
            uint64_t r15_2 = 0
            void* r10_3 = r14[8]
            uint64_t rsi_3
            
            if (r10_3 == 0)
                rsi_3 = 0
                
                if (r12_1.d s> 0)
                    uint64_t r9_6 = r12_1
                    int64_t rdx_14 = r14[2]
                    
                    while (true)
                        int64_t rax_31 = 0
                        
                        if (rdi_2 s> 0)
                            while (*(rdx_14 + (rax_31 << 1)) != j)
                                rcx_27 += 1
                                rax_31 += 1
                                
                                if (rax_31 s>= rdi_2)
                                    break
                        
                        rdx_14 += sx.q(rdx * 2) * 2
                        rsi_3 = zx.q(rsi_3.d - 2 + rcx_27)
                        uint64_t temp3_1 = r9_6
                        r9_6 -= 1
                        
                        if (temp3_1 == 1)
                            break
                        
                        rcx_27 = 0
            else
                rsi_3 = zx.q(r14[0xc].d)
                
                if (r12_1.d s> 0)
                    int32_t* r10_4 = r10_3 + 4
                    int64_t rdx_13 = r14[2]
                    uint64_t r11_3 = r12_1
                    
                    while (true)
                        int64_t rax_29 = 0
                        
                        if (rdi_2 s> 0)
                            while (*(rdx_13 + (rax_29 << 1)) != j)
                                rcx_27 += 1
                                rax_29 += 1
                                
                                if (rax_29 s>= rdi_2)
                                    break
                        
                        rdx_13 += sx.q(rdx * 2) * 2
                        r15_2 = zx.q(r15_2.d + *r10_4 - rcx_27)
                        r10_4 = &r10_4[4]
                        uint64_t temp4_1 = r11_3
                        r11_3 -= 1
                        
                        if (temp4_1 == 1)
                            break
                        
                        rcx_27 = 0
            
            uint64_t rcx_29 = zx.q(var_1b8_1)
            int32_t r9_8 = r10_2 << 4
            uint32_t r10_8 = (r12_1 * 3).d << 2
            uint32_t r11_5 = (r15_2 * 3).d << 2
            int32_t r8_13 = (rcx_26 + (rcx_29 << 2).d) << 5
            uint32_t r13_5 = (r13_3 * 3).d << 2
            int32_t r12_2 = r12_1.d << 5
            
            if (r14[0x18].b == 0)
                r12_2 = 0
            
            uint64_t rcx_30 = zx.q(r14[7].w)
            int32_t rax_35 = rcx_29.d << 6
            uint32_t rbx_4 = var_1d0_1 * 0x28
            int32_t var_188_1 = rcx_30.d
            int32_t rbx_11 = rbx_4 + (((zx.q(r14[5].d) << 1) + 3).d & 0xfffffffc) + r12_2
                + ((rcx_30 * 5).d << 2) + rax_35 + (rsi_3 << 2).d + r11_5 + r10_8 + r9_8 + r8_13
                + r13_5
            void* rax_42 = data_143b50290(zx.q(rbx_11 + 0x74), 0)
            
            if (rax_42 != 0)
                memset(rax_42, 0, sx.q(rbx_11) + 0x74)
                uint64_t r8_16 = zx.q(var_1b8_1)
                __builtin_strncpy(rax_42, "VAND", 4)
                void* rbx_12 = rax_42 + 0x74
                void* r11_7 = rax_42 + 0x74 + sx.q(r13_5)
                *(rax_42 + 4) = 7
                void* r13_8 = sx.q(r8_13) + r11_7 + sx.q(r9_8)
                void* var_180_1 = rbx_12
                int32_t var_198_1
                var_198_1.q = r13_8
                void* r13_9 = r13_8 + sx.q(r10_8)
                void* r13_10 = r13_9 + sx.q(r11_5)
                uint32_t var_1a8_1
                var_1a8_1.q = r13_10
                void* r13_11 = r13_10 + sx.q((rsi_3 << 2).d)
                void* var_178_1 = r11_7
                var_170.q = r13_11
                void* r13_12 = r13_11 + sx.q(r12_2)
                void* r12_3 = r13_12
                uint32_t var_190_1
                var_190_1.q = r13_12
                void* r13_13 = r13_12 + sx.q(rbx_4)
                var_160.q = r13_13
                int32_t* r13_14 = r13_13 + sx.q(rax_35)
                uint32_t var_1c0_1
                var_1c0_1.q = r13_14
                var_188_1.q = &r13_14[zx.q(var_188_1.w) * 5]
                *(rax_42 + 8) = r14[0x11].d
                *(rax_42 + 0xc) = *(r14 + 0x8c)
                *(rax_42 + 0x10) = r14[0x12].d
                *(rax_42 + 0x14) = *(r14 + 0x84)
                *(rax_42 + 0x18) = rcx_26 + (r8_16 << 2).d
                *(rax_42 + 0x1c) = var_150_1
                *(rax_42 + 0x20) = r10_2
                *(rax_42 + 0x54) = *(r14 + 0x94)
                *(rax_42 + 0x58) = r14[0x13].d
                *(rax_42 + 0x5c) = *(r14 + 0x9c)
                *(rax_42 + 0x60) = r14[0x14].d
                *(rax_42 + 0x64) = *(r14 + 0xa4)
                *(rax_42 + 0x68) = r14[0x15].d
                *(rax_42 + 0x24) = r14[5].d
                *(rax_42 + 0x28) = r15_2.d
                *(rax_42 + 0x2c) = rsi_3.d
                uint128_t zmm0_2
                zmm0_2.d = zmm8.d f/ r14[0x17].d
                *(rax_42 + 0x6c) = zmm0_2.d
                *(rax_42 + 0x3c) = r14[5].d
                *(rax_42 + 0x44) = rax_25
                *(rax_42 + 0x40) = rcx_26
                *(rax_42 + 0x48) = *(r14 + 0xac)
                *(rax_42 + 0x4c) = r14[0x16].d
                *(rax_42 + 0x50) = *(r14 + 0xb4)
                *(rax_42 + 0x34) = var_1d0_1
                *(rax_42 + 0x38) = r8_16.d
                int32_t rax_75
                
                if (r14[0x18].b == 0)
                    rax_75 = 0
                else
                    rax_75 = r14[5].d * 2
                
                *(rax_42 + 0x30) = rax_75
                int32_t i_1 = 0
                *(rax_42 + 0x70) = zx.d(r14[7].w)
                uint64_t rcx_40 = zx.q(r14[1].d)
                int32_t rax_77 = r14[5].d
                int32_t var_1d4_3 = rcx_40.d
                
                if (rcx_40.d s> 0)
                    void* rdx_18 = nullptr
                    int32_t* r8_17 = rbx_12 + 8
                    
                    do
                        int64_t rcx_41 = *r14
                        i_1 += 1
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(rdx_18 + rcx_41))).d f* r14[0x17].d
                        zmm0_2.d = zmm0_2.d f+ *(r14 + 0x94)
                        r8_17[-2] = zmm0_2.d
                        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdx_18 + rcx_41 + 2))).d f* *(r14 + 0xbc)
                        zmm1.d = zmm1.d f+ r14[0x13].d
                        r8_17[-1] = zmm1.d
                        uint32_t rax_80 = zx.d(*(rdx_18 + rcx_41 + 4))
                        rdx_18 += 6
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_80)).d f* r14[0x17].d
                        zmm0_2.d = zmm0_2.d f+ *(r14 + 0x9c)
                        *r8_17 = zmm0_2.d
                        r8_17 = &r8_17[3]
                    while (i_1 s< r14[1].d)
                    
                    rcx_40 = zx.q(var_1d4_3)
                
                int32_t rax_87 = r14[0xe].d
                int32_t r10_9 = 0
                
                if (rax_87 s> 0)
                    uint64_t result_3 = result_1
                    uint32_t r11_8 = (rcx_40 * 3).d
                    int32_t* rdx_19 = nullptr
                    
                    do
                        if (*result_3 == 0xff)
                            int64_t r8_18 = r14[0xd]
                            
                            if ((*(rdx_19 + r8_18 + 0x3f) & 2) != 0)
                                int64_t rcx_42 = sx.q(r11_8)
                                r11_8 += 6
                                *(rbx_12 + (rcx_42 << 2)) = *(rdx_19 + r8_18)
                                *(rbx_12 + (rcx_42 << 2) + 4) = *(rdx_19 + r8_18 + 4)
                                *(rbx_12 + (rcx_42 << 2) + 8) = *(rdx_19 + r8_18 + 8)
                                *(rbx_12 + (rcx_42 << 2) + 0xc) = *(rdx_19 + r8_18 + 0x18)
                                *(rbx_12 + (rcx_42 << 2) + 0x10) = *(rdx_19 + r8_18 + 0x1c)
                                *(rbx_12 + (rcx_42 << 2) + 0x14) = *(rdx_19 + r8_18 + 0x20)
                        
                        rax_87 = r14[0xe].d
                        r10_9 += 1
                        result_3 += 2
                        rdx_19 = &rdx_19[0x10]
                    while (r10_9 s< rax_87)
                    
                    r11_7 = var_178_1
                
                int64_t r15_3 = r14[2]
                int32_t r10_10 = 0
                int32_t rcx_43 = r14[5].d
                var_150_1.q = r15_3
                int32_t var_1d8_3 = 0
                
                if (rcx_43 s> 0)
                    void* r8_19 = r11_7 + 0x1f
                    char* rdx_20 = nullptr
                    int64_t rax_91 = sx.q(var_1cc * 2) * 2
                    int32_t var_1b0_2
                    var_1b0_2.q = 0
                    int32_t var_148_1
                    var_148_1.q = rax_91
                    int64_t r12_4 = rax_91
                    
                    do
                        *(r8_19 - 1) = 0
                        int64_t r9_9 = 0
                        *(r8_19 - 3) = *(r14[3] + (rdx_20 << 1))
                        *r8_19 = rdx_20[r14[4]] & 0x3f
                        
                        if (rdi_2 s> 0)
                            void* rdx_21 = r8_19 - 0xf
                            
                            do
                                int16_t rcx_47 = *(r15_3 - (r8_19 - 0x1f) + rdx_21 - 0x10)
                                
                                if (rcx_47 == data_143b502a0)
                                    break
                                
                                void* rax_95 = (rdi_2 << 1) + -0xfffffffffffffff0 - (r8_19 - 0x1f)
                                    + r15_3 + rdx_21
                                *(rax_95 + (2 - rdi_2) * 2 - r15_3 + r8_19 - 0x1f) = rcx_47
                                int16_t rcx_48 = *rax_95
                                
                                if (rcx_48 s>= 0)
                                    *rdx_21 = rcx_48 + 1
                                else
                                    rcx_48 &= 0xf
                                    
                                    if (rcx_48 == 0xf)
                                        *rdx_21 = 0
                                    else if (rcx_48 == 0)
                                        *rdx_21 = 0x8004
                                    else if (rcx_48 == 1)
                                        *rdx_21 = 0x8002
                                    else if (rcx_48 == 2)
                                        *rdx_21 = 0x8000
                                    else if (rcx_48 == 3)
                                        *rdx_21 = 0x8006
                                
                                *(r8_19 - 1) += 1
                                r9_9 += 1
                                rdx_21 += 2
                            while (r9_9 s< rdi_2)
                            
                            r14 = arg1
                            r15_3 = var_150_1.q
                            rdx_20 = var_1b0_2.q
                            r10_10 = var_1d8_3
                            r12_4 = var_148_1.q
                        
                        rcx_43 = r14[5].d
                        r15_3 += r12_4
                        r10_10 += 1
                        var_150_1.q = r15_3
                        rdx_20 = &rdx_20[1]
                        var_1d8_3 = r10_10
                        r8_19 += 0x20
                        var_1b0_2.q = rdx_20
                    while (r10_10 s< rcx_43)
                    
                    rax_87 = r14[0xe].d
                    rbx_12 = var_180_1
                    r13_14 = var_1c0_1.q
                    r12_3 = var_190_1.q
                
                int32_t r10_13 = 0
                int32_t i_2 = 0
                
                if (rax_87 s> 0)
                    int64_t rsi_8 = sx.q(rcx_26)
                    uint64_t result_4 = result_1
                    int64_t rdi_3 = 0
                    int64_t rdx_22 = 0
                    
                    do
                        int64_t r8_20 = r14[0xd]
                        
                        if (*result_4 == 0xff)
                            if ((*(rdx_22 + r8_20 + 0x3f) & 2) == 0)
                                int64_t rcx_53 = (rdi_3 + rsi_8) << 5
                                *(rcx_53 + var_178_1 + 0x1e) = 0
                                *(rcx_53 + var_178_1 + 0x1c) = *(rdx_22 + r8_20 + 0x3c)
                                *(rcx_53 + var_178_1 + 0x1f) =
                                    (*(rdx_22 + r8_20 + 0x3e) & 0x3f) | 0x80
                                *(rcx_53 + var_178_1 + 0x3e) = 0
                                *(rcx_53 + var_178_1 + 0x3c) = *(rdx_22 + r8_20 + 0x3c)
                                *(rcx_53 + var_178_1 + 0x3f) =
                                    (*(rdx_22 + r8_20 + 0x3e) & 0x3f) | 0x80
                                int64_t rcx_56 = (rsi_8 + 2 + rdi_3) << 5
                                *(rcx_56 + var_178_1 + 0x1e) = 0
                                *(rcx_56 + var_178_1 + 0x1c) = *(rdx_22 + r8_20 + 0x3c)
                                *(rcx_56 + var_178_1 + 0x1f) =
                                    (*(rdx_22 + r8_20 + 0x3e) & 0x3f) | 0x80
                                int64_t rcx_59 = (rsi_8 + 3 + rdi_3) << 5
                                *(rcx_59 + var_178_1 + 0x1e) = 0
                                *(rcx_59 + var_178_1 + 0x1c) = *(rdx_22 + r8_20 + 0x3c)
                                *(rcx_59 + var_178_1 + 0x1f) =
                                    (*(rdx_22 + r8_20 + 0x3e) & 0x3f) | 0x80
                                rdi_3 += 4
                            else
                                int16_t rax_97 = r10_13.w * 2 + var_1d4_3.w
                                void* rcx_51 = (sx.q(r10_13 + rax_77) << 5) + var_178_1
                                *(rcx_51 + 0x1e) = 2
                                *(rcx_51 + 4) = rax_97
                                *(rcx_51 + 6) = rax_97 + 1
                                *(rcx_51 + 0x1c) = *(rdx_22 + r8_20 + 0x3c)
                                *(rcx_51 + 0x1f) = (*(rdx_22 + r8_20 + 0x3e) & 0x3f) | 0x40
                                r10_13 += 1
                        
                        i_2 += 1
                        rdx_22 += 0x40
                        result_4 += 2
                    while (i_2 s< r14[0xe].d)
                    
                    rcx_43 = r14[5].d
                    rbx_12 = var_180_1
                    r13_14 = var_1c0_1.q
                
                int64_t rdi_5
                
                if (r14[8] == 0)
                    int32_t r9_11 = 0
                    int32_t i_3 = 0
                    
                    if (rcx_43 s> 0)
                        int64_t r8_25 = 0
                        void* r11_13 = var_198_1.q + 4
                        void* rsi_11 = var_178_1 + 0x1e
                        
                        do
                            uint32_t r10_14 = zx.d(*rsi_11)
                            int32_t rdx_26 = 2
                            *(r11_13 - 4) = 0
                            *(r11_13 + 4) = 0
                            *r11_13 = r9_11
                            *(r11_13 + 5) = r10_14.b - 2
                            
                            if (r10_14 u> 2)
                                char* rcx_67 = var_1a8_1.q + 3 + (r8_25 << 2)
                                
                                do
                                    rcx_67[-3] = 0
                                    rcx_67[-2] = rdx_26.b - 1
                                    char rax_122 = 4
                                    rcx_67[-1] = rdx_26.b
                                    *rcx_67 = 4
                                    
                                    if (rdx_26 == 2)
                                        *rcx_67 = 5
                                        rax_122 = 5
                                    
                                    if (rdx_26 == r10_14 - 1)
                                        *rcx_67 = rax_122 | 0x10
                                    
                                    r9_11 += 1
                                    r8_25 += 1
                                    rcx_67 = &rcx_67[4]
                                    rdx_26 += 1
                                while (rdx_26 s< r10_14)
                            
                            i_3 += 1
                            r11_13 += 0xc
                            rsi_11 += 0x20
                        while (i_3 s< r14[5].d)
                        
                        rbx_12 = var_180_1
                        r13_14 = var_1c0_1.q
                        r12_3 = var_190_1.q
                    
                    rdi_5 = var_1a8_1.q
                else
                    int32_t i_4 = 0
                    int16_t r13_16 = 0
                    int32_t i_12 = 0
                    
                    if (rcx_43 s> 0)
                        int32_t* rdi_4 = nullptr
                        void* rsi_10 = var_198_1.q + 4
                        void* rbx_15 = var_178_1 + 0x1e
                        
                        do
                            int64_t rax_108 = r14[8]
                            uint32_t r12_5 = zx.d(*rbx_15)
                            int32_t r9_10 = *(rdi_4 + rax_108)
                            int32_t r15_5 = *(rdi_4 + rax_108 + 4)
                            *(rsi_10 - 4) = zx.d(r13_16)
                            *(rsi_10 + 4) = r15_5.b - r12_5.b
                            *rsi_10 = *(rdi_4 + r14[8] + 8)
                            *(rsi_10 + 5) = *(rdi_4 + r14[8] + 0xc)
                            
                            if (r15_5 != r12_5)
                                memcpy(r13_9 + zx.q(r13_16) * 0xc, 
                                    r14[9] + (sx.q((r12_5 + r9_10) * 3) << 2), 
                                    (r15_5 - r12_5) * 0xc)
                                i_4 = i_12
                                r15_5.w -= r12_5.w
                                r13_16 += r15_5.w
                            
                            i_4 += 1
                            rsi_10 += 0xc
                            rbx_15 += 0x20
                            i_12 = i_4
                            rdi_4 = &rdi_4[4]
                        while (i_4 s< r14[5].d)
                        
                        rbx_12 = var_180_1
                        r12_3 = var_190_1.q
                    
                    rdi_5 = var_1a8_1.q
                    memcpy(rdi_5, r14[0xb], r14[0xc].d << 2)
                    r13_14 = var_1c0_1.q
                
                if (r14[0x18].b != 0)
                    int32_t r9_12 = r14[5].d
                    zmm1 = r14[0x17].d
                    r14[1].d
                    int64_t var_1e8_1 = var_170.q
                    sub_142606700(*r14, zmm1, r14[2], r9_12, var_1cc, var_198_1.q, r13_9, rdi_5, 
                        r14 + 0x94, zmm1.d, (*(r14 + 0xbc)).d, r9_12 * 2)
                
                int32_t rdi_7 = 0
                int32_t i_5 = 0
                
                if (r14[0xe].d s> 0)
                    int32_t* rdx_28 = nullptr
                    uint64_t result_5 = result_1
                    void* r9_14 = var_160.q + 0x14
                    
                    do
                        int64_t r8_27 = r14[0xd]
                        
                        if (*result_5 == 0xff)
                            if ((*(rdx_28 + r8_27 + 0x3f) & 2) == 0)
                                *(r9_14 - 0x14) = *(rdx_28 + r8_27)
                                *(r9_14 - 0x10) = *(rdx_28 + r8_27 + 4)
                                *(r9_14 - 0xc) = *(rdx_28 + r8_27 + 8)
                                *(r9_14 - 8) = *(rdx_28 + r8_27 + 0xc)
                                *(r9_14 - 4) = *(rdx_28 + r8_27 + 0x10)
                                *r9_14 = *(rdx_28 + r8_27 + 0x14)
                                *(r9_14 + 4) = *(rdx_28 + r8_27 + 0x18)
                                *(r9_14 + 8) = *(rdx_28 + r8_27 + 0x1c)
                                *(r9_14 + 0xc) = *(rdx_28 + r8_27 + 0x20)
                                *(r9_14 + 0x10) = *(rdx_28 + r8_27 + 0x24)
                                *(r9_14 + 0x14) = *(rdx_28 + r8_27 + 0x28)
                                *(r9_14 + 0x18) = *(rdx_28 + r8_27 + 0x2c)
                                *(r9_14 + 0x1c) = *(rdx_28 + r8_27 + 0x30)
                                *(r9_14 + 0x20) = *(rdx_28 + r8_27 + 0x34)
                                *(r9_14 + 0x2b) = *(rdx_28 + r8_27 + 0x3f) << 7
                                int32_t rax_156 = *(rdx_28 + r8_27 + 0x38)
                                
                                if (rax_156 != 0)
                                    *(r9_14 + 0x24) = rax_156
                                
                                r9_14 += 0x40
                            else
                                int64_t r10_15 = sx.q(rdi_7) * 5
                                *(r12_3 + (r10_15 << 3) + 0x24) = rdi_7.w + rax_77.w
                                *(r12_3 + (r10_15 << 3)) = *(rdx_28 + r8_27)
                                *(r12_3 + (r10_15 << 3) + 4) = *(rdx_28 + r8_27 + 4)
                                *(r12_3 + (r10_15 << 3) + 8) = *(rdx_28 + r8_27 + 8)
                                *(r12_3 + (r10_15 << 3) + 0xc) = *(rdx_28 + r8_27 + 0x18)
                                *(r12_3 + (r10_15 << 3) + 0x10) = *(rdx_28 + r8_27 + 0x1c)
                                *(r12_3 + (r10_15 << 3) + 0x14) = *(rdx_28 + r8_27 + 0x20)
                                *(r12_3 + (r10_15 << 3) + 0x18) = *(rdx_28 + r8_27 + 0x30)
                                *(r12_3 + (r10_15 << 3) + 0x1c) = *(rdx_28 + r8_27 + 0x34)
                                char rax_138 = *(rdx_28 + r8_27 + 0x3f)
                                *(r12_3 + (r10_15 << 3) + 0x27) =
                                    ((rax_138 & 8) | rax_138 << 4) << 3
                                char rax_139 = *(result_5 + 1)
                                
                                if (rax_139 == 0xff)
                                    rax_139 = -0x80
                                
                                *(r12_3 + (r10_15 << 3) + 0x26) = rax_139
                                int32_t rax_140 = *(rdx_28 + r8_27 + 0x38)
                                
                                if (rax_140 != 0)
                                    *(r12_3 + (r10_15 << 3) + 0x20) = rax_140
                                
                                rdi_7 += 1
                        
                        i_5 += 1
                        rdx_28 = &rdx_28[0x10]
                        result_5 += 2
                    while (i_5 s< r14[0xe].d)
                    
                    rbx_12 = var_180_1
                
                if (result_1 != 0)
                    data_143b50298(result_1)
                
                int64_t rdx_29 = r14[6]
                int64_t rdi_8 = var_188_1.q
                
                if (rdx_29 != 0)
                    memcpy(rdi_8, rdx_29, r14[5].d * 2)
                
                int32_t i_6 = 0
                
                if (0 u< r14[7].w)
                    do
                        r13_14[3] = 0xffffffff
                        int64_t r10_16 = 0
                        r13_14[4] = 0
                        *r13_14 = 0
                        r13_14[2] = 0
                        int64_t rcx_73 = sx.q(r14[5].d)
                        
                        if (rcx_73 s> 0)
                            do
                                if (zx.d(*(rdi_8 + (r10_16 << 1))) == i_6)
                                    zmm3 = zmm9
                                    void* r10_18 = (r10_16 << 5) + var_178_1
                                    float zmm4_2 = zmm9.d
                                    float zmm5_2 = zmm9.d
                                    int64_t r12_6 = 0
                                    uint64_t r13_17 = zx.q(*(r10_18 + 0x1e))
                                    uint64_t r11_14 = zx.q(r13_17.d)
                                    
                                    if (r13_17 u>= 4)
                                        void* rdi_9 = r10_18 + 6
                                        int64_t j_4 = ((r13_17 - 4) u>> 2) + 1
                                        r12_6 = j_4 << 2
                                        int64_t j_1
                                        
                                        do
                                            uint64_t r9_15 = zx.q(*(rdi_9 - 2)) * 3
                                            zmm3.d = zmm3.d f+ *(rbx_12 + (r9_15 << 2))
                                            uint64_t r8_30 = zx.q(*rdi_9) * 3
                                            zmm3.d = zmm3.d f+ *(rbx_12 + (r8_30 << 2))
                                            uint64_t rdx_30 = zx.q(*(rdi_9 + 2)) * 3
                                            uint64_t rax_162 = zx.q(*(rdi_9 + 4))
                                            rdi_9 += 8
                                            zmm3.d = zmm3.d f+ *(rbx_12 + (rdx_30 << 2))
                                            uint64_t rcx_74 = rax_162 * 3
                                            zmm3.d = zmm3.d f+ *(rbx_12 + (rcx_74 << 2))
                                            zmm4_2 = zmm4_2 f+ *(rbx_12 + (r9_15 << 2) + 4) f+
                                                *(rbx_12 + (r8_30 << 2) + 4) f+
                                                *(rbx_12 + (rdx_30 << 2) + 4) f+
                                                *(rbx_12 + (rcx_74 << 2) + 4)
                                            zmm5_2 = zmm5_2 f+ *(rbx_12 + (r9_15 << 2) + 8) f+
                                                *(rbx_12 + (r8_30 << 2) + 8) f+
                                                *(rbx_12 + (rdx_30 << 2) + 8) f+
                                                *(rbx_12 + (rcx_74 << 2) + 8)
                                            j_1 = j_4
                                            j_4 -= 1
                                        while (j_1 != 1)
                                        rdi_8 = var_188_1.q
                                    
                                    if (r12_6 s< r11_14)
                                        int64_t j_5 = r11_14 - r12_6
                                        void* rdx_32 = r10_18 + ((r12_6 + 2) << 1)
                                        int64_t j_2
                                        
                                        do
                                            uint64_t rax_163 = zx.q(*rdx_32)
                                            rdx_32 += 2
                                            uint64_t rcx_75 = rax_163 * 3
                                            zmm3.d = zmm3.d f+ *(rbx_12 + (rcx_75 << 2))
                                            zmm4_2 = zmm4_2 f+ *(rbx_12 + (rcx_75 << 2) + 4)
                                            zmm5_2 = zmm5_2 f+ *(rbx_12 + (rcx_75 << 2) + 8)
                                            j_2 = j_5
                                            j_5 -= 1
                                        while (j_2 != 1)
                                    
                                    r13_14 = var_1c0_1.q
                                    zmm2.d = zmm8.d f/ _mm_cvtepi32_ps(zx.o(r13_17.d)).d
                                    zmm1.d = zmm2.d f* zmm3.d
                                    zmm0_2.d = zmm2.d f* zmm4_2
                                    zmm2.d = zmm2.d f* zmm5_2
                                    *r13_14 = zmm1.d
                                    r13_14[1] = zmm0_2.d
                                    r13_14[2] = zmm2.d
                                    break
                                
                                r10_16 += 1
                            while (r10_16 s< rcx_73)
                        
                        r13_14 = &r13_14[5]
                        i_6 += 1
                        var_1c0_1.q = r13_14
                    while (i_6 s< zx.d(r14[7].w))
                
                *arg2 = rax_42
                *arg3 = rbx_11 + 0x74
                result.b = 1
            else
                if (result_1 != 0)
                    data_143b50298(result_1)
                
                result.b = 0
        else
            result = data_143b50290(zx.q(rcx * 2), 1)
            result_1 = result
            uint64_t result_2 = result
            
            if (result != 0)
                memset(result, 0, sx.q(r14[0xe].d) * 2)
                int64_t rdx_1 = sx.q(r14[1].d)
                int64_t r9_1 = 0
                uint128_t zmm7 = 0x7f7fffff
                zmm3 = 0xff7fffff
                uint128_t zmm0_1
                uint128_t zmm4_1
                uint128_t zmm5_1
                
                if (rdx_1 s>= 4)
                    zmm4_1 = *(r14 + 0xbc)
                    void* rcx_4 = *r14 + 8
                    zmm5_1 = r14[0x13].d
                    int64_t i_17 = ((rdx_1 - 4) u>> 2) + 1
                    r9_1 = i_17 << 2
                    int64_t i_7
                    
                    do
                        zmm2.d = float.s(zx.d(*(rcx_4 - 6)))
                        uint32_t rax_2 = zx.d(*rcx_4)
                        zmm2.d = zmm2.d f* zmm4_1.d
                        zmm2.d = zmm2.d f+ zmm5_1.d
                        zmm0_1 = zmm2
                        zmm2 = _mm_max_ss(zmm2.d, zmm3.d)
                        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm7.d)
                        zmm3.d = float.s(rax_2)
                        uint32_t rax_3 = zx.d(*(rcx_4 + 6))
                        zmm3.d = zmm3.d f* zmm4_1.d
                        zmm3.d = zmm3.d f+ zmm5_1.d
                        zmm1 = zmm3
                        zmm3 = _mm_max_ss(zmm3.d, zmm2.d)
                        zmm1 = _mm_min_ss(zmm1.d, zmm0_1.d)
                        zmm2.d = float.s(rax_3)
                        uint32_t rax_4 = zx.d(*(rcx_4 + 0xc))
                        rcx_4 += 0x18
                        zmm2.d = zmm2.d f* zmm4_1.d
                        zmm2.d = zmm2.d f+ zmm5_1.d
                        zmm0_1 = zmm2
                        zmm2 = _mm_max_ss(zmm2.d, zmm3.d)
                        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm1.d)
                        zmm3.d = float.s(rax_4)
                        zmm3.d = zmm3.d f* zmm4_1.d
                        zmm3.d = zmm3.d f+ zmm5_1.d
                        zmm7 = zmm3
                        zmm3 = _mm_max_ss(zmm3.d, zmm2.d)
                        zmm7 = _mm_min_ss(zmm7.d, zmm0_1.d)
                        i_7 = i_17
                        i_17 -= 1
                    while (i_7 != 1)
                
                if (r9_1 s< rdx_1)
                    zmm2 = *(r14 + 0xbc)
                    zmm4_1 = r14[0x13].d
                    int64_t i_14 = rdx_1 - r9_1
                    int16_t* r8_6 = *r14 + ((r9_1 * 3 + 1) << 1)
                    int64_t i_8
                    
                    do
                        uint32_t rax_6 = zx.d(*r8_6)
                        r8_6 = &r8_6[3]
                        zmm1.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* zmm2.d
                        zmm1.d = zmm1.d f+ zmm4_1.d
                        zmm3 = _mm_max_ss(zmm1.d, zmm3.d)
                        zmm7 = _mm_min_ss(zmm1.d, zmm7.d)
                        i_8 = i_14
                        i_14 -= 1
                    while (i_8 != 1)
                
                void* r9_2 = r14[9]
                
                if (r9_2 != 0)
                    int64_t rax_7 = sx.q(r14[0xa].d)
                    
                    if (rax_7.d != 0)
                        int64_t r8_7 = 0
                        
                        if (rax_7 s>= 4)
                            void* rax_8 = r9_2 + 0x10
                            int64_t i_15 = ((rax_7 - 4) u>> 2) + 1
                            r8_7 = i_15 << 2
                            int64_t i_9
                            
                            do
                                zmm2 = *(rax_8 - 0xc)
                                zmm4_1 = *(rax_8 + 0xc)
                                zmm0_1 = _mm_min_ss(zmm2.d, zmm7.d)
                                zmm2 = _mm_max_ss(zmm2.d, zmm3.d)
                                zmm3 = *rax_8
                                rax_8 += 0x30
                                zmm1 = _mm_min_ss(zmm3.d, zmm0_1.d)
                                zmm3 = _mm_max_ss(zmm3.d, zmm2.d)
                                zmm0_1 = _mm_min_ss(zmm4_1.d, zmm1.d)
                                zmm4_1 = _mm_max_ss(zmm4_1.d, zmm3.d)
                                zmm3 = *(rax_8 - 0x18)
                                zmm7 = _mm_min_ss(zmm3.d, zmm0_1.d)
                                zmm3 = _mm_max_ss(zmm3.d, zmm4_1.d)
                                i_9 = i_15
                                i_15 -= 1
                            while (i_9 != 1)
                        
                        if (r8_7 s< rax_7)
                            int64_t i_13 = rax_7 - r8_7
                            uint128_t* rdx_6 = r9_2 + ((r8_7 * 3 + 1) << 2)
                            int64_t i_10
                            
                            do
                                zmm1 = *rdx_6
                                rdx_6 += 0xc
                                zmm3 = _mm_max_ss(zmm1.d, zmm3.d)
                                zmm7 = _mm_min_ss(zmm1.d, zmm7.d)
                                i_10 = i_13
                                i_13 -= 1
                            while (i_10 != 1)
                
                int32_t i_11 = 0
                zmm2 = *(r14 + 0x94)
                zmm4_1 = *(r14 + 0x9c)
                zmm5_1 = r14[0x14].d
                uint128_t zmm6 = r14[0x15].d
                int128_t zmm13 = *(r14 + 0xb4)
                zmm7.d = zmm7.d f- zmm13.d
                int32_t var_1d8_1 = zmm2.d
                zmm13.d = zmm13.d f+ zmm3.d
                var_170 = zmm2.d
                int32_t var_1d4_1 = zmm4_1.d
                int32_t var_168_1 = zmm4_1.d
                int32_t var_1c8_1 = zmm5_1.d
                var_160 = zmm5_1.d
                int32_t var_15c_1 = zmm13.d
                int32_t var_1b0_1 = zmm6.d
                int32_t var_158_1 = zmm6.d
                int32_t var_16c_1 = zmm7.d
                int32_t var_110 = zmm2.d
                int32_t var_108 = zmm4_1.d
                int32_t var_104_1 = zmm5_1.d
                int32_t var_fc_1 = zmm4_1.d
                int32_t var_f8_1 = zmm5_1.d
                int32_t var_f0_1 = zmm6.d
                int32_t var_ec_1 = zmm2.d
                int32_t var_e4_1 = zmm6.d
                
                if (r14[0xe].d s> 0)
                    int128_t zmm10
                    int128_t var_88_1 = zmm10
                    uint128_t zmm11
                    uint128_t var_98_1 = zmm11
                    uint128_t zmm12
                    uint128_t var_a8_1 = zmm12
                    void* rdi_1 = nullptr
                    
                    do
                        int64_t rax_9 = r14[0xd]
                        uint128_t* r11_1 = rdi_1 + rax_9
                        char rax_10 = *(rdi_1 + rax_9 + 0x3f)
                        
                        if ((rax_10 & 2) != 0)
                            zmm0_1 = *r11_1
                            zmm1 = *(r11_1 + 8)
                            int32_t rax_11 = 0
                            char rdx_7 = 2
                            int32_t rcx_6
                            rcx_6.b = zmm0_1.d f>= zmm5_1.d
                            
                            if (zmm2.d f> zmm0_1.d)
                                rax_11 = 4
                            
                            int32_t rax_12 = 0
                            
                            if (zmm1.d f>= zmm6.d)
                                rax_12 = 2
                            
                            int32_t rax_13 = 0
                            
                            if (zmm4_1.d f> zmm1.d)
                                rax_13 = 8
                            
                            if ((rcx_6 | rax_11 | rax_12 | rax_13) - 1 u> 0xb)
                                rdx_7 = 0xff
                            else
                                switch (rcx_6 | rax_11 | rax_12 | rax_13)
                                    case 1
                                        rdx_7 = 0
                                    case 3
                                        rdx_7 = 1
                                    case 4
                                        rdx_7 = 4
                                    case 5, 7, 0xa, 0xb
                                        rdx_7 = 0xff
                                    case 6
                                        rdx_7 = 3
                                    case 8
                                        rdx_7 = 6
                                    case 9
                                        rdx_7 = 7
                                    case 0xc
                                        rdx_7 = 5
                            
                            *result_2 = rdx_7
                            zmm0_1 = *(r11_1 + 0x18)
                            int32_t rax_15 = 0
                            zmm1 = r11_1[2].d
                            int32_t rcx_13
                            rcx_13.b = zmm0_1.d f>= zmm5_1.d
                            
                            if (zmm1.d f>= zmm6.d)
                                rax_15 = var_140_1
                            
                            int32_t rax_16 = 0
                            
                            if (zmm2.d f> zmm0_1.d)
                                rax_16 = 4
                            
                            int64_t rax_17 = 0
                            
                            if (zmm4_1.d f> zmm1.d)
                                rax_17 = 8
                            
                            if ((rcx_13 | rax_15 | rax_16 | rax_17.d) - 1 u> 0xb)
                                rax_17.b = 0xff
                            else
                                switch (&__dos_header.e_magic[zx.q(jump_table_142608ea8[sx.q((rcx_13
                                        | rax_15 | rax_16 | rax_17.d) - 1)])])
                                    case 0x142607d78
                                        rax_17.b = 0
                                    case 0x142607d7c
                                        rax_17.b = 1
                                    case 0x142607d80
                                        rax_17.b = 2
                                    case 0x142607d84
                                        rax_17.b = 3
                                    case 0x142607d88
                                        rax_17.b = 4
                                    case 0x142607d8c
                                        rax_17.b = 5
                                    case 0x142607d90
                                        rax_17.b = 6
                                    case 0x142607d94
                                        rax_17.b = 7
                                    case 0x142607d98
                                        rax_17.b = 0xff
                            
                            *(result_2 + 1) = rax_17.b
                            
                            if (rdx_7 == 0xff)
                                zmm2 = *(r11_1 + 4)
                                zmm1 = *(r11_1 + 0x34)
                                zmm0_1.d = zmm2.d f- zmm1.d
                                
                                if (not(zmm0_1.d f> zmm13.d))
                                    zmm1.d = zmm1.d f+ zmm2.d
                                
                                if (zmm0_1.d f> zmm13.d || zmm1.d f< zmm7.d)
                                    *result_2 = 0
                                else
                                    r15_1 = zx.q(r15_1.d + 1)
                        else if ((rax_10 & 4) != 0)
                            zmm0_1 = *(r11_1 + 4)
                            char rax_18
                            
                            if (not(zmm0_1.d f< zmm7.d) && not(zmm0_1.d f> zmm13.d))
                                rax_18 = sub_142604920(r11_1, &var_170, &var_160)
                            
                            if (zmm0_1.d f< zmm7.d || zmm0_1.d f> zmm13.d || rax_18 != 0xff)
                                zmm0_1 = r11_1[1].d
                                char rax_19
                                
                                if (not(zmm0_1.d f< zmm7.d) && not(zmm0_1.d f> zmm13.d))
                                    rax_19 = sub_142604920(r11_1 + 0xc, &var_170, &var_160)
                                
                                if (zmm0_1.d f< zmm7.d || zmm0_1.d f> zmm13.d || rax_19 != 0xff)
                                    zmm0_1 = *(r11_1 + 0x1c)
                                    char rax_20
                                    
                                    if (not(zmm0_1.d f< zmm7.d) && not(zmm0_1.d f> zmm13.d))
                                        rax_20 = sub_142604920(r11_1 + 0x18, &var_170, &var_160)
                                    
                                    if (zmm0_1.d f< zmm7.d || zmm0_1.d f> zmm13.d || rax_20 != 0xff)
                                        zmm0_1 = *(r11_1 + 0x28)
                                        char rax_21
                                        
                                        if (not(zmm0_1.d f< zmm7.d) && not(zmm0_1.d f> zmm13.d))
                                            rax_21 = sub_142604920(r11_1 + 0x24, &var_170, &var_160)
                                        
                                        if (zmm0_1.d f< zmm7.d || zmm0_1.d f> zmm13.d
                                                || rax_21 != 0xff)
                                            zmm11 = *r11_1
                                            zmm5_1 = zmm9
                                            zmm6 = zmm8
                                            zmm12 = *(r11_1 + 8)
                                            zmm9.d = (*(r11_1 + 0xc)).d f- zmm11.d
                                            int32_t j_3 = 0
                                            zmm10.d = (*(r11_1 + 0x14)).d f- zmm12.d
                                            int64_t rax_22 = 0
                                            int64_t rcx_24 = 0x24
                                            
                                            do
                                                zmm0_1 = *(&var_110 + rcx_24)
                                                zmm3.d = zmm11.d f- zmm0_1.d
                                                zmm1 = *(&var_108 + rcx_24)
                                                zmm4_1.d = (*(&var_110 + rax_22)).d f- zmm0_1.d
                                                zmm0_1.d = zmm12.d f- zmm1.d
                                                zmm2.d = (*(&var_108 + rax_22)).d f- zmm1.d
                                                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                                                zmm3.d = zmm3.d f* zmm2.d
                                                zmm4_1.d = zmm4_1.d f* zmm10.d
                                                zmm3.d = zmm3.d f- zmm0_1.d
                                                zmm2.d = zmm2.d f* zmm9.d
                                                zmm4_1.d = zmm4_1.d f- zmm2.d
                                                bool cond:4_1
                                                
                                                if (_mm_and_ps(zmm4_1, 0x7fffffff).d
                                                        f>= 9.99999994e-09f)
                                                    zmm3.d = zmm3.d f/ zmm4_1.d
                                                    
                                                    if (not(zmm4_1.d f>= 0f))
                                                        if (not(zmm3.d f<= zmm5_1.d)
                                                            && zmm3.d f> zmm6.d)
                                                        label_142607f64:
                                                            zmm11 = *(r11_1 + 0x18)
                                                            zmm5_1 = zx.o(0)
                                                            int32_t k = 0
                                                            zmm12 = r11_1[2].d
                                                            zmm9.d = (*(r11_1 + 0x24)).d f- zmm11.d
                                                            int64_t rax_23 = 0
                                                            zmm6 = 0x3f800000
                                                            zmm10.d = (*(r11_1 + 0x2c)).d f- zmm12.d
                                                            int64_t rcx_25 = 0x24
                                                            
                                                            do
                                                                zmm0_1 = *(&var_110 + rcx_25)
                                                                zmm3.d = zmm11.d f- zmm0_1.d
                                                                zmm1 = *(&var_108 + rcx_25)
                                                                zmm4_1.d =
                                                                    (*(&var_110 + rax_23)).d f- zmm0_1.d
                                                                zmm0_1.d = zmm12.d f- zmm1.d
                                                                zmm2.d =
                                                                    (*(&var_108 + rax_23)).d f- zmm1.d
                                                                zmm0_1.d = zmm0_1.d f* zmm4_1.d
                                                                zmm3.d = zmm3.d f* zmm2.d
                                                                zmm4_1.d = zmm4_1.d f* zmm10.d
                                                                zmm3.d = zmm3.d f- zmm0_1.d
                                                                zmm2.d = zmm2.d f* zmm9.d
                                                                zmm4_1.d = zmm4_1.d f- zmm2.d
                                                                bool cond:8_1
                                                                
                                                                if (_mm_and_ps(zmm4_1, 0x7fffffff).d
                                                                        f>= 9.99999994e-09f)
                                                                    zmm3.d = zmm3.d f/ zmm4_1.d
                                                                    
                                                                    if (not(zmm4_1.d f>= 0f))
                                                                        if (not(zmm3.d f<= zmm5_1.d)
                                                                                && zmm3.d f> zmm6.d)
                                                                            goto label_142608056
                                                                        
                                                                        zmm5_1 = _mm_max_ss(zmm3.d, zmm5_1.d)
                                                                    else if (not(zmm3.d f>= zmm6.d))
                                                                        zmm6 = zmm3
                                                                        cond:8_1 = zmm3.d f< zmm5_1.d
                                                                        goto label_14260802b
                                                                else
                                                                    cond:8_1 = zmm3.d f< 0f
                                                                label_14260802b:
                                                                    
                                                                    if (cond:8_1)
                                                                        goto label_142608056
                                                                rcx_25 = rax_23
                                                                k += 1
                                                                rax_23 += 0xc
                                                            while (k s< 4)
                                                            
                                                            break
                                                            break
                                                        
                                                        zmm5_1 = _mm_max_ss(zmm3.d, zmm5_1.d)
                                                    else if (not(zmm3.d f>= zmm6.d))
                                                        zmm6 = zmm3
                                                        cond:4_1 = zmm3.d f< zmm5_1.d
                                                        goto label_142607f4b
                                                else
                                                    cond:4_1 = zmm3.d f< 0f
                                                label_142607f4b:
                                                    
                                                    if (cond:4_1)
                                                        goto label_142607f64
                                                rcx_24 = rax_22
                                                j_3 += 1
                                                rax_22 += 0xc
                                            while (j_3 s< 4)
                            
                            *result_2 = 0xff
                            r13_1 += 1
                        
                    label_142608056:
                        zmm2 = var_1d8_1
                        i_11 += 1
                        zmm4_1 = var_1d4_1
                        rdi_1 += 0x40
                        zmm5_1 = var_1c8_1
                        result_2 += 2
                        zmm9 = zx.o(0)
                        zmm6 = var_1b0_1
                        zmm8 = 0x3f800000
                    while (i_11 s< r14[0xe].d)
                    
                    var_1b8_1 = r13_1
                    var_1d0_1 = r15_1.d
                
                rdx = var_1cc
                goto label_1426080e0
            
            result.b = 0

__security_check_cookie(var_e0 ^ &var_248)
return result
