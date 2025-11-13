// 函数: sub_1423b55c0
// 地址: 0x1423b55c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int16_t* var_218 = nullptr
int32_t* r9 = arg1 + 0x28
int64_t var_210 = 0
int32_t rbx = r9[6]
int32_t rcx = 0
int32_t r10 = 0
int32_t var_160 = 0
int32_t r8 = 0
int32_t var_15c = 1
int32_t* var_158 = r9
int32_t var_150 = 0xffffffff
int64_t var_14c = 0

if (rbx != 0)
    int32_t* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1423b5689:
        int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_15c_1 = rax_9
        int32_t var_c8_1 = temp0_1
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_14c.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx)
            var_14c.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            int32_t var_148_1 = r8
            var_160 = rcx
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            int32_t var_150_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1423b5689
        
        var_14c.d = rbx

void* var_118 = arg1 + 0x18
int128_t zmm0 = var_160.o
void* var_140 = arg1 + 0x18
int128_t var_128 = 0xffffffff
int16_t var_d0 = 0
void* rax_12 = zmm0.q
int128_t var_f8 = zmm0
int128_t var_108 = var_140.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
void* result = nullptr
int128_t var_e8 = zmm0
var_128 = zmm0

if (0 s< *(rax_12 + 0x18))
    int32_t rcx_3 = var_f8:0xc.d
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    
    while (true)
        void* r15_1 = *var_108.q
        int64_t r14_2 = sx.q(rcx_3) * 0x30
        
        if (*(r14_2 + r15_1 + 0x10) == 0)
            var_210.d = 0
            
            if (r10 != 0x100)
                sub_1405947f0(&var_218, 0x100)
            
            int64_t* rdi_1 = *(r14_2 + r15_1 + 0x18)
            int64_t* rax_15 = sub_140ac6680(rdi_1)
            
            if (&var_218 != rax_15)
                int32_t rbx_1 = rax_15[1].d
                int64_t rsi_1 = *rax_15
                int32_t r8_2 = var_210:4.d
                var_210.d = rbx_1
                
                if (rbx_1 != 0 || r8_2 != 0)
                    sub_1405a4c70(&var_218, rbx_1, r8_2)
                    memcpy(var_218, rsi_1, rbx_1 * 2)
                else
                    var_210:4.d = 0
            
            zmm9 = rdi_1[3].d
            int32_t i = 1
            zmm8 = zx.o(0)
            
            if (*(r14_2 + r15_1 + 0x20) s> 1)
                int64_t rdi_2 = 0x20
                
                do
                    int64_t* rbx_3 = *(r14_2 + r15_1 + 0x18) + rdi_2
                    int64_t* rax_16 = sub_140ac6680(rbx_3)
                    int32_t rcx_9 = rax_16[1].d
                    int32_t r8_5 = rcx_9 - 1
                    
                    if (rcx_9 == 0)
                        r8_5 = 0
                    
                    sub_140a20ba0(&var_218, *rax_16, r8_5)
                    i += 1
                    rdi_2 += 0x20
                    zmm8.d = rbx_3[3].d.d f- zmm9.d
                while (i s< *(r14_2 + r15_1 + 0x20))
            
            int32_t i_10 = sub_140a23cf0(&var_218, &data_14333984c, 1, 0, 0xffffffff)
            int32_t i_7 = i_10
            
            if (i_10 s>= 0)
                int32_t i_1
                
                do
                    int32_t rsi_2 = var_210.d
                    int32_t rcx_12 = rsi_2 - 1
                    
                    if (rsi_2 == 0)
                        rcx_12 = 0
                    
                    int16_t* r12_1 = var_218
                    int32_t rdx_7
                    int16_t* r8_6
                    
                    if (rsi_2 == 0)
                        rdx_7 = 0
                        r8_6 = &data_142d40450
                    else
                        rdx_7 = rsi_2 - 1
                        r8_6 = r12_1
                    
                    int32_t rax_17
                    
                    if (rcx_12 - i_7 - 2 s>= 0)
                        rax_17 = rdx_7
                        
                        if (rcx_12 - i_7 - 2 s< rdx_7)
                            rax_17 = rcx_12 - i_7 - 2
                    else
                        rax_17 = 0
                    
                    int16_t* r13_1 = nullptr
                    int32_t r15_2 = 0
                    int16_t* var_1f0 = nullptr
                    int32_t rax_19 = 0
                    int32_t var_1e8_1 = 0
                    int32_t var_208_1 = 0
                    int32_t var_1e4_1 = 0
                    int16_t* rdi_3 = &r8_6[sx.q(rdx_7) - sx.q(rax_17)]
                    
                    if (rdi_3 != 0 && *rdi_3 != 0)
                        int64_t rbx_4 = -1
                        
                        do
                            rbx_4 += 1
                        while (rdi_3[rbx_4] != 0)
                        
                        if (rbx_4.d + 1 s> 0)
                            sub_1405947f0(&var_1f0, rbx_4.d + 1)
                            rax_19 = var_1e4_1
                            r15_2 = var_1e8_1
                            r13_1 = var_1f0
                            var_208_1 = rax_19
                        
                        r15_2 += rbx_4.d + 1
                        
                        if (r15_2 s> rax_19)
                            sub_140594770(&var_1f0)
                            r13_1 = var_1f0
                            var_208_1 = var_1e4_1
                        
                        UnDecorator::getReferenceType(r13_1, rdi_3, (rbx_4.d + 1) * 2)
                        rsi_2 = var_210.d
                        r12_1 = var_218
                    
                    int32_t i_12
                    
                    if (rsi_2 == 0)
                        r12_1 = &data_142d40450
                        i_12 = 0
                    else
                        i_12 = rsi_2 - 1
                    
                    if (i_7 s< 0)
                        i_12 = 0
                    else if (i_7 s< i_12)
                        i_12 = i_7
                    
                    int16_t* var_200 = nullptr
                    int32_t rbx_6 = 0
                    int32_t var_1f8_1 = 0
                    int16_t* rdi_4 = nullptr
                    int32_t var_1f4_1 = 0
                    int32_t r14_3 = 0
                    
                    if (r12_1 != 0 && *r12_1 != 0 && i_12 s> 0)
                        if (i_12 + 1 s> 0)
                            sub_1405947f0(&var_200, i_12 + 1)
                            r14_3 = var_1f4_1
                            rbx_6 = var_1f8_1
                            rdi_4 = var_200
                        
                        rbx_6 = rbx_6 + 1 + i_12
                        
                        if (rbx_6 s> r14_3)
                            sub_140594770(&var_200)
                            r14_3 = var_1f4_1
                            rdi_4 = var_200
                        
                        UnDecorator::getReferenceType(rdi_4, r12_1, i_12 * 2)
                        rdi_4[sx.q(rbx_6) - 1] = 0
                    
                    int32_t rax_22
                    
                    if (r12_1 == 0 || *r12_1 == 0 || i_12 s<= 0 || rbx_6 == 0)
                        rax_22 = 2
                    else
                        rax_22 = 1
                    
                    int32_t rdx_14 = rbx_6 + rax_22
                    int16_t* var_1e0 = rdi_4
                    var_200 = nullptr
                    int32_t var_1d4_1 = r14_3
                    var_1f8_1.q = 0
                    
                    if (rdx_14 s> r14_3)
                        sub_1405947f0(&var_1e0, rdx_14)
                        r14_3 = var_1d4_1
                        rdi_4 = var_1e0
                    
                    int32_t rsi_3 = rbx_6 - 1
                    
                    if (rbx_6 s<= 0)
                        rsi_3 = 0
                    
                    int32_t rcx_24
                    rcx_24.b = rbx_6 s<= 0
                    int32_t rcx_26 = rcx_24 + 1 + rbx_6
                    
                    if (rcx_26 s> r14_3)
                        sub_140594770(&var_1e0)
                        r14_3 = var_1d4_1
                        rdi_4 = var_1e0
                    
                    *(rdi_4 + (sx.q(rsi_3) << 1)) = 0xa
                    int16_t* rbx_8
                    int32_t rsi_4
                    
                    if (rcx_26 s> 1)
                        int32_t r15_3
                        
                        if (r15_2 == 0)
                            r15_3 = 0
                        else
                            r15_3 = r15_2 - 1
                        
                        int32_t rax_24
                        
                        if (rcx_26 == 0)
                            rax_24 = rcx_26 + 1
                        
                        if (rcx_26 != 0 || r15_3 == 0)
                            rax_24 = 0
                        
                        int16_t* var_1a0 = rdi_4
                        int32_t rdx_17 = r15_3 + rcx_26 + rax_24
                        var_1e0 = nullptr
                        rdi_4 = nullptr
                        int32_t var_1d8_2
                        var_1d8_2.q = 0
                        
                        if (rdx_17 s> r14_3)
                            sub_1405947f0(&var_1a0, rdx_17)
                        
                        sub_140a20ba0(&var_1a0, r13_1, r15_3)
                        rbx_8 = var_1a0
                        r15_2 = rcx_26
                        rsi_4 = r14_3
                        var_1a0 = nullptr
                        int32_t var_198_1
                        var_198_1.q = 0
                    else
                        rsi_4 = var_208_1
                        rbx_8 = r13_1
                        r13_1 = nullptr
                        var_1f0 = nullptr
                        var_1e8_1.q = 0
                    
                    int16_t* rcx_30 = var_218
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                    
                    var_218 = rbx_8
                    var_210.d = r15_2
                    var_210:4.d = rsi_4
                    
                    if (rdi_4 != 0)
                        sub_140a74f90(rdi_4)
                    
                    if (r13_1 != 0)
                        sub_140a74f90(r13_1)
                    
                    i_1 = sub_140a23cf0(&var_218, &data_14333984c, 1, 0, 0xffffffff)
                    i_7 = i_1
                while (i_1 s>= 0)
            
            int32_t i_11
            int64_t r8_12
            i_11, r8_12 = sub_140a23cf0(&var_218, &data_142d84ef0, 1, 0, 0xffffffff)
            int32_t i_8 = i_11
            
            if (i_11 s>= 0)
                int32_t i_2
                
                do
                    int32_t rsi_5 = var_210.d
                    int32_t rcx_35 = rsi_5 - 1
                    
                    if (rsi_5 == 0)
                        rcx_35 = 0
                    
                    int16_t* r12_2 = var_218
                    int32_t rdx_19
                    int16_t* r8_13
                    
                    if (rsi_5 == 0)
                        rdx_19 = 0
                        r8_13 = &data_142d40450
                    else
                        rdx_19 = rsi_5 - 1
                        r8_13 = r12_2
                    
                    int32_t rax_25
                    
                    if (rcx_35 - i_8 - 2 s>= 0)
                        rax_25 = rdx_19
                        
                        if (rcx_35 - i_8 - 2 s< rdx_19)
                            rax_25 = rcx_35 - i_8 - 2
                    else
                        rax_25 = 0
                    
                    int16_t* r13_2 = nullptr
                    int32_t r15_4 = 0
                    int16_t* var_1c0 = nullptr
                    int32_t rax_27 = 0
                    int32_t var_1b8_1 = 0
                    int32_t var_208_2 = 0
                    int32_t var_1b4_1 = 0
                    void* rdi_5 = &r8_13[sx.q(rdx_19) - sx.q(rax_25)]
                    
                    if (rdi_5 != 0 && *rdi_5 != 0)
                        int64_t rbx_9 = -1
                        
                        do
                            rbx_9 += 1
                        while (*(rdi_5 + (rbx_9 << 1)) != 0)
                        
                        if (rbx_9.d + 1 s> 0)
                            sub_1405947f0(&var_1c0, rbx_9.d + 1)
                            rax_27 = var_1b4_1
                            r15_4 = var_1b8_1
                            r13_2 = var_1c0
                            var_208_2 = rax_27
                        
                        r15_4 += rbx_9.d + 1
                        
                        if (r15_4 s> rax_27)
                            sub_140594770(&var_1c0)
                            r13_2 = var_1c0
                            var_208_2 = var_1b4_1
                        
                        UnDecorator::getReferenceType(r13_2, rdi_5, (rbx_9.d + 1) * 2)
                        rsi_5 = var_210.d
                        r12_2 = var_218
                    
                    int32_t i_13
                    
                    if (rsi_5 == 0)
                        r12_2 = &data_142d40450
                        i_13 = 0
                    else
                        i_13 = rsi_5 - 1
                    
                    if (i_8 s< 0)
                        i_13 = 0
                    else if (i_8 s< i_13)
                        i_13 = i_8
                    
                    int16_t* var_1d0 = nullptr
                    int32_t rbx_11 = 0
                    int32_t var_1c8_1 = 0
                    int16_t* rdi_6 = nullptr
                    int32_t var_1c4_1 = 0
                    int32_t r14_4 = 0
                    
                    if (r12_2 != 0 && *r12_2 != 0 && i_13 s> 0)
                        if (i_13 + 1 s> 0)
                            sub_1405947f0(&var_1d0, i_13 + 1)
                            r14_4 = var_1c4_1
                            rbx_11 = var_1c8_1
                            rdi_6 = var_1d0
                        
                        rbx_11 += i_13 + 1
                        
                        if (rbx_11 s> r14_4)
                            sub_140594770(&var_1d0)
                            r14_4 = var_1c4_1
                            rdi_6 = var_1d0
                        
                        UnDecorator::getReferenceType(rdi_6, r12_2, i_13 * 2)
                        rdi_6[sx.q(rbx_11) - 1] = 0
                    
                    int32_t rax_30
                    
                    if (r12_2 == 0 || *r12_2 == 0 || i_13 s<= 0 || rbx_11 == 0)
                        rax_30 = 2
                    else
                        rax_30 = 1
                    
                    int32_t rdx_26 = rbx_11 + rax_30
                    int16_t* var_1b0 = rdi_6
                    var_1d0 = nullptr
                    int32_t var_1a4_1 = r14_4
                    var_1c8_1.q = 0
                    
                    if (rdx_26 s> r14_4)
                        sub_1405947f0(&var_1b0, rdx_26)
                        r14_4 = var_1a4_1
                        rdi_6 = var_1b0
                    
                    int32_t rsi_6 = rbx_11 - 1
                    
                    if (rbx_11 s<= 0)
                        rsi_6 = 0
                    
                    int32_t rcx_47
                    rcx_47.b = rbx_11 s<= 0
                    int32_t rcx_49 = rcx_47 + 1 + rbx_11
                    
                    if (rcx_49 s> r14_4)
                        sub_140594770(&var_1b0)
                        r14_4 = var_1a4_1
                        rdi_6 = var_1b0
                    
                    *(rdi_6 + (sx.q(rsi_6) << 1)) = 0xa
                    int16_t* rbx_13
                    int32_t rsi_7
                    
                    if (rcx_49 s> 1)
                        int32_t r15_5
                        
                        if (r15_4 == 0)
                            r15_5 = 0
                        else
                            r15_5 = r15_4 - 1
                        
                        int32_t rax_32
                        
                        if (rcx_49 == 0)
                            rax_32 = rcx_49 + 1
                        
                        if (rcx_49 != 0 || r15_5 == 0)
                            rax_32 = 0
                        
                        int16_t* var_190 = rdi_6
                        int32_t rdx_29 = r15_5 + rax_32 + rcx_49
                        var_1b0 = nullptr
                        rdi_6 = nullptr
                        int32_t var_1a8_2
                        var_1a8_2.q = 0
                        
                        if (rdx_29 s> r14_4)
                            sub_1405947f0(&var_190, rdx_29)
                        
                        sub_140a20ba0(&var_190, r13_2, r15_5)
                        rbx_13 = var_190
                        r15_4 = rcx_49
                        rsi_7 = r14_4
                        var_190 = nullptr
                        int32_t var_188_1
                        var_188_1.q = 0
                    else
                        rsi_7 = var_208_2
                        rbx_13 = r13_2
                        r13_2 = nullptr
                        var_1c0 = nullptr
                        var_1b8_1.q = 0
                    
                    int16_t* rcx_53 = var_218
                    
                    if (rcx_53 != 0)
                        sub_140a74f90(rcx_53)
                    
                    var_218 = rbx_13
                    var_210.d = r15_4
                    var_210:4.d = rsi_7
                    
                    if (rdi_6 != 0)
                        sub_140a74f90(rdi_6)
                    
                    if (r13_2 != 0)
                        sub_140a74f90(r13_2)
                    
                    i_2, r8_12 = sub_140a23cf0(&var_218, &data_142d84ef0, 1, 0, 0xffffffff)
                    i_8 = i_2
                while (i_2 s>= 0)
            
            int32_t rax_33 = var_210.d
            int32_t rax_34
            
            if (rax_33 == 0)
                rax_34 = 0
            else
                rax_34 = rax_33 - 1
            
            uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_34))
            int64_t* var_180 = nullptr
            int32_t rbx_15 = arg3[2] - *arg3
            int32_t i_9 = 0
            zmm7.d = zmm8.d f/ zmm0_1.d
            int64_t rax_35 = sub_1423de100()
            int16_t* r9_1 = &data_142d40450
            
            if (var_210.d != 0)
                r9_1 = var_218
            
            var_128.q = rax_35
            uint64_t* var_220_1 = nullptr
            var_140 = nullptr
            int128_t var_138
            var_138:4.d = 0
            var_138:8.d = 0x3f800000
            var_138:0xc.d = 0x3f800000
            var_128:8.q = 0
            int32_t var_228_3
            var_228_3.q = &var_180
            var_138.d = _mm_cvtepi32_ps(zx.o(rbx_15)).d
            zmm7, zmm8, zmm9 = sub_1424260c0(arg2, &var_140, r8_12, r9_1, var_228_3, var_220_1)
            int64_t* r14_6 = r15_1 + 0x18 + r14_2
            int32_t i_5 = r14_6[1].d
            
            if (i_5 != 0)
                int64_t* rdi_8 = *r14_6 + 8
                int32_t i_3
                
                do
                    int64_t* rbx_16 = *rdi_8
                    
                    if (rbx_16 != 0)
                        rbx_16[1].d -= 1
                        
                        if (rbx_16[1].d == 1)
                            (**rbx_16)(rbx_16)
                            int32_t rax_38 = *(rbx_16 + 0xc)
                            *(rbx_16 + 0xc) -= 1
                            
                            if (rax_38 == 1)
                                (*(*rbx_16 + 8))(rbx_16, 1)
                    
                    rdi_8 = &rdi_8[4]
                    i_3 = i_5
                    i_5 -= 1
                while (i_3 != 1)
            
            r14_6[1].d = 0
            
            if (*(r14_6 + 0xc) != 0)
                sub_1405a51b0(r14_6, 0)
            
            zmm6 = zx.o(0)
            int32_t rsi_8 = 0
            
            if (i_9 s> 0)
                do
                    int64_t rbx_17 = sx.q(r14_6[1].d)
                    int32_t rax_40 = (rbx_17 + 1).d
                    r14_6[1].d = rax_40
                    
                    if (rax_40 s> *(r14_6 + 0xc))
                        sub_1405c4e40(r14_6)
                    
                    int64_t rdi_10 = rbx_17 << 5
                    int64_t* rbx_19 = *r14_6 + rdi_10
                    sub_140a96170(rbx_19)
                    rbx_19[3].d = 0
                    int64_t* rdi_11 = rdi_10 + *r14_6
                    void var_a0
                    int64_t* rax_43 = sub_140aae420(&var_a0, &var_180[sx.q(rsi_8) * 3])
                    int64_t rdx_34 = *rdi_11
                    *rdi_11 = *rax_43
                    *rax_43 = rdx_34
                    int64_t rdx_35 = rdi_11[1]
                    rdi_11[1] = rax_43[1]
                    rax_43[1] = rdx_35
                    rdi_11[2].d = rax_43[2].d
                    int64_t* var_98
                    
                    if (var_98 != 0)
                        var_98[1].d -= 1
                        
                        if (var_98[1].d == 1)
                            (**var_98)(var_98)
                            int32_t rax_47 = *(var_98 + 0xc)
                            *(var_98 + 0xc) -= 1
                            
                            if (rax_47 == 1)
                                (*(*var_98 + 8))(var_98, 1)
                    
                    rdi_11[3].d = zmm6.d f+ zmm9.d
                    int32_t rcx_70 = *(sub_140ac6680(rdi_11) + 8)
                    int32_t rax_50 = rcx_70 - 1
                    
                    if (rcx_70 == 0)
                        rax_50 = 0
                    
                    rsi_8 += 1
                    uint128_t zmm0_3
                    zmm0_3.d = _mm_cvtepi32_ps(zx.o(rax_50)).d f* zmm7.d
                    zmm6.d = zmm6.d f+ zmm0_3.d
                while (rsi_8 s< i_9)
            
            int64_t rbx_21 = sx.q(r14_6[1].d)
            int32_t rax_51 = (rbx_21 + 1).d
            r14_6[1].d = rax_51
            
            if (rax_51 s> *(r14_6 + 0xc))
                sub_1405c4e40(r14_6)
            
            int64_t rdi_13 = rbx_21 << 5
            int64_t* rbx_23 = *r14_6 + rdi_13
            sub_140a96170(rbx_23)
            rbx_23[3].d = 0
            int128_t* rdi_14 = rdi_13 + *r14_6
            TEB* gsbase
            
            if (data_143cd6ff0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143cd6ff0)
                
                if (data_143cd6ff0 == 0xffffffff)
                    sub_140a96080(&data_143cd6fd8)
                    atexit(sub_142cb0d20)
                    _Init_thread_footer(&data_143cd6ff0)
            
            int64_t* rcx_74 = data_143cd6fe0
            int64_t var_170 = data_143cd6fd8
            int64_t* var_168_1 = rcx_74
            
            if (rcx_74 != 0)
                rcx_74[1].d += 1
                rcx_74 = var_168_1
            
            if (&var_170 != rdi_14)
                int128_t zmm1_1 = var_170.o
                int128_t var_88_1 = zmm1_1
                var_170.o = *rdi_14
                rcx_74 = var_168_1
                *rdi_14 = zmm1_1
            
            if (rcx_74 != 0)
                rcx_74[1].d -= 1
                
                if (rcx_74[1].d == 1)
                    (**var_168_1)(var_168_1)
                    int32_t rax_57 = *(var_168_1 + 0xc)
                    *(var_168_1 + 0xc) -= 1
                    
                    if (rax_57 == 1)
                        (*(*var_168_1 + 8))(var_168_1, 1)
            
            zmm8.d = zmm8.d f+ zmm9.d
            rdi_14[1].d = data_143cd6fe8
            *(rdi_14 + 0x18) = zmm8.d
            *(r14_2 + r15_1 + 0x10) = 1
            int32_t i_6 = i_9
            int64_t* rbx_25 = var_180
            
            if (i_6 != 0)
                int32_t i_4
                
                do
                    int64_t rcx_77 = *rbx_25
                    
                    if (rcx_77 != 0)
                        sub_140a74f90(rcx_77)
                    
                    rbx_25 = &rbx_25[3]
                    i_4 = i_6
                    i_6 -= 1
                while (i_4 != 1)
                rbx_25 = var_180
            
            if (rbx_25 != 0)
                sub_140a74f90(rbx_25)
        
        var_f8:8.d &= not.d(var_108:0xc.d)
        sub_14059bdd0(&var_108:8)
        result = var_f8.q
        rcx_3 = var_f8:0xc.d
        
        if (rcx_3 s>= *(result + 0x18))
            break
        
        r10 = var_210:4.d
    
    if (var_d0.b != 0 && var_d0:1.b != 0)
        result = sub_1423ac660(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), 1)
    
    int16_t* rcx_81 = var_218
    
    if (rcx_81 != 0)
        result = sub_140a74f90(rcx_81)

__security_check_cookie(rax_1 ^ &var_248)
return result
