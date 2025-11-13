// 函数: sub_140411320
// 地址: 0x140411320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t rdi = 0
int32_t rax_3 = sx.d(arg10) - 1
void* rcx_1 = arg5 - arg2
void* r11_1 = arg3 - arg2
int32_t i_7 = 1
int64_t r10 = sx.q(rax_3)
int32_t var_e0 = 0
int16_t* r8 = arg2 + (r10 << 1)
int16_t var_90[0x4]
var_90[0] = 0
void var_78
void* rsi_1 = arg4 - &var_78
int32_t i_8 = 1
int64_t i_6 = 1
arg5 = rcx_1
int32_t r12 = 0x7fffffff
void* var_e8 = rsi_1

while (true)
    int16_t r13_1 = *r8
    void* r11_3 = sx.q(*(rcx_1 + r8)) + arg6
    int16_t* var_120_1 = r8
    char* rbx_1 = &var_78 + r10
    int64_t var_108_1 = r10
    int32_t var_128_1 = rax_3
    int64_t r15_1 = 0
    uint32_t rsi_3 = zx.d(*(rbx_1 + rsi_1)) << 8
    
    if (i_6 s> 0)
        int32_t rax_4 = sx.d(arg7)
        uint32_t rcx_2 = zx.d(rsi_3.w)
        uint32_t rdx_1 = zx.d(arg8)
        char* r12_1 = rbx_1
        uint32_t var_114_1 = rcx_2
        int64_t r10_1 = i_6 * 2
        int32_t rbx_2 = rax_4
        uint32_t var_110_1 = rdx_1
        
        do
            int32_t rax_5 = sx.d(var_90[r15_1])
            int16_t r8_4 = ((rax_5 * rcx_2) s>> 0x10).w + rax_5.w * (rsi_3 s>> 0x10).w
            int32_t rcx_3 = sx.d(r13_1 - r8_4)
            int32_t rdx_4 = ((rdx_1 * rcx_3) s>> 0x10) + rcx_3 * (sx.d(arg8) s>> 0xf)
            
            if (rdx_4 s> 9)
                rdx_4 = 9
            else if (rdx_4 s< 0xfffffff6)
                rdx_4 = -0xa
            
            *r12_1 = rdx_4.b
            int32_t rcx_6 = rdx_4 << 0xa
            int32_t r9 = rcx_6 + 0x400
            
            if (rdx_4 s> 0)
                rcx_6 -= 0x66
                r9 -= 0x66
            else if (rdx_4 != 0)
                rcx_6 += 0x66
                
                if (rdx_4 != 0xffffffff)
                    r9 += 0x66
            else
                r9 -= 0x66
            
            int16_t rcx_9 =
                (rcx_6 s>> 0x10).w * rbx_2.w + ((zx.d(rcx_6.w) * rbx_2) s>> 0x10).w + r8_4
            var_90[r15_1] = rcx_9
            int16_t r9_3 = (r9 s>> 0x10).w * rbx_2.w + ((zx.d(r9.w) * rbx_2) s>> 0x10).w + r8_4
            *(&var_90 + r10_1 + (r15_1 << 1)) = r9_3
            uint16_t rdx_7
            uint16_t r10_2
            
            if (rdx_4 + 1 s< 4)
                if (rdx_4 s> 0xfffffffc)
                    int64_t rax_19 = sx.q(rdx_4)
                    r10_2 = zx.w(*(rax_19 + r11_3 + 5))
                    rdx_7 = zx.w(*(rax_19 + r11_3 + 4))
                else if (rdx_4 != 0xfffffffc)
                    rdx_7 = 0x6c - rdx_4.w * 0x2b
                    r10_2 = rdx_7 - 0x2b
                else
                    r10_2 = zx.w(*(r11_3 + 1))
                    rdx_7 = 0x118
            else if (rdx_4 != 3)
                rdx_7 = rdx_4.w * 0x2b + 0x6c
                r10_2 = rdx_7 + 0x2b
            else
                r10_2 = 0x118
                rdx_7 = zx.w(*(sx.q(rdx_4) + r11_3 + 4))
            
            int32_t r8_5 = (&var_e0)[r15_1]
            r12_1 = &r12_1[0x10]
            int32_t rcx_10 = sx.d(r13_1 - rcx_9)
            r13_1 = *var_120_1
            (&var_e0)[r15_1] =
                sx.d(*(r11_1 + var_120_1)) * rcx_10 * rcx_10 + sx.d(rdx_7) * sx.d(arg9) + r8_5
            int32_t rcx_11 = sx.d(r13_1 - r9_3)
            rbx_2 = rax_4
            r10_1 = i_6 * 2
            rcx_2 = var_114_1
            int64_t rax_33 = (i_6 << 2) + (r15_1 << 2)
            r15_1 += 1
            *(&var_e0 + rax_33) =
                sx.d(*(r11_1 + var_120_1)) * rcx_11 * rcx_11 + sx.d(r10_2) * sx.d(arg9) + r8_5
            rdx_1 = var_110_1
        while (r15_1 s< i_6)
        
        r10 = var_108_1
        rax_3 = var_128_1
        r8 = var_120_1
        i_7 = i_8
        rdi = 0
        r12 = 0x7fffffff
    
    if (i_7 s> 2)
        int32_t var_d0
        
        if (rax_3 s<= 0)
            int32_t rax_58 = var_e0
            
            if (rax_58 s< 0x7fffffff)
                r12 = rax_58
            
            int32_t var_dc
            
            if (r12 s> var_dc)
                r12 = var_dc
                rdi = 1
            
            int32_t var_d8
            
            if (r12 s> var_d8)
                r12 = var_d8
                rdi = 2
            
            int32_t var_d4
            
            if (r12 s> var_d4)
                r12 = var_d4
                rdi = 3
            
            int32_t rax_62 = var_d0
            
            if (r12 s> rax_62)
                r12 = rax_62
                rdi = 4
            
            int32_t var_cc
            
            if (r12 s> var_cc)
                r12 = var_cc
                rdi = 5
            
            int32_t var_c8
            
            if (r12 s> var_c8)
                r12 = var_c8
                rdi = 6
            
            int32_t var_c4
            
            if (r12 s> var_c4)
                r12 = var_c4
                rdi = 7
            
            int64_t r8_11 = sx.q(arg10)
            
            if (r8_11 s> 0)
                memcpy(arg1, &var_78 + ((zx.q(rdi) & 3) << 4), r8_11.d)
            
            *arg1 += (rdi s>> 2).b
            __security_check_cookie(rax_1 ^ &var_148)
            return zx.q(r12)
        
        int32_t i = 0
        int16_t var_88[0x8]
        int16_t (* r8_9)[0x8] = &var_88
        int64_t rdx_18 = 0
        int32_t var_c0
        int32_t var_b0[0x4]
        int32_t var_a0[0x4]
        
        do
            int32_t rax_39 = *(&var_e0 + rdx_18)
            int32_t rcx_15 = *(&var_d0 + rdx_18)
            
            if (rax_39 s<= rcx_15)
                *(&var_b0 + rdx_18) = rax_39
                *(&var_a0 + rdx_18) = rcx_15
                *(&var_c0 + rdx_18) = i
            else
                *(&var_a0 + rdx_18) = rax_39
                *(&var_d0 + rdx_18) = rax_39
                int16_t rax_40 = *r8_9
                *(&var_b0 + rdx_18) = rcx_15
                *(&var_e0 + rdx_18) = rcx_15
                int16_t rcx_16 = (*r8_9)[-4]
                (*r8_9)[-4] = rax_40
                *r8_9 = rcx_16
                *(&var_c0 + rdx_18) = i + 4
            
            i += 1
            r8_9 = &(*r8_9)[1]
            rdx_18 += 4
        while (i s< 4)
        
        while (true)
            int32_t r8_10 = 0x7fffffff
            int32_t rdx_19 = 0
            int64_t r11_4 = 0
            int64_t r10_4 = 0
            int64_t rax_42 = 0
            int64_t i_5 = 4
            int64_t i_1
            
            do
                int32_t rcx_17 = var_a0[rax_42]
                
                if (r8_10 s> rcx_17)
                    r8_10 = rcx_17
                    r11_4 = rax_42
                
                int32_t rcx_18 = var_b0[rax_42]
                
                if (rdx_19 s< rcx_18)
                    rdx_19 = rcx_18
                    r10_4 = rax_42
                
                rax_42 += 1
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            
            if (r8_10 s>= rdx_19)
                break
            
            int32_t rax_43 = (&var_c0)[r11_4]
            var_a0[r11_4] = 0x7fffffff
            var_b0[r10_4] = 0
            (&var_c0)[r10_4] = rax_43 ^ 4
            (&var_e0)[r10_4] = (&var_d0)[r11_4]
            int64_t r11_5 = r11_4 * 2
            var_90[r10_4] = var_88[r11_4]
            int64_t r10_5 = r10_4 * 2
            *(&var_78 + (r10_5 << 3)) = *(&var_78 + (r11_5 << 3))
            int64_t var_70[0x5]
            var_70[r10_5] = var_70[r11_5]
        
        i_7 = i_8
        r10 = var_108_1
        *rbx_1 += (var_c0 s>> 2).b
        int32_t var_bc
        rbx_1[0x10] += (var_bc s>> 2).b
        int32_t var_b8
        rbx_1[0x20] += (var_b8 s>> 2).b
        int32_t var_b4
        rbx_1[0x30] += (var_b4 s>> 2).b
        r8 = var_120_1
    else
        if (i_6 s> 0)
            int64_t rcx_13 = i_6 * 2
            int64_t i_2
            
            do
                char rax_34 = *rbx_1
                rbx_1 = &rbx_1[0x10]
                rbx_1[(rcx_13 << 3) - 0x10] = rax_34 + 1
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        i_7 *= 2
        i_6 = sx.q(i_7)
        i_8 = i_7
        
        if (i_6 s< 4)
            void* rcx_14 = &var_78 + (i_6 << 4) + r10
            int64_t i_4 = 4 - i_6
            int64_t i_3
            
            do
                char rax_38 = *(rcx_14 + neg.q(i_6) * 0x10)
                rcx_14 += 0x10
                *(rcx_14 - 0x10) = rax_38
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
            r8 = var_120_1
    
    rsi_1 = var_e8
    rcx_1 = arg5
    rax_3 = var_128_1 - 1
    r10 -= 1
    r8 -= 2
