// 函数: sub_14040eeb0
// 地址: 0x14040eeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t i_7 = sx.q(arg24)
void* r13 = arg2
int32_t r15 = arg3
int64_t rax_3 = i_7 * 0x30
int64_t i_10 = i_7
int64_t rdx = rax_3 + 0xf

if (rdx u<= rax_3)
    rdx = 0xffffffffffffff0

int64_t rdx_1 = rdx & 0xfffffffffffffff0
__chkstk(rdx_1)
int32_t var_fc = 0
int64_t var_a0 = 0
void* rbx_2 = arg1 + ((sx.q(*(arg1 + 0x110c) - arg12 + 1) + 0x140) << 2)
void* var_b0 = rbx_2
int32_t* result = arg7 + (sx.q(*(arg1 + 0x1108) - arg12 + 2) << 2)
int32_t rcx_1 = arg19
int32_t* result_1 = result

if (rcx_1 s> 0)
    int32_t r14_1 = arg13
    void var_128
    void* rsi_1 = &var_128 - rdx_1 + 0x3c
    int32_t* r11_1 = -0xfffffffffffffbfc
    void* var_58_1 = rsi_1
    int64_t var_c8_1 = 0
    int32_t* var_c0_1 = 0x430
    int64_t var_90_1 = 0x400
    int32_t* var_f0_1 = -0xfffffffffffffbfc
    void* r12_1 = r13 + 0x460
    int32_t rsi_24
    
    do
        int32_t r10_2
        
        if (r15 != 2)
            r10_2 = 0
        else
            int32_t r11_2 = result[-3]
            int32_t r9 = result[-2]
            int32_t r12_2 = result[-1]
            int32_t rdi = *result
            int32_t r14_2 = result[-4]
            int32_t r10_1 = sx.d(arg10[3])
            int32_t rsi_2 = sx.d(arg10[4])
            int32_t rbx_3 = sx.d(*arg10)
            int32_t r15_1 = sx.d(arg10[1])
            int32_t r8 = sx.d(arg10[2])
            rsi_1 = var_58_1
            rbx_2 = var_b0
            int32_t rcx_8 = ((zx.d(r11_2.w) * r10_1) s>> 0x10) * 2
                + ((zx.d(r9.w) * r8) s>> 0x10 << 1) + ((zx.d(r14_2.w) * rsi_2) s>> 0x10 << 1)
                + ((((zx.d(rdi.w) * rbx_3) s>> 0x10) + 2) << 1)
            result_1 = &result_1[1]
            r11_1 = var_f0_1
            r14_1 = arg13
            i_7 = i_10
            r10_2 = rcx_8 + ((zx.d(r12_2.w) * r15_1) s>> 0x10 << 1) + (((r9 s>> 0x10) * r8) << 1)
                + (((r11_2 s>> 0x10) * r10_1) << 1) + (((r14_2 s>> 0x10) * rsi_2) << 1)
                + (((rdi s>> 0x10) * rbx_3) << 1) + (((r12_2 s>> 0x10) * r15_1) << 1)
            r12_1 = r13 + 0x460
        
        int32_t var_d8_1
        
        if (arg12 s<= 0)
            var_d8_1 = 0
        else
            int32_t r9_3 = *(rbx_2 - 4)
            int32_t rcx_11 = sx.d(r14_1.w)
            int32_t rdx_4 = *(rbx_2 - 8) + *rbx_2
            int32_t r8_2 = r14_1 s>> 0x10
            int32_t r10_6 = r10_2 - ((zx.d(rdx_4.w) * rcx_11) s>> 0x10 << 2)
                - ((zx.d(r9_3.w) * r8_2) s>> 0x10 << 2) - (((rdx_4 s>> 0x10) * rcx_11) << 2)
                - (((r9_3 s>> 0x10) * r8_2) << 2)
            var_b0 = rbx_2 + 4
            var_d8_1 = r10_6
        
        if (i_7 s> 0)
            int64_t rcx_12 = sx.q(arg21)
            int32_t* r13_1 = var_c0_1
            void* var_b8_1 = rsi_1
            void* rsi_3 = r11_1 + r12_1
            void* var_f8_1 = rsi_3
            int64_t i_5 = i_7
            int32_t rcx_17 = arg15 s>> 0x10
            int64_t i
            
            do
                *(r13_1 + rsi_3 - 8) = *(r13_1 + rsi_3 - 8) * 0xbb38435 + 0x3619636b
                int32_t rax_50 = sx.d(arg9[9])
                int32_t r12_5 = sx.d(arg9[7])
                int32_t rax_51 = sx.d(arg9[8])
                int32_t r14_5 = sx.d(arg9[6])
                int32_t rdi_3 = sx.d(arg9[5])
                int32_t r11_5 = sx.d(arg9[4])
                int32_t r8_3 = sx.d(arg9[3])
                int32_t rax_52 = *(var_f8_1 + 0x1c)
                int32_t rdx_8 = *(var_f8_1 + 0x18)
                int32_t r9_7 = *(var_f8_1 + 0x14)
                int32_t rbx_5 = *(var_f8_1 + 0x10)
                int32_t r13_2 = *(rsi_3 + 4)
                int32_t rax_54 = sx.d(arg9[1])
                int32_t r15_2 = *(rsi_3 + 8)
                int32_t rsi_4 = *(rsi_3 + 0xc)
                var_108 = sx.d(arg9[2])
                int32_t rax_55 = *(var_f8_1 + 0x20)
                int32_t rcx_22 = var_108
                int32_t r10_8 = sx.d(*arg9)
                var_108 = (zx.d(rdx_8.w) * rcx_22) s>> 0x10
                var_108 += (zx.d(r9_7.w) * r8_3) s>> 0x10
                var_108 += (zx.d(rbx_5.w) * r11_5) s>> 0x10
                var_108 += (zx.d(rax_55.w) * r10_8) s>> 0x10
                var_108 += (zx.d(rsi_4.w) * rdi_3) s>> 0x10
                var_108 += (zx.d(r15_2.w) * r14_5) s>> 0x10
                var_108 += (zx.d(r13_2.w) * r12_5) s>> 0x10
                var_108 += (zx.d(*(var_f8_1 - 4)) * rax_50) s>> 0x10
                var_108 += (zx.d(*var_f8_1) * rax_51) s>> 0x10
                var_108 += (zx.d(rax_52.w) * rax_54) s>> 0x10
                int32_t* rsi_7 = var_f8_1
                int32_t rcx_29 = var_108 + (rdx_8 s>> 0x10) * rcx_22 + (r9_7 s>> 0x10) * r8_3
                    + (rbx_5 s>> 0x10) * r11_5 + (rax_55 s>> 0x10) * r10_8
                    + (rsi_4 s>> 0x10) * rdi_3 + (r15_2 s>> 0x10) * r14_5
                int32_t r12_9 = (rax_52 s>> 0x10) * rax_54 + (*rsi_7 s>> 0x10) * rax_51
                    + (arg22 s>> 1) + rcx_29 + (r13_2 s>> 0x10) * r12_5
                    + (rsi_7[-1] s>> 0x10) * rax_50
                
                if (arg22 == 0x10)
                    int32_t r9_10 = rsi_7[-3]
                    int32_t r13_5 = rsi_7[-7]
                    int32_t r15_5 = rsi_7[-6]
                    int32_t rdi_4 = rsi_7[-5]
                    int32_t r11_6 = rsi_7[-4]
                    int32_t rdx_11 = rsi_7[-2]
                    int32_t rcx_32 = sx.d(arg9[0xa])
                    int32_t r12_10 = sx.d(arg9[0xf])
                    int32_t r8_4 = sx.d(arg9[0xb])
                    int32_t r14_6 = sx.d(arg9[0xe])
                    int32_t rbx_8 = sx.d(arg9[0xd])
                    int32_t r10_9 = sx.d(arg9[0xc])
                    int32_t rsi_14 = ((zx.d(rdx_11.w) * rcx_32) s>> 0x10)
                        + ((zx.d(r9_10.w) * r8_4) s>> 0x10) + ((zx.d(r11_6.w) * r10_9) s>> 0x10)
                        + ((zx.d(rdi_4.w) * rbx_8) s>> 0x10) + ((zx.d(r15_5.w) * r14_6) s>> 0x10)
                    int32_t rsi_19 = rsi_14 + ((zx.d(r13_5.w) * r12_10) s>> 0x10)
                        + (rdx_11 s>> 0x10) * rcx_32 + (r9_10 s>> 0x10) * r8_4
                        + (r11_6 s>> 0x10) * r10_9 + (rdi_4 s>> 0x10) * rbx_8
                    r12_9 = r12_9 + (r13_5 s>> 0x10) * r12_10 + rsi_19 + (r15_5 s>> 0x10) * r14_6
                    rsi_7 = var_f8_1
                
                int32_t r14_7 = sx.d(arg23)
                r13_1 = var_c0_1
                int32_t rdx_14 = *(r13_1 + rsi_7 - 0x4c)
                int32_t r12_13 = r12_9 << 4
                void* rdi_8 = &r13_1[-0x12] + rsi_7
                int32_t rbx_12 =
                    (rdx_14 s>> 0x10) * r14_7 + ((zx.d(rdx_14.w) * r14_7) s>> 0x10) + rax_55
                int32_t rax_121 = *rdi_8 - rbx_12
                *(r13_1 + rsi_7 - 0x4c) = rbx_12
                int32_t rdx_15 = sx.d(*arg11)
                int32_t rax_124 =
                    (rax_121 s>> 0x10) * r14_7 + ((zx.d(rax_121.w) * r14_7) s>> 0x10) + rdx_14
                uint64_t rbx_15 = zx.q((rbx_12 s>> 0x10) * rdx_15
                    + ((zx.d(rbx_12.w) * rdx_15) s>> 0x10) + (rcx_12.d s>> 1))
                
                if (arg21 s> 2)
                    void* rsi_21 = &arg11[2]
                    uint64_t j_1 = zx.q(((arg21 - 3) u>> 1) + 1)
                    uint64_t j
                    
                    do
                        void* r10_10 = rdi_8 + 4
                        int32_t rcx_45 = *(rdi_8 + 4) - rax_124
                        rdi_8 += 8
                        rsi_21 += 4
                        int32_t r11_13 = ((zx.d(rcx_45.w) * r14_7) s>> 0x10)
                            + (rcx_45 s>> 0x10) * r14_7 + *(rdi_8 - 8)
                        *(rdi_8 - 8) = rax_124
                        int32_t rcx_48 = sx.d(*(rsi_21 - 6))
                        int32_t rax_128 = *rdi_8 - r11_13
                        int32_t rbx_17 = rbx_15.d + (rax_124 s>> 0x10) * rcx_48
                            + ((zx.d(rax_124.w) * rcx_48) s>> 0x10)
                        int32_t rcx_52 = ((zx.d(rax_128.w) * r14_7) s>> 0x10) + *r10_10
                        *r10_10 = r11_13
                        rax_124 = (rax_128 s>> 0x10) * r14_7 + rcx_52
                        int32_t rcx_53 = sx.d(*(rsi_21 - 4))
                        rbx_15 = zx.q(rbx_17 + (r11_13 s>> 0x10) * rcx_53
                            + ((zx.d(r11_13.w) * rcx_53) s>> 0x10))
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    rsi_7 = var_f8_1
                
                void* rdi_9 = rsi_7 + r13_1
                *(rsi_7 + (rcx_12 << 2) + 0x43c - &r11_1[0x118]) = rax_124
                int32_t r9_13 = *(r13_1 + rsi_7 - 0xc)
                int32_t rdx_22 = sx.d(arg11[rcx_12 - 1])
                uint32_t r8_6 = zx.d(r9_13.w)
                int32_t r9_14 = r9_13 s>> 0x10
                int32_t rdx_23 = sx.d(arg14)
                int32_t rdx_24 = sx.d(arg15.w)
                int32_t r14_8 = (((rax_124 s>> 0x10) * rdx_22) << 3)
                    + ((zx.d(rax_124.w) * rdx_22) s>> 0x10 << 3) + ((rdx_23 * r8_6) s>> 0x10 << 2)
                    + ((rdx_23 * r9_14) << 2) + (rbx_15 << 3).d
                int32_t rcx_61 = *(rdi_9 + (sx.q(*arg25) << 2) - 0xcc)
                int32_t r15_8 = (((rcx_61 s>> 0x10) * rdx_24) << 2)
                    + ((zx.d(rcx_61.w) * rdx_24) s>> 0x10 << 2) + ((rcx_17 * r8_6) s>> 0x10 << 2)
                    + ((rcx_17 * r9_14) << 2)
                int32_t rcx_69 = *(var_f0_1 + arg4 + 0x404)
                    - ((((r12_13 - r15_8 - r14_8 + var_d8_1) s>> 3) + 1) s>> 1)
                
                if (*(rdi_9 - 8) s< 0)
                    rcx_69 = neg.d(rcx_69)
                
                if (rcx_69 s> 0x7800)
                    rcx_69 = 0x7800
                else if (rcx_69 s< 0xffff8400)
                    rcx_69 = -0x7c00
                
                int32_t rax_159 = (rcx_69 - arg18) s>> 0xa
                int32_t rdx_26
                int32_t rbx_19
                int32_t r8_8
                int32_t r10_12
                
                if (rax_159 s> 0)
                    r10_12 = arg18 - 0x50 + (rax_159 << 0xa)
                    rdx_26 = sx.d(r10_12.w)
                    rbx_19 = r10_12 + 0x400
                    r8_8 = sx.d(rbx_19.w)
                else if (rax_159 == 0)
                    rbx_19 = arg18 + 0x3b0
                    r10_12 = arg18
                    rdx_26 = sx.d(arg18.w)
                    r8_8 = sx.d(rbx_19.w)
                else if (rax_159 != 0xffffffff)
                    r10_12 = arg18 + 0x50 + (rax_159 << 0xa)
                    rbx_19 = r10_12 + 0x400
                    rdx_26 = sx.d(neg.w(r10_12.w))
                    r8_8 = sx.d(neg.w(rbx_19.w))
                else
                    r10_12 = arg18 - 0x3b0
                    rbx_19 = arg18
                    r8_8 = sx.d(arg18.w)
                    rdx_26 = sx.d(neg.w(r10_12.w))
                
                int32_t r9_15 = sx.d(arg17)
                int32_t r11_16 = sx.d(rcx_69.w - r10_12.w)
                int32_t rdx_28 = sx.d(rcx_69.w - rbx_19.w)
                int32_t rcx_71 = *(r13_1 + rsi_7)
                int32_t r11_19 = (r11_16 * r11_16 + rdx_26 * r9_15) s>> 0xa
                int32_t rdx_31 = (rdx_28 * rdx_28 + r8_8 * r9_15) s>> 0xa
                int32_t rcx_74
                
                if (r11_19 s>= rdx_31)
                    *(var_b8_1 - 0x18) = rcx_71 + rdx_31
                    int32_t rcx_76 = *(r13_1 + rsi_7)
                    *(var_b8_1 - 0x1c) = rbx_19
                    rcx_74 = rcx_76 + r11_19
                    *(var_b8_1 - 4) = r10_12
                else
                    *(var_b8_1 - 0x18) = rcx_71 + r11_19
                    int32_t rcx_73 = *(r13_1 + rsi_7)
                    *(var_b8_1 - 0x1c) = r10_12
                    rcx_74 = rcx_73 + rdx_31
                    *(var_b8_1 - 4) = rbx_19
                
                int32_t rax_167 = *(var_b8_1 - 0x1c)
                *var_b8_1 = rcx_74
                int32_t rax_168 = rax_167 << 4
                
                if (*(rdi_9 - 8) s< 0)
                    rax_168 = neg.d(rax_168)
                
                int32_t rdx_32 = rax_168 + r10_2
                *(var_b8_1 - 8) = rdx_32
                int32_t r8_10 = rdx_32 + r12_13
                *(var_b8_1 - 0x14) = r8_10
                int32_t rcx_78 = r8_10 - r14_8
                *(var_b8_1 - 0x10) = rcx_78
                *(var_b8_1 - 0xc) = rcx_78 - r15_8
                int32_t rax_172 = *(var_b8_1 - 4) << 4
                
                if (*(rdi_9 - 8) s< 0)
                    rax_172 = neg.d(rax_172)
                
                int32_t rdx_33 = rax_172 + r10_2
                void* r9_17 = var_b8_1 + 0x30
                rsi_3 = &rsi_7[0x124]
                int32_t r8_11 = rdx_33 + r12_13
                *(r9_17 - 0x20) = rdx_33
                var_b8_1 = r9_17
                *(r9_17 - 0x2c) = r8_11
                var_f8_1 = rsi_3
                int32_t rcx_80 = r8_11 - r14_8
                *(r9_17 - 0x28) = rcx_80
                i = i_5
                i_5 -= 1
                *(r9_17 - 0x24) = rcx_80 - r15_8
            while (i != 1)
            r13 = arg2
            i_7 = i_10
        
        int32_t* r11_21 = arg25
        void* r9_18 = &var_128 - rdx_1 + 0x20
        int64_t rdx_34 = 1
        int64_t rbx_20 = 0
        int32_t rax_177 = (*r11_21 - 1) & 0x1f
        *r11_21 = rax_177
        int32_t r8_12 = *(r9_18 + 4)
        
        if (arg24 s> 1)
            void* rcx_81 = r9_18 + 0x34
            uint64_t i_8 = zx.q(arg24 - 1)
            uint64_t i_1
            
            do
                int32_t rax_179 = *rcx_81
                
                if (rax_179 s< r8_12)
                    r8_12 = rax_179
                    rbx_20 = rdx_34
                
                rdx_34 += 1
                rcx_81 += 0x30
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
            r9_18 = &var_128 - rdx_1 + 0x20
        
        int64_t r14_9 = sx.q((arg26 + rax_177) & 0x1f)
        int32_t r8_13 = *(r13 + ((rbx_20 * 0x124 + r14_9) << 2) + 0x1c0)
        
        if (i_7 s> 0)
            void* rax_183 = r9_18 + 0x1c
            int64_t i_6 = i_7
            void* rcx_83 = (r14_9 << 2) + 0x1c0 + r13
            int64_t i_2
            
            do
                if (*rcx_83 != r8_13)
                    *(rax_183 - 0x18) += 0x7ffffff
                    *rax_183 += 0x7ffffff
                
                rcx_83 += 0x490
                rax_183 += 0x30
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        int32_t r9_19 = *(r9_18 + 4)
        int32_t r10_19 = *(r9_18 + 0x1c)
        int32_t rax_184 = 1
        int32_t r15_9 = 0
        int64_t rdi_10 = 0
        int32_t r12_14 = 0
        int64_t rsi_22 = 0
        int64_t rdx_35 = 1
        
        if (arg24 s> 1)
            void* rcx_85 = &var_128 - rdx_1 + 0x6c
            
            do
                int32_t r8_14 = *(rcx_85 - 0x18)
                
                if (r8_14 s> r9_19)
                    r9_19 = r8_14
                    r15_9 = rax_184
                    rdi_10 = rdx_35
                
                int32_t r8_15 = *rcx_85
                
                if (r8_15 s< r10_19)
                    r10_19 = r8_15
                    r12_14 = rax_184
                    rsi_22 = rdx_35
                
                rax_184 += 1
                rdx_35 += 1
                rcx_85 += 0x30
            while (rax_184 s< arg24)
            
            r11_21 = arg25
        
        void* r10_20
        int64_t r12_15
        
        if (r10_19 s>= r9_19)
            r10_20 = &var_128 - rdx_1 + 0x20
            r12_15 = var_c8_1
        else
            r12_15 = var_c8_1
            memcpy(((sx.q(r15_9) * 0x124 + r12_15) << 2) + r13, 
                ((sx.q(r12_14) * 0x124 + r12_15) << 2) + r13, ((0x124 - var_c8_1) << 2).d)
            r10_20 = &var_128 - rdx_1 + 0x20
            r11_21 = arg25
            int64_t rcx_89 = rsi_22 * 6
            void* rdx_40 = rdi_10 * 0x30 + r10_20
            *rdx_40 = *(r10_20 + (rcx_89 << 3) + 0x18)
            *(rdx_40 + 4) = *(r10_20 + (rcx_89 << 3) + 0x1c)
            *(rdx_40 + 8) = *(r10_20 + (rcx_89 << 3) + 0x20)
            *(rdx_40 + 0xc) = *(r10_20 + (rcx_89 << 3) + 0x24)
            *(rdx_40 + 0x10) = *(r10_20 + (rcx_89 << 3) + 0x28)
            *(rdx_40 + 0x14) = *(r10_20 + (rcx_89 << 3) + 0x2c)
        
        void* rbx_22 = rbx_20 * 0x490 + r13
        void* r8_28
        int64_t r15_10
        
        if (arg20 s> 0 || var_fc s>= arg26)
            r15_10 = var_a0
            int64_t r9_20 = sx.q(arg26)
            (r15_10 - r9_20)[arg5] = (((*(rbx_22 + (r14_9 << 2) + 0x240) s>> 9) + 1) s>> 1).b
            int32_t rdx_42 = *(rbx_22 + (r14_9 << 2) + 0x2c0)
            int32_t rcx_94 = sx.d(*(arg8 + (r14_9 << 2)))
            int32_t r8_27 = ((((((*(arg8 + (r14_9 << 2)) s>> 0xf) + 1) s>> 1) * rdx_42
                + ((zx.d(rdx_42.w) * rcx_94) s>> 0x10) + (rdx_42 s>> 0x10) * rcx_94) s>> 7) + 1) s>> 1
            
            if (r8_27 s> 0x7fff)
                r8_27 = 0x7fff
            else if (r8_27 s< 0xffff8000)
                r8_27 = -0x8000
            
            *(arg6 + ((r15_10 - r9_20) << 1)) = r8_27.w
            r8_28 = arg1
            *(r8_28 + ((sx.q(*(r8_28 + 0x110c)) - r9_20) << 2) + 0x500) =
                *(rbx_22 + (r14_9 << 2) + 0x3c0)
            *(arg7 + ((sx.q(*(r8_28 + 0x1108)) - r9_20) << 2)) = *(rbx_22 + (r14_9 << 2) + 0x340)
        else
            r8_28 = arg1
            r15_10 = var_a0
        
        i_7 = i_10
        *(r8_28 + 0x110c) += 1
        *(r8_28 + 0x1108) += 1
        
        if (i_7 s> 0)
            void* r8_29 = r13
            void* rdx_46 = r10_20 + 8
            int64_t i_9 = i_7
            int64_t i_3
            
            do
                int32_t rax_208 = *(rdx_46 + 4)
                void* rcx_100 = r8_29 + var_f0_1
                rdx_46 += 0x30
                *(var_90_1 + rcx_100 + 0x484) = rax_208
                r8_29 += 0x490
                *(rcx_100 + 0x484) = *(rdx_46 - 0x30)
                *(r8_29 + (sx.q(*r11_21) << 2) - 0x1d0) = *(rdx_46 - 0x30)
                *(r8_29 + (sx.q(*r11_21) << 2) - 0x250) = *(rdx_46 - 0x38)
                *(r8_29 + (sx.q(*r11_21) << 2) - 0x150) = *(rdx_46 - 0x24) * 2
                *(r8_29 + (sx.q(*r11_21) << 2) - 0xd0) = *(rdx_46 - 0x28)
                *(r8_29 - 0xc) += ((*(rdx_46 - 0x38) s>> 9) + 1) s>> 1
                *(r8_29 + (sx.q(*r11_21) << 2) - 0x2d0) = *(r8_29 - 0xc)
                *(r8_29 - 4) = *(rdx_46 - 0x34)
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            r13 = arg2
        
        var_90_1 -= 4
        var_c0_1 -= 4
        rbx_2 = var_b0
        r14_1 = arg13
        rsi_24 = var_fc + 1
        *(arg8 + (sx.q(*r11_21) << 2)) = arg16 s>> 6
        rcx_1 = arg19
        result = result_1
        r11_1 = &var_f0_1[1]
        var_fc = rsi_24
        var_c8_1 = r12_15 + 1
        var_a0 = r15_10 + 1
        r15 = arg3
        rsi_1 = var_58_1
        var_f0_1 = r11_1
        r12_1 = r13 + 0x460
    while (rsi_24 s< rcx_1)

if (i_7 s> 0)
    int32_t* rcx_108 = sx.q(rcx_1) << 2
    int64_t i_4
    
    do
        int32_t rax_222 = *(rcx_108 + r13)
        r13 += 0x490
        *(r13 - 0x490) = rax_222
        *(r13 - 0x48c) = *(rcx_108 + r13 - 0x48c)
        *(r13 - 0x488) = *(rcx_108 + r13 - 0x488)
        *(r13 - 0x484) = *(rcx_108 + r13 - 0x484)
        *(r13 - 0x480) = *(rcx_108 + r13 - 0x480)
        *(r13 - 0x47c) = *(rcx_108 + r13 - 0x47c)
        *(r13 - 0x478) = *(rcx_108 + r13 - 0x478)
        *(r13 - 0x474) = *(rcx_108 + r13 - 0x474)
        *(r13 - 0x470) = *(rcx_108 + r13 - 0x470)
        *(r13 - 0x46c) = *(rcx_108 + r13 - 0x46c)
        *(r13 - 0x468) = *(rcx_108 + r13 - 0x468)
        *(r13 - 0x464) = *(rcx_108 + r13 - 0x464)
        *(r13 - 0x460) = *(rcx_108 + r13 - 0x460)
        *(r13 - 0x45c) = *(rcx_108 + r13 - 0x45c)
        *(r13 - 0x458) = *(rcx_108 + r13 - 0x458)
        *(r13 - 0x454) = *(rcx_108 + r13 - 0x454)
        *(r13 - 0x450) = *(rcx_108 + r13 - 0x450)
        *(r13 - 0x44c) = *(rcx_108 + r13 - 0x44c)
        *(r13 - 0x448) = *(rcx_108 + r13 - 0x448)
        *(r13 - 0x444) = *(rcx_108 + r13 - 0x444)
        *(r13 - 0x440) = *(rcx_108 + r13 - 0x440)
        *(r13 - 0x43c) = *(rcx_108 + r13 - 0x43c)
        *(r13 - 0x438) = *(rcx_108 + r13 - 0x438)
        *(r13 - 0x434) = *(rcx_108 + r13 - 0x434)
        *(r13 - 0x430) = *(rcx_108 + r13 - 0x430)
        *(r13 - 0x42c) = *(rcx_108 + r13 - 0x42c)
        *(r13 - 0x428) = *(rcx_108 + r13 - 0x428)
        *(r13 - 0x424) = *(rcx_108 + r13 - 0x424)
        *(r13 - 0x420) = *(rcx_108 + r13 - 0x420)
        *(r13 - 0x41c) = *(rcx_108 + r13 - 0x41c)
        *(r13 - 0x418) = *(rcx_108 + r13 - 0x418)
        result = zx.q(*(rcx_108 + r13 - 0x414))
        *(r13 - 0x414) = result.d
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

__security_check_cookie(rax_1 ^ &var_108)
return result
