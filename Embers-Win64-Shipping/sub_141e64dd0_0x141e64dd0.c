// 函数: sub_141e64dd0
// 地址: 0x141e64dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rsi = arg1 + 0x380
int64_t* var_f8 = rsi
sub_1408d84f0(rsi)
sub_140a4f7c0(arg1 + 0x330)
void* var_e8 = arg1 + 0x2e0
sub_1408d84f0(arg1 + 0x2e0)
void* r14 = *(arg1 + 0x430)

if (r14 == 0)
    int64_t* rax_3 = sub_14246dc80()
    r14 = rax_3[0x23]
    
    if (r14 == 0)
        int64_t rdx_1 = *rax_3
        (*(rdx_1 + 0x390))(rax_3, rdx_1)
        r14 = rax_3[0x23]
    
    *(arg1 + 0x430) = r14

void* rdi_2 = *(r14 + 0x90)
void* r12_2 = (sx.q(*(r14 + 0x98)) << 5) + rdi_2
void* var_f0
int32_t var_e0
void var_c0

if (rdi_2 != r12_2)
    void* rsi_1 = var_e8
    
    do
        int16_t* rdx_2
        
        if (*(rdi_2 + 0x18) == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *(rdi_2 + 0x10)
        
        int16_t* r15_1
        
        if (*(rdi_2 + 8) == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = *rdi_2
        
        int64_t* rax_4 = sub_140b58260(&var_f0, rdx_2, 1)
        var_e0.q = sub_140b58260(&var_e8, r15_1, 1)
        int64_t* var_d8_1 = rax_4
        sub_1406c86e0(rsi_1, &var_c0, &var_e0, nullptr)
        rdi_2 += 0x20
    while (rdi_2 != r12_2)
    
    rsi = var_f8

void* i = *(r14 + 0x80)

for (void* rdi_5 = (sx.q(*(r14 + 0x88)) << 5) + i; i != rdi_5; i += 0x20)
    sub_1406253f0(arg1 + 0x330, i, i + 0x10)

void* i_1 = *(r14 + 0xa0)

for (void* r15_4 = (sx.q(*(r14 + 0xa8)) << 5) + i_1; i_1 != r15_4; i_1 += 0x20)
    int16_t* rdx_6
    
    if (*(i_1 + 0x18) == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = *(i_1 + 0x10)
    
    int16_t* r14_1
    
    if (*(i_1 + 8) == 0)
        r14_1 = &data_142d40450
    else
        r14_1 = *i_1
    
    int64_t* rax_6 = sub_140b58260(&var_f0, rdx_6, 1)
    var_e0.q = sub_140b58260(&var_e8, r14_1, 1)
    int64_t* var_d8_2 = rax_6
    sub_1406c86e0(rsi, &var_c0, &var_e0, nullptr)

int32_t rbx_3 = rsi[5].d
int32_t var_dc = 1
void* var_d8_3 = &rsi[2]
int32_t rcx_11 = 0
var_e0 = 0
int32_t r8_4 = 0
int32_t var_d0 = 0xffffffff
int64_t var_cc = 0

if (rbx_3 != 0)
    void* rax_8 = rsi[4]
    void* r9_1 = &rsi[2]
    
    if (rax_8 != 0)
        r9_1 = rax_8
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_3 - 1)
    int32_t rdx_11 = *r9_1
    
    if (rdx_11 != 0)
    label_141e65059:
        int32_t rax_15 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_dc_1 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        var_cc.d = r8_4 - rax_16 + 0x1f
        
        if (r8_4 - rax_16 + 0x1f s> rbx_3)
            var_cc.d = rbx_3
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_11)
            r8_4 += 0x20
            rcx_11 += 1
            var_cc:4.d = r8_4
            var_e0 = rcx_11
            
            if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
            var_d0 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141e65059
        
        var_cc.d = rbx_3

int32_t rdx_13 = rsi[5].d
double zmm2[0x2] = var_d0.o
int64_t* var_88 = rsi
int32_t r14_2 = 0xffffffff << (rdx_13.b & 0x1f)
int128_t var_80 = var_e0.o
int32_t r8_7 = rdx_13 s>> 5
int32_t r9_3 = rdx_13 & 0xffffffe0
int64_t var_90 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_d0_1 = r14_2
var_cc.d = rdx_13
int128_t zmm1 = var_80
int128_t var_b0 = var_88.o
int128_t var_a0 = zmm1

if (rdx_13 != rbx_3)
    void* rax_18 = rsi[4]
    void* r10_1 = &rsi[2]
    
    if (rax_18 != 0)
        r10_1 = rax_18
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_3 - 1)
    int32_t rdx_17 = *(r10_1 + (sx.q(r8_7) << 2)) & r14_2
    
    if (rdx_17 != 0)
    label_141e65122:
        int32_t rax_25 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t r11_1
        
        if (rax_25 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_cc.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_3)
            var_cc.d = rbx_3
    else
        while (true)
            int64_t rcx_16 = sx.q(r8_7)
            r9_3 += 0x20
            r8_7 += 1
            
            if (rcx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r10_1 + (rcx_16 << 2) + 4)
            var_d0_1 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_141e65122
        
        var_cc.d = rbx_3

while (true)
    int64_t result = sx.q(var_a0:0xc.d)
    int64_t* rdx_18 = var_b0.q
    
    if (result.d == (var_d0_1.q u>> 0x20).d && var_a0.q == &rsi[2] && rdx_18 == rsi)
        __security_check_cookie(rax_1 ^ &var_118)
        return result
    
    __builtin_memset(&var_88, 0, 0x2c)
    int64_t* rdx_19 = *rdx_18 + result * 0x18
    int32_t var_5c_1 = 0x80
    var_e8 = *rdx_19
    var_f8 = rdx_19[1]
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    void* var_48_1 = nullptr
    int32_t var_40_1 = 0
    sub_1407d1800(&var_88, &var_c0, &var_e8, nullptr)
    void var_bc
    int32_t* rdx_21 = &var_bc
    
    while (true)
    label_141e651de:
        sub_1407d1800(&var_88, rdx_21, &var_f8, nullptr)
        int64_t* rbx_4 = var_f8
        void* const rcx_24
        
        if (rsi[1].d == *(rsi + 0x34))
        label_141e65250:
            rcx_24 = nullptr
        else
            var_f0 = rbx_4
            int32_t rax_32 = sub_140b5ead0(rbx_4.d) + var_f0:4.d
            void* r8_10 = &rsi[7]
            void* rcx_22 = *(r8_10 + 8)
            
            if (rcx_22 != 0)
                r8_10 = rcx_22
            
            int32_t rax_34 = *(r8_10 + (((sx.q(rsi[9].d) - 1) & sx.q(rax_32)) << 2))
            
            if (rax_34 == 0xffffffff)
            label_141e65250_1:
                rcx_24 = nullptr
            else
                int64_t r8_11 = *rsi
                
                while (true)
                    int64_t rdx_25 = sx.q(rax_34) * 3
                    rcx_24 = r8_11 + (rdx_25 << 3)
                    
                    if (*(r8_11 + (rdx_25 << 3)) == rbx_4)
                        break
                    
                    rax_34 = *(rcx_24 + 0x10)
                    
                    if (rax_34 == 0xffffffff)
                        goto label_141e65250_2
                
                if (rax_34 == 0xffffffff)
                label_141e65250_2:
                    rcx_24 = nullptr
        
        int64_t** rbx_5 = rcx_24 + 8
        
        if (rcx_24 == 0)
            rbx_5 = nullptr
        
        if (rbx_5 == 0)
            break
        
        int64_t* rbx_6 = *rbx_5
        int32_t rax_35 = var_80.d
        var_f8 = rbx_6
        void var_b8
        
        if (rax_35 != var_54_1)
            var_f0 = rbx_6
            void var_50
            void* rcx_28 = &var_50
            int64_t rdx_27 = sx.q(var_40_1 - 1) & sx.q(sub_140b5ead0(rbx_6.d) + var_f0:4.d)
            
            if (var_48_1 != 0)
                rcx_28 = var_48_1
            
            int32_t rax_40 = *(rcx_28 + (rdx_27 << 2))
            
            if (rax_40 != 0xffffffff)
                int64_t* rdx_28 = var_88
                
                while (true)
                    int64_t rcx_30 = sx.q(rax_40) * 2
                    
                    if (rdx_28[rcx_30] == rbx_6)
                        break
                    
                    rax_40 = rdx_28[rcx_30 + 1].d
                    
                    if (rax_40 == 0xffffffff)
                        rdx_21 = &var_b8
                        goto label_141e651de
                
                if (rax_40 != 0xffffffff)
                    break
        
        rdx_21 = &var_b8
    
    void* rbx_7 = var_e8
    void* const rcx_34
    
    if (rsi[1].d == *(rsi + 0x34))
    label_141e65340:
        rcx_34 = nullptr
    else
        var_f0 = rbx_7
        int32_t rax_43 = sub_140b5ead0(rbx_7.d) + var_f0:4.d
        void* r8_12 = &rsi[7]
        void* rcx_32 = *(r8_12 + 8)
        
        if (rcx_32 != 0)
            r8_12 = rcx_32
        
        int32_t rax_45 = *(r8_12 + (((sx.q(rsi[9].d) - 1) & sx.q(rax_43)) << 2))
        
        if (rax_45 == 0xffffffff)
        label_141e65340_1:
            rcx_34 = nullptr
        else
            int64_t r8_13 = *rsi
            
            while (true)
                int64_t rdx_32 = sx.q(rax_45) * 3
                rcx_34 = r8_13 + (rdx_32 << 3)
                
                if (*(r8_13 + (rdx_32 << 3)) == rbx_7)
                    break
                
                rax_45 = *(rcx_34 + 0x10)
                
                if (rax_45 == 0xffffffff)
                    goto label_141e65340_2
            
            if (rax_45 == 0xffffffff)
            label_141e65340_2:
                rcx_34 = nullptr
    
    *(rcx_34 + 8) = var_f8
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    var_80.d = 0
    
    if (var_80:4.d != 0)
        sub_1405a5410(&var_88, 0)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    sub_14059a8e0(&var_80:8, 0)
    double rcx_38 = zmm2[1]
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    int64_t* rcx_39 = var_88
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    var_a0:8.d &= not.d(var_b0:0xc.d)
    sub_14059bdd0(&var_b0:8)
