// 函数: sub_14040d270
// 地址: 0x14040d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
void* arg_18 = arg3
int64_t i_2 = sx.q(arg17)
void* r11 = arg1
void* rdx = r11 + 0xf7c
void* var_a0 = rdx
void* var_60 = r11 + ((sx.q(*(arg1 + 0x110c) - arg10 + 1) + 0x140) << 2)
void* var_70 = arg6 + (sx.q(*(r11 + 0x1108) - arg10 + 2) << 2)
int32_t rcx_6 = arg14 s>> 6

if (i_2 s> 0)
    int64_t rax_9 = sx.q(arg18)
    int64_t i_1 = i_2
    void* r8_3 = r11 + ((rax_9 + 0x42f) << 2)
    int32_t r8_7 = arg13 s>> 0x10
    int32_t r8_8 = sx.d(arg13.w)
    int32_t rax_16 = sx.d(rcx_6.w)
    int64_t i
    
    do
        *(r11 + 0x1110) = *(r11 + 0x1110) * 0xbb38435 + 0x3619636b
        int32_t rax_20 = sx.d(arg7[9])
        int32_t r11_1 = *(rdx - 0xc)
        int32_t r9 = *(rdx - 8)
        int32_t r13_1 = *(rdx - 0x1c)
        int32_t r15_1 = *(rdx - 0x18)
        int32_t rbp_1 = *(rdx - 0x14)
        int32_t rdi_1 = *(rdx - 0x10)
        int32_t rax_21 = sx.d(arg7[8])
        int32_t rdx_1 = *(rdx - 4)
        int32_t r10_1 = sx.d(arg7[3])
        int32_t r8_9 = sx.d(arg7[2])
        int32_t rax_23 = *var_a0
        int32_t r12_1 = sx.d(arg7[7])
        int32_t r14_1 = sx.d(arg7[6])
        int32_t rsi_1 = sx.d(arg7[5])
        int32_t rax_25 = sx.d(*arg7)
        int32_t rbx_1 = sx.d(arg7[4])
        int32_t rcx_8 = sx.d(arg7[1])
        arg14 = ((zx.d(rdx_1.w) * rcx_8) s>> 0x10) + ((zx.d(r9.w) * r8_9) s>> 0x10)
            + ((zx.d(r11_1.w) * r10_1) s>> 0x10) + ((zx.d(rdi_1.w) * rbx_1) s>> 0x10)
            + ((zx.d(rbp_1.w) * rsi_1) s>> 0x10)
        arg14 = arg14 + ((zx.d(r15_1.w) * r14_1) s>> 0x10) + ((zx.d(r13_1.w) * r12_1) s>> 0x10)
            + ((zx.d(*(var_a0 - 0x20)) * rax_21) s>> 0x10)
            + ((zx.d(*(var_a0 - 0x24)) * rax_20) s>> 0x10)
        int32_t rax_62 = arg14 + ((zx.d(rax_23.w) * rax_25) s>> 0x10) + (rdx_1 s>> 0x10) * rcx_8
            + (r9 s>> 0x10) * r8_9 + (r11_1 s>> 0x10) * r10_1 + (rdi_1 s>> 0x10) * rbx_1
        int32_t r15_4 = rax_23
        int32_t rcx_16 = (*(var_a0 - 0x24) s>> 0x10) * rax_20 + (arg19 s>> 1) + rax_62
            + (rbp_1 s>> 0x10) * rsi_1 + (r15_1 s>> 0x10) * r14_1 + (r13_1 s>> 0x10) * r12_1
            + (*(var_a0 - 0x20) s>> 0x10) * rax_21
        uint64_t r13_7 = zx.q((r15_4 s>> 0x10) * rax_25 + rcx_16)
        
        if (arg19 == 0x10)
            int32_t r12_2 = *(var_a0 - 0x3c)
            int32_t r14_2 = *(var_a0 - 0x38)
            int32_t rcx_17 = sx.d(arg7[0xa])
            int32_t r15_5 = sx.d(arg7[0xf])
            int32_t r8_10 = sx.d(arg7[0xb])
            int32_t rbp_4 = sx.d(arg7[0xe])
            int32_t rbx_2 = sx.d(arg7[0xd])
            int32_t r10_2 = sx.d(arg7[0xc])
            int32_t rdi_4 = *(var_a0 - 0x34)
            int32_t r11_4 = *(var_a0 - 0x30)
            int32_t r9_3 = *(var_a0 - 0x2c)
            int32_t rdx_5 = *(var_a0 - 0x28)
            int32_t rsi_8 = ((zx.d(rdx_5.w) * rcx_17) s>> 0x10) + ((zx.d(r9_3.w) * r8_10) s>> 0x10)
                + ((zx.d(r11_4.w) * r10_2) s>> 0x10) + ((zx.d(rdi_4.w) * rbx_2) s>> 0x10)
                + ((zx.d(r14_2.w) * rbp_4) s>> 0x10)
            r15_4 = rax_23
            int32_t rsi_13 = rsi_8 + ((zx.d(r12_2.w) * r15_5) s>> 0x10) + (rdx_5 s>> 0x10) * rcx_17
                + (r9_3 s>> 0x10) * r8_10 + (r11_4 s>> 0x10) * r10_2 + (rdi_4 s>> 0x10) * rbx_2
            r13_7 = zx.q(r13_7.d + (r12_2 s>> 0x10) * r15_5 + rsi_13 + (r14_2 s>> 0x10) * rbp_4)
        
        uint64_t rbp_8
        
        if (arg2 != 2)
            rbp_8 = 0
        else
            int32_t* r12_5 = var_70
            int32_t rcx_18 = sx.d(*arg8)
            int32_t r8_11 = sx.d(arg8[1])
            int32_t rbp_5 = sx.d(arg8[4])
            int32_t rdi_7 = sx.d(arg8[3])
            int32_t r10_3 = sx.d(arg8[2])
            int32_t r9_6 = r12_5[-1]
            int32_t rdx_8 = *r12_5
            int32_t r11_7 = r12_5[-2]
            int32_t rsi_15 = r12_5[-3]
            int32_t r14_5 = r12_5[-4]
            int32_t rbx_9 = ((zx.d(rdx_8.w) * rcx_18) s>> 0x10) + ((zx.d(r9_6.w) * r8_11) s>> 0x10)
                + ((zx.d(r11_7.w) * r10_3) s>> 0x10) + ((zx.d(rsi_15.w) * rdi_7) s>> 0x10)
                + ((zx.d(r14_5.w) * rbp_5) s>> 0x10)
            rbp_8 = zx.q(rbp_5 * (r14_5 s>> 0x10) + 2 + rbx_9 + (rdx_8 s>> 0x10) * rcx_18
                + (r9_6 s>> 0x10) * r8_11 + (r11_7 s>> 0x10) * r10_3 + (rsi_15 s>> 0x10) * rdi_7)
            var_70 = &r12_5[1]
        
        r11 = arg1
        int32_t rax_96 = *(r11 + 0x10c0)
        *(r11 + 0x10c0) = r15_4
        int32_t rdx_11 = sx.d(*arg9)
        uint64_t r15_8 =
            zx.q((r15_4 s>> 0x10) * rdx_11 + ((zx.d(r15_4.w) * rdx_11) s>> 0x10) + (rax_9.d s>> 1))
        
        if (arg18 s> 2)
            void* rbx_14 = &arg9[2]
            void* r10_4 = r11 + 0x10c8
            uint64_t j_1 = zx.q(((arg18 - 3) u>> 1) + 1)
            uint64_t j
            
            do
                int32_t r9_9 = *(r10_4 - 4)
                *(r10_4 - 4) = rax_96
                int32_t rcx_26 = sx.d(*(rbx_14 - 2))
                r10_4 += 8
                rbx_14 += 4
                int32_t rdx_13 = zx.d(rax_96.w) * rcx_26
                int32_t r15_9 = r15_8.d + (rax_96 s>> 0x10) * rcx_26
                rax_96 = *(r10_4 - 8)
                *(r10_4 - 8) = r9_9
                int32_t rcx_27 = sx.d(*(rbx_14 - 4))
                r15_8 = zx.q(r15_9 + (rdx_13 s>> 0x10) + (r9_9 s>> 0x10) * rcx_27
                    + ((zx.d(r9_9.w) * rcx_27) s>> 0x10))
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        *r8_3 = rax_96
        int32_t r9_12 = *(r11 + 0x1100)
        int32_t rdx_18 = sx.d(*(arg9 - 2 + (rax_9 << 1)))
        uint32_t r8_13 = zx.d(r9_12.w)
        int32_t r9_13 = r9_12 s>> 0x10
        int32_t rcx_33 = sx.d(arg12)
        int32_t rcx_34 = *(r11 + (sx.q(*(r11 + 0x110c)) << 2) + 0x4fc)
        uint64_t r14_7 = zx.q((rax_96 s>> 0x10) * rdx_18 * 2
            + ((zx.d(rax_96.w) * rdx_18) s>> 0x10 << 1) + ((rcx_33 * r8_13) s>> 0x10)
            + r9_13 * rcx_33 + (r15_8 << 1).d)
        uint64_t rdi_13 = zx.q(((zx.d(rcx_34.w) * r8_8) s>> 0x10) + (rcx_34 s>> 0x10) * r8_8
            + ((r8_7 * r8_13) s>> 0x10) + r8_7 * r9_13)
        int32_t rbx_17 = (r13_7 << 2).d - rdi_13.d - r14_7.d
        int32_t rbx_21
        
        if (arg10 s<= 0)
            rbx_21 = rbx_17 s>> 1
        else
            int32_t r10_5 = *(var_60 - 4)
            int32_t r8_15 = *(var_60 - 8) + *var_60
            int32_t r9_15 = arg11 s>> 0x10
            int32_t rdx_23 = sx.d(arg11.w)
            var_60 += 4
            rbx_21 = (rbx_17 * 2 - (((zx.d(r10_5.w) * r9_15) s>> 0x10) * 2
                + ((zx.d(r8_15.w) * rdx_23) s>> 0x10 << 1) + (((r8_15 s>> 0x10) * rdx_23) << 1)
                + (((r10_5 s>> 0x10) * r9_15) << 1)) + rbp_8.d) s>> 2
        
        int32_t* rsi_21 = arg_18
        int32_t r8_19 = *rsi_21 - ((rbx_21 + 1) s>> 1)
        
        if (*(r11 + 0x1110) s< 0)
            r8_19 = neg.d(r8_19)
        
        if (r8_19 s> 0x7800)
            r8_19 = 0x7800
        else if (r8_19 s< 0xffff8400)
            r8_19 = -0x7c00
        
        int32_t rax_121 = (r8_19 - arg16) s>> 0xa
        int32_t rdx_25
        int32_t rbx_24
        int32_t r9_17
        int32_t r10_9
        
        if (rax_121 s> 0)
            int32_t rsi_20 = sx.d(arg15)
            rdx_25 = arg16 - 0x50 + (rax_121 << 0xa)
            rbx_24 = rdx_25 + 0x400
            r9_17 = sx.d(rdx_25.w) * rsi_20
            r10_9 = sx.d(rbx_24.w) * rsi_20
            rsi_21 = arg_18
        else if (rax_121 == 0)
            int32_t rsi_22 = sx.d(arg15)
            rbx_24 = arg16 + 0x3b0
            rdx_25 = arg16
            r9_17 = sx.d(arg16.w) * rsi_22
            r10_9 = sx.d(rbx_24.w) * rsi_22
            rsi_21 = arg_18
        else if (rax_121 != 0xffffffff)
            int32_t rcx_42 = sx.d(arg15)
            rdx_25 = arg16 + 0x50 + (rax_121 << 0xa)
            rbx_24 = rdx_25 + 0x400
            r9_17 = sx.d(neg.w(rdx_25.w)) * rcx_42
            r10_9 = sx.d(neg.w(rbx_24.w)) * rcx_42
        else
            int32_t rsi_23 = sx.d(arg15)
            rdx_25 = arg16 - 0x3b0
            rbx_24 = arg16
            r9_17 = sx.d(neg.w(rdx_25.w)) * rsi_23
            r10_9 = sx.d(arg16.w) * rsi_23
            rsi_21 = arg_18
        
        int32_t rcx_43 = sx.d(r8_19.w - rdx_25.w)
        int32_t rax_129 = sx.d(r8_19.w - rbx_24.w)
        char* r9_22 = arg_20
        
        if (rax_129 * rax_129 + r10_9 s< r9_17 + rcx_43 * rcx_43)
            rdx_25 = rbx_24
        
        int32_t rdx_27 = rdx_25 << 4
        *r9_22 = (((rdx_25 s>> 9) + 1) s>> 1).b
        
        if (*(r11 + 0x1110) s< 0)
            rdx_27 = neg.d(rdx_27)
        
        int32_t r8_21 = rdx_27 + (rbp_8 << 1).d
        int32_t r13_10 = (r13_7.d << 4) + r8_21
        int32_t rcx_52 = (((((zx.d(r13_10.w) * rax_16) s>> 0x10) + (r13_10 s>> 0x10) * rax_16
            + (((rcx_6 s>> 0xf) + 1) s>> 1) * r13_10) s>> 7) + 1) s>> 1
        
        if (rcx_52 s> 0x7fff)
            rcx_52 = 0x7fff
        else if (rcx_52 s< 0xffff8000)
            rcx_52 = -0x8000
        
        int16_t* r10_13 = arg5
        *r10_13 = rcx_52.w
        *(var_a0 + 4) = r13_10
        int32_t r13_11 = r13_10 - (r14_7 << 2).d
        *(r11 + 0x1100) = r13_11
        rdx = var_a0 + 4
        *(r11 + (sx.q(*(r11 + 0x110c)) << 2) + 0x500) = r13_11 - (rdi_13 << 2).d
        *(arg6 + (sx.q(*(r11 + 0x1108)) << 2)) = r8_21 * 2
        *(r11 + 0x110c) += 1
        *(r11 + 0x1108) += 1
        *(r11 + 0x1110) += sx.d(*r9_22)
        i = i_1
        i_1 -= 1
        var_a0 = rdx
        arg_18 = &rsi_21[1]
        arg5 = &r10_13[1]
        arg_20 = &r9_22[1]
    while (i != 1)
    i_2 = sx.q(arg17)

*(r11 + 0xf00) = *(r11 + (i_2 << 2) + 0xf00)
*(r11 + 0xf04) = *(r11 + (i_2 << 2) + 0xf04)
*(r11 + 0xf08) = *(r11 + (i_2 << 2) + 0xf08)
*(r11 + 0xf0c) = *(r11 + (i_2 << 2) + 0xf0c)
*(r11 + 0xf10) = *(r11 + (i_2 << 2) + 0xf10)
*(r11 + 0xf14) = *(r11 + (i_2 << 2) + 0xf14)
*(r11 + 0xf18) = *(r11 + (i_2 << 2) + 0xf18)
*(r11 + 0xf1c) = *(r11 + (i_2 << 2) + 0xf1c)
*(r11 + 0xf20) = *(r11 + (i_2 << 2) + 0xf20)
*(r11 + 0xf24) = *(r11 + (i_2 << 2) + 0xf24)
*(r11 + 0xf28) = *(r11 + (i_2 << 2) + 0xf28)
*(r11 + 0xf2c) = *(r11 + (i_2 << 2) + 0xf2c)
*(r11 + 0xf30) = *(r11 + (i_2 << 2) + 0xf30)
*(r11 + 0xf34) = *(r11 + (i_2 << 2) + 0xf34)
*(r11 + 0xf38) = *(r11 + (i_2 << 2) + 0xf38)
*(r11 + 0xf3c) = *(r11 + (i_2 << 2) + 0xf3c)
*(r11 + 0xf40) = *(r11 + (i_2 << 2) + 0xf40)
*(r11 + 0xf44) = *(r11 + (i_2 << 2) + 0xf44)
*(r11 + 0xf48) = *(r11 + (i_2 << 2) + 0xf48)
*(r11 + 0xf4c) = *(r11 + (i_2 << 2) + 0xf4c)
*(r11 + 0xf50) = *(r11 + (i_2 << 2) + 0xf50)
*(r11 + 0xf54) = *(r11 + (i_2 << 2) + 0xf54)
*(r11 + 0xf58) = *(r11 + (i_2 << 2) + 0xf58)
*(r11 + 0xf5c) = *(r11 + (i_2 << 2) + 0xf5c)
*(r11 + 0xf60) = *(r11 + (i_2 << 2) + 0xf60)
*(r11 + 0xf64) = *(r11 + (i_2 << 2) + 0xf64)
*(r11 + 0xf68) = *(r11 + (i_2 << 2) + 0xf68)
*(r11 + 0xf6c) = *(r11 + (i_2 << 2) + 0xf6c)
*(r11 + 0xf70) = *(r11 + (i_2 << 2) + 0xf70)
*(r11 + 0xf74) = *(r11 + (i_2 << 2) + 0xf74)
*(r11 + 0xf78) = *(r11 + (i_2 << 2) + 0xf78)
int32_t result = *(r11 + (i_2 << 2) + 0xf7c)
*(r11 + 0xf7c) = result
return result
