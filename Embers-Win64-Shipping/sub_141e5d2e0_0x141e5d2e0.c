// 函数: sub_141e5d2e0
// 地址: 0x141e5d2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
uint64_t var_58 = __security_cookie ^ &var_2f8
int64_t* rdi = arg4
int64_t* rsi = arg3
int64_t* r14 = arg1
uint64_t result

if (*(arg1 + 0x2d3) != 0)
    int64_t r13_1 = 0
    int64_t var_f8 = 0
    int32_t var_f0_1 = 0
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x1c)
    int32_t var_c4_1 = 0
    void* var_b8_1 = nullptr
    int32_t var_b0_1 = 0
    int32_t var_cc_1 = 0x80
    int32_t var_c8_1 = 0xffffffff
    int64_t* rax_1 = sub_140b6b610()
    int64_t* rax_2 = sub_140a744f0(&data_143db7b00, u"PakFile")
    int64_t r9 = *arg2
    int64_t var_2a8_1 = r9
    int64_t rax_3 = r9 + sx.q(arg2[1].d) * 0x18
    int64_t* rbx
    
    if (r9 != rax_3)
        do
            int64_t rax_4 = *r14
            int64_t var_1e8
            __builtin_memset(&var_1e8, 0, 0x44)
            (*(rax_4 + 0x3c0))(r14, r9, &var_1e8)
            int128_t var_1b8
            int32_t* r12_1 = var_1b8:8.q
            int64_t* rbx_1 = nullptr
            int32_t rdx_2 = 0
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x2c)
            int32_t r9_1 = 0
            int32_t rsi_1 = 0
            int32_t r8_1 = 0
            int32_t var_1a8
            void* rcx_2 = &r12_1[sx.q(var_1a8)]
            int32_t var_7c_1 = 0x80
            uint64_t rax_9 = (rcx_2 - r12_1 + 3) u>> 2
            int32_t r11_1 = 0
            int32_t var_78_1 = 0xffffffff
            int32_t var_74_1 = 0
            
            if (r12_1 u> rcx_2)
                rax_9 = 0
            
            int64_t var_68_1 = 0
            int32_t var_60_1 = 0
            int32_t r15_1 = 0
            int64_t var_148
            __builtin_memset(&var_148, 0, 0x2c)
            void* rdi_1 = nullptr
            int32_t r10_1 = 0
            int32_t r14_1 = 0
            int32_t var_11c_1 = 0x80
            int32_t var_118_1 = 0xffffffff
            int32_t var_114_1 = 0
            int64_t var_108_1 = 0
            int32_t var_100_1 = 0
            int64_t var_198
            __builtin_memset(&var_198, 0, 0x2c)
            int32_t var_16c_1 = 0x80
            int32_t var_168_1 = 0xffffffff
            int32_t var_164_1 = 0
            int64_t var_158_1 = 0
            int32_t var_150_1 = 0
            void* var_178
            int64_t var_140_1
            int64_t* var_128
            int64_t var_a0_1
            
            if (rax_9 != 0)
                int64_t r8_2 = var_f8
                
                do
                    int64_t rbx_2 = sx.q(*r12_1)
                    int32_t var_2d8 = rbx_2.d
                    void var_c0
                    
                    if (var_f0_1 == var_c4_1)
                    label_141e5d608:
                        int32_t rax_16 = (*(*rax_1 + 8))(rax_1, zx.q(rbx_2.d))
                        int32_t var_2b0 = rax_16
                        
                        if (rax_16 s>= 2 && sub_141cfc640(rax_2) != 0)
                            var_2b0 = sub_141d04180(rax_2, rbx_2.d)
                        
                        sub_1409fa280(&var_f8, &var_2d8, &var_2b0)
                        r8_2 = var_f8
                        rbx_2 = zx.q(var_2d8)
                    else
                        void* rax_13 = &var_c0
                        
                        if (var_b8_1 != 0)
                            rax_13 = var_b8_1
                        
                        int32_t rax_14 = *(rax_13 + ((sx.q(var_b0_1 - 1) & rbx_2) << 2))
                        
                        if (rax_14 == 0xffffffff)
                            goto label_141e5d608
                        
                        while (true)
                            int64_t rcx_6 = sx.q(rax_14) * 2
                            
                            if (*(r8_2 + (rcx_6 << 3)) == rbx_2.d)
                                break
                            
                            rax_14 = *(r8_2 + (rcx_6 << 3) + 8)
                            
                            if (rax_14 == 0xffffffff)
                                goto label_141e5d608
                        
                        if (rax_14 == 0xffffffff)
                            goto label_141e5d608
                    
                    void* rax_27
                    
                    if (var_f0_1 == var_c4_1)
                    label_141e5d6a8:
                        rax_27 = nullptr
                    else
                        void* rax_23 = &var_c0
                        
                        if (var_b8_1 != 0)
                            rax_23 = var_b8_1
                        
                        int32_t rax_24 = *(rax_23 + ((sx.q(var_b0_1 - 1) & sx.q(rbx_2.d)) << 2))
                        
                        if (rax_24 == 0xffffffff)
                        label_141e5d6a8_1:
                            rax_27 = nullptr
                        else
                            int64_t rcx_14
                            
                            while (true)
                                rcx_14 = sx.q(rax_24) * 2
                                
                                if (*(r8_2 + (rcx_14 << 3)) == rbx_2.d)
                                    break
                                
                                rax_24 = *(r8_2 + (rcx_14 << 3) + 8)
                                
                                if (rax_24 == 0xffffffff)
                                    goto label_141e5d6a8_2
                            
                            if (rax_24 == 0xffffffff)
                            label_141e5d6a8_2:
                                rax_27 = nullptr
                            else
                                rax_27 = r8_2 + (rcx_14 << 3)
                    
                    int32_t rax_25 = *(rax_27 + 4)
                    
                    if (rax_25 == 0)
                        void var_288
                        sub_14077a5e0(&var_198, &var_288, &var_2d8, nullptr)
                        r8_2 = var_f8
                    else if (rax_25 == 1)
                        void var_28c
                        sub_14077a5e0(&var_148, &var_28c, &var_2d8, nullptr)
                        r8_2 = var_f8
                    else if (rax_25 - 2 u<= 1)
                        void var_290
                        sub_14077a5e0(&var_a8, &var_290, &var_2d8, nullptr)
                        r8_2 = var_f8
                    
                    r12_1 = &r12_1[1]
                    r13_1 += 1
                while (r13_1 != rax_9)
                
                rsi_1 = var_74_1
                r9_1 = var_a0_1.d
                r15_1 = var_114_1
                int32_t var_120
                r11_1 = var_120
                rbx_1 = var_128
                r8_1 = var_140_1.d
                r14_1 = var_164_1
                int32_t var_170
                r10_1 = var_170
                rdi_1 = var_178
                int32_t var_190_1
                rdx_2 = var_190_1
            
            r13_1 = 0
            int64_t var_18c
            int64_t var_138
            
            if (r9_1 == rsi_1)
                if (r8_1 - r15_1 s> 0)
                    int32_t var_2cc_1 = 1
                    int32_t rcx_16 = 0
                    int32_t var_2d0_1 = 0
                    int64_t* var_2c8_1 = &var_138
                    int32_t rdi_3 = -1
                    int32_t var_2c0_1 = 0xffffffff
                    int32_t r8_6 = 0
                    int64_t var_2bc_1 = 0
                    
                    if (r11_1 != 0)
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(r11_1 - 1)
                        int64_t* r9_2 = &var_138
                        
                        if (rbx_1 != 0)
                            r9_2 = rbx_1
                        
                        int32_t rdx_12 = *r9_2
                        
                        if (rdx_12 != 0)
                        label_141e5d7fb:
                            int32_t rax_34 = neg.d(rdx_12) & rdx_12
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_34)
                            int32_t var_2cc_2 = rax_34
                            int32_t rax_35
                            
                            if (rax_34 == 0)
                                rax_35 = 0x20
                            else
                                rax_35 = 0x1f - temp0_2
                            
                            int32_t rax_36 = r8_6 - rax_35 + 0x1f
                            
                            if (rax_36 s> r11_1)
                                rax_36 = r11_1
                            
                            var_2bc_1.d = rax_36
                        else
                            while (true)
                                int64_t rdx_13 = sx.q(rcx_16)
                                r8_6 += 0x20
                                rcx_16 += 1
                                var_2bc_1:4.d = r8_6
                                var_2d0_1 = rcx_16
                                
                                if (rdx_13.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                    var_2bc_1.d = r11_1
                                    break
                                
                                rdx_12 = *(r9_2 + (rdx_13 << 2) + 4)
                                int32_t var_2c0_2 = 0xffffffff
                                
                                if (rdx_12 != 0)
                                    goto label_141e5d7fb
                    
                    var_2bc_1.d = r11_1
                    int128_t var_1f8_1 = 0xffffffff
                    int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int128_t var_260 = (&var_148).o
                    int128_t var_250_1 = var_2d0_1.o
                    int64_t var_240_1 = temp0_3
                    
                    while (true)
                        int64_t rax_37 = sx.q(var_250_1:0xc.d)
                        int64_t* rdx_15 = var_260.q
                        
                        if (rax_37.d == ((0xffffffff << (r11_1.b & 0x1f)).q u>> 0x20).d
                                && var_250_1.q == &var_138 && rdx_15 == &var_148)
                            break
                        
                        int32_t rbx_3 = *(*rdx_15 + rax_37 * 0xc)
                        
                        for (int32_t* i = *arg3; i != &i[sx.q(arg3[1].d)]; i = &i[1])
                            if (*i == rbx_3)
                                goto label_141e5d925
                        
                        var_250_1:8.d &= not.d(var_260:0xc.d)
                        sub_14059bdd0(&var_260:8)
                        
                        if (rdi_3 != 0xffffffff)
                            rbx_3 = rdi_3
                        
                        rdi_3 = rbx_3
                    
                    if (rdi_3 != 0xffffffff)
                        int64_t rbx_4 = sx.q(arg3[1].d)
                        int32_t rax_41 = (rbx_4 + 1).d
                        arg3[1].d = rax_41
                        
                        if (rax_41 s> *(arg3 + 0xc))
                            sub_1405a4cf0(arg3)
                        
                        *(*arg3 + (rbx_4 << 2)) = rdi_3
                else if (rdx_2 - r14_1 s> 0)
                    int32_t var_2cc_3 = 1
                    int32_t rcx_42 = 0
                    int32_t var_2d0_2 = 0
                    void* var_2c8_2 = &var_18c:4
                    int32_t r8_8 = 0
                    int32_t var_2c0_4 = 0xffffffff
                    int64_t var_2bc_2 = 0
                    
                    if (r10_1 != 0)
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r10_1 - 1)
                        void* r9_4 = &var_18c:4
                        
                        if (rdi_1 != 0)
                            r9_4 = rdi_1
                        
                        int32_t rdx_21 = *r9_4
                        
                        if (rdx_21 != 0)
                        label_141e5db8c:
                            int32_t rax_51 = neg.d(rdx_21) & rdx_21
                            uint64_t rflags_2
                            int32_t temp0_4
                            temp0_4, rflags_2 = _bit_scan_reverse(rax_51)
                            int32_t var_2cc_4 = rax_51
                            int32_t rax_52
                            
                            if (rax_51 == 0)
                                rax_52 = 0x20
                            else
                                rax_52 = 0x1f - temp0_4
                            
                            int32_t rax_53 = r8_8 - rax_52 + 0x1f
                            
                            if (rax_53 s> r10_1)
                                rax_53 = r10_1
                            
                            var_2bc_2.d = rax_53
                        else
                            while (true)
                                int64_t rdx_22 = sx.q(rcx_42)
                                r8_8 += 0x20
                                rcx_42 += 1
                                var_2bc_2:4.d = r8_8
                                var_2d0_2 = rcx_42
                                
                                if (rdx_22.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    var_2bc_2.d = r10_1
                                    break
                                
                                rdx_21 = *(r9_4 + (rdx_22 << 2) + 4)
                                int32_t var_2c0_5 = 0xffffffff
                                
                                if (rdx_21 != 0)
                                    goto label_141e5db8c
                    
                    var_2bc_2.d = r10_1
                    int128_t var_1f8_2 = 0xffffffff
                    int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int128_t var_238 = (&var_198).o
                    int128_t var_228_1 = var_2d0_2.o
                    int64_t var_218_1 = temp0_5
                    
                    while (true)
                        int64_t rax_54 = sx.q(var_228_1:0xc.d)
                        int64_t* rdx_24 = var_238.q
                        
                        if (rax_54.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                                && var_228_1.q == &var_18c:4 && rdx_24 == &var_198)
                            break
                        
                        int64_t rbx_5 = sx.q(arg4[1].d)
                        int32_t rdi_4 = *(*rdx_24 + rax_54 * 0xc)
                        int32_t rax_56 = (rbx_5 + 1).d
                        arg4[1].d = rax_56
                        
                        if (rax_56 s> *(arg4 + 0xc))
                            sub_1405a4cf0(arg4)
                        
                        *(*arg4 + (rbx_5 << 2)) = rdi_4
                        var_228_1:8.d &= not.d(var_238:0xc.d)
                        sub_14059bdd0(&var_238:8)
            
        label_141e5d925:
            int32_t var_150_2 = 0
            
            if (var_158_1 != 0)
                sub_140a74f90(var_158_1)
            
            int32_t var_190_2 = 0
            
            if (var_18c.d != 0)
                sub_140638cc0(&var_198, 0)
            
            int32_t var_168_2 = 0xffffffff
            int32_t var_164_2 = 0
            sub_14059a8e0(&var_18c:4, 0)
            
            if (var_178 != 0)
                sub_140a74f90(var_178)
            
            int64_t rcx_28 = var_198
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            int32_t var_100_2 = 0
            
            if (var_108_1 != 0)
                sub_140a74f90(var_108_1)
            
            bool cond:7_1 = var_140_1:4.d == 0
            var_140_1.d = 0
            
            if (not(cond:7_1))
                sub_140638cc0(&var_148, 0)
            
            int32_t var_118_2 = 0xffffffff
            int32_t var_114_2 = 0
            sub_14059a8e0(&var_138, 0)
            
            if (var_128 != 0)
                sub_140a74f90(var_128)
            
            int64_t rcx_33 = var_148
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            int32_t var_60_2 = 0
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)
            
            bool cond:9_1 = var_a0_1:4.d == 0
            var_a0_1.d = 0
            
            if (not(cond:9_1))
                sub_140638cc0(&var_a8, 0)
            
            int32_t var_78_2 = 0xffffffff
            int32_t var_74_2 = 0
            int64_t var_98
            sub_14059a8e0(&var_98, 0)
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t rcx_38 = var_a8
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            int64_t rcx_39 = var_1b8:8.q
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
            
            rbx = var_1b8.q
            
            if (rbx != 0)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t temp5_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx + 8))(rbx, 1)
            
            r14 = arg1
            r9 = var_2a8_1 + 0x18
            var_2a8_1 = r9
        while (r9 != rax_3)
        
        rdi = arg4
        rsi = arg3
    
    if (rsi[1].d s> 0 || rdi[1].d s> 0)
        rbx.b = 1
    else
        rbx.b = 0
    
    sub_1405ae180(&var_f8)
    result = zx.q(rbx.b)
else
    result.b = 0

__security_check_cookie(var_58 ^ &var_2f8)
return result
