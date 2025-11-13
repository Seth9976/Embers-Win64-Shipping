// 函数: sub_140405fc0
// 地址: 0x140405fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
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
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int32_t var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t r10 = sx.q(arg3)
int32_t rdi = 1
int32_t rbx
rbx.b = arg6 != 0
int32_t rax_2 = 1
int32_t r8 = 1 << arg18.b
int64_t r9 = *(arg2 + 0x20)

if (arg10 != 0)
    rax_2 = r8

int32_t var_f8 = r10.d
int32_t r14 = sx.d(*(r9 + (r10 << 1)))
var_138 = rax_2
int32_t r14_1 = r14 * r8
int64_t var_b8 = r9
int64_t r13 = r10
int64_t var_118 = r10
int32_t rdx_1 = sx.d(*(r9 + (sx.q(*(arg2 + 8)) << 1) - 2)) * r8
int64_t rcx_2 = sx.q((rdx_1 - r14_1) * (rbx + 1)) << 2
int64_t rax_7 = rcx_2 + 0xf

if (rax_7 u<= rcx_2)
    rax_7 = 0xffffffffffffff0

int64_t rax_8 = rax_7 & 0xfffffffffffffff0
__chkstk(rax_8)
int64_t r11 = arg5
void var_198
void* rsp_1 = &var_198 - rax_8
int64_t rcx_3 = sx.q(rdx_1)
int64_t rdx_2 = sx.q(r14_1)
void* var_90 = arg2
void* rdx_3 = rsp_1 + 0x60 + ((rcx_3 - rdx_2) << 2)
int32_t var_80 = arg11
int64_t var_120 = r11 + (rcx_3 << 2)
int64_t var_68 = arg8
int64_t rcx_5 = sx.q(rbx + 1)
int64_t rcx_6
rcx_6.b = arg1 == 0
void* var_78 = arg17
int32_t var_84 = arg13
int32_t result = *arg20
int32_t r8_1 = rol.d(1, var_138.b)
int32_t rdx_4 = r13.d
int32_t var_128 = 0
int32_t var_98 = arg1
int64_t var_f0 = 0
int32_t r15_1 = rdx_4
int32_t var_134 = rdx_4

if (rdx_4 s>= arg4)
    *arg20 = result
else
    zmm6 = 0x3f000000
    zmm7 = 0x3f800000
    int32_t rcx_9 = arg4 - 1
    int32_t var_108_1 = rcx_9
    
    do
        int32_t r14_2 = -1
        int32_t var_88_1 = r15_1
        int32_t rax_15
        rax_15.b = r15_1 == rcx_9
        int32_t rax_16 = sx.d(*(r9 + (r13 << 1)))
        int32_t rbx_3 = rax_16 * r8
        int64_t r13_1 = sx.q(rbx_3)
        void* var_e8_1 = r11 + (r13_1 << 2)
        void* var_100_1
        
        if (arg6 == 0)
            var_100_1 = nullptr
        else
            var_100_1 = arg6 + (r13_1 << 2)
        
        int32_t rcx_16 = (sx.d(*(r9 + (var_118 << 1) + 2)) - rax_16) * r8
        int32_t rax_17 = sub_140403430(arg17)
        int32_t rax_18 = arg16
        
        if (r15_1 != var_f8)
            rax_18 -= rax_17
            arg16 = rax_18
        
        int32_t var_70_1 = arg15 - rax_17 - 1
        int64_t rdx_7
        int32_t r15_3
        
        if (r15_1 s> arg19 - 1)
            rdx_7 = var_118
            r15_3 = 0
        else
            int32_t rcx_21 = arg19 - r15_1
            
            if (rcx_21 s> 3)
                rcx_21 = 3
            
            rdx_7 = var_118
            r15_3 = *(arg9 + (rdx_7 << 2)) + divs.dp.d(sx.q(rax_18), rcx_21)
            int32_t rax_21 = r15_3
            
            if (arg15 - rax_17 s< r15_3)
                rax_21 = arg15 - rax_17
            
            int32_t rax_22
            
            if (rax_21 s<= 0x3fff)
                rax_22 = r15_3
                
                if (arg15 - rax_17 s< r15_3)
                    rax_22 = arg15 - rax_17
            
            if (rax_21 s<= 0x3fff && rax_22 s< 0)
                r15_3 = 0
            else
                int32_t rax_23 = r15_3
                
                if (arg15 - rax_17 s< r15_3)
                    rax_23 = arg15 - rax_17
                
                if (rax_23 s> 0x3fff)
                    r15_3 = 0x3fff
                else if (arg15 - rax_17 s< r15_3)
                    r15_3 = arg15 - rax_17
        
        int32_t rdi_1
        int64_t r8_5
        
        if (rcx_6 == 0 || rbx_3 - rcx_16 s< r14_1 || (rdi == 0 && var_128 != rdi))
            rdi_1 = var_134
            r8_5 = var_f0
        else
            rdi_1 = var_134
            r8_5 = rdx_7
            var_f0 = rdx_7
            var_128 = rdi_1
        
        int64_t rax_26 = rdx_7 << 2
        int32_t rax_27 = *(rax_26 + arg14)
        int32_t var_7c_1 = rax_27
        void* rcx_27
        int64_t r9_1
        
        if (rdi_1 s< *(arg2 + 0xc))
            r9_1 = var_120
            rcx_27 = nullptr
        else
            void* rcx_26 = var_100_1
            var_e8_1 = rsp_1 + 0x60
            
            if (arg6 != 0)
                rcx_26 = rsp_1 + 0x60
            
            var_100_1 = rcx_26
            rcx_27 = nullptr
            r9_1 = 0
        
        if (rdi_1 == var_108_1)
            r9_1 = 0
        
        var_120 = r9_1
        int32_t rsi_2
        int32_t r10_3
        
        if (var_128 == 0 || (arg11 == 3 && var_138 s<= 1 && rax_27 s>= 0))
            rsi_2 = r8_1 - 1
            r10_3 = rsi_2
        else
            int32_t r14_5 = sx.d(*(var_b8 + (r8_5 << 1))) * r8 - rcx_16
            r14_2 = r14_5 - r14_1
            
            if (r14_5 - r14_1 s< 0)
                r14_2 = 0
            
            int64_t rcx_28 = r8_5
            int32_t rax_28
            
            do
                rax_28 = sx.d(*(var_b8 + (rcx_28 << 1) - 2))
                rcx_28 -= 1
            while (rax_28 * r8 s> r14_2 + r14_1)
            int64_t r8_6 = r8_5 - 1
            int32_t rax_30
            
            do
                rax_30 = sx.d(*(var_b8 + (r8_6 << 1) + 2))
                r8_6 += 1
            while (rax_30 * r8 s< rcx_16 + r14_2 + r14_1)
            rsi_2 = 0
            r10_3 = 0
            char* rdx_13 = rcx_28 * rcx_5 + arg7
            
            do
                rcx_28 += 1
                r10_3 |= zx.d(*rdx_13)
                uint32_t rax_33 = zx.d(rdx_13[rcx_5 - 1])
                rdx_13 = &rdx_13[rcx_5]
                rsi_2 |= rax_33
            while (rcx_28 s< r8_6)
            
            r9_1 = var_120
            rcx_27 = nullptr
        
        char rcx_36
        char rbx_5
        uint64_t rdi_4
        
        if (arg12 == 0)
        label_140406581:
            char rax_65
            
            if (var_100_1 == 0)
                void* rdx_29
                
                if (rax_15 == 0)
                    rdx_29 = rsp_1 + 0x60 + ((r13_1 - rdx_2) << 2)
                else
                    rdx_29 = nullptr
                
                void* rcx_39
                
                if (r14_2 == 0xffffffff)
                    rcx_39 = nullptr
                else
                    rcx_39 = rsp_1 + 0x60 + (sx.q(r14_2) << 2)
                
                *(rsp_1 + 0x50) = rsi_2 | r10_3
                *(rsp_1 + 0x48) = var_120
                *(rsp_1 + 0x40) = zmm7.d
                *(rsp_1 + 0x38) = rdx_29
                *(rsp_1 + 0x30) = arg18
                int32_t rax_69 = var_138
                *(rsp_1 + 0x28) = rcx_39
                *(rsp_1 + 0x20) = rax_69
                rax_65, zmm6, zmm7 = sub_140406830(&var_98, var_e8_1, zx.q(rcx_16), zx.q(r15_3))
            else
                void* rdx_23
                
                if (rax_15 == 0)
                    rdx_23 = rsp_1 + 0x60 + ((r13_1 - rdx_2) << 2)
                else
                    rdx_23 = nullptr
                
                void* rcx_37
                
                if (r14_2 == 0xffffffff)
                    rcx_37 = nullptr
                else
                    rcx_37 = rsp_1 + 0x60 + (sx.q(r14_2) << 2)
                
                *(rsp_1 + 0x50) = rsi_2 | r10_3
                *(rsp_1 + 0x48) = var_120
                *(rsp_1 + 0x40) = rdx_23
                *(rsp_1 + 0x38) = arg18
                int32_t rax_64 = var_138
                *(rsp_1 + 0x30) = rcx_37
                *(rsp_1 + 0x28) = rax_64
                *(rsp_1 + 0x20) = r15_3
                rax_65, zmm6, zmm7 = sub_140406e90(&var_98, var_e8_1, var_100_1, zx.q(rcx_16))
            
            rdi_4 = zx.q(rcx_16)
            rbx_5 = rax_65
            rcx_36 = rax_65
        else
            if (rdi_1 == arg13)
                arg12 = 0
                
                if (rcx_6 != 0)
                    int32_t rbx_4 = rbx_3 - r14_1
                    int64_t r9_4 = 0
                    
                    if (rbx_4 s> 0 && rbx_4 u>= 8)
                        int32_t i = 0
                        int64_t rcx_29 = sx.q(rbx_4 - 1)
                        
                        if (rsp_1 + 0x60 u> rdx_3 + (rcx_29 << 2)
                                || rsp_1 + 0x60 + (rcx_29 << 2) u< rdx_3)
                            int32_t rax_37 = rbx_4 & 0x80000007
                            
                            if (rax_37 s< 0)
                                rax_37 = ((rax_37 - 1) | 0xfffffff8) + 1
                            
                            float zmm2[0x4] = data_142d3f640
                            
                            do
                                int64_t i_3 = sx.q(i)
                                r9_4 += 8
                                *(rsp_1 + 0x60 + (i_3 << 2)) = _mm_mul_ps(
                                    _mm_add_ps(*(rdx_3 + (i_3 << 2)), 
                                        *(rsp_1 + 0x60 + (i_3 << 2))), 
                                    zmm2)
                                int32_t rax_40 = i + 4
                                i += 8
                                int64_t rcx_30 = sx.q(rax_40)
                                *(rsp_1 + 0x60 + (rcx_30 << 2)) = _mm_mul_ps(
                                    _mm_add_ps(*(rdx_3 + (rcx_30 << 2)), 
                                        *(rsp_1 + 0x60 + (rcx_30 << 2))), 
                                    zmm2)
                            while (i s< rbx_4 - rax_37)
                    
                    int64_t rcx_31 = sx.q(rbx_4)
                    
                    if (r9_4 s< rcx_31)
                        float zmm0[0x4]
                        
                        if (rcx_31 - r9_4 s>= 4)
                            int128_t* r8_8 = rdx_3 - (rsp_1 + 0x60)
                            void* rax_44 = rsp_1 + 0x64 + (r9_4 << 2)
                            int64_t i_5 = ((rcx_31 - r9_4 - 4) u>> 2) + 1
                            r9_4 += i_5 << 2
                            int64_t i_1
                            
                            do
                                zmm0 = *(r8_8 + rax_44 - 4)
                                float zmm1[0x4] = *(r8_8 + rax_44)
                                rax_44 += 0x10
                                zmm0[0] = zmm0[0] f+ *(rax_44 - 0x14)
                                zmm1[0] = zmm1[0] f+ *(rax_44 - 0x10)
                                zmm0[0] = zmm0[0] f* zmm6.d
                                zmm1[0] = zmm1[0] f* zmm6.d
                                *(rax_44 - 0x14) = zmm0[0]
                                zmm0 = *(r8_8 + rax_44 - 0xc)
                                *(rax_44 - 0x10) = zmm1[0]
                                zmm0[0] = zmm0[0] f+ *(rax_44 - 0xc)
                                zmm1 = *(r8_8 + rax_44 - 8)
                                zmm1[0] = zmm1[0] f+ *(rax_44 - 8)
                                zmm0[0] = zmm0[0] f* zmm6.d
                                *(rax_44 - 0xc) = zmm0[0]
                                zmm1[0] = zmm1[0] f* zmm6.d
                                *(rax_44 - 8) = zmm1[0]
                                i_1 = i_5
                                i_5 -= 1
                            while (i_1 != 1)
                        
                        if (r9_4 s< rcx_31)
                            int128_t* rax_45 = rsp_1 + 0x60 + (r9_4 << 2)
                            int64_t i_4 = rcx_31 - r9_4
                            int64_t i_2
                            
                            do
                                zmm0 = *(rax_45 + rdx_3 - (rsp_1 + 0x60))
                                rax_45 += 4
                                zmm0[0] = zmm0[0] f+ *(rax_45 - 4)
                                zmm0[0] = zmm0[0] f* zmm6.d
                                *(rax_45 - 4) = zmm0[0]
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                
                goto label_140406581
            
            void* r8_10
            
            if (rax_15 == 0)
                r8_10 = rsp_1 + 0x60 + ((r13_1 - rdx_2) << 2)
            else
                r8_10 = nullptr
            
            if (r14_2 != 0xffffffff)
                rcx_27 = rsp_1 + 0x60 + (sx.q(r14_2) << 2)
            
            *(rsp_1 + 0x50) = r10_3
            *(rsp_1 + 0x48) = r9_1
            *(rsp_1 + 0x40) = zmm7.d
            *(rsp_1 + 0x38) = r8_10
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = sx.q(r15_3)
            int32_t rax_52 = (temp10_1 - temp9_1) s>> 1
            *(rsp_1 + 0x30) = arg18
            int32_t rax_54 = var_138
            *(rsp_1 + 0x28) = rcx_27
            *(rsp_1 + 0x20) = rax_54
            char rax_55
            int32_t zmm7_1
            rax_55, zmm7_1 = sub_140406830(&var_98, var_e8_1, zx.q(rcx_16), zx.q(rax_52))
            rbx_5 = rax_55
            void* rdx_26
            
            if (rax_15 == 0)
                rdx_26 = rdx_3 + ((r13_1 - rdx_2) << 2)
            else
                rdx_26 = nullptr
            
            void* rcx_34
            
            if (r14_2 == 0xffffffff)
                rcx_34 = nullptr
            else
                rcx_34 = rdx_3 + (sx.q(r14_2) << 2)
            
            *(rsp_1 + 0x50) = rsi_2
            rdi_4 = zx.q(rcx_16)
            *(rsp_1 + 0x48) = var_120
            *(rsp_1 + 0x40) = zmm7_1
            *(rsp_1 + 0x38) = rdx_26
            *(rsp_1 + 0x30) = arg18
            int32_t rax_59 = var_138
            *(rsp_1 + 0x28) = rcx_34
            *(rsp_1 + 0x20) = rax_59
            char rax_60
            rax_60, zmm6, zmm7 = sub_140406830(&var_98, var_100_1, zx.q(rdi_4.d), zx.q(rax_52))
            rcx_36 = rax_60
        
        r9 = var_b8
        r11 = arg5
        (rcx_5 * var_118)[arg7] = rbx_5
        r13 = var_118 + 1
        var_118 = r13
        *(rcx_5 * r13 + arg7 - 1) = rcx_36
        rcx_9 = var_108_1
        arg16 += *(rax_26 + arg9) + rax_17
        rdi.b = r15_3 s> (rdi_4 << 3).d
        r15_1 = var_134 + 1
        var_134 = r15_1
    while (r15_1 s< arg4)
    
    *arg20 = result

__security_check_cookie(rax_1 ^ &var_138)
return result
