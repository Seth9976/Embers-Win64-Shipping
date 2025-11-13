// 函数: sub_140e1b120
// 地址: 0x140e1b120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_178 = nullptr
int32_t var_170 = 0
sub_140a464c0()
int16_t* var_188 = nullptr
int32_t var_180 = 0
sub_1405947f0(&var_188, 6)
int32_t rbx = var_180 + 6

if (rbx s> 0)
    sub_140594770(&var_188)

int16_t* rdi = var_188
sub_1405a7220(rdi, 6, "*.png", 6, 0x3f)
int16_t* const r8 = &data_142d40450
int16_t* const r9 = &data_142d40450

if (rbx != 0)
    r9 = rdi

if (arg1[3].d != 0)
    r8 = arg1[2]

uint64_t result = (*(data_14399ea08 + 0x80))(&data_14399ea08, &var_178, r8, r9, 1, 0, 0)

if (rdi != 0)
    result = sub_140a74f90(rdi)

int64_t* rsi = var_178
int64_t rbx_1 = sx.q(var_170)
void* r12_2 = &rsi[rbx_1 * 2]
void* var_160 = r12_2

if (rsi != r12_2)
    void* r13_1 = &arg1[0x43]
    void* r15_1 = r13_1 + 0x10
    void* var_168_1 = r15_1
    
    do
        int32_t r10_1 = *(r15_1 + 0x18)
        int32_t rcx_4 = 0
        int32_t r8_1 = 0
        char arg_8 = 0
        int32_t var_148_1 = 0
        int32_t var_144_1 = 1
        void* var_140_1 = r15_1
        int32_t var_138_1 = 0xffffffff
        int64_t var_134_1 = 0
        
        if (r10_1 != 0)
            void* rax_1 = *(r15_1 + 0x10)
            void* r9_1 = r15_1
            
            if (rax_1 != 0)
                r9_1 = rax_1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_140e1b2c8:
                int32_t rax_8 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
                int32_t var_144_2 = rax_8
                int32_t arg_10 = temp0_1
                int32_t rax_9
                
                if (rax_8 == 0)
                    rax_9 = 0x20
                else
                    rax_9 = 0x1f - temp0_1
                
                var_134_1.d = r8_1 - rax_9 + 0x1f
                
                if (r8_1 - rax_9 + 0x1f s> r10_1)
                    var_134_1.d = r10_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_4)
                    r8_1 += 0x20
                    rcx_4 += 1
                    var_134_1:4.d = r8_1
                    var_148_1 = rcx_4
                    
                    if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    int32_t var_138_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140e1b2c8
                
                var_134_1.d = r10_1
        
        int32_t rdx_6 = *(r13_1 + 0x28)
        int128_t var_100_1 = var_148_1.o
        int32_t r8_4 = rdx_6 s>> 5
        int32_t rdi_1 = 0xffffffff << (rdx_6.b & 0x1f)
        int32_t r9_3 = rdx_6 & 0xffffffe0
        void* var_108_1
        var_108_1.d = r8_4
        int128_t var_f0_1 = 0xffffffff
        int64_t var_90_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t zmm1_1 = var_100_1
        var_100_1:8.d = rdi_1
        var_100_1:0xc.d = rdx_6
        var_f0_1.d = r9_3
        int128_t var_b0 = r13_1.o
        int128_t var_a0_1 = zmm1_1
        
        if (rdx_6 != r10_1)
            void* rax_11 = *(r15_1 + 0x10)
            void* r11_1 = r15_1
            
            if (rax_11 != 0)
                r11_1 = rax_11
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_1 - 1)
            int32_t rdx_10 = *(r11_1 + (sx.q(r8_4) << 2)) & rdi_1
            
            if (rdx_10 != 0)
            label_140e1b3ab:
                int32_t rax_18 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
                int32_t arg_18 = temp0_3
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_3
                
                var_100_1:0xc.d = r9_3 - rax_19 + 0x1f
                
                if (r9_3 - rax_19 + 0x1f s> r10_1)
                    var_100_1:0xc.d = r10_1
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    var_f0_1.d = r9_3
                    var_108_1.d = r8_4
                    
                    if (rcx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r11_1 + (rcx_9 << 2) + 4)
                    var_100_1:8.d = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_140e1b3ab
                
                var_100_1:0xc.d = r10_1
        
        uint64_t rbx_3
        
        while (true)
            int64_t rax_21 = sx.q(var_a0_1:0xc.d)
            int64_t* rcx_11 = var_b0.q
            
            if (rax_21.d == (var_100_1:8.q u>> 0x20).d && var_a0_1.q == r15_1 && rcx_11 == r13_1)
                int32_t var_124_1 = 1
                int32_t var_128_1 = 0
                int32_t r11_2 = arg1[0xb].d
                void* var_120_1 = &arg1[8]
                int32_t rcx_15 = 0
                int32_t var_118_1 = 0xffffffff
                int32_t r8_7 = 0
                int64_t var_114_1 = 0
                
                if (r11_2 != 0)
                    void* rax_24 = arg1[0xa]
                    void* r9_5 = &arg1[8]
                    
                    if (rax_24 != 0)
                        r9_5 = rax_24
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(r11_2 - 1)
                    int32_t rdx_14 = *r9_5
                    
                    if (rdx_14 != 0)
                    label_140e1b4b8:
                        int32_t rax_31 = neg.d(rdx_14) & rdx_14
                        uint64_t rflags_3
                        int32_t temp0_4
                        temp0_4, rflags_3 = _bit_scan_reverse(rax_31)
                        int32_t var_124_2 = rax_31
                        int32_t arg_20 = temp0_4
                        int32_t rax_32
                        
                        if (rax_31 == 0)
                            rax_32 = 0x20
                        else
                            rax_32 = 0x1f - temp0_4
                        
                        var_114_1.d = r8_7 - rax_32 + 0x1f
                        
                        if (r8_7 - rax_32 + 0x1f s> r11_2)
                            var_114_1.d = r11_2
                    else
                        while (true)
                            int64_t rdx_15 = sx.q(rcx_15)
                            r8_7 += 0x20
                            rcx_15 += 1
                            var_114_1:4.d = r8_7
                            var_128_1 = rcx_15
                            
                            if (rdx_15.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_14 = *(r9_5 + (rdx_15 << 2) + 4)
                            int32_t var_118_2 = 0xffffffff
                            
                            if (rdx_14 != 0)
                                goto label_140e1b4b8
                        
                        var_114_1.d = r11_2
                
                int32_t rdx_16 = arg1[0xb].d
                int128_t var_d8_1 = var_128_1.o
                int32_t r8_10 = rdx_16 s>> 5
                int32_t rdi_2 = 0xffffffff << (rdx_16.b & 0x1f)
                int32_t r9_7 = rdx_16 & 0xffffffe0
                void* var_e0_1
                var_e0_1.d = r8_10
                int128_t var_c8_1 = 0xffffffff
                int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                zmm1_1 = var_d8_1
                var_d8_1:8.d = rdi_2
                var_d8_1:0xc.d = rdx_16
                var_c8_1.d = r9_7
                int128_t var_88 = (&arg1[6]).o
                int128_t var_78_1 = zmm1_1
                
                if (rdx_16 != r11_2)
                    void* rax_34 = arg1[0xa]
                    void* r10_2 = &arg1[8]
                    
                    if (rax_34 != 0)
                        r10_2 = rax_34
                    
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(r11_2 - 1)
                    int32_t rdx_20 = *(r10_2 + (sx.q(r8_10) << 2)) & rdi_2
                    
                    if (rdx_20 != 0)
                    label_140e1b59a:
                        int32_t rax_41 = neg.d(rdx_20) & rdx_20
                        uint64_t rflags_4
                        int32_t temp0_6
                        temp0_6, rflags_4 = _bit_scan_reverse(rax_41)
                        int32_t var_b8_1 = temp0_6
                        int32_t rax_42
                        
                        if (rax_41 == 0)
                            rax_42 = 0x20
                        else
                            rax_42 = 0x1f - temp0_6
                        
                        var_d8_1:0xc.d = r9_7 - rax_42 + 0x1f
                        
                        if (r9_7 - rax_42 + 0x1f s> r11_2)
                            var_d8_1:0xc.d = r11_2
                    else
                        while (true)
                            int64_t rcx_20 = sx.q(r8_10)
                            r9_7 += 0x20
                            r8_10 += 1
                            var_c8_1.d = r9_7
                            var_e0_1.d = r8_10
                            
                            if (rcx_20.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_20 = *(r10_2 + (rcx_20 << 2) + 4)
                            var_d8_1:8.d = 0xffffffff
                            
                            if (rdx_20 != 0)
                                goto label_140e1b59a
                        
                        var_d8_1:0xc.d = r11_2
                
                while (true)
                    int64_t rcx_22 = sx.q(var_78_1:0xc.d)
                    result = var_88.q
                    
                    if (rcx_22.d == (var_d8_1:8.q u>> 0x20).d && var_78_1.q == &arg1[8]
                            && result == &arg1[6])
                        rbx_3 = 0
                        break
                    
                    int64_t rax_44 = *result
                    uint64_t var_158 = 0
                    int32_t var_150_1 = 0
                    int64_t* rcx_24 = *((rcx_22 << 5) + rax_44 + 8)
                    (*(*rcx_24 + 8))(rcx_24, &var_158)
                    rbx_3 = var_158
                    int64_t rdi_3 = rbx_3 + (sx.q(var_150_1) << 3)
                    
                    if (rbx_3 != rdi_3)
                        while (true)
                            result = sub_140e1a3b0(arg1, rsi, *rbx_3)
                            
                            if (result.b != 0)
                                uint64_t rcx_28 = var_158
                                rbx_3.b = 1
                                
                                if (rcx_28 != 0)
                                    result = sub_140a74f90(rcx_28)
                                
                                break
                            
                            rbx_3 += 8
                            
                            if (rbx_3 == rdi_3)
                                rbx_3 = var_158
                                goto label_140e1b650
                        
                        break
                    
                label_140e1b650:
                    
                    if (rbx_3 != 0)
                        sub_140a74f90(rbx_3)
                    
                    var_78_1:8.d &= not.d(var_88:0xc.d)
                    sub_14059bdd0(&var_88:8)
                
                r15_1 = var_168_1
                r13_1 = &arg1[0x43]
                r12_2 = var_160
                break
            
            result = sub_140e1a3b0(arg1, rsi, *(*rcx_11 + rax_21 * 0x18 + 8))
            
            if (result.b != 0)
                rbx_3.b = 1
                break
            
            var_a0_1:8.d &= not.d(var_b0:0xc.d)
            sub_14059bdd0(&var_b0:8)
        
        if (rbx_3.b == 0)
            void var_60
            result = (*(*arg1 + 0x90))(arg1, 3, sub_140aae420(&var_60, rsi))
            int64_t* var_58
            
            if (var_58 != 0)
                result = zx.q(var_58[1].d)
                var_58[1].d -= 1
                
                if (result.d == 1)
                    (**var_58)(var_58)
                    result = zx.q(*(var_58 + 0xc))
                    *(var_58 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_58 + 8))(var_58, 1)
        
        rsi = &rsi[2]
    while (rsi != r12_2)
    
    rbx_1 = zx.q(var_170)
    rsi = var_178

if (rbx_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_33 = *rsi
        
        if (rcx_33 != 0)
            result = sub_140a74f90(rcx_33)
        
        rsi = &rsi[2]
        i = rbx_1.d
        rbx_1 = zx.q(rbx_1.d - 1)
    while (i != 1)
    rsi = var_178

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
