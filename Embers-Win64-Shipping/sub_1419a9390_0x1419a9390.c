// 函数: sub_1419a9390
// 地址: 0x1419a9390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void var_148
sub_1419927c0(&var_148, *arg1, nullptr)
int64_t* i = arg1[0x2c]
int64_t var_60 = arg1[0x4e]
int32_t var_218
int32_t var_214

for (void* r15 = &i[sx.q(arg1[0x2d].d) * 3]; i != r15; i = &i[3])
    if (i[2].b != 0)
        sub_1419a97f0(&var_148, *i, 0)
    
    sub_140865c40(&arg1[4], &var_218, *i)
    int64_t rax_4 = sx.q(var_218)
    void* const rcx_3
    
    if (rax_4.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = arg1[4] + rax_4 * 0x18
    
    int64_t* rax_6 = i[1]
    int64_t* rcx_4 = *(rcx_3 + 8)
    int64_t* rdi_1 = *rax_6
    *rax_6 = rcx_4
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x30))()
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x38))(rdi_1)
    
    void* r8_2 = *i
    int32_t temp2_1 = *(r8_2 + 0x1c)
    *(r8_2 + 0x1c) -= 1
    
    if (temp2_1 == 1)
        *(r8_2 + 0x80) = 0
        *(r8_2 + 0x10) = 0
        sub_140865c40(&arg1[4], &var_214, r8_2)
        int64_t rax_9 = sx.q(var_214)
        void* const r8_3
        
        if (rax_9.d == 0xffffffff)
            r8_3 = nullptr
        else
            r8_3 = arg1[4] + rax_9 * 0x18
        
        int64_t* rcx_7 = *(r8_3 + 8)
        *(r8_3 + 8) = 0
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7)

int64_t* i_1 = arg1[0x2e]

for (void* rsi = &i_1[sx.q(arg1[0x2f].d) * 3]; i_1 != rsi; i_1 = &i_1[3])
    int32_t rcx_9 = 0
    int32_t var_210_1 = 0
    int32_t r8_4 = 0
    int32_t var_20c_1 = 1
    int32_t var_200_1 = 0xffffffff
    void* rdi_3 = *(*i_1 + 0x40) + 0x18
    int64_t var_1fc_1 = 0
    int32_t r11_1 = *(rdi_3 + 0x28)
    void* r9_1 = rdi_3 + 0x10
    void* var_208_1 = r9_1
    
    if (r11_1 != 0)
        void* rax_14 = *(r9_1 + 0x10)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *r9_1
        
        if (rdx_9 != 0)
        label_1419a957d:
            int32_t rax_21 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
            int32_t var_20c_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_2
            
            var_1fc_1.d = r8_4 - rax_22 + 0x1f
            
            if (r8_4 - rax_22 + 0x1f s> r11_1)
                var_1fc_1.d = r11_1
        else
            while (true)
                int64_t rdx_10 = sx.q(rcx_9)
                r8_4 += 0x20
                rcx_9 += 1
                var_1fc_1:4.d = r8_4
                var_210_1 = rcx_9
                
                if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
                int32_t var_200_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1419a957d
            
            var_1fc_1.d = r11_1
    
    int512_t zmm4
    zmm4.o = 0xffffffff
    void* var_158_1 = rdi_3
    int16_t var_1b0_1 = 0
    int128_t var_190_1 = 0xffffffff
    int128_t zmm0
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_1c8_1 = zmm0
    int128_t var_1e8 = rdi_3.o
    int128_t var_1d8_1 = var_210_1.o
    int128_t var_160 = zmm0
    
    if (0 s< r11_1)
        int32_t j = var_1d8_1:0xc.d
        
        do
            sub_1419a9b20(&var_148, *((sx.q(j) << 5) + *var_1e8.q + 0x10), *i_1, i_1[2].b, 0, 
                *(i_1 + 0x11))
            var_1d8_1:8.d &= not.d(var_1e8:0xc.d)
            sub_14059bdd0(&var_1e8:8)
            j = var_1d8_1:0xc.d
        while (j s< *(var_1d8_1.q + 0x18))
        
        if (var_1b0_1.b != 0 && var_1b0_1:1.b != 0)
            sub_14199a150(rdi_3, *(rdi_3 + 8) - *(rdi_3 + 0x34), 1)
    
    sub_140865c40(&arg1[0xe], &var_214, *i_1)
    int64_t rax_29 = sx.q(var_214)
    void* const rcx_17
    
    if (rax_29.d == 0xffffffff)
        rcx_17 = nullptr
    else
        rcx_17 = arg1[0xe] + rax_29 * 0x18
    
    int64_t* rax_31 = i_1[1]
    void* rcx_18 = *(rcx_17 + 8)
    int64_t* rdi_4 = *rax_31
    *rax_31 = rcx_18
    
    if (rcx_18 != 0)
        *(rcx_18 + 0xd0) += 1
    
    if (rdi_4 != 0)
        rdi_4[0x1a].d -= 1
        
        if (rdi_4[0x1a].d == 1)
            sub_1405d16e0(rdi_4, nullptr)
            sub_14081d930(&rdi_4[1], nullptr)
            sub_1405d16e0(&rdi_4[2], nullptr)
            sub_141096260(&rdi_4[3], 0)
            sub_141096040(&rdi_4[0xd], 0)
    
    void* r8_9 = *i_1
    int32_t temp3_1 = *(r8_9 + 0x1c)
    *(r8_9 + 0x1c) -= 1
    
    if (temp3_1 == 1)
        *(r8_9 + 0x40) = 0
        *(r8_9 + 0x10) = 0
        sub_140865c40(&arg1[0xe], &var_218, r8_9)
        int64_t rax_32 = sx.q(var_218)
        void* const rcx_25
        
        if (rax_32.d == 0xffffffff)
            rcx_25 = nullptr
        else
            rcx_25 = arg1[0xe] + rax_32 * 0x18
        
        int64_t* rdi_5 = *(rcx_25 + 8)
        *(rcx_25 + 8) = 0
        
        if (rdi_5 != 0)
            rdi_5[0x1a].d -= 1
            
            if (rdi_5[0x1a].d == 1)
                sub_1405d16e0(rdi_5, nullptr)
                sub_14081d930(&rdi_5[1], nullptr)
                sub_1405d16e0(&rdi_5[2], nullptr)
                sub_141096260(&rdi_5[3], 0)
                sub_141096040(&rdi_5[0xd], 0)

int64_t result = sub_141993dc0(&var_148)
__security_check_cookie(rax_1 ^ &var_248)
return result
