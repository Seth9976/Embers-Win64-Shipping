// 函数: sub_140ba46d0
// 地址: 0x140ba46d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
uint64_t rax_2 = *(arg1 + 0x14)
int32_t rbx = *(arg1 + 0x23c)
void* rsi = arg1
*(arg1 + 0x4f9) = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x1c)
int32_t var_a4 = 0
void* var_98 = nullptr
int32_t var_90 = 0
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int32_t var_240
sub_140a9e570(&var_d8, &var_240)
uint64_t* var_238
int64_t* rdi = var_238
*rdi = rax_2
rdi[1].d = rbx
*(rdi + 0xc) = 0xffffffff
int64_t rbx_1 = *rdi
int32_t var_280
sub_140ba2440(&var_d8, &var_280, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), rdi, var_240, nullptr)
void* rdi_1 = rsi + 0x3f0
int32_t var_22c = 1
int32_t rbx_3 = *(rdi_1 + 0x28)
void* r9_1 = rdi_1 + 0x10
void* var_288 = rdi_1
int32_t rcx_3 = 0
int32_t var_230 = 0
int32_t r10 = 0
void* var_228 = r9_1
int32_t r8_1 = 0
int32_t var_220 = 0xffffffff
int64_t var_21c = 0

if (rbx_3 != 0)
    void* rax_5 = *(r9_1 + 0x10)
    r10 = rbx_3
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_3 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_140ba4869:
        int32_t rax_12 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_22c_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        int32_t rax_14 = r8_1 - rax_13 + 0x1f
        
        if (rax_14 s> rbx_3)
            rax_14 = rbx_3
        
        r10 = rax_14
        var_21c.d = rax_14
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_3)
            r8_1 += 0x20
            rcx_3 += 1
            var_21c:4.d = r8_1
            var_230 = rcx_3
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_21c.d = rbx_3
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_220 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140ba4869

void* var_88 = rdi_1
void* r13 = rdi_1
double zmm2[0x2] = var_220.o
uint128_t var_80 = var_230.o
uint128_t zmm0_1 = var_88.o
double var_70[0x2] = zmm2
int64_t var_f8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
uint128_t zmm1 = var_80
uint128_t var_118 = zmm0_1
uint128_t var_108 = zmm1
uint64_t var_210
void var_208
void var_204
void var_200
void var_1fc
uint64_t var_1d8
int32_t var_1c8
int32_t var_1a8

if (r10 s< rbx_3)
    int32_t r15_1 = var_108:0xc.d
    
    while (true)
        void* rbx_4 = *(rsi + 0x1d8)
        int64_t rdx_6 = *var_118.q
        int64_t rcx_5 = sx.q(r15_1) * 5
        zmm0_1 = zx.o(*(rdx_6 + (rcx_5 << 2)))
        int32_t rax_17 = *(rdx_6 + (rcx_5 << 2) + 8)
        uint64_t var_1e8_1 = zmm0_1.q
        int32_t rdi_2 = var_1e8_1.d
        var_210 = zmm0_1.q
        var_280 = rax_17
        int32_t rsi_1 = var_1e8_1:4.d
        
        if ((rsi_1 != 0 | sub_140b5b8a0(rdi_2, 0) == 0) == 0 || rax_17 == 0
            || *(rbx_4 + 0x1c0) == *(rbx_4 + 0x1ec))
        label_140ba49d2:
            sub_140a9e570(&var_d8, &var_1a8)
            int32_t r12_2 = var_280
            uint64_t* var_1a0
            *var_1a0 = var_210
            var_1a0[1].d = r12_2
            *(var_1a0 + 0xc) = 0xffffffff
            uint64_t rbx_5 = *var_1a0
            sub_140ba2440(&var_d8, &var_1fc, (rbx_5 u>> 0x20).d + sub_140b5ead0(rbx_5.d), var_1a0, 
                var_1a8, nullptr)
            sub_140bb6730(r13, r15_1)
        else
            int32_t rax_20 = sub_140b5ead0(rdi_2)
            void* r8_3 = rbx_4 + 0x1f0
            void* rcx_8 = *(r8_3 + 8)
            
            if (rcx_8 != 0)
                r8_3 = rcx_8
            
            int32_t rax_23 = *(r8_3 + (((sx.q(*(rbx_4 + 0x200)) - 1) & sx.q(rax_20 + rsi_1)) << 2))
            
            if (rax_23 == 0xffffffff)
                goto label_140ba49d2
            
            int64_t r9_2 = *(rbx_4 + 0x1b8)
            int64_t rdx_11
            
            while (true)
                rdx_11 = sx.q(rax_23)
                int64_t r8_4 = rdx_11 * 3
                
                if (*(r9_2 + (r8_4 << 3)) == var_1e8_1)
                    break
                
                rax_23 = *(r9_2 + (r8_4 << 3) + 0x10)
                
                if (rax_23 == 0xffffffff)
                    goto label_140ba49d2
            
            if (rax_23 == 0xffffffff)
                goto label_140ba49d2
            
            void* r14_1 = r9_2 + rdx_11 * 0x18
            
            if (r14_1 == 0)
                goto label_140ba49d2
            
            void* r14_2 = *(r14_1 + 8)
            
            if (r14_2 == 0 || *(r14_2 + 0x23c) != rax_17 || r14_2 == arg1 || *(r14_2 + 0x238) u> 7)
                goto label_140ba49d2
            
            if (*(r14_2 + 0x4fa) == 0)
                sub_140a9e570(&var_d8, &var_240)
                int32_t r12_3 = var_280
                *var_238 = var_210
                var_238[1].d = r12_3
                *(var_238 + 0xc) = 0xffffffff
                uint64_t rbx_7 = *var_238
                sub_140ba2440(&var_d8, &var_208, (rbx_7 u>> 0x20).d + sub_140b5ead0(rbx_7.d), 
                    var_238, var_240, nullptr)
                sub_140a9e570(arg1 + 0x440, &var_1c8)
                int64_t* var_1c0
                *var_1c0 = var_210
                var_1c0[1].d = r12_3
                *(var_1c0 + 0xc) = 0xffffffff
                int64_t rbx_9 = *var_1c0
                sub_140ba2440(arg1 + 0x440, &var_204, (rbx_9 u>> 0x20).d + sub_140b5ead0(rbx_9.d), 
                    var_1c0, var_1c8, nullptr)
                sub_140a9e570(r14_2 + 0x490, &var_1d8)
                uint64_t* var_1d0
                *var_1d0 = rax_2
                var_1d0[1].d = rbx
                *(var_1d0 + 0xc) = 0xffffffff
                uint64_t rax_32 = *var_1d0
                sub_140ba2440(r14_2 + 0x490, &var_200, sub_140b5ead0(rax_32.d) + rax_32:4.d, 
                    var_1d0, var_1d8.d, nullptr)
                sub_140bb6730(r13, r15_1)
        
        var_108:8.d &= not.d(var_118:0xc.d)
        sub_14059bdd0(&var_118:8)
        r15_1 = var_108:0xc.d
        rsi = arg1
        
        if (r15_1 s>= *(var_108.q + 0x18))
            break
        
        r13 = rdi_1
    
    rdi_1 = var_288

if (*(rsi + 0x3f8) != *(rsi + 0x424))
    void* rax_38 = rsi + 0x440
    
    while (*(rsi + 0x448) == *(rsi + 0x474))
        int32_t r11_1 = *(rdi_1 + 0x28)
        void* r10_1 = rdi_1 + 0x10
        int32_t var_268_1 = 0xffffffff
        int32_t r8_9 = 0
        int32_t var_264_1 = 0
        int32_t r9_6 = 0
        
        if (r11_1 != 0)
            void* rax_40 = *(r10_1 + 0x10)
            
            if (rax_40 != 0)
                r10_1 = rax_40
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rcx_23 = *r10_1
            
            if (rcx_23 != 0)
            label_140ba4c75:
                int32_t rax_47 = ((rcx_23 - 1) & rcx_23) ^ rcx_23
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_47)
                int32_t rax_48
                
                if (rax_47 == 0)
                    rax_48 = 0x20
                else
                    rax_48 = 0x1f - temp0_4
                
                var_264_1 = r9_6 - rax_48 + 0x1f
                
                if (r9_6 - rax_48 + 0x1f s> r11_1)
                    var_264_1 = r11_1
            else
                while (true)
                    int64_t rcx_24 = sx.q(r8_9)
                    r9_6 += 0x20
                    r8_9 += 1
                    
                    if (rcx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rcx_23 = *(r10_1 + (rcx_24 << 2) + 4)
                    int32_t var_268_2 = 0xffffffff
                    
                    if (rcx_23 != 0)
                        goto label_140ba4c75
                
                var_264_1 = r11_1
        
        void* r8_10 = *rdi_1
        zmm0_1 = zx.o(*r8_10)
        int32_t rsi_3 = *(r8_10 + 8)
        uint64_t var_258_2 = zmm0_1.q
        var_1d8 = zmm0_1.q
        sub_140bb6730(rdi_1, 0)
        int32_t r14_3 = var_1d8:4.d
        int32_t r15_2 = var_1d8.d
        void var_a0
        
        if (var_d0 == var_a4)
        label_140ba4d5e:
            int32_t var_168
            sub_140a9e570(&var_d8, &var_168)
            uint64_t* var_160
            *var_160 = var_258_2
            var_160[1].d = rsi_3
            *(var_160 + 0xc) = 0xffffffff
            uint64_t rbx_12 = *var_160
            sub_140ba2440(&var_d8, &var_1fc, (rbx_12 u>> 0x20).d + sub_140b5ead0(rbx_12.d), 
                var_160, var_168, nullptr)
            void* rbx_15 = *(arg1 + 0x1d8)
            
            if ((r14_3 != 0 | sub_140b5b8a0(r15_2, 0) == 0) != 0 && rsi_3 != 0
                    && *(rbx_15 + 0x1c0) != *(rbx_15 + 0x1ec))
                int32_t rax_60 = sub_140b5ead0(r15_2)
                void* r8_13 = rbx_15 + 0x1f0
                void* rcx_37 = *(r8_13 + 8)
                
                if (rcx_37 != 0)
                    r8_13 = rcx_37
                
                int32_t i = *(r8_13 + (((sx.q(*(rbx_15 + 0x200)) - 1) & sx.q(rax_60 + r14_3)) << 2))
                
                if (i != 0xffffffff)
                    int64_t r9_9 = *(rbx_15 + 0x1b8)
                    
                    do
                        int64_t i_1 = sx.q(i)
                        int64_t r8_14 = i_1 * 3
                        
                        if (*(r9_9 + (r8_14 << 3)) == var_1d8)
                            if (i != 0xffffffff)
                                void* rcx_39 = r9_9 + i_1 * 0x18
                                
                                if (rcx_39 != 0)
                                    void* r14_4 = *(rcx_39 + 8)
                                    
                                    if (r14_4 != 0 && *(r14_4 + 0x23c) == rsi_3
                                            && *(r14_4 + 0x238) u<= 7)
                                        void* rsi_4 = r14_4 + 0x440
                                        int32_t var_274_1 = 1
                                        int32_t r11_2 = *(rsi_4 + 0x28)
                                        void* r15_3 = rsi_4 + 0x10
                                        var_1a8.q = rsi_4
                                        int32_t rcx_40 = 0
                                        int32_t var_278 = 0
                                        int32_t r8_15 = 0
                                        void* var_270_1 = r15_3
                                        int32_t var_268_3 = 0xffffffff
                                        var_264_1.q = 0
                                        
                                        if (r11_2 != 0)
                                            void* rax_64 = *(r15_3 + 0x10)
                                            void* r9_10 = r15_3
                                            
                                            if (rax_64 != 0)
                                                r9_10 = rax_64
                                            
                                            int32_t temp4_1
                                            int32_t temp5_1
                                            temp4_1:temp5_1 = sx.q(r11_2 - 1)
                                            int32_t rdx_33 = *r9_10
                                            int32_t var_264_3
                                            
                                            if (rdx_33 != 0)
                                            label_140ba4f2c:
                                                int32_t rax_71 = ((rdx_33 - 1) & rdx_33) ^ rdx_33
                                                uint64_t rflags_3
                                                int32_t temp0_5
                                                temp0_5, rflags_3 = _bit_scan_reverse(rax_71)
                                                int32_t var_274_2 = rax_71
                                                int32_t rax_72
                                                
                                                if (rax_71 == 0)
                                                    rax_72 = 0x20
                                                else
                                                    rax_72 = 0x1f - temp0_5
                                                
                                                int32_t var_264_2 = r8_15 - rax_72 + 0x1f
                                                
                                                if (r8_15 - rax_72 + 0x1f s> r11_2)
                                                    var_264_3 = r11_2
                                            else
                                                while (true)
                                                    int64_t rdx_34 = sx.q(rcx_40)
                                                    r8_15 += 0x20
                                                    rcx_40 += 1
                                                    int32_t var_260_1 = r8_15
                                                    var_278 = rcx_40
                                                    
                                                    if (rdx_34.d
                                                            s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                                        break
                                                    
                                                    rdx_33 = *(r9_10 + (rdx_34 << 2) + 4)
                                                    var_268_3 = 0xffffffff
                                                    
                                                    if (rdx_33 != 0)
                                                        goto label_140ba4f2c
                                                
                                                var_264_3 = r11_2
                                        
                                        int32_t rdx_35 = *(rsi_4 + 0x28)
                                        zmm2 = var_268_3.o
                                        var_118.q = rsi_4
                                        int32_t var_264_4 = rdx_35
                                        var_108 = zmm2
                                        var_118 = var_278.o
                                        int32_t rdi_7 = 0xffffffff << (rdx_35 & 0x1f).b
                                        zmm0_1 = var_118
                                        int32_t r8_18 = rdx_35 s>> 5
                                        int32_t r9_12 = rdx_35 & 0xffffffe0
                                        int64_t var_170_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                                        int32_t var_268_4 = rdi_7
                                        uint128_t var_190 = zmm0_1
                                        uint128_t var_180_1 = var_108
                                        
                                        if (rdx_35 != r11_2)
                                            void* rax_76 = *(r15_3 + 0x10)
                                            void* r10_2 = r15_3
                                            
                                            if (rax_76 != 0)
                                                r10_2 = rax_76
                                            
                                            int32_t temp6_1
                                            int32_t temp7_1
                                            temp6_1:temp7_1 = sx.q(r11_2 - 1)
                                            int32_t rdx_39 = *(r10_2 + (sx.q(r8_18) << 2)) & rdi_7
                                            
                                            if (rdx_39 != 0)
                                            label_140ba5019:
                                                int32_t rax_82 = ((rdx_39 - 1) & rdx_39) ^ rdx_39
                                                uint64_t rflags_4
                                                int32_t temp0_7
                                                temp0_7, rflags_4 = _bit_scan_reverse(rax_82)
                                                int32_t rax_83
                                                
                                                if (rax_82 == 0)
                                                    rax_83 = 0x20
                                                else
                                                    rax_83 = 0x1f - temp0_7
                                                
                                                var_264_4 = r9_12 - rax_83 + 0x1f
                                                
                                                if (r9_12 - rax_83 + 0x1f s> r11_2)
                                                    var_264_4 = r11_2
                                            else
                                                while (true)
                                                    int64_t rcx_44 = sx.q(r8_18)
                                                    r9_12 += 0x20
                                                    r8_18 += 1
                                                    
                                                    if (rcx_44.d
                                                            s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                                        break
                                                    
                                                    rdx_39 = *(r10_2 + (rcx_44 << 2) + 4)
                                                    var_268_4 = 0xffffffff
                                                    
                                                    if (rdx_39 != 0)
                                                        goto label_140ba5019
                                                
                                                var_264_4 = r11_2
                                        
                                        while (true)
                                            int64_t rcx_46 = sx.q(var_180_1:0xc.d)
                                            int32_t rax_75
                                            
                                            if (rcx_46.d != (var_268_4.q u>> 0x20).d
                                                    || var_180_1.q != r15_3)
                                                rax_75.b = 0
                                            else
                                                rax_75.b = 1
                                            
                                            int64_t* rdx_40 = var_190.q
                                            
                                            if (rax_75.b == 0 || rdx_40 != rsi_4)
                                                rax_75.b = 1
                                            else
                                                rax_75.b = 0
                                            
                                            if (rax_75.b == 0)
                                                break
                                            
                                            int64_t rdx_41 = *rdx_40
                                            int64_t rcx_47 = rcx_46 * 5
                                            zmm0_1 = zx.o(*(rdx_41 + (rcx_47 << 2)))
                                            int32_t r13_1 = *(rdx_41 + (rcx_47 << 2) + 8)
                                            void* rbx_17 = *(arg1 + 0x1d8)
                                            var_1c8.q = zmm0_1.q
                                            int32_t rdi_8 = var_1c8
                                            uint64_t var_258_3 = zmm0_1.q
                                            int32_t var_1c4
                                            void* const rsi_7
                                            
                                            if ((var_1c4 != 0 | sub_140b5b8a0(rdi_8, 0) == 0) == 0
                                                || r13_1 == 0
                                                || *(rbx_17 + 0x1c0) == *(rbx_17 + 0x1ec))
                                            labelid_24:
                                                rsi_7 = nullptr
                                            else
                                                int32_t rax_87 = sub_140b5ead0(rdi_8)
                                                void* r8_19 = rbx_17 + 0x1f0
                                                void* rcx_50 = *(r8_19 + 8)
                                                
                                                if (rcx_50 != 0)
                                                    r8_19 = rcx_50
                                                
                                                int32_t rax_90 = *(r8_19 + (((
                                                    sx.q(*(rbx_17 + 0x200)) - 1)
                                                    & sx.q(rax_87 + var_1c4)) << 2))
                                                
                                                if (rax_90 == 0xffffffff)
                                                labelid_24:
                                                    rsi_7 = nullptr
                                                else
                                                    int64_t r9_14 = *(rbx_17 + 0x1b8)
                                                    int64_t rdx_46
                                                    
                                                    while (true)
                                                        rdx_46 = sx.q(rax_90)
                                                        int64_t r8_20 = rdx_46 * 3
                                                        
                                                        if (*(r9_14 + (r8_20 << 3)) == var_1c8.q)
                                                            break
                                                        
                                                        rax_90 = *(r9_14 + (r8_20 << 3) + 0x10)
                                                        
                                                        if (rax_90 == 0xffffffff)
                                                            goto label_140ba515d_2
                                                    
                                                    if (rax_90 == 0xffffffff)
                                                    label_140ba515d:
                                                        rsi_7 = nullptr
                                                    else
                                                        void* rsi_6 = r9_14 + rdx_46 * 0x18
                                                        
                                                        if (rsi_6 == 0)
                                                        label_140ba515d_1:
                                                            rsi_7 = nullptr
                                                        else
                                                            rsi_7 = *(rsi_6 + 8)
                                                            
                                                            if (rsi_7 == 0
                                                                || *(rsi_7 + 0x23c) != r13_1)
                                                            label_140ba515d_2:
                                                                rsi_7 = nullptr
                                            
                                            int32_t var_158
                                            sub_140a9e570(rax_38, &var_158)
                                            int64_t* var_150
                                            *var_150 = var_258_3
                                            var_150[1].d = r13_1
                                            *(var_150 + 0xc) = 0xffffffff
                                            int64_t rbx_18 = *var_150
                                            sub_140ba2440(rax_38, &var_200, 
                                                (rbx_18 u>> 0x20).d + sub_140b5ead0(rbx_18.d), 
                                                var_150, var_158, nullptr)
                                            int32_t var_148
                                            sub_140a9e570(rsi_7 + 0x490, &var_148)
                                            uint64_t* var_140
                                            *var_140 = rax_2
                                            var_140[1].d = rbx
                                            *(var_140 + 0xc) = 0xffffffff
                                            uint64_t rbx_20 = *var_140
                                            sub_140ba2440(rsi_7 + 0x490, &var_204, 
                                                (rbx_20 u>> 0x20).d + sub_140b5ead0(rbx_20.d), 
                                                var_140, var_148, nullptr)
                                            var_180_1:8.d &= not.d(var_190:0xc.d)
                                            sub_14059bdd0(&var_190:8)
                                            rsi_4 = var_1a8.q
                                        
                                        int32_t var_274_3 = 1
                                        var_278 = 0
                                        int32_t r8_23 = *(r14_4 + 0x418)
                                        void* r15_4 = r14_4 + 0x400
                                        void* var_270_2 = r15_4
                                        int32_t var_268_5 = 0xffffffff
                                        var_264_4.q = 0
                                        
                                        if (r8_23 != 0)
                                            sub_14059bdd0(&var_278)
                                            r8_23 = *(r15_4 + 0x18)
                                        
                                        int32_t rdx_51 = *(r14_4 + 0x418)
                                        zmm0_1 = var_278.o
                                        zmm2 = var_268_5.o
                                        var_278 = rdx_51 s>> 5
                                        char rcx_61 = rdx_51.b & 0x1f
                                        var_118 = zmm0_1
                                        var_118.q = r14_4 + 0x3f0
                                        zmm0_1 = var_118
                                        int32_t var_274_4 = 1 << rcx_61
                                        var_108 = zmm2
                                        var_70[1] = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                                        int32_t var_264_5 = rdx_51
                                        int32_t var_260_2 = rdx_51 & 0xffffffe0
                                        var_88.o = zmm0_1
                                        var_80 = var_108
                                        
                                        if (rdx_51 != r8_23)
                                            sub_14059bdd0(&var_278)
                                        
                                        while (true)
                                            int64_t rcx_63 = sx.q(var_70[0]:4.d)
                                            int32_t rax_104
                                            
                                            if (rcx_63.d != ((0xffffffff << rcx_61).q u>> 0x20).d
                                                    || var_80:8.q != r15_4)
                                                rax_104.b = 0
                                            else
                                                rax_104.b = 1
                                            
                                            void* rdx_52 = var_88
                                            
                                            if (rax_104.b == 0 || rdx_52 != r14_4 + 0x3f0)
                                                rax_104.b = 1
                                            else
                                                rax_104.b = 0
                                            
                                            if (rax_104.b == 0)
                                                break
                                            
                                            int64_t rdx_53 = *rdx_52
                                            int64_t rcx_64 = rcx_63 * 5
                                            zmm0_1 = zx.o(*(rdx_53 + (rcx_64 << 2)))
                                            int32_t rsi_8 = *(rdx_53 + (rcx_64 << 2) + 8)
                                            var_240.q = zmm0_1.q
                                            int32_t rbx_22 = var_240
                                            uint64_t var_258_4 = zmm0_1.q
                                            int32_t var_23c
                                            
                                            if (var_d0 == var_a4)
                                            label_140ba53ec:
                                                void* r14_5 = *(arg1 + 0x1d8)
                                                int32_t rcx_70
                                                rcx_70.b = sub_140b5b8a0(rbx_22, 0) == 0
                                                
                                                if ((var_23c != 0 | rcx_70.b) != 0 && rsi_8 != 0)
                                                    sub_1409bd4b0(r14_5 + 0x1b8, &var_280, 
                                                        var_240.q)
                                                    int64_t rax_113 = sx.q(var_280)
                                                    
                                                    if (rax_113.d != 0xffffffff)
                                                        void* r14_6 =
                                                            *(r14_5 + 0x1b8) + rax_113 * 0x18
                                                        
                                                        if (r14_6 != 0)
                                                            void* r14_7 = *(r14_6 + 8)
                                                            
                                                            if (r14_7 != 0
                                                                    && *(r14_7 + 0x23c) == rsi_8
                                                                    && *(r14_7 + 0x238) u<= 7)
                                                                int32_t rax_116
                                                                void* rcx_74
                                                                int32_t* rdx_60
                                                                void* rdi_12
                                                                int32_t r8_26
                                                                
                                                                if (*(r14_7 + 0x4fa) == 0)
                                                                    int32_t var_128
                                                                    sub_140a9e570(rax_38, &var_128)
                                                                    int64_t* var_120
                                                                    *var_120 = var_258_4
                                                                    var_120[1].d = rsi_8
                                                                    *(var_120 + 0xc) = 0xffffffff
                                                                    int64_t rbx_25 = *var_120
                                                                    void var_198
                                                                    sub_140ba2440(rax_38, &var_198, 
                                                                        (rbx_25 u>> 0x20).d
                                                                            + sub_140b5ead0(rbx_25.d), 
                                                                        var_120, var_128, nullptr)
                                                                    sub_140a9e570(r14_7 + 0x490, &var_230)
                                                                    rdi_12 = var_228
                                                                    *rdi_12 = rax_2
                                                                    *(rdi_12 + 8) = rbx
                                                                    *(rdi_12 + 0xc) = 0xffffffff
                                                                    int64_t rbx_27 = *rdi_12
                                                                    rdx_60 = &var_210
                                                                    rcx_74 = r14_7 + 0x490
                                                                    r8_26 = (rbx_27 u>> 0x20).d
                                                                        + sub_140b5ead0(rbx_27.d)
                                                                    rax_116 = var_230
                                                                else
                                                                    int32_t var_138
                                                                    sub_140a9e570(var_288, &var_138)
                                                                    void* var_130
                                                                    rdi_12 = var_130
                                                                    *rdi_12 = var_258_4
                                                                    *(rdi_12 + 8) = rsi_8
                                                                    *(rdi_12 + 0xc) = 0xffffffff
                                                                    int64_t rbx_23 = *rdi_12
                                                                    rcx_74 = var_288
                                                                    rdx_60 = &var_208
                                                                    r8_26 = (rbx_23 u>> 0x20).d
                                                                        + sub_140b5ead0(rbx_23.d)
                                                                    rax_116 = var_138
                                                                
                                                                sub_140ba2440(rcx_74, rdx_60, r8_26, 
                                                                    rdi_12, rax_116, nullptr)
                                            else
                                                void* rcx_68 = &var_a0
                                                int64_t rdx_55 = sx.q(var_90 - 1)
                                                    & sx.q(sub_140b5ead0(rbx_22) + var_23c)
                                                
                                                if (var_98 != 0)
                                                    rcx_68 = var_98
                                                
                                                int32_t rax_110 = *(rcx_68 + (rdx_55 << 2))
                                                
                                                if (rax_110 == 0xffffffff)
                                                    goto label_140ba53ec
                                                
                                                int64_t r8_24 = var_d8
                                                
                                                while (true)
                                                    int64_t rdx_56 = sx.q(rax_110) * 5
                                                    
                                                    if (*(r8_24 + (rdx_56 << 2) + 8) == rsi_8)
                                                        break
                                                    
                                                    rax_110 = *(r8_24 + (rdx_56 << 2) + 0xc)
                                                    
                                                    if (rax_110 == 0xffffffff)
                                                        goto label_140ba53ec
                                                
                                                if (rax_110 == 0xffffffff)
                                                    goto label_140ba53ec
                                            var_70[0].d &= not.d(var_80:4.d)
                                            sub_14059bdd0(&var_80)
                            
                            break
                        
                        i = *(r9_9 + (r8_14 << 3) + 0x10)
                    while (i != 0xffffffff)
            
            rdi_1 = var_288
        else
            int64_t rdx_23 = sx.q(var_90 - 1) & sx.q(sub_140b5ead0(r15_2) + r14_3)
            void* rax_54 = &var_a0
            
            if (var_98 != 0)
                rax_54 = var_98
            
            int32_t rax_55 = *(rax_54 + (rdx_23 << 2))
            
            if (rax_55 == 0xffffffff)
                goto label_140ba4d5e
            
            int64_t r8_11 = var_d8
            
            while (true)
                int64_t rdx_24 = sx.q(rax_55) * 5
                
                if (*(r8_11 + (rdx_24 << 2) + 8) == rsi_3)
                    break
                
                rax_55 = *(r8_11 + (rdx_24 << 2) + 0xc)
                
                if (rax_55 == 0xffffffff)
                    goto label_140ba4d5e
            
            if (rax_55 == 0xffffffff)
                goto label_140ba4d5e
        rsi = arg1
        
        if (*(rsi + 0x3f8) == *(rsi + 0x424))
            break

if (*(rsi + 0x448) == *(rsi + 0x474))
    int64_t rax_125 = *(rsi + 0x14)
    void* rbx_29 = *(rsi + 0x1d8)
    int32_t rdi_14 = *(rsi + 0x23c)
    *(rsi + 0x238) = 8
    var_240.q = rax_125
    
    if (data_143e1a350 != 0)
        sub_140baa830(0x7fffffff)
    
    int32_t r8_28
    
    if (data_143e1a350 == 0 || data_143e1a350 == 0)
        r8_28 = *(rsi + 0x23c)
    else
        r8_28 = sub_140baa830(0x7fffffff)
    
    zmm1 = zx.o(var_240.q)
    int32_t rcx_82 = *(rbx_29 + 0x328) + 1
    var_80:8.q = j_sub_140b98680
    var_f8 = &data_142e345d8
    int32_t rax_127 = *(rsi + 0x44)
    *(rbx_29 + 0x328) = rcx_82
    var_88:4.d = r8_28
    var_80:4.d = rcx_82
    var_118.q = nullptr
    var_228.d = rdi_14
    var_220.q = rbx_29
    zmm0_1.q = zmm1.q
    var_88.d = rax_127
    void* var_f0
    var_f0.o = zmm0_1
    var_80.d = 0
    zmm0_1 = var_f8.o
    uint128_t var_e8
    zmm1 = _mm_unpacklo_pd(var_e8, zx.o(var_220.q)[0])
    uint128_t var_e8_1 = zmm1
    uint128_t var_48_1 = zmm1
    var_70[1] = 0
    var_108.q = 0
    uint128_t var_58 = zmm0_1
    sub_140b93350(rbx_29 + 0x330, &var_88)
    
    if (var_80:8.q != 0)
        uint128_t* rax_128 = var_70[1]
        uint128_t* rcx_84 = &var_58
        
        if (rax_128 != 0)
            rcx_84 = rax_128
        
        (*(*rcx_84 + 0x10))(rcx_84)
    
    if (var_118.q != 0)
        int64_t* rax_130 = var_108.q
        int64_t* rcx_85 = &var_f8
        
        if (rax_130 != 0)
            rcx_85 = rax_130
        
        (*(*rcx_85 + 0x10))(rcx_85)

int32_t var_90_1 = 0

if (var_98 != 0)
    sub_140a74f90(var_98)

void* result = sub_140b96c40(&var_d8)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
