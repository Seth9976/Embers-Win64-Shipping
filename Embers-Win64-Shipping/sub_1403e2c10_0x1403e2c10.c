// 函数: sub_1403e2c10
// 地址: 0x1403e2c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int16_t* r9 = arg3
int64_t r8 = arg2
int32_t arg_20
void* rax_123

if (arg4 == 0x12)
    int32_t rdx_8 = 0
    int32_t var_b4_3 = 0
    
    if (arg6 s> 0)
        int32_t r10_7 = sx.d(arg5)
        
        do
            int16_t* r8_30 = r8 + (sx.q(rdx_8) s>> 0x10 << 2)
            int32_t r14_6 = *(r8_30 + 0x14)
            int32_t rsi_6 = *(r8_30 + 0x10)
            int32_t rbx_6 = *(r8_30 + 0xc)
            int32_t r10_8 = *(r8_30 + 8)
            int32_t r12_6 = *(r8_30 + 0x18)
            uint64_t rax_179 = zx.q((zx.d(rdx_8.w) * r10_7) s>> 0x10)
            int64_t rcx_61 = sx.q((rax_179 * 9).d)
            int32_t r8_31 = *(r8_30 + 4)
            int32_t rax_181 = sx.d(r9[rcx_61 + 8])
            int32_t rbp_6 = sx.d(r9[rcx_61 + 5])
            int32_t rdi_6 = sx.d(r9[rcx_61 + 4])
            int32_t r11_6 = sx.d(r9[rcx_61 + 3])
            int32_t r13_6 = sx.d(r9[rcx_61 + 7])
            int32_t r15_6 = sx.d(r9[rcx_61 + 6])
            int32_t r9_6 = sx.d(r9[rcx_61 + 2])
            int32_t rdx_9 = sx.d(arg3[rcx_61 + 1])
            int32_t rcx_62 = sx.d(arg3[rcx_61])
            arg_20 = ((zx.d(r8_31.w) * rdx_9) s>> 0x10) + ((zx.d(r10_8.w) * r9_6) s>> 0x10)
                + ((zx.d(rbx_6.w) * r11_6) s>> 0x10) + ((zx.d(rsi_6.w) * rdi_6) s>> 0x10)
                + ((zx.d(r14_6.w) * rbp_6) s>> 0x10)
            arg_20 = arg_20 + ((zx.d(r12_6.w) * r15_6) s>> 0x10)
                + ((zx.d(r8_30[0xe]) * r13_6) s>> 0x10) + ((zx.d(r8_30[0x10]) * rax_181) s>> 0x10)
                + ((zx.d(*r8_30) * rcx_62) s>> 0x10)
            int32_t r10_11 = *(r8_30 + 0x24)
            int32_t r14_9 = *(r8_30 + 0x30)
            int32_t rsi_9 = *(r8_30 + 0x2c)
            int32_t rbx_9 = *(r8_30 + 0x28)
            int32_t r8_39 = arg_20 + (r8_31 s>> 0x10) * rdx_9 + (r10_8 s>> 0x10) * r9_6
                + (rbx_6 s>> 0x10) * r11_6 + (rsi_6 s>> 0x10) * rdi_6 + (r14_6 s>> 0x10) * rbp_6
                + (r12_6 s>> 0x10) * r15_6
            int32_t r12_9 = *(r8_30 + 0x34)
            int64_t rcx_63 = sx.q((arg5.d - rax_179.d - 1) * 9)
            int32_t rax_226 = sx.d(arg3[rcx_63 + 1])
            int32_t r13_7 = sx.d(arg3[rcx_63 + 3])
            int32_t r15_7 = sx.d(arg3[rcx_63 + 4])
            int32_t rbp_7 = sx.d(arg3[rcx_63 + 5])
            int32_t rdi_7 = sx.d(arg3[rcx_63 + 6])
            int32_t r11_7 = sx.d(arg3[rcx_63 + 7])
            int32_t r9_7 = sx.d(arg3[rcx_63 + 8])
            int32_t rax_227 = sx.d(arg3[rcx_63 + 2])
            int32_t r8_44 = *(r8_30 + 0x44)
            int32_t rdx_11 = sx.d(arg3[rcx_63])
            int32_t rcx_70 = ((zx.d(r8_44.w) * rdx_11) s>> 0x10)
                + ((zx.d(r10_11.w) * r9_7) s>> 0x10) + ((zx.d(rbx_9.w) * r11_7) s>> 0x10)
                + ((zx.d(rsi_9.w) * rdi_7) s>> 0x10) + ((zx.d(r14_9.w) * rbp_7) s>> 0x10)
            int32_t rcx_74 = rcx_70 + ((zx.d(r12_9.w) * r15_7) s>> 0x10)
                + ((zx.d(r8_30[0x1c]) * r13_7) s>> 0x10) + ((zx.d(r8_30[0x1e]) * rax_227) s>> 0x10)
                + ((zx.d(r8_30[0x20]) * rax_226) s>> 0x10)
            int32_t rcx_80 = rcx_74 + (r8_44 s>> 0x10) * rdx_11 + (r10_11 s>> 0x10) * r9_7
                + (rbx_9 s>> 0x10) * r11_7 + (rsi_9 s>> 0x10) * rdi_7 + (r14_9 s>> 0x10) * rbp_7
                + (r12_9 s>> 0x10) * r15_7
            int32_t rdx_16 = (*(r8_30 + 0x40) s>> 0x10) * rax_226 + r8_39
                + (*(r8_30 + 0x1c) s>> 0x10) * r13_6 + (*(r8_30 + 0x20) s>> 0x10) * rax_181
                + (*r8_30 s>> 0x10) * rcx_62
            int32_t rdx_20 = (((rdx_16 + rcx_80 + (*(r8_30 + 0x38) s>> 0x10) * r13_7
                + (*(r8_30 + 0x3c) s>> 0x10) * rax_227) s>> 5) + 1) s>> 1
            
            if (rdx_20 s> 0x7fff)
                rdx_20 = 0x7fff
            else if (rdx_20 s< 0xffff8000)
                rdx_20 = -0x8000
            
            r9 = arg3
            r8 = arg2
            r10_7 = sx.d(arg5)
            *arg_8 = rdx_20.w
            rdx_8 = var_b4_3 + arg7
            rax_123 = arg_8 + 2
            arg_8 = rax_123
            var_b4_3 = rdx_8
        while (rdx_8 s< arg6)
        
        return rax_123
else if (arg4 == 0x18)
    int32_t rax_124 = 0
    int32_t var_b4_2 = 0
    
    if (arg6 s> 0)
        do
            int32_t r13_5 = sx.d(r9[6])
            int32_t r15_5 = sx.d(r9[5])
            int32_t rbp_5 = sx.d(r9[4])
            int32_t rdi_5 = sx.d(r9[3])
            int32_t r11_5 = sx.d(r9[2])
            int64_t rax_126 = sx.q(rax_124) s>> 0x10
            void* rdx_6 = r8 + (rax_126 << 2)
            int32_t rax_128 = *(r8 + (rax_126 << 2) + 0x2c) + *(rdx_6 + 0x30)
            int32_t r10_4 = *(rdx_6 + 0x58) + *(rdx_6 + 4)
            int32_t r8_27 = *(rdx_6 + 0x5c) + *rdx_6
            int32_t r12_3 = *(rdx_6 + 0x48) + *(rdx_6 + 0x14)
            int32_t r14_3 = *(rdx_6 + 0x4c) + *(rdx_6 + 0x10)
            int32_t rsi_3 = *(rdx_6 + 0x50) + *(rdx_6 + 0xc)
            int32_t rax_129 = sx.d(r9[0xb])
            int32_t rbx_3 = *(rdx_6 + 0x54) + *(rdx_6 + 8)
            int32_t rax_131 = *(rdx_6 + 0x28) + *(rdx_6 + 0x34)
            int32_t rax_132 = sx.d(r9[0xa])
            int32_t rax_134 = *(rdx_6 + 0x24) + *(rdx_6 + 0x38)
            int32_t rax_135 = sx.d(r9[9])
            int32_t rax_137 = *(rdx_6 + 0x20) + *(rdx_6 + 0x3c)
            int32_t rax_138 = sx.d(r9[8])
            int32_t rax_140 = *(rdx_6 + 0x1c) + *(rdx_6 + 0x40)
            int32_t rax_141 = sx.d(r9[7])
            int32_t r9_5 = sx.d(r9[1])
            int32_t rax_143 = *(rdx_6 + 0x18) + *(rdx_6 + 0x44)
            int32_t rdx_7 = sx.d(*arg3)
            int32_t rax_151 = ((zx.d(r8_27.w) * rdx_7) s>> 0x10) + ((zx.d(r10_4.w) * r9_5) s>> 0x10)
                + ((zx.d(rbx_3.w) * r11_5) s>> 0x10) + ((zx.d(rsi_3.w) * rdi_5) s>> 0x10)
                + ((zx.d(r14_3.w) * rbp_5) s>> 0x10)
            int32_t rax_155 = rax_151 + ((zx.d(r12_3.w) * r15_5) s>> 0x10)
                + ((zx.d(rax_143.w) * r13_5) s>> 0x10) + ((zx.d(rax_140.w) * rax_141) s>> 0x10)
                + ((zx.d(rax_137.w) * rax_138) s>> 0x10)
            int32_t rax_160 = rax_155 + ((zx.d(rax_134.w) * rax_135) s>> 0x10)
                + ((zx.d(rax_131.w) * rax_132) s>> 0x10) + ((zx.d(rax_128.w) * rax_129) s>> 0x10)
                + (r8_27 s>> 0x10) * rdx_7 + (r10_4 s>> 0x10) * r9_5
            int32_t rax_166 = rax_160 + (rbx_3 s>> 0x10) * r11_5 + (rsi_3 s>> 0x10) * rdi_5
                + (r14_3 s>> 0x10) * rbp_5 + (r12_3 s>> 0x10) * r15_5 + (rax_143 s>> 0x10) * r13_5
                + (rax_140 s>> 0x10) * rax_141
            int32_t rax_173 = (((rax_166 + (rax_137 s>> 0x10) * rax_138
                + (rax_134 s>> 0x10) * rax_135 + (rax_131 s>> 0x10) * rax_132
                + (rax_128 s>> 0x10) * rax_129) s>> 5) + 1) s>> 1
            
            if (rax_173 s> 0x7fff)
                rax_173 = 0x7fff
            else if (rax_173 s< 0xffff8000)
                rax_173 = -0x8000
            
            r9 = arg3
            r8 = arg2
            *arg_8 = rax_173.w
            arg1 = arg_8 + 2
            rax_124 = var_b4_2 + arg7
            arg_8 = arg1
            var_b4_2 = rax_124
        while (rax_124 s< arg6)
else if (arg4 == 0x24)
    int32_t rdx = 0
    int32_t var_b4_1 = 0
    
    if (arg6 s> 0)
        do
            int32_t r10_1 = sx.d(r9[2])
            int32_t r12_1 = sx.d(r9[6])
            int32_t r14_1 = sx.d(r9[5])
            int32_t rsi_1 = sx.d(r9[4])
            int32_t rbx_1 = sx.d(r9[3])
            int64_t rax_2 = sx.q(rdx) s>> 0x10
            int32_t* rdx_1 = r8 + (rax_2 << 2)
            int32_t rax_4 = *(r8 + (rax_2 << 2) + 0x44) + rdx_1[0x12]
            int32_t r8_2 = rdx_1[0x1c] + rdx_1[7]
            int32_t rax_5 = sx.d(r9[0x11])
            int32_t rax_7 = rdx_1[0x10] + rdx_1[0x13]
            int32_t r13_2 = rdx_1[0x1d] + rdx_1[6]
            int32_t rax_8 = sx.d(r9[0x10])
            int32_t r15_2 = rdx_1[0x1e] + rdx_1[5]
            int32_t rbp_2 = rdx_1[0x1f] + rdx_1[4]
            int32_t rax_10 = rdx_1[0xf] + rdx_1[0x14]
            int32_t rdi_2 = rdx_1[0x20] + rdx_1[3]
            int32_t r11_2 = rdx_1[0x21] + rdx_1[2]
            int32_t rax_11 = sx.d(r9[0xf])
            int32_t rax_13 = rdx_1[0xe] + rdx_1[0x15]
            int32_t rax_14 = sx.d(r9[0xe])
            int32_t rax_16 = rdx_1[0xd] + rdx_1[0x16]
            int32_t rax_17 = sx.d(r9[0xd])
            int32_t rax_19 = rdx_1[0xc] + rdx_1[0x17]
            int32_t rax_20 = sx.d(r9[0xc])
            int32_t rax_22 = rdx_1[0xb] + rdx_1[0x18]
            int32_t rax_23 = sx.d(r9[0xb])
            int32_t rax_25 = rdx_1[0xa] + rdx_1[0x19]
            int32_t rax_26 = sx.d(r9[0xa])
            int32_t rax_28 = rdx_1[9] + rdx_1[0x1a]
            int32_t rax_29 = sx.d(r9[9])
            int32_t rax_31 = rdx_1[8] + rdx_1[0x1b]
            int32_t rax_32 = sx.d(r9[8])
            int32_t r9_2 = rdx_1[0x22] + rdx_1[1]
            int32_t r8_3 = sx.d(arg3[1])
            int32_t rax_35 = *rdx_1 + rdx_1[0x23]
            int32_t rax_37 = sx.d(*arg3)
            int32_t rcx_6 = ((zx.d(r9_2.w) * r8_3) s>> 0x10) + ((zx.d(r11_2.w) * r10_1) s>> 0x10)
                + ((zx.d(rdi_2.w) * rbx_1) s>> 0x10) + ((zx.d(rbp_2.w) * rsi_1) s>> 0x10)
                + ((zx.d(r15_2.w) * r14_1) s>> 0x10)
            int32_t rcx_8 = sx.d(arg3[7])
            arg_20 = rcx_6 + ((zx.d(r13_2.w) * r12_1) s>> 0x10) + ((zx.d(r8_2.w) * rcx_8) s>> 0x10)
                + ((zx.d(rax_31.w) * rax_32) s>> 0x10) + ((zx.d(rax_28.w) * rax_29) s>> 0x10)
            arg_20 = arg_20 + ((zx.d(rax_25.w) * rax_26) s>> 0x10)
                + ((zx.d(rax_22.w) * rax_23) s>> 0x10) + ((zx.d(rax_19.w) * rax_20) s>> 0x10)
                + ((zx.d(rax_16.w) * rax_17) s>> 0x10)
            arg_20 = arg_20 + ((zx.d(rax_13.w) * rax_14) s>> 0x10)
                + ((zx.d(rax_10.w) * rax_11) s>> 0x10) + ((zx.d(rax_7.w) * rax_8) s>> 0x10)
                + ((zx.d(rax_4.w) * rax_5) s>> 0x10)
            int32_t r8_8 = arg_20 + ((zx.d(rax_35.w) * rax_37) s>> 0x10) + (r9_2 s>> 0x10) * r8_3
                + (r11_2 s>> 0x10) * r10_1 + (rdi_2 s>> 0x10) * rbx_1 + (rbp_2 s>> 0x10) * rsi_1
            int32_t r8_14 = r8_8 + (r15_2 s>> 0x10) * r14_1 + (r13_2 s>> 0x10) * r12_1
                + (r8_2 s>> 0x10) * rcx_8 + (rax_31 s>> 0x10) * rax_32 + (rax_28 s>> 0x10) * rax_29
                + (rax_25 s>> 0x10) * rax_26
            int32_t r8_20 = r8_14 + (rax_22 s>> 0x10) * rax_23 + (rax_19 s>> 0x10) * rax_20
                + (rax_16 s>> 0x10) * rax_17 + (rax_13 s>> 0x10) * rax_14
                + (rax_10 s>> 0x10) * rax_11 + (rax_7 s>> 0x10) * rax_8
            int32_t r8_25 =
                (((r8_20 + (rax_4 s>> 0x10) * rax_5 + (rax_35 s>> 0x10) * rax_37) s>> 5) + 1) s>> 1
            
            if (r8_25 s> 0x7fff)
                r8_25 = 0x7fff
            else if (r8_25 s< 0xffff8000)
                r8_25 = -0x8000
            
            int16_t* rax_122 = arg_8
            r9 = arg3
            rdx = var_b4_1 + arg7
            *rax_122 = r8_25.w
            r8 = arg2
            rax_123 = &rax_122[1]
            var_b4_1 = rdx
            arg_8 = rax_123
        while (rdx s< arg6)
        
        return rax_123
return arg1
