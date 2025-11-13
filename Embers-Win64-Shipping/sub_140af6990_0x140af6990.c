// 函数: sub_140af6990
// 地址: 0x140af6990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x84)
int32_t result
int64_t* rdx_5

if (*(arg1 + 0x58) == *(arg1 + 0x84))
label_140af6a1e_1:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x88
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = *(r8 + (((sx.q(*(arg1 + 0x98)) - 1) & sx.q(rax_2)) << 2))
    
    if (result == 0xffffffff)
    label_140af6a1e_2:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(result) << 5) + *(arg1 + 0x50)
            
            if (*rdx_5 == arg2)
                break
            
            result = rdx_5[3].d
            
            if (result == 0xffffffff)
                goto label_140af6a1e
        
        if (result == 0xffffffff)
        label_140af6a1e:
            rdx_5 = nullptr

void* rsi = &rdx_5[1]

if (rdx_5 == 0)
    rsi = nullptr

if (rsi == 0)
    result.b = 0
    return result

int16_t* var_108 = nullptr
int64_t var_100 = 0
sub_1405947f0(&var_108, 2)
int32_t r15 = var_100:4.d
int32_t r12 = var_100.d + 2
var_100.d = r12

if (r12 s> r15)
    sub_140594770(&var_108)
    r15 = var_100:4.d
    r12 = var_100.d

int16_t* r14 = var_108
int16_t var_118 = 0x3f
sub_1405a7220(r14, 2, U"=", 2, 0x3f)
int32_t rdi = *(rsi + 8)
int16_t* var_d8

if (rdi s> 1)
    int32_t r15_1 = r12 - 1
    
    if (r12 == 0)
        r15_1 = 0
    
    int32_t rax_4
    
    if (rdi == 0)
        rax_4 = rdi + 1
    
    if (rdi != 0 || r15_1 == 0)
        rax_4 = 0
    
    int64_t rsi_1 = *rsi
    int32_t rcx_5 = rax_4 + r15_1
    var_108 = nullptr
    var_100.d = rdi
    
    if (rdi != 0 || rcx_5 != 0)
        sub_1405a4c70(&var_108, rdi + rcx_5, 0)
        memcpy(var_108, rsi_1, rdi * 2)
    else
        var_100:4.d = 0
    
    sub_140a20ba0(&var_108, r14, r15_1)
    r12 = var_100.d
    var_d8 = var_108
    int32_t var_cc_1 = var_100:4.d
    int32_t var_d0_1 = r12
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    r14 = var_108
else
    var_d8 = r14
    int32_t var_d0 = r12
    int32_t var_cc = r15

uint64_t var_c8 = 0
int32_t var_c0 = 0
sub_140aefa10(arg3, &var_d8, &var_c8)
void* rbx

if (var_c0 == 0 || var_c0 - 1 s<= 0)
    rbx.b = 0
else
    void* r11_1 = arg1 + 0x10
    __builtin_memset(&var_108, 0, 0x14)
    int32_t rcx_11 = 0
    int32_t rsi_2 = *(r11_1 + 0x18)
    int16_t* r9_1 = nullptr
    int32_t r10_1 = 0
    int32_t var_f4_1 = 1
    int32_t r8_6 = 0
    void* var_f0_1 = r11_1
    int32_t var_e8 = 0xffffffff
    int64_t var_e4_1 = 0
    int32_t var_f8
    
    if (rsi_2 != 0)
        void* rax_9 = *(r11_1 + 0x10)
        
        if (rax_9 != 0)
            r11_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_2 - 1)
        int32_t rdx_13 = *r11_1
        
        if (rdx_13 != 0)
        label_140af6c3b:
            int32_t rax_16 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_f4_2 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_1
            
            var_e4_1.d = r8_6 - rax_17 + 0x1f
            
            if (r8_6 - rax_17 + 0x1f s> rsi_2)
                var_e4_1.d = rsi_2
        else
            while (true)
                int64_t rdx_14 = sx.q(rcx_11)
                r8_6 += 0x20
                rcx_11 += 1
                var_e4_1:4.d = r8_6
                var_f8 = rcx_11
                
                if (rdx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r11_1 + (rdx_14 << 2) + 4)
                var_e8 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_140af6c3b
            
            var_e4_1.d = rsi_2
    
    double zmm4_1[0x2] = var_e8.o
    void* var_50_1 = arg1
    int16_t var_80_1 = 0
    double zmm3[0x2] = var_f8.o
    double rax_19 = zmm3[0]
    int128_t var_b8 = arg1.o
    double rcx_13 = zmm4_1[0]
    zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
    double var_98_1[0x2] = zmm4_1
    
    if ((rcx_13 u>> 0x20).d s>= *(rax_19 i+ 0x18))
        rbx.b = 0
    else
        int32_t r13_1 = zmm3[1]:4.d
        int16_t* const string = &data_142d40450
        
        while (true)
            int64_t* rdi_4 = var_b8.q
            int64_t* rdx_17 = sx.q(r13_1) * 0x30 + *rdi_4
            int64_t var_100_1
            
            if (*rdx_17 == arg2)
                int32_t rax_21 = rdx_17[4].d
                void* const rsi_3 = 0x18
                int32_t rcx_15 = rax_21 - 1
                
                if (rax_21 == 0)
                    rcx_15 = 0
                
                var_100_1.d = 0
                
                if (rcx_15 s<= 0)
                    rsi_3 = 8
                
                void* rsi_4 = rsi_3 + rdx_17
                
                if (r10_1 s< 0 && r10_1 != 0)
                    sub_1405947f0(&var_108, 0)
                    r9_1 = var_108
                
                if (r9_1 != 0)
                    *r9_1 = 0
                
                var_118.d = 0xffffffff
                int16_t* rdx_18 = &data_142d40450
                
                if (r12 != 0)
                    rdx_18 = r14
                
                int32_t rax_22 = sub_140a23cf0(rsi_4, rdx_18, 1, 0, 0xffffffff)
                
                if (rax_22 s>= 0)
                    int32_t rcx_18
                    
                    if (r12 == 0)
                        rcx_18 = 0
                    else
                        rcx_18 = r12 - 1
                    
                    int64_t rax_24 = *rsi_4
                    int64_t r8_8 = sx.q(rax_22 + rcx_18) * 2
                    int16_t r14_1 = *(r8_8 + rax_24)
                    int16_t* rcx_20 = r8_8 + rax_24
                    int16_t* rdx_19 = &rcx_20[1]
                    
                    if (r14_1 != 0x22)
                        rdx_19 = rcx_20
                    
                    int16_t* rdi_1 = rdx_19
                    wint_t _C = *rdx_19
                    
                    while (_C != 0)
                        if (r14_1 != 0x22)
                            if (iswalnum(_C) == 0 && *rdi_1 != 0x5f)
                                break
                        else if (_C == r14_1)
                            break
                        
                        _C = rdi_1[1]
                        rdi_1 = &rdi_1[1]
                    
                    int16_t* const rax_26
                    
                    if (*(rsi_4 + 8) == 0)
                        rax_26 = &data_142d40450
                    else
                        rax_26 = *rsi_4
                    
                    sub_140a20ba0(&var_108, &rax_26[sx.q(rax_22 + rcx_18)], 
                        ((rdi_1 - rdx_19) s>> 1).d)
                    rdi_4 = var_b8.q
                    r14 = var_d8
                
                int16_t* rdx_21 = &data_142d40450
                int16_t* rcx_23 = &data_142d40450
                
                if (var_c0 != 0)
                    rdx_21 = var_c8
                
                if (var_100_1.d != 0)
                    rcx_23 = var_108
                
                if (sub_140a54510(rcx_23, rdx_21) == 0)
                    sub_140596d10(&var_f8, arg3)
                    var_e8.q = 0
                    
                    if (var_f0_1.d != 0)
                        string = var_f8.q
                    
                    var_e4_1 = 0
                    wchar16* i_2 = wcschr(string, 0x25)
                    wchar16* i_1 = i_2
                    
                    if (i_2 != 0)
                        wchar16* i
                        
                        do
                            int64_t* rax_31 = sub_140af9950(i_1)
                            
                            if (rax_31 != 0)
                                sub_140aef750(&var_f8, &var_e8)
                                break
                            
                            i = wcschr(&i_1[1], (rax_31 + 0x25).w)
                            i_1 = i
                        while (i != 0)
                    
                    int64_t* rbx_3 = *rdi_4 + 8 + sx.q(r13_1) * 0x30
                    
                    if (rbx_3 != &var_f8)
                        int64_t rcx_32 = *rbx_3
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        *rbx_3 = var_f8.q
                        var_f8.q = 0
                        rbx_3[1].d = var_f0_1.d
                        *(rbx_3 + 0xc) = var_f0_1:4.d
                        int64_t var_f0_2 = 0
                    
                    if (&rbx_3[2] != &var_e8)
                        int64_t rcx_33 = rbx_3[2]
                        
                        if (rcx_33 != 0)
                            sub_140a74f90(rcx_33)
                        
                        rbx_3[2] = var_e8.q
                        var_e8.q = 0
                        rbx_3[3].d = var_e4_1:4.d
                        int32_t var_dc
                        *(rbx_3 + 0x1c) = var_dc
                        var_e4_1 = 0
                    
                    int64_t rcx_34 = var_e8.q
                    
                    if (rcx_34 != 0)
                        sub_140a74f90(rcx_34)
                    
                    int64_t rcx_35 = var_f8.q
                    
                    if (rcx_35 != 0)
                        sub_140a74f90(rcx_35)
                    
                    rbx.b = 1
                    break
            
            zmm3[1].d &= not.d(var_b8:0xc.d)
            sub_14059bdd0(&var_b8:8)
            r13_1 = zmm3[1]:4.d
            
            if (r13_1 s>= *(zmm3[0] i+ 0x18))
                rbx.b = 0
                break
            
            r10_1 = var_100_1:4.d
            r9_1 = var_108
        
        if (var_80_1.b != 0 && var_80_1:1.b != 0)
            sub_140a6d3f0(arg1, *(arg1 + 8) - *(arg1 + 0x34), 1)
        
        int16_t* rcx_37 = var_108
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)

uint64_t rcx_38 = var_c8

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

if (r14 != 0)
    sub_140a74f90(r14)

return zx.q(rbx.b)
