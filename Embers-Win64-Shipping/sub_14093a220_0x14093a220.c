// 函数: sub_14093a220
// 地址: 0x14093a220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
int32_t var_f4 = 1
int32_t var_f8 = 0
int32_t r11 = *(arg1 + 0xe0)
void* r9 = arg1 + 0xc8
void* var_f0 = r9
int32_t rcx = 0
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int32_t r8 = 0
int32_t var_e0 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14093a2ce:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_f4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_e4 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_e4 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_e0 = rcx
            var_f8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14093a2ce
        
        var_e4 = r11

double zmm4[0x2] = var_e8.o
uint64_t* var_80 = arg1 + 0xb8
int16_t var_c0 = 0
double zmm3[0x2] = var_f8.o
double rax_11 = zmm3[0]
var_e8.o = zmm3
var_f8.o = (arg1 + 0xb8).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_90[0x2] = zmm4
double var_d8[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(rax_11 i+ 0x18))
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* rcx_5 = *((sx.q(i) << 5) + *var_f8.q + 8)
        (*(*rcx_5 + 0x148))(rcx_5)
        var_e0 &= not.d(var_f0:4.d)
        sub_14059bdd0(&var_f0)
        i = i_2
    while (i s< *(var_e8.q + 0x18))
    
    if (var_c0.b != 0 && var_c0:1.b != 0)
        sub_1405b67e0(arg1 + 0xb8, *(arg1 + 0xc0) - *(arg1 + 0xec), 1)

sub_1405b89d0(arg1 + 0xb8, 0)
int32_t var_f4_2 = 1
int32_t r11_1 = *(arg1 + 0x90)
void* r9_1 = arg1 + 0x78
var_f0 = r9_1
int32_t rcx_9 = 0
var_f8 = 0
int32_t r8_2 = 0
int32_t var_e8_1 = 0xffffffff
var_e4.q = 0

if (r11_1 != 0)
    void* rax_17 = *(r9_1 + 0x10)
    
    if (rax_17 != 0)
        r9_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11_1 - 1)
    int32_t rdx_12 = *r9_1
    int32_t var_e4_2
    
    if (rdx_12 != 0)
    label_14093a44b:
        int32_t rax_24 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t var_f4_3 = rax_24
        int32_t rbx_1
        
        if (rax_24 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        int32_t var_e4_1 = r8_2 - rbx_1 + 0x1f
        
        if (r8_2 - rbx_1 + 0x1f s> r11_1)
            var_e4_2 = r11_1
    else
        while (true)
            int64_t rdx_13 = sx.q(rcx_9)
            r8_2 += 0x20
            rcx_9 += 1
            int32_t var_e0_1 = r8_2
            var_f8 = rcx_9
            
            if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
            var_e8_1 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_14093a44b
        
        var_e4_2 = r11_1

double zmm4_1[0x2] = var_e8_1.o
int64_t* var_80_1 = arg1 + 0x68
int16_t var_40 = 0
zmm3 = var_f8.o
double result = zmm3[0]
int128_t var_78 = (arg1 + 0x68).o
double rcx_11 = zmm4_1[0]
zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
double var_58[0x2] = zmm4_1

if ((rcx_11 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i_1 = zmm3[1]:4.d
    
    do
        int64_t* rax_28 = sub_140b63b70(*var_78.q + sx.q(i_1) * 0x18, &var_f8)
        int64_t var_118 = 0
        int32_t var_110_1 = 0
        sub_1405947f0(&var_118, 0x10)
        int32_t rcx_16 = var_110_1 + 0x10
        
        if (rcx_16 s> 0)
            sub_140594770(&var_118)
        
        UnDecorator::getReferenceType(var_118, u"OnlineSubsystem", 0x20)
        int64_t rbx_3
        
        if (sub_140a32a50(rax_28, &var_118, 0) != 0)
            int16_t* rdx_25
            
            if (rax_28[1].d == 0)
                rdx_25 = &data_142d40450
            else
                rdx_25 = *rax_28
            
            void arg_18
            rbx_3 = *sub_140b58260(&arg_18, rdx_25, 1)
        else
            int32_t arg_8
            sub_1408f1b50(arg1 + 0x158, &arg_8, rax_28)
            int64_t rax_30 = sx.q(arg_8)
            void* const rcx_23
            
            if (rax_30.d == 0xffffffff)
                rcx_23 = nullptr
            else
                rcx_23 = (rax_30 << 5) + *(arg1 + 0x158)
            
            int64_t* rbx_2 = rcx_23 + 0x10
            
            if (rcx_23 == 0)
                rbx_2 = nullptr
            
            if (rbx_2 == 0)
                int32_t rbx_4 = rax_28[1].d
                int16_t* rdi_3
                
                if (rcx_16 s> 1)
                    int32_t r14_1 = rbx_4 - 1
                    
                    if (rbx_4 == 0)
                        r14_1 = 0
                    
                    int32_t rax_31
                    
                    if (rcx_16 == 0)
                        rax_31 = rcx_16 + 1
                    
                    if (rcx_16 != 0 || r14_1 == 0)
                        rax_31 = 0
                    
                    int64_t rbx_5 = var_118
                    int32_t rcx_26 = r14_1 + rax_31
                    int16_t* var_108 = nullptr
                    int32_t var_fc
                    
                    if (rcx_16 != 0 || rcx_26 != 0)
                        sub_1405a4c70(&var_108, rcx_26 + rcx_16, 0)
                        memcpy(var_108, rbx_5, rcx_16 * 2)
                    else
                        var_fc = 0
                    
                    sub_140a20ba0(&var_108, *rax_28, r14_1)
                    rdi_3 = var_108
                    rbx_4 = rcx_16
                    int32_t var_ac_2 = var_fc
                    int32_t var_100_1
                    var_100_1.q = 0
                    var_108 = nullptr
                else
                    int64_t rsi_2 = *rax_28
                    rdi_3 = nullptr
                    uint64_t var_b8 = 0
                    
                    if (rbx_4 != 0)
                        sub_1405a4c70(&var_b8, rbx_4, 0)
                        rdi_3 = var_b8
                        memcpy(rdi_3, rsi_2, rbx_4 * 2)
                    else
                        int32_t var_ac_1 = 0
                
                int16_t* const rdx_24 = &data_142d40450
                
                if (rbx_4 != 0)
                    rdx_24 = rdi_3
                
                void arg_10
                rbx_3 = *sub_140b58260(&arg_10, rdx_24, 1)
                
                if (rdi_3 != 0)
                    sub_140a74f90(rdi_3)
            else
                rbx_3 = *rbx_2
        
        int64_t rcx_33 = var_118
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        int64_t rcx_34 = var_f8.q
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        sub_140b4a6b0(&data_143de7d78, rbx_3, 1)
        zmm3[1].d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
        result = zmm3[0]
        i_1 = zmm3[1]:4.d
    while (i_1 s< *(result i+ 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1405b6730(arg1 + 0x68, *(arg1 + 0x70) - *(arg1 + 0x9c), 1)

return result
