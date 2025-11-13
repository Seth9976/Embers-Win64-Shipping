// 函数: sub_141e59e60
// 地址: 0x141e59e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143f5b298

if (result == 0 || *(result + 0x2a8) == 0)
    return result

void* rax = sub_141e5df80()
int64_t* var_d8 = nullptr
int32_t var_d0_1 = 0
int64_t r8_1 = *rax
void* rsi_1 = rax
(*(r8_1 + 0x2f8))(rax, &var_d8, r8_1)
char arg_8 = 0
sub_141e4e4c0(var_d8, var_d0_1, 0)
int64_t* rax_2 = var_d8
void* rcx_4 = sx.q(var_d0_1) * 0x88 + rax_2
int64_t* arg_10 = rax_2

while (rax_2 != rcx_4)
    int64_t rbx_1 = *rax_2
    int32_t i_1 = 0
    int32_t rax_3 = *(rsi_1 + 0x3e0)
    void* var_f8 = nullptr
    int32_t var_ec_1 = 0
    arg_8.q = rbx_1
    int64_t* rdx_8
    
    if (rax_3 == *(rsi_1 + 0x40c))
    label_141e59fae:
        rdx_8 = nullptr
    else
        int32_t rax_5 = sub_140b5ead0(rbx_1.d) + arg1
        void* r8_2 = rsi_1 + 0x410
        void* rcx_6 = *(r8_2 + 8)
        
        if (rcx_6 != 0)
            r8_2 = rcx_6
        
        int32_t rax_7 = *(r8_2 + (((sx.q(*(rsi_1 + 0x420)) - 1) & sx.q(rax_5)) << 2))
        
        if (rax_7 == 0xffffffff)
        label_141e59fae_1:
            rdx_8 = nullptr
        else
            while (true)
                rdx_8 = (sx.q(rax_7) << 5) + *(rsi_1 + 0x3d8)
                
                if (*rdx_8 == rbx_1)
                    break
                
                rax_7 = rdx_8[3].d
                
                if (rax_7 == 0xffffffff)
                    goto label_141e59fae_2
            
            if (rax_7 == 0xffffffff)
            label_141e59fae_2:
                rdx_8 = nullptr
    
    int32_t var_c4_1 = 1
    void* rax_8 = &rdx_8[1]
    int32_t var_b8_1 = 0xffffffff
    
    if (rdx_8 == 0)
        rax_8 = nullptr
    
    int64_t var_b4_1 = 0
    int32_t rcx_7 = 0
    int32_t r8_4 = 0
    int32_t var_c8_1 = 0
    void* r12_2 = *rax_8 + 0x88
    int32_t r11_1 = *(r12_2 + 0x28)
    void* r14_1 = r12_2 + 0x10
    arg_8.q = r12_2
    void* var_c0_1 = r14_1
    
    if (r11_1 != 0)
        void* rax_9 = *(r14_1 + 0x10)
        void* r9_1 = r14_1
        
        if (rax_9 != 0)
            r9_1 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *r9_1
        
        if (rdx_11 != 0)
        label_141e5a05b:
            int32_t rax_16 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_c4_2 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_2
            
            var_b4_1.d = r8_4 - rax_17 + 0x1f
            
            if (r8_4 - rax_17 + 0x1f s> r11_1)
                var_b4_1.d = r11_1
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_7)
                r8_4 += 0x20
                rcx_7 += 1
                var_b4_1:4.d = r8_4
                var_c8_1 = rcx_7
                
                if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                int32_t var_b8_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141e5a05b
            
            var_b4_1.d = r11_1
    
    int32_t rdx_13 = *(r12_2 + 0x28)
    int128_t var_a0_1 = var_c8_1.o
    int32_t rbx_2 = 0xffffffff << (rdx_13.b & 0x1f)
    int32_t r8_7 = rdx_13 s>> 5
    int32_t r9_3 = rdx_13 & 0xffffffe0
    int128_t var_90_1 = 0xffffffff
    int64_t var_60_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t zmm1_1 = var_a0_1
    var_a0_1:8.d = rbx_2
    var_a0_1:0xc.d = rdx_13
    int128_t var_80 = r12_2.o
    int128_t var_70_1 = zmm1_1
    
    if (rdx_13 != r11_1)
        void* rax_19 = *(r14_1 + 0x10)
        void* r10_1 = r14_1
        
        if (rax_19 != 0)
            r10_1 = rax_19
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_17 = *(r10_1 + (sx.q(r8_7) << 2)) & rbx_2
        
        if (rdx_17 != 0)
        label_141e5a132:
            int32_t rax_26 = neg.d(rdx_17) & rdx_17
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t rax_27
            
            if (rax_26 == 0)
                rax_27 = 0x20
            else
                rax_27 = 0x1f - temp0_4
            
            var_a0_1:0xc.d = r9_3 - rax_27 + 0x1f
            
            if (r9_3 - rax_27 + 0x1f s> r11_1)
                var_a0_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_12 = sx.q(r8_7)
                r9_3 += 0x20
                r8_7 += 1
                
                if (rcx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_17 = *(r10_1 + (rcx_12 << 2) + 4)
                var_a0_1:8.d = 0xffffffff
                
                if (rdx_17 != 0)
                    goto label_141e5a132
            
            var_a0_1:0xc.d = r11_1
    
    void* rdi_1 = var_f8
    
    while (true)
        int64_t rax_29 = sx.q(var_70_1:0xc.d)
        int64_t rcx_14 = var_80.q
        
        if (rax_29.d == (var_a0_1:8.q u>> 0x20).d && var_70_1.q == r14_1 && rcx_14 == r12_2)
            break
        
        int64_t* r14_4 = rax_29 * 0x90 + *rcx_14
        void* rax_30 = r14_4[0xb]
        
        if (rax_30 == 0 || *(rax_30 + 0x12) != 0 || *(rax_30 + 0x11) != 0)
            void* rcx_15 = r14_4[7]
            
            if (rcx_15 != 0 && *(rcx_15 + 0x12) == 0 && *(rcx_15 + 0x11) == 0)
                goto label_141e5a1d6
        else
        label_141e5a1d6:
            void* rax_31
            
            if (rax_30 != 0 && *(rax_30 + 0x12) == 0)
                rax_31 = &r14_4[0xb]
            
            if (rax_30 == 0 || *(rax_30 + 0x12) != 0 || *(rax_30 + 0x11) != 0)
                rax_31 = &r14_4[7]
            
            int32_t* rbx_3 = *(rax_31 + 0x10)
            int64_t rax_32 = sx.q(*(rax_31 + 0x18))
            int32_t rcx_16 = 0
            int64_t var_e8 = 0
            int32_t var_e0_1 = 0
            void* rsi_2 = &rbx_3[rax_32 * 2]
            
            if (rbx_3 != rsi_2)
                while (true)
                    if (rcx_16 s> 1)
                        sub_140a20ba0(&var_e8, &data_142d8adc4, 2)
                    
                    int64_t var_58
                    int64_t* rax_33 = sub_140b63b70(rbx_3, &var_58)
                    int32_t rcx_19 = rax_33[1].d
                    int32_t r8_8 = rcx_19 - 1
                    
                    if (rcx_19 == 0)
                        r8_8 = 0
                    
                    sub_140a20ba0(&var_e8, *rax_33, r8_8)
                    int64_t rcx_21 = var_58
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == rsi_2)
                        break
                    
                    rcx_16 = var_e0_1
                
                rdi_1 = var_f8
            
            void* rax_34 = r14_4[0xb]
            
            if (rax_34 == 0 || *(rax_34 + 0x12) != 0 || *(rax_34 + 0x11) != 0)
                rsi_2.b = 0
            else
                rsi_2.b = 1
            
            int64_t i_2 = sx.q(i_1)
            i_1 = (i_2 + 1).d
            
            if (i_1 s> var_ec_1)
                sub_1409da320(&var_f8)
                rdi_1 = var_f8
            
            int64_t rcx_24 = i_2 << 5
            void* rbx_4 = rcx_24 + rdi_1
            *(rcx_24 + rdi_1) = *r14_4
            *(rcx_24 + rdi_1 + 8) = rsi_2.b
            *(rbx_4 + 0x10) = 0
            int64_t r14_5 = var_e8
            *(rbx_4 + 0x18) = var_e0_1
            
            if (var_e0_1 != 0)
                sub_1405a4c70(rbx_4 + 0x10, var_e0_1, 0)
                memcpy(*(rbx_4 + 0x10), r14_5, var_e0_1 * 2)
            else
                *(rbx_4 + 0x1c) = 0
            
            int64_t rcx_27 = var_e8
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
        
        var_70_1:8.d &= not.d(var_80:0xc.d)
        sub_14059bdd0(&var_80:8)
        r14_1 = var_c0_1
        r12_2 = arg_8.q
    
    char rdi_2 = arg_8
    void* r14_6 = var_f8
    bool cond:4_1 = i_1 == 0
    
    if (i_1 s> 0)
        arg_8 = 0
        sub_141e4e1d0(r14_6, i_1, rdi_2)
        cond:4_1 = i_1 == 0
    
    if (not(cond:4_1))
        int64_t* rbx_5 = r14_6 + 0x10
        int32_t i
        
        do
            int64_t rcx_30 = *rbx_5
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            rbx_5 = &rbx_5[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (r14_6 != 0)
        sub_140a74f90(r14_6)
    
    rsi_1 = rax
    rax_2 = &arg_10[0x11]
    arg_10 = rax_2

return sub_141e50530(&var_d8)
