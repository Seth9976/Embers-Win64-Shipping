// 函数: sub_1403e54b0
// 地址: 0x1403e54b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int32_t j_4
int64_t rax_1 = __security_cookie ^ &j_4
int64_t r9 = sx.q(arg1[0x248])
int32_t* r12 = arg1
int64_t rax_3 = r9 * 2
int64_t rcx = rax_3 + 0xf

if (rcx u<= rax_3)
    rcx = 0xffffffffffffff0

int64_t rcx_1 = rcx & 0xfffffffffffffff0
__chkstk(rcx_1)
int32_t r8 = r12[0x246]
void var_178
void* rsp_1 = &var_178 - rcx_1
int64_t rcx_3 = sx.q(r8 + r9.d) << 2
int64_t rax_7 = rcx_3 + 0xf

if (rax_7 u<= rcx_3)
    rax_7 = 0xffffffffffffff0

int64_t rax_8 = rax_7 & 0xfffffffffffffff0
__chkstk(rax_8)
int64_t rdx = sx.q(r12[0x247])
void* rsp_2 = rsp_1 - rax_8
int64_t rax_11 = rdx << 2
int64_t rcx_4 = rax_11 + 0xf

if (rcx_4 u<= rax_11)
    rcx_4 = 0xffffffffffffff0

int64_t rcx_5 = rcx_4 & 0xfffffffffffffff0
__chkstk(rcx_5)
void* rsp_3 = rsp_2 - rcx_5
void* r14 = rsp_3 + 0x30
int64_t rcx_7 = sx.q((rdx + 0x10).d) << 2
void* var_98 = r14
int64_t rax_14 = rcx_7 + 0xf

if (rax_14 u<= rcx_7)
    rax_14 = 0xffffffffffffff0

int64_t rax_15 = rax_14 & 0xfffffffffffffff0
__chkstk(rax_15)
int32_t rdx_1 = sx.d(*(r12 + 0xaea))
void* rsp_4 = rsp_3 - rax_15
int32_t r11
r11.b = *(r12 + 0xae7) s< 4
void* r13 = rsp_4 + 0x30
int32_t i = 0
void* var_c8 = r13

if (r8 s> 0)
    int32_t r10_1 =
        sx.d(*(&data_1436fc948 + ((sx.q(*(r12 + 0xae6)) + (sx.q(*(r12 + 0xae5)) s>> 1 << 1)) << 1)))
        << 4
    void* rcx_11 = &r12[1]
    void* rbx_1 = arg4 - r12
    
    do
        int32_t rax_18 = *(rbx_1 + rcx_11 - 4) << 0xe
        *rcx_11 = rax_18
        
        if (rax_18 s> 0)
            *rcx_11 = rax_18 - 0x500
        else if (rax_18 s< 0)
            *rcx_11 = rax_18 + 0x500
        
        int32_t r8_2 = *rcx_11 + r10_1
        *rcx_11 = r8_2
        
        if (rdx_1 * 0xbb38435 + 0x3619636b s< 0)
            *rcx_11 = neg.d(r8_2)
        
        rdx_1 = rdx_1 * 0xbb38435 + 0x3619636b + *(rbx_1 + rcx_11 - 4)
        i += 1
        rcx_11 += 4
    while (i s< r12[0x246])

int32_t i_1 = 0
void* var_e8 = arg3
*r13 = r12[0x141]
int32_t i_2 = 0
*(r13 + 4) = r12[0x142]
*(r13 + 8) = r12[0x143]
*(r13 + 0xc) = r12[0x144]
*(r13 + 0x10) = r12[0x145]
*(r13 + 0x14) = r12[0x146]
*(r13 + 0x18) = r12[0x147]
*(r13 + 0x1c) = r12[0x148]
*(r13 + 0x20) = r12[0x149]
*(r13 + 0x24) = r12[0x14a]
*(r13 + 0x28) = r12[0x14b]
*(r13 + 0x2c) = r12[0x14c]
*(r13 + 0x30) = r12[0x14d]
*(r13 + 0x34) = r12[0x14e]
*(r13 + 0x38) = r12[0x14f]
*(r13 + 0x3c) = r12[0x150]
void* var_108 = &r12[1]
int64_t rax_37 = sx.q(r12[0x248])
int32_t var_140 = rax_37.d
int64_t rsi = rax_37
int64_t var_130 = rax_37

if (r12[0x245] s> 0)
    void* rax_39 = arg2
    int32_t* rbx_2 = rax_39 + 0x10
    int64_t* rdi_1 = rax_39 + 0x60
    int32_t* var_118_1 = rbx_2
    int64_t* var_f8_1 = rdi_1
    
    do
        void* r14_5 = (((sx.q(i_1) s>> 1) + 1) << 5) + rax_39
        int16_t var_68
        memcpy(&var_68, r14_5, r12[0x249] * 2)
        int32_t rcx_13 = *rbx_2
        j_4 = sx.d(*(r12 + 0xae5))
        int32_t rax_42 = rcx_13 s>> 6
        int32_t rax_43 = sub_1403e3870(rcx_13, 0x2f)
        int32_t rcx_14 = *r12
        int32_t rbx_3 = rax_43
        int32_t rdx_5 = *var_118_1
        int32_t r9_1
        
        if (rdx_5 == rcx_14)
            r9_1 = 0x10000
        else
            int32_t rax_45 = sub_1403e0590(rcx_14, rdx_5, 0x10)
            void* r8_6 = r13
            int64_t j_5 = 0x10
            r9_1 = rax_45
            int64_t j
            
            do
                int32_t rcx_15 = sx.d(*r8_6)
                int32_t rdx_7 = *r8_6 s>> 0xf
                r8_6 += 4
                *(r8_6 - 4) = ((rdx_7 + 1) s>> 1) * r9_1 + ((zx.d(rax_45.w) * rcx_15) s>> 0x10)
                    + (rax_45 s>> 0x10) * rcx_15
                j = j_5
                j_5 -= 1
            while (j != 1)
            rsi = var_130
        
        bool cond:2_1 = r12[0x416] == 0
        *r12 = *var_118_1
        void* rcx_39
        
        if (cond:2_1 || r12[0x417] != 2 || *(r12 + 0xae5) == 2 || i_1 s>= 2)
            if (j_4 == 2)
                goto label_1403e58a7
            
            rcx_39 = var_108
        else
            *rdi_1 = 0
            rdi_1[1].w = 0
            *(rdi_1 + 4) = 0x1000
            var_118_1[-4] = r12[0x241]
        label_1403e58a7:
            int32_t j_7 = var_118_1[-4]
            j_4 = j_7
            int32_t j_9
            
            if (i_1 == 0 || (i_1 == 2 && sx.q(r11) != 0))
                int64_t rcx_18 = sx.q(r12[0x248])
                int32_t rsi_5 = rcx_18.d - r12[0x249] - j_7 - 2
                
                if (i_1 == 2)
                    memcpy(r12 + ((rcx_18 + 0x2a2) << 1), arg3, r12[0x247] * 4)
                
                uint64_t r9_3 = zx.q(r12[0x248] - rsi_5)
                void* rdx_21 = r12 + ((sx.q(r12[0x247] * i_1 + rsi_5) + 0x2a2) << 1)
                *(rsp_4 + 0x20) = r12[0x249]
                sub_1403e77a0(rsp_1 + 0x30 + (sx.q(rsi_5) << 1), rdx_21, r14_5, r9_3)
                
                if (i_1 == 0)
                    int32_t rax_68 = sx.d(*(arg2 + 0x88))
                    rbx_3 = (((rbx_3 s>> 0x10) * rax_68) << 2)
                        + ((zx.d(rbx_3.w) * rax_68) s>> 0x10 << 2)
                
                j_9 = j_4
                rsi = var_130
                int64_t j_1 = 0
                
                if (j_9 + 2 s> 0)
                    void* r8_14 = rsp_2 + 0x30 + ((rsi - 1) << 2)
                    
                    do
                        r8_14 -= 4
                        int64_t rax_72 = sx.q(r12[0x248]) - j_1
                        j_1 += 1
                        int32_t rcx_26 = sx.d(*(rsp_1 + 0x30 + (rax_72 << 1) - 2))
                        *(r8_14 + 4) =
                            ((rcx_26 * zx.d(rbx_3.w)) s>> 0x10) + rcx_26 * (rbx_3 s>> 0x10)
                    while (j_1 s< sx.q(j_9 + 2))
                    
                    r13 = var_c8
            else if (r9_1 == 0x10000)
                j_9 = j_7
            else
                if (j_7 + 2 s> 0)
                    uint64_t j_6 = zx.q(j_7 + 2)
                    void* r8_9 = rsp_2 + 0x2c + (rsi << 2)
                    uint64_t j_2
                    
                    do
                        int32_t rcx_17 = sx.d(*r8_9)
                        int32_t rdx_14 = *r8_9 s>> 0xf
                        r8_9 -= 4
                        *(r8_9 + 4) = ((rdx_14 + 1) s>> 1) * r9_1
                            + ((zx.d(r9_1.w) * rcx_17) s>> 0x10) + (r9_1 s>> 0x10) * rcx_17
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                j_9 = j_4
            
            j_4 = 0
            
            if (r12[0x247] s> 0)
                void* r13_2 = rsp_2 + 0x30 + (sx.q(var_140 - j_9 + 2) << 2)
                void* var_138_1 = var_98
                int32_t var_b8
                var_b8.q = var_108 - var_98
                int32_t j_3
                
                do
                    int32_t rcx_31 = sx.d(*(rdi_1 + 2))
                    int32_t rsi_6 = sx.d(rdi_1[1].w)
                    int32_t rdx_23 = *(r13_2 - 4)
                    int32_t r8_15 = sx.d(*(rdi_1 + 4))
                    int32_t r10_3 = sx.d(*(rdi_1 + 6))
                    int32_t r9_5 = *(r13_2 - 8)
                    int32_t r11_5 = *(r13_2 - 0xc)
                    int32_t r15 = *(r13_2 - 0x10)
                    int32_t r14_6 = *r13_2
                    int32_t rdi_2 = sx.d(*rdi_1)
                    var_140 += 1
                    r13_2 += 4
                    void* rdx_26 = var_138_1 + 4
                    var_138_1 = rdx_26
                    rsi = var_130 + 1
                    var_130 = rsi
                    rdi_1 = var_f8_1
                    int32_t rbx_15 = ((zx.d(rdx_23.w) * rcx_31) s>> 0x10)
                        + ((zx.d(r9_5.w) * r8_15) s>> 0x10) + ((zx.d(r11_5.w) * r10_3) s>> 0x10)
                        + ((zx.d(r15.w) * rsi_6) s>> 0x10) + ((zx.d(r14_6.w) * rdi_2) s>> 0x10) + 2
                    int32_t rax_98 = *(var_b8.q + rdx_26 - 4) + ((rcx_31 * (rdx_23 s>> 0x10)
                        + rbx_15 + (r9_5 s>> 0x10) * r8_15 + (r11_5 s>> 0x10) * r10_3
                        + (r15 s>> 0x10) * rsi_6 + (r14_6 s>> 0x10) * rdi_2) << 1)
                    *(rdx_26 - 4) = rax_98
                    *(rsp_2 + 0x30 + (rsi << 2) - 4) = rax_98 * 2
                    j_3 = j_4 + 1
                    j_4 = j_3
                while (j_3 s< r12[0x247])
                r13 = var_c8
                i_1 = i_2
            
            rcx_39 = r14
        
        bool cond:3_1 = r12[0x247] s<= 0
        j_4 = 0
        
        if (not(cond:3_1))
            void* var_100_2 = var_e8
            int32_t rax_109 = sx.d(var_68)
            void* var_110_1
            var_110_1.d = ((rax_42 s>> 0xf) + 1) s>> 1
            void* rax_114 = r13 + 0x1c
            void* var_138_2 = rax_114
            int32_t j_8
            
            do
                int32_t rcx_42 = *rax_114
                int32_t r8_16 = *(rax_114 - 4)
                int32_t rbx_16 = *(rax_114 + 0x10)
                int32_t r11_8 = *(rax_114 + 0x14)
                int32_t r10_4 = *(rax_114 + 0x18)
                int32_t r9_8 = *(rax_114 + 0x1c)
                int32_t rsi_8 = *(rax_114 + 8)
                int32_t rdi_3 = *(rax_114 + 0xc)
                int32_t r15_3 = *(rax_114 + 4)
                int32_t r14_9 = r12[0x249]
                int32_t rdx_29 = *(rax_114 + 0x20)
                int16_t var_66
                int16_t var_58
                int16_t var_56
                int32_t r13_8 = ((zx.d(rcx_42.w) * sx.d(var_58)) s>> 0x10)
                    + ((zx.d(r8_16.w) * sx.d(var_56)) s>> 0x10)
                    + ((zx.d(rdx_29.w) * rax_109) s>> 0x10)
                    + ((zx.d(r9_8.w) * sx.d(var_66)) s>> 0x10)
                int16_t var_64
                int16_t var_62
                int16_t var_60
                int16_t var_5e
                int32_t r13_12 = r13_8 + ((zx.d(r10_4.w) * sx.d(var_64)) s>> 0x10)
                    + ((zx.d(r11_8.w) * sx.d(var_62)) s>> 0x10)
                    + ((zx.d(rbx_16.w) * sx.d(var_60)) s>> 0x10)
                    + ((zx.d(rdi_3.w) * sx.d(var_5e)) s>> 0x10)
                int16_t var_5c
                int16_t var_5a
                int32_t r13_16 = r13_12 + ((zx.d(rsi_8.w) * sx.d(var_5c)) s>> 0x10)
                    + ((zx.d(r15_3.w) * sx.d(var_5a)) s>> 0x10) + (rcx_42 s>> 0x10) * sx.d(var_58)
                    + (r8_16 s>> 0x10) * sx.d(var_56)
                int32_t r13_21 = r13_16 + (rdx_29 s>> 0x10) * sx.d(var_68)
                    + (r9_8 s>> 0x10) * sx.d(var_66) + (r10_4 s>> 0x10) * sx.d(var_64)
                    + (r11_8 s>> 0x10) * sx.d(var_62) + (rbx_16 s>> 0x10) * sx.d(var_60)
                int32_t r13_25 = r13_21 + (rdi_3 s>> 0x10) * sx.d(var_5e)
                    + (rsi_8 s>> 0x10) * sx.d(var_5c) + (r15_3 s>> 0x10) * sx.d(var_5a)
                    + (r14_9 s>> 1)
                
                if (r14_9 == 0x10)
                    int16_t var_52
                    int32_t rdx_32 = sx.d(var_52)
                    int16_t var_54
                    int32_t rcx_45 = sx.d(var_54)
                    int32_t r8_19 = *(var_138_2 - 8)
                    int32_t r10_7 = *(var_138_2 - 0xc)
                    int32_t r13_26 = *(var_138_2 - 0x18)
                    int32_t rsi_11 = *(var_138_2 - 0x14)
                    int32_t rbx_19 = *(var_138_2 - 0x10)
                    int32_t r15_6 = *(var_138_2 - 0x1c)
                    int16_t var_50
                    int32_t r9_11 = sx.d(var_50)
                    int16_t var_4c
                    int32_t r12_1 = sx.d(var_4c)
                    int16_t var_4e
                    int32_t r11_11 = sx.d(var_4e)
                    int16_t var_4a
                    int32_t rdi_6 = sx.d(var_4a)
                    int32_t r14_16 = ((zx.d(r8_19.w) * rcx_45) s>> 0x10)
                        + ((zx.d(r10_7.w) * rdx_32) s>> 0x10) + ((zx.d(rbx_19.w) * r9_11) s>> 0x10)
                        + ((zx.d(rsi_11.w) * r11_11) s>> 0x10) + ((zx.d(r15_6.w) * rdi_6) s>> 0x10)
                    r12 = arg1
                    int32_t r14_21 = r14_16 + ((zx.d(r13_26.w) * r12_1) s>> 0x10)
                        + (r8_19 s>> 0x10) * rcx_45 + (r10_7 s>> 0x10) * rdx_32
                        + (rbx_19 s>> 0x10) * r9_11 + (rsi_11 s>> 0x10) * r11_11
                    r13_25 = (r13_26 s>> 0x10) * r12_1 + r13_25 + r14_21 + (r15_6 s>> 0x10) * rdi_6
                
                int32_t r13_31 = (r13_25 << 4) + *(rcx_39 - r13 - 0x1c + var_138_2)
                *(var_138_2 + 0x24) = r13_31
                int32_t rdx_33 = sx.d(rax_42.w)
                int32_t rax_179 = (((((zx.d(r13_31.w) * rdx_33) s>> 0x10)
                    + (r13_31 s>> 0x10) * rdx_33 + r13_31 * var_110_1.d) s>> 7) + 1) s>> 1
                
                if (rax_179 s> 0x7fff)
                    rax_179 = 0x7fff
                else if (rax_179 s< 0xffff8000)
                    rax_179 = -0x8000
                
                int16_t* rdx_34 = var_100_2
                j_8 = j_4
                *rdx_34 = rax_179.w
                rax_114 += 4
                j_4 = j_8 + 1
                var_138_2 = rax_114
                var_100_2 = &rdx_34[1]
            while (j_8 + 1 s< r12[0x247])
            r13 = var_c8
            rdi_1 = var_f8_1
            i_1 = i_2
            rsi = var_130
        
        r14 = var_98
        i_1 += 1
        rdi_1 += 0xa
        void* rcx_53 = (sx.q(r12[0x247]) << 2) + r13
        rbx_2 = &var_118_1[1]
        i_2 = i_1
        var_f8_1 = rdi_1
        var_118_1 = rbx_2
        *r13 = *rcx_53
        *(r13 + 4) = *(rcx_53 + 4)
        *(r13 + 8) = *(rcx_53 + 8)
        *(r13 + 0xc) = *(rcx_53 + 0xc)
        *(r13 + 0x10) = *(rcx_53 + 0x10)
        *(r13 + 0x14) = *(rcx_53 + 0x14)
        *(r13 + 0x18) = *(rcx_53 + 0x18)
        *(r13 + 0x1c) = *(rcx_53 + 0x1c)
        *(r13 + 0x20) = *(rcx_53 + 0x20)
        *(r13 + 0x24) = *(rcx_53 + 0x24)
        *(r13 + 0x28) = *(rcx_53 + 0x28)
        *(r13 + 0x2c) = *(rcx_53 + 0x2c)
        *(r13 + 0x30) = *(rcx_53 + 0x30)
        *(r13 + 0x34) = *(rcx_53 + 0x34)
        *(r13 + 0x38) = *(rcx_53 + 0x38)
        *(r13 + 0x3c) = *(rcx_53 + 0x3c)
        int64_t rax_197 = sx.q(r12[0x247])
        var_108 += rax_197 << 2
        rax_39 = arg2
        var_e8 += rax_197 << 1
    while (i_1 s< r12[0x245])

r12[0x141] = *r13
r12[0x142] = *(r13 + 4)
r12[0x143] = *(r13 + 8)
r12[0x144] = *(r13 + 0xc)
r12[0x145] = *(r13 + 0x10)
r12[0x146] = *(r13 + 0x14)
r12[0x147] = *(r13 + 0x18)
r12[0x148] = *(r13 + 0x1c)
r12[0x149] = *(r13 + 0x20)
r12[0x14a] = *(r13 + 0x24)
r12[0x14b] = *(r13 + 0x28)
r12[0x14c] = *(r13 + 0x2c)
r12[0x14d] = *(r13 + 0x30)
r12[0x14e] = *(r13 + 0x34)
r12[0x14f] = *(r13 + 0x38)
int32_t result = *(r13 + 0x3c)
r12[0x150] = result
__security_check_cookie(rax_1 ^ &j_4)
return result
