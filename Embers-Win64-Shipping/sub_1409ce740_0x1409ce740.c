// 函数: sub_1409ce740
// 地址: 0x1409ce740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2
void* rsi = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
void* const var_190 = rsi
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cef110 s> *(rbx + 0x14))
    _Init_thread_header(&data_143cef110)
    
    if (data_143cef110 == 0xffffffff)
        atexit(sub_142cb9d60)
        _Init_thread_footer(&data_143cef110)

int32_t rax_4 = data_143cef10c
data_143cef108 = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1409dab70(&data_143cef100, 0)

if (data_143cef128 s> *(rbx + 0x14))
    _Init_thread_header(&data_143cef128)
    
    if (data_143cef128 == 0xffffffff)
        atexit(sub_142cb8860)
        _Init_thread_footer(&data_143cef128)

uint32_t rax_6 = data_143cef124
data_143cef120 = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(&data_143cef118, 0)

void* rdi = *(r15 + 0x28)
rax_6.b = 0
uint32_t var_198 = rax_6
void* var_150
sub_14099b070(rdi + 0x308, &var_150, data_143f36150)
void* var_148
sub_14099b130(rdi + 0x308, &var_148, data_143f36158)
void* var_140
sub_14099b130(rdi + 0x308, &var_140, data_143f36160)
int32_t rdx_4 = *(rdi + 0x120) - *(rdi + 0x14c)
*(rsi + 0x30) = 0

if (*(rsi + 0x34) != rdx_4)
    sub_1409dabf0(rsi + 0x10, rdx_4)

double zmm6[0x2]
double var_58[0x2] = zmm6
double zmm7[0x2]
double var_68[0x2] = zmm7
double zmm8[0x2]
double var_78[0x2] = zmm8
double zmm9[0x2]
double var_88[0x2] = zmm9
int32_t r8_8
int32_t var_1c8
void* var_1c0
int64_t var_180
void* var_178
int64_t var_168
int32_t var_108
double var_c8[0x2]
void* arg_18
uint64_t arg_20
double zmm2[0x2]
double zmm4[0x2]
uint128_t zmm5

if (*(r15 + 0x520) s<= 0)
    int64_t r10_3 = sx.q(*(rdi + 0x40))
    int32_t rcx_24 = data_143cef108
    
    if (r10_3.d s> rcx_24)
        bool cond:5_1 = r10_3.d s<= data_143cef10c
        data_143cef108 = r10_3.d
        
        if (not(cond:5_1))
            sub_1409da3a0(&data_143cef100)
    else if (r10_3.d s< rcx_24)
        int32_t rbx_5 = rcx_24 - r10_3.d
        
        if (rcx_24 != r10_3.d)
            int32_t rax_64 = rcx_24 - rbx_5
            
            if (rax_64 != r10_3.d)
                memmove(r10_3 * 0x74 + data_143cef100, 
                    sx.q(rbx_5 + r10_3.d) * 0x74 + data_143cef100, (rax_64 - r10_3.d) * 0x74)
                rcx_24 = data_143cef108
            
            data_143cef108 = rcx_24 - rbx_5
            sub_1409da7f0(&data_143cef100)
    
    sub_14090aa40(rdi + 0x150, &arg_18, data_143f35cc8)
    sub_14090aa40(rdi + 0x1a8, &arg_20, data_143f360f8)
    sub_14090aa40(rdi + 0x1a8, &var_168, data_143f36100)
    void* var_138
    sub_14099aef0(rdi + 0x1a8, &var_138, data_143f36108)
    sub_14099afb0(rdi + 0x1a8, &var_180, data_143f36110)
    sub_14090a980(rdi + 0x1a8, &var_178, data_143f360f0)
    void* r11_2 = rdi + 0x38
    int32_t var_1c4_2 = 1
    int32_t rbx_6 = *(r11_2 + 0x28)
    void* r9_6 = r11_2 + 0x10
    void* var_1a0 = r11_2
    int32_t rcx_35 = 0
    var_1c8 = 0
    var_1c0 = r9_6
    int32_t r8_18 = 0
    int32_t var_1b8_1 = 0xffffffff
    int64_t var_1b4_1 = 0
    
    if (rbx_6 != 0)
        void* rax_68 = *(r9_6 + 0x10)
        
        if (rax_68 != 0)
            r9_6 = rax_68
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rbx_6 - 1)
        int32_t rdx_37 = *r9_6
        
        if (rdx_37 != 0)
        label_1409cf068:
            int32_t rax_75 = neg.d(rdx_37) & rdx_37
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_75)
            int32_t var_1c4_3 = rax_75
            int32_t rax_76
            
            if (rax_75 == 0)
                rax_76 = 0x20
            else
                rax_76 = 0x1f - temp0_5
            
            var_1b4_1.d = r8_18 - rax_76 + 0x1f
            
            if (r8_18 - rax_76 + 0x1f s> rbx_6)
                var_1b4_1.d = rbx_6
        else
            while (true)
                int64_t rdx_38 = sx.q(rcx_35)
                r8_18 += 0x20
                rcx_35 += 1
                var_1b4_1:4.d = r8_18
                var_1c8 = rcx_35
                
                if (rdx_38.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_37 = *(r9_6 + (rdx_38 << 2) + 4)
                var_1b8_1 = 0xffffffff
                
                if (rdx_37 != 0)
                    goto label_1409cf068
            
            var_1b4_1.d = rbx_6
    
    zmm2 = var_1b8_1.o
    int32_t rdx_39 = *(r11_2 + 0x28)
    void* r15_6 = arg_18
    void* r13_5 = var_138
    int64_t r14_6 = var_168
    int64_t rdi_4 = var_180
    void* rbx_7 = var_178
    zmm9 = 0x322bcc77
    uint64_t rsi_5 = arg_20
    var_c8 = var_1c8.o
    var_1b4_1.d = rdx_39
    double var_b8_1 = zmm2[0]
    uint64_t rax_79 = (0xffffffff << (rdx_39.b & 0x1f)).q u>> 0x20
    uint128_t zmm1 = var_c8
    uint64_t var_170_1 = rax_79
    zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
    double var_130[0x2] = r11_2.o
    uint128_t var_120_1 = zmm1
    int64_t var_110_1 = zmm2.q
    int32_t var_100
    double zmm0[0x2]
    
    while (true)
        int32_t rcx_39 = var_120_1:0xc.d
        int64_t rdx_40 = var_120_1.q
        
        if (rcx_39 == rax_79.d && rdx_40 == r11_2 + 0x10 && var_130[0] == r11_2)
            break
        
        int32_t rax_81 = data_143a1c6b8
        
        if (rcx_39 s< *(rdx_40 + 0x18))
            rax_81 = rcx_39
        
        int64_t r10_4 = sx.q(rax_81)
        int64_t rax_82 = *(rdi_4 + 0x18)
        var_180 = r10_4
        sub_140acc970(&var_108, (r10_4 << 4) + *rax_82)
        int32_t var_104
        int32_t var_fc
        
        if (var_108[0].d f!= data_14399f5c0.d || var_104[0].d f!= data_14399f5c0:4.d
                || var_100[0].d f!= data_14399f5c0:8.d
                || not(var_fc[0].d f== data_14399f5c0:0xc.d))
            var_198.b = 1
        
        int64_t r8_20 = var_180
        int64_t rax_84 = *var_1a0
        int64_t r10_5 = r8_20 * 3
        int64_t r9_8 = r8_20 * 0x74 + data_143cef100
        var_168 = r9_8
        int64_t rdx_44 = sx.q(*(rax_84 + r8_20 * 0x18)) * 3
        int64_t rcx_43 = **(r15_6 + 0x18)
        *r9_8 = *(rcx_43 + (rdx_44 << 2))
        *(r9_8 + 8) = *(rcx_43 + (rdx_44 << 2) + 8)
        int64_t rcx_44 = **(r14_6 + 0x18)
        *(r9_8 + 0xc) = *(rcx_44 + (r10_5 << 2))
        *(r9_8 + 0x14) = *(rcx_44 + (r10_5 << 2) + 8)
        int64_t r11_3 = **(r13_5 + 0x18)
        int64_t rdx_45 = **(r14_6 + 0x18)
        zmm2 = *(rdx_45 + (r10_5 << 2))
        int64_t rcx_45 = **(rsi_5 + 0x18)
        zmm8 = zmm2
        double zmm3[0x2] = *(rdx_45 + (r10_5 << 2) + 8)
        zmm4 = *(rdx_45 + (r10_5 << 2) + 4)
        zmm7 = zmm3
        zmm4[0].d = zmm4[0].d f* *(rcx_45 + (r10_5 << 2) + 8)
        zmm2[0].d = zmm2[0].d f* *(rcx_45 + (r10_5 << 2) + 4)
        zmm6 = *(rcx_45 + (r10_5 << 2))
        zmm7[0].d = zmm7[0].d f* *(rcx_45 + (r10_5 << 2) + 4)
        zmm8[0].d = zmm8[0].d f* *(rcx_45 + (r10_5 << 2) + 8)
        zmm7[0].d = zmm7[0].d f- zmm4[0].d
        zmm6[0].d = zmm6[0].d f* zmm3[0].d
        zmm6[0].d = zmm6[0].d f* zmm4[0].d
        zmm8[0].d = zmm8[0].d f- zmm6[0].d
        zmm7[0].d = zmm7[0].d f* zmm7[0].d
        zmm6[0].d = zmm6[0].d f- zmm2[0].d
        zmm8[0].d = zmm8[0].d f* zmm8[0].d
        zmm1.d = zmm6.d f* zmm6[0].d
        zmm8[0].d = zmm8[0].d f+ zmm7[0].d
        zmm8[0].d = zmm8[0].d f+ zmm1.d
        
        if (not(zmm8[0].d f== 1f))
            if (zmm8[0].d f>= zmm9[0].d)
                zmm4 = zx.o(0)
                zmm4[0].d = 0x3f000000
                zmm5 = _mm_rsqrt_ss(zmm8.d, zmm8[0].d)
                zmm8[0].d = zmm8[0].d f* 0.5f
                zmm0 = zmm5
                zmm0[0].d = zmm0[0].d f* zmm5.d
                zmm1.d = zmm8.d f* zmm0[0].d
                zmm0 = zmm5
                zmm4[0].d = zmm4[0].d f- zmm1.d
                zmm0[0].d = zmm0[0].d f* zmm4[0].d
                zmm5.d = zmm5.d f+ zmm0[0].d
                zmm0 = zmm5
                zmm1.d = zmm5.d f* zmm5.d
                zmm8[0].d = zmm8[0].d f* zmm1.d
                zmm4[0].d = 0.5f f- zmm8[0].d
                zmm0[0].d = zmm0[0].d f* zmm4[0].d
                zmm5.d = zmm5.d f+ zmm0[0].d
                arg_18.d = zmm5.d
                zmm7[0].d = zmm7[0].d f* zmm5.d
                zmm8[0].d = zmm8[0].d f* zmm5.d
                zmm6[0].d = zmm6[0].d f* zmm5.d
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        zmm0 = *(r11_3 + (r8_20 << 2))
        zmm6[0].d = zmm6[0].d f* zmm0[0].d
        r8_20.b = 1
        zmm7[0].d = zmm7[0].d f* zmm0[0].d
        zmm8[0].d = zmm8[0].d f* zmm0[0].d
        int32_t var_d8_2 = zmm6[0].d
        *(r9_8 + 0x18) = (_mm_unpacklo_ps(zmm7, zmm8[0])).q
        *(r9_8 + 0x20) = var_d8_2
        int64_t rcx_46 = **(rsi_5 + 0x18)
        *(r9_8 + 0x24) = *(rcx_46 + (r10_5 << 2))
        *(r9_8 + 0x2c) = *(rcx_46 + (r10_5 << 2) + 8)
        char* rax_95
        rax_95, zmm9 = sub_140ae16d0(&var_108, &arg_20, r8_20.b)
        int64_t rdx_47 = var_168
        int32_t i = 0
        *(rdx_47 + 0x70) = *rax_95
        
        if (*(rbx_7 + 0x20) s> 0)
            int64_t r10_6 = var_180
            int64_t r8_21 = 0
            void* rdx_48 = rdx_47 + 0x30
            
            do
                rdx_48 += 8
                i += 1
                r8_21 += 0x10
                int64_t rcx_49 = *(r8_21 + *(rbx_7 + 0x18) - 0x10)
                zmm1 = *(rcx_49 + (r10_6 << 3) + 4)
                *(rdx_48 - 8) = (*(rcx_49 + (r10_6 << 3)))[0].d
                *(rdx_48 - 4) = zmm1.d
            while (i s< *(rbx_7 + 0x20))
        
        var_120_1:8.d &= not.d(var_130[1]:4.d)
        sub_14059bdd0(&var_130[1])
        r11_2 = var_1a0
        rax_79 = var_170_1
    
    int32_t rcx_51 = 0
    void* r9_10 = rdi + 0x128
    var_1c8 = 0
    int32_t var_1c4_4 = 1
    int32_t r8_22 = 0
    int32_t rbx_8 = *(r9_10 + 0x18)
    var_1c0 = r9_10
    int32_t var_1b8_3 = 0xffffffff
    int64_t var_1b4_2 = 0
    
    if (rbx_8 != 0)
        void* rax_99 = *(r9_10 + 0x10)
        
        if (rax_99 != 0)
            r9_10 = rax_99
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rbx_8 - 1)
        int32_t rdx_51 = *r9_10
        
        if (rdx_51 != 0)
        label_1409cf498:
            int32_t rax_106 = neg.d(rdx_51) & rdx_51
            uint64_t rflags_4
            int32_t temp0_9
            temp0_9, rflags_4 = _bit_scan_reverse(rax_106)
            int32_t var_1c4_5 = rax_106
            int32_t rax_107
            
            if (rax_106 == 0)
                rax_107 = 0x20
            else
                rax_107 = 0x1f - temp0_9
            
            var_1b4_2.d = r8_22 - rax_107 + 0x1f
            
            if (r8_22 - rax_107 + 0x1f s> rbx_8)
                var_1b4_2.d = rbx_8
        else
            while (true)
                int64_t rdx_52 = sx.q(rcx_51)
                r8_22 += 0x20
                rcx_51 += 1
                var_1b4_2:4.d = r8_22
                var_1c8 = rcx_51
                
                if (rdx_52.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_51 = *(r9_10 + (rdx_52 << 2) + 4)
                var_1b8_3 = 0xffffffff
                
                if (rdx_51 != 0)
                    goto label_1409cf498
            
            var_1b4_2.d = rbx_8
    
    zmm2 = var_1b8_3.o
    void* rbx_9 = rdi + 0x118
    int32_t rdi_5 = *(rbx_9 + 0x28)
    void* r11_4 = rbx_9 + 0x10
    var_120_1 = zmm2
    int32_t rdx_53 = *(rbx_9 + 0x28)
    var_130 = var_1c8.o
    var_130[0] = rbx_9
    zmm0 = var_130
    int32_t rsi_6 = 0xffffffff << (rdx_53.b & 0x1f)
    int32_t r9_12 = rdx_53 & 0xffffffe0
    r8_8 = rdx_53 s>> 5
    var_b8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_178 = r11_4
    int32_t var_1b8_4 = rsi_6
    var_1b4_2.d = rdx_53
    void* var_d0_1
    var_d0_1.o = zmm0
    var_c8 = var_120_1
    
    if (rdx_53 != rdi_5)
        void* rax_109 = *(r11_4 + 0x10)
        
        if (rax_109 != 0)
            r11_4 = rax_109
        
        int32_t temp12_1
        int32_t temp13_1
        temp12_1:temp13_1 = sx.q(rdi_5 - 1)
        int32_t rdx_57 = *(r11_4 + (sx.q(r8_8) << 2)) & rsi_6
        
        if (rdx_57 != 0)
        label_1409cf570:
            int32_t rax_116 = neg.d(rdx_57) & rdx_57
            uint64_t rflags_5
            int32_t temp0_11
            temp0_11, rflags_5 = _bit_scan_reverse(rax_116)
            int32_t rax_117
            
            if (rax_116 == 0)
                rax_117 = 0x20
            else
                rax_117 = 0x1f - temp0_11
            
            var_1b4_2.d = r9_12 - rax_117 + 0x1f
            
            if (r9_12 - rax_117 + 0x1f s> rdi_5)
                var_1b4_2.d = rdi_5
        else
            while (true)
                int64_t rcx_56 = sx.q(r8_8)
                r9_12 += 0x20
                r8_8 += 1
                
                if (rcx_56.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                    break
                
                rdx_57 = *(r11_4 + (rcx_56 << 2) + 4)
                var_1b8_4 = 0xffffffff
                
                if (rdx_57 != 0)
                    goto label_1409cf570
            
            var_1b4_2.d = rdi_5
        
        r11_4 = var_178
    
    void* rsi_7 = var_150
    void* r14_7 = var_148
    void* r15_7 = var_140
    uint64_t rax_120 = var_1b8_4.q u>> 0x20
    uint64_t var_e0_1 = rax_120
    
    while (true)
        int32_t rcx_58 = var_b8_1:4.d
        double rdx_58 = var_c8[1]
        
        if (rcx_58 == rax_120.d && rdx_58 == r11_4 && var_d0_1 == rbx_9)
            break
        
        int32_t r8_25 = 0
        int32_t r9_14 = data_143a1c6c4
        int32_t rax_121 = r9_14
        
        if (rcx_58 s< *(rdx_58 i+ 0x18))
            rax_121 = rcx_58
        
        arg_18.d = rax_121
        int32_t rdx_59 = *(arg1 + 0xa0)
        void* r11_5 = arg1 + 0x88
        int32_t var_1c4_6 = 1
        int32_t rcx_59 = 0
        var_1c8 = 0
        int32_t rdi_6 = rax_121
        var_1c0 = r11_5
        int32_t var_1b8_5 = 0xffffffff
        int64_t var_1b4_3 = 0
        
        if (rdx_59 != 0)
            void* rax_122 = *(r11_5 + 0x10)
            void* r10_7 = r11_5
            
            if (rax_122 != 0)
                r10_7 = rax_122
            
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(rdx_59 - 1)
            int32_t rdx_62 = *r10_7
            
            if (rdx_62 != 0)
            label_1409cf67b:
                int32_t rax_129 = neg.d(rdx_62) & rdx_62
                uint64_t rflags_6
                int32_t temp0_12
                temp0_12, rflags_6 = _bit_scan_reverse(rax_129)
                int32_t var_1c4_7 = rax_129
                int32_t rax_130
                
                if (rax_129 == 0)
                    rax_130 = 0x20
                else
                    rax_130 = 0x1f - temp0_12
                
                int32_t rcx_61 = *(r11_5 + 0x18)
                var_1b4_3.d = r8_25 - rax_130 + 0x1f
                
                if (r8_25 - rax_130 + 0x1f s> rcx_61)
                    var_1b4_3.d = rcx_61
            else
                while (true)
                    int64_t rdx_63 = sx.q(rcx_59)
                    r8_25 += 0x20
                    rcx_59 += 1
                    var_1b4_3:4.d = r8_25
                    var_1c8 = rcx_59
                    
                    if (rdx_63.d s>= (temp15_1 + (temp14_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_62 = *(r10_7 + (rdx_63 << 2) + 4)
                    var_1b8_5 = 0xffffffff
                    
                    if (rdx_62 != 0)
                        goto label_1409cf67b
                
                var_1b4_3.d = *(r11_5 + 0x18)
        
        int32_t rdx_64 = *(arg1 + 0xa0)
        zmm2 = var_1b8_5.o
        var_108.q = arg1 + 0x78
        int32_t r8_28 = rdx_64 s>> 5
        int32_t r10_8 = 0xffffffff << (rdx_64.b & 0x1f)
        int32_t rcx_64 = *(r11_5 + 0x18)
        arg_20.d = r10_8
        int32_t var_1b8_6 = r10_8
        var_100.o = var_1c8.o
        int32_t r10_10 = rdx_64 & 0xffffffe0
        var_1b4_3.d = rdx_64
        zmm0 = var_108.o
        double var_f0_1[0x2] = zmm2
        int64_t var_110_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_130 = zmm0
        int32_t var_f8
        uint128_t var_120_2 = var_f8.o
        
        if (rdx_64 != rcx_64)
            void* rax_132 = *(r11_5 + 0x10)
            void* r13_6 = r11_5
            
            if (rax_132 != 0)
                r13_6 = rax_132
            
            int32_t temp16_1
            int32_t temp17_1
            temp16_1:temp17_1 = sx.q(rcx_64 - 1)
            int32_t rax_136 = (temp17_1 + (temp16_1 & 0x1f)) s>> 5
            var_1a0.d = rax_136
            int32_t rdx_68 = *(r13_6 + (sx.q(r8_28) << 2)) & arg_20.d
            
            if (rdx_68 != 0)
            label_1409cf777:
                int32_t rax_139 = neg.d(rdx_68) & rdx_68
                uint64_t rflags_7
                int32_t temp0_14
                temp0_14, rflags_7 = _bit_scan_reverse(rax_139)
                int32_t rax_140
                
                if (rax_139 == 0)
                    rax_140 = 0x20
                else
                    rax_140 = 0x1f - temp0_14
                
                int32_t rcx_68 = *(r11_5 + 0x18)
                var_1b4_3.d = r10_10 - rax_140 + 0x1f
                
                if (r10_10 - rax_140 + 0x1f s> rcx_68)
                    var_1b4_3.d = rcx_68
            else
                while (true)
                    int64_t rcx_66 = sx.q(r8_28)
                    r10_10 += 0x20
                    r8_28 += 1
                    
                    if (rcx_66.d s>= rax_136)
                        break
                    
                    rdx_68 = *(r13_6 + (rcx_66 << 2) + 4)
                    rax_136 = var_1a0.d
                    var_1b8_6 = 0xffffffff
                    
                    if (rdx_68 != 0)
                        goto label_1409cf777
                
                var_1b4_3.d = *(r11_5 + 0x18)
        
        uint64_t rdx_70 = var_1b8_6.q u>> 0x20
        arg_20 = rdx_70
        int64_t r13_7
        
        while (true)
            int32_t rax_142 = var_120_2:0xc.d
            int64_t rcx_69 = var_120_2.q
            
            if (rax_142 == rdx_70.d && rcx_69 == r11_5 && var_130[0] == arg1 + 0x78)
                r13_7 = *(arg1 + 0x78)
                var_180 = r13_7
                break
            
            r13_7 = *(arg1 + 0x78)
            
            if (rax_142 s< *(rcx_69 + 0x18))
                r9_14 = rax_142
            
            var_180 = r13_7
            
            if (*(r13_7 + sx.q(r9_14) * 0x48) == rdi_6)
                rdi_6 = r9_14
                break
            
            var_120_2:8.d &= not.d(var_130[1]:4.d)
            sub_14059bdd0(&var_130[1])
            r9_14 = data_143a1c6c4
            r11_5 = arg1 + 0x88
            rdx_70 = arg_20
        
        void* r8_29 = rsi + 0x10
        __builtin_memset(&var_1c8, 0, 0x14)
        int64_t rbx_12 = sx.q(*(r8_29 + 0x20))
        int64_t rdi_7 = sx.q(rdi_6) * 9
        var_108.q = rdi_7
        var_1b4_3.w = 0x100
        int32_t rax_147 = (rbx_12 + 1).d
        var_1b4_3:2.b = 0
        *(r8_29 + 0x20) = rax_147
        
        if (rax_147 s> *(r8_29 + 0x24))
            sub_1409da440(r8_29, rbx_12.d)
            r8_29 = rsi + 0x10
        
        void* rax_148 = *(r8_29 + 0x18)
        int64_t rcx_73 = rbx_12 * 3
        int64_t rbx_13 = sx.q(arg_18.d)
        void* rdx_72 = r8_29
        
        if (rax_148 != 0)
            rdx_72 = rax_148
        
        *(rdx_72 + (rcx_73 << 3)) = var_1c8.o
        int32_t var_1b8_7
        *(rdx_72 + (rcx_73 << 3) + 0x10) = var_1b8_7.q
        void* rcx_74 = r8_29
        void* rax_149 = *(r8_29 + 0x18)
        
        if (rax_149 != 0)
            rcx_74 = rax_149
        
        int64_t rax_150 = sx.q(*(r8_29 + 0x20))
        var_138 = rcx_74
        int64_t r9_15 = rax_150 * 3
        *(rcx_74 + (r9_15 << 3) - 0x14) = data_143cef120
        *(rcx_74 + (r9_15 << 3) - 0x10) = *(r13_7 + (rdi_7 << 3) + 0x18)
        int64_t* rax_153 = *(rsi_7 + 0x18)
        var_168 = r9_15
        int32_t rax_155 = sub_142365810(*(arg1 + 0x28), *(*rax_153 + (rbx_13 << 3)))
        void* r8_30 = var_138
        int64_t r9_16 = var_168
        *(r8_30 + (r9_16 << 3) - 0x18) = rax_155
        *(r8_30 + (r9_16 << 3) - 4) = *(rbx_13 + **(r14_7 + 0x18))
        *(r8_30 + (r9_16 << 3) - 3) = *(rbx_13 + **(r15_7 + 0x18))
        uint64_t rdx_75 = zx.q(*(r13_7 + (rdi_7 << 3) + 0x18))
        
        if (rdx_75.d - *(r13_7 + (rdi_7 << 3) + 0x44) s<= 0)
            *(r8_30 + (r9_16 << 3) - 0xc) = 0
            *(r8_30 + (r9_16 << 3) - 0x10) = 0
            *(r13_7 + (rdi_7 << 3) + 8) = 0
        else
            int32_t rdx_76 = rdx_75.d + data_143cef120 + (rdx_75 << 1).d
            
            if (rdx_76 s> data_143cef124)
                sub_1405dadb0(&data_143cef118, rdx_76)
            
            arg_20.d = 0
            void* rbx_15 = (rdi_7 << 3) + r13_7
            int32_t rdx_77 = -1
            arg_18.d = 0xffffffff
            int32_t r8_31 = 0
            int32_t rax_166
            
            if (*(rbx_15 + 0x18) - *(rbx_15 + 0x44) s<= 0)
                rax_166 = data_143a1c6c0
            else
                void** rax_165 = sub_1407453e0(&var_1c8, rbx_15 + 0x10)
                rdx_77 = arg_18.d
                r8_31 = 0
                rax_166 = *(rax_165 + 0x1c)
            
            int32_t rbx_16 = *(*(rbx_15 + 0x10) + sx.q(rax_166) * 0x10)
            int32_t rcx_82 = 0
            int32_t rax_168 = *(r13_7 + (rdi_7 << 3) + 0x18)
            var_1a0.d = 0
            
            if (rax_168 s> 0)
                int32_t r10_12 = 1
                int64_t var_170_2 = 0
                int32_t var_194_2 = 1
                int64_t r15_9 = (rdi_7 << 3) + r13_7
                int64_t r11_6 = 0
                
                do
                    int32_t rax_170
                    void* r9_18
                    
                    if (rcx_82 s>= 0 && rcx_82 s< rax_168)
                        r9_18 = (rdi_7 << 3) + 0x20 + r13_7
                        void* rax_169 = *(r9_18 + 0x10)
                        
                        if (rax_169 != 0)
                            r9_18 = rax_169
                        
                        rax_170 = rcx_82
                        
                        if (rcx_82 s< 0)
                            rax_170 = rcx_82 + 0x1f
                    
                    if (rcx_82 s< 0 || rcx_82 s>= rax_168
                            || (*(r9_18 + (sx.q(rax_170 s>> 5) << 2)) & r10_12) == 0)
                        int64_t rdi_9 = sx.q(data_143cef120)
                        int32_t rax_176 = (rdi_9 + 1).d
                        bool cond:28_1 = rax_176 s<= data_143cef124
                        data_143cef120 = rax_176
                        
                        if (not(cond:28_1))
                            sub_1405a4cf0(&data_143cef118)
                        
                        *(data_143cef118 + (rdi_9 << 2)) = rbx_16
                        int64_t rdi_10 = sx.q(data_143cef120)
                        int32_t rax_178 = (rdi_10 + 1).d
                        bool cond:29_1 = rax_178 s<= data_143cef124
                        data_143cef120 = rax_178
                        
                        if (not(cond:29_1))
                            sub_1405a4cf0(&data_143cef118)
                        
                        *(data_143cef118 + (rdi_10 << 2)) = rbx_16
                        int64_t rdi_11 = sx.q(data_143cef120)
                        int32_t rax_180 = (rdi_11 + 1).d
                        bool cond:30_1 = rax_180 s<= data_143cef124
                        data_143cef120 = rax_180
                        
                        if (not(cond:30_1))
                            sub_1405a4cf0(&data_143cef118)
                        
                        rdx_77 = arg_18.d
                        r8_31 = arg_20.d
                        *(data_143cef118 + (rdi_11 << 2)) = rbx_16
                    else
                        int64_t i_1 = 0
                        int64_t r14_9 = *(r15_9 + 0x10) + r11_6
                        
                        do
                            int64_t r13_8 = sx.q(data_143cef120)
                            int32_t rdi_8 = *(r14_9 + (i_1 << 2))
                            int32_t rax_173 = (r13_8 + 1).d
                            bool cond:33_1 = rax_173 s<= data_143cef124
                            data_143cef120 = rax_173
                            
                            if (not(cond:33_1))
                                sub_1405a4cf0(&data_143cef118)
                                rdx_77 = arg_18.d
                                r8_31 = arg_20.d
                            
                            *(data_143cef118 + (r13_8 << 2)) = rdi_8
                            int32_t rax_175 = rdi_8
                            
                            if (rdx_77 u<= rdi_8)
                                rax_175 = rdx_77
                            
                            rdx_77 = rax_175
                            arg_18.d = rax_175
                            
                            if (r8_31 u>= rdi_8)
                                rdi_8 = r8_31
                            
                            i_1 += 1
                            arg_20.d = rdi_8
                            r8_31 = rdi_8
                        while (i_1 s< 3)
                        
                        r13_7 = var_180
                    
                    rcx_82 = var_1a0.d + 1
                    rdi_7 = var_108.q
                    r11_6 = var_170_2 + 0x10
                    r10_12 = rol.d(var_194_2, 1)
                    var_1a0.d = rcx_82
                    var_194_2 = r10_12
                    rax_168 = *(r13_7 + (rdi_7 << 3) + 0x18)
                    var_170_2 = r11_6
                while (rcx_82 s< rax_168)
                
                rsi_7 = var_150
                r14_7 = var_148
                r15_7 = var_140
            
            void* rax_182 = var_138
            int64_t r9_19 = var_168
            *(rax_182 + (r9_19 << 3) - 0xc) = rdx_77
            *(rax_182 + (r9_19 << 3) - 8) = r8_31
            uint64_t rax_184 = zx.q(*(r13_7 + (rdi_7 << 3) + 8) - *(r13_7 + (rdi_7 << 3) + 0x18))
            
            if (rax_184.d s> 0)
                int64_t rbx_17 = sx.q(data_143cef120)
                uint32_t rdi_12 = (rax_184 * 3).d
                int32_t rax_185 = rbx_17.d + rdi_12
                bool cond:27_1 = rax_185 s<= data_143cef124
                data_143cef120 = rax_185
                
                if (not(cond:27_1))
                    sub_1405a4cf0(&data_143cef118)
                
                memset(data_143cef118 + (rbx_17 << 2), 0, sx.q(rdi_12) << 2)
        
        var_b8_1.d &= not.d(var_c8[0]:4.d)
        sub_14059bdd0(&var_c8)
        rax_120 = var_e0_1
        r11_4 = var_178
        rbx_9 = rdi + 0x118
    
    r15 = arg2
else
    int32_t rax_8 = *(r15 + 0x3d0)
    int32_t rsi_1 = 2
    int32_t var_1c4 = 1
    void* r13 = rdi + 0x118
    int32_t rbx_1 = *(r13 + 0x28)
    void* r9_1 = r13 + 0x10
    
    if (rax_8 s<= 2)
        rsi_1 = rax_8
    
    var_1c0 = r9_1
    int64_t var_1b4 = 0
    int32_t rcx_4 = 0
    var_1c8 = 0
    int32_t var_1b8 = 0xffffffff
    int32_t r8_5 = 0
    
    if (rbx_1 != 0)
        void* rax_9 = *(r9_1 + 0x10)
        
        if (rax_9 != 0)
            r9_1 = rax_9
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rbx_1 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_1409ce958:
            int32_t rax_16 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
            int32_t var_1c4_1 = rax_16
            int32_t rax_17
            
            if (rax_16 == 0)
                rax_17 = 0x20
            else
                rax_17 = 0x1f - temp0_1
            
            var_1b4.d = r8_5 - rax_17 + 0x1f
            
            if (r8_5 - rax_17 + 0x1f s> rbx_1)
                var_1b4.d = rbx_1
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_4)
                r8_5 += 0x20
                rcx_4 += 1
                var_1b4:4.d = r8_5
                var_1c8 = rcx_4
                
                if (rdx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_1b8 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_1409ce958
            
            var_1b4.d = rbx_1
    
    int32_t rdx_13 = *(r13 + 0x28)
    void* r11 = r13 + 0x10
    int32_t rdi_1 = *(r11 + 0x18)
    zmm2 = var_1b8.o
    var_c8 = var_1c8.o
    r8_8 = rdx_13 s>> 5
    int32_t r9_3 = rdx_13 & 0xffffffe0
    double var_b8[0x2] = zmm2
    int64_t var_1a8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_194_1 = rdx_13
    var_178 = r11
    var_1c8.o = r13.o
    var_1b8.o = var_c8
    
    if (rdx_13 != rdi_1)
        void* rax_19 = *(r11 + 0x10)
        
        if (rax_19 != 0)
            r11 = rax_19
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rdi_1 - 1)
        int32_t rdx_12 = *(r11 + (sx.q(r8_8) << 2)) & 0xffffffff << (rdx_13.b & 0x1f)
        
        if (rdx_12 != 0)
        label_1409cea2b:
            int32_t rax_26 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t r14_1
            
            if (rax_26 == 0)
                r14_1 = 0x20
            else
                r14_1 = 0x1f - temp0_3
            
            rdx_13 = r9_3 - r14_1 + 0x1f
            var_194_1 = rdx_13
            
            if (rdx_13 s> rdi_1)
                rdx_13 = rdi_1
                var_194_1 = rdx_13
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_8)
                r9_3 += 0x20
                r8_8 += 1
                
                if (rcx_9.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r11 + (rcx_9 << 2) + 4)
                
                if (rdx_12 != 0)
                    goto label_1409cea2b
            
            rdx_13 = rdi_1
            var_194_1 = rdx_13
        
        r11 = var_178
    
    void* rbx_2 = var_150
    int64_t r14_2 = 0
    void* rdi_2 = var_148
    void* rsi_2 = var_140
    var_168 = sx.q(rsi_1)
    int64_t var_170 = 0
    
    while (true)
        int64_t rcx_11 = var_1b8.q
        int32_t var_1ac
        
        if (var_1ac == rdx_13 && rcx_11 == r11 && var_1c8.q == r13)
            break
        
        int32_t rdx_14 = data_143a1c6c4
        
        if (var_1ac s< *(rcx_11 + 0x18))
            rdx_14 = var_1ac
        
        int64_t rax_29 = *(r15 + 0x5c8)
        var_180 = rax_29
        int32_t r14_3 = data_143cef108
        uint64_t r13_2 = zx.q(*(r14_2 + rax_29 + 8) * 2)
        arg_18.d = r14_3
        int32_t r15_2 = (r13_2 << 1).d + r13_2.d
        int32_t rax_30 = r15_2 + r14_3
        bool cond:9_1 = rax_30 s<= data_143cef10c
        data_143cef108 = rax_30
        
        if (not(cond:9_1))
            sub_1409da3a0(&data_143cef100)
        
        int32_t rax_31 = data_143cef120
        arg_20.d = rax_31
        int32_t rdx_16 = r15_2 + rax_31
        
        if (rdx_16 s> data_143cef124)
            sub_1405dadb0(&data_143cef118, rdx_16)
        
        void* r8_9 = rsi + 0x10
        __builtin_memset(&var_108, 0, 0x14)
        int64_t r15_3 = sx.q(*(r8_9 + 0x20))
        int16_t var_f4_1 = 0x100
        char var_f2_1 = 0
        int32_t rax_32 = (r15_3 + 1).d
        *(r8_9 + 0x20) = rax_32
        
        if (rax_32 s> *(r8_9 + 0x24))
            sub_1409da440(r8_9, r15_3.d)
            r8_9 = rsi + 0x10
        
        void* rax_33 = *(r8_9 + 0x18)
        int64_t rcx_13 = r15_3 * 3
        void* rdx_18 = r8_9
        void* r12_1 = r8_9
        
        if (rax_33 != 0)
            rdx_18 = rax_33
        
        *(rdx_18 + (rcx_13 << 3)) = var_108.o
        int32_t var_f8_1
        *(rdx_18 + (rcx_13 << 3) + 0x10) = var_f8_1.q
        void* rax_34 = *(r8_9 + 0x18)
        
        if (rax_34 != 0)
            r12_1 = rax_34
        
        int64_t r15_4 = sx.q(*(r8_9 + 0x20)) * 3
        *(r12_1 + (r15_4 << 3) - 0x14) = arg_20.d
        *(r12_1 + (r15_4 << 3) - 0xc) = r14_3
        *(r12_1 + (r15_4 << 3) - 0x10) = r13_2.d
        int64_t r14_4 = sx.q(rdx_14)
        *(r12_1 + (r15_4 << 3) - 8) = (r13_2 << 1).d + r13_2.d + r14_3
        *(r12_1 + (r15_4 << 3) - 0x18) =
            sub_142365810(*(arg1 + 0x28), *(**(rbx_2 + 0x18) + (r14_4 << 3)))
        *(r12_1 + (r15_4 << 3) - 4) = *(r14_4 + **(rdi_2 + 0x18))
        int64_t r14_5 = var_170
        int64_t rcx_17 = var_180
        *(r12_1 + (r15_4 << 3) - 3) = *(r14_4 + **(rsi_2 + 0x18))
        int32_t i_2 = 0
        int32_t i_4 = 0
        
        if (*(r14_5 + rcx_17 + 8) s> 0)
            int64_t r11_1 = sx.q(arg_18.d)
            uint32_t rbx_3 = var_198
            int64_t rsi_3 = r11_1
            
            do
                int32_t j = 0
                int32_t* r13_4 = sx.q(i_2) * 0xd0 + *(r14_5 + rcx_17)
                arg_20.d = 0
                
                do
                    int32_t k = 0
                    int64_t rdi_3 = rsi_3 * 0x74
                    
                    do
                        int32_t rcx_18 = 0
                        
                        if (j != 0)
                            if (k != 0)
                                rcx_18.b = k == 1
                                rcx_18 += 2
                        else if (k != 0)
                            rcx_18.b = k == 1
                            rcx_18 += 1
                        
                        int32_t* r9_5
                        
                        if (rcx_18 == 1)
                            r9_5 = &r13_4[0xd]
                        else if (rcx_18 == 2)
                            r9_5 = &r13_4[0x1a]
                        else if (rcx_18 == 3)
                            r9_5 = &r13_4[0x27]
                        else
                            r9_5 = r13_4
                        
                        int64_t* r10_2 = data_143cef100 + rdi_3
                        int64_t rdx_21 = sx.q(*r9_5) * 3
                        int64_t rcx_21 = *(arg2 + 0x5b8)
                        int32_t r8_10 = *(rcx_21 + (rdx_21 << 2) + 8)
                        int64_t rcx_22 = var_168
                        *r10_2 = *(rcx_21 + (rdx_21 << 2))
                        r10_2[1].d = r8_10
                        *(r10_2 + 0xc) = *(r9_5 + 0x24)
                        *(r10_2 + 0x14) = r9_5[0xb]
                        zmm5 = r9_5[0xc]
                        zmm2 = r9_5[0xb]
                        zmm4 = r9_5[0xa]
                        zmm2[0].d = zmm2[0].d f* r9_5[7]
                        zmm4[0].d = zmm4[0].d f* r9_5[8]
                        zmm6 = r9_5[9]
                        zmm9 = r9_5[6]
                        zmm6[0].d = zmm6[0].d f* r9_5[8]
                        zmm2[0].d = zmm2[0].d f- zmm4[0].d
                        zmm6[0].d = zmm6[0].d f* r9_5[7]
                        zmm9[0].d = zmm9[0].d f* zmm2[0].d
                        zmm9[0].d = zmm9[0].d f* zmm4[0].d
                        zmm2[0].d = zmm2[0].d f* zmm5.d
                        zmm6[0].d = zmm6[0].d f- zmm9[0].d
                        zmm9[0].d = zmm9[0].d f- zmm6[0].d
                        zmm6[0].d = zmm6[0].d f* zmm5.d
                        zmm9[0].d = zmm9[0].d f* zmm5.d
                        r10_2[3] = (_mm_unpacklo_ps(zmm2, zmm6[0])).q
                        r10_2[4].d = zmm9[0].d
                        *(r10_2 + 0x24) = *(r9_5 + 0x18)
                        *(r10_2 + 0x2c) = r9_5[8]
                        
                        if (rcx_22 s> 0)
                            int64_t* rax_53 = &r10_2[6]
                            int64_t temp20_1
                            
                            do
                                *rax_53 = *(r9_5 - r10_2 + rax_53 - 0x2c)
                                rax_53 = &rax_53[1]
                                temp20_1 = rcx_22
                                rcx_22 -= 1
                            while (temp20_1 != 1)
                        
                        int32_t rax_54 = r9_5[5]
                        r10_2[0xe].d = rax_54
                        int64_t r15_5 = sx.q(data_143cef120)
                        rbx_3 = zx.d(rbx_3.b)
                        
                        if (rax_54 != data_14399f630)
                            rbx_3 = 1
                        
                        int32_t var_198_1 = r11_1.d
                        r11_1 = zx.q(r11_1.d + 1)
                        rsi_3 += 1
                        int32_t rax_55 = (r15_5 + 1).d
                        arg_18.d = r11_1.d
                        rdi_3 += 0x74
                        data_143cef120 = rax_55
                        
                        if (rax_55 s> data_143cef124)
                            sub_1405a4cf0(&data_143cef118)
                            r11_1 = zx.q(arg_18.d)
                        
                        k += 1
                        *(data_143cef118 + (r15_5 << 2)) = var_198_1
                        j = arg_20.d
                    while (k s< 3)
                    
                    j += 1
                    var_198 = rbx_3
                    arg_20.d = j
                while (j s< 2)
                
                r14_5 = var_170
                i_2 = i_4 + 1
                rcx_17 = var_180
                i_4 = i_2
            while (i_2 s< *(r14_5 + rcx_17 + 8))
            
            rbx_2 = var_150
            rdi_2 = var_148
            rsi_2 = var_140
        
        r14_2 = r14_5 + 0x10
        var_1b4:4.d &= not.d(var_1c0:4.d)
        var_170 = r14_2
        sub_14059bdd0(&var_1c0)
        rdx_13 = var_194_1
        r11 = var_178
        r15 = arg2
        r13 = rdi + 0x118
r8_8.b = 0
void* i_3 = rsi + 0x10
void* i_5 = *(rsi + 0x28)

if (i_5 != 0)
    i_3 = i_5

for (void* rax_190 = i_3 + sx.q(*(rsi + 0x30)) * 0x18; i_3 != rax_190; i_3 += 0x18)
    r8_8 = zx.d(r8_8.b)
    
    if (*(i_3 + 0x10) u> 0xffff)
        r8_8 = 1

void* const rsi_8 = var_190
bool cond:14 = r8_8.b != 0
r8_8.b = 1
int32_t rdi_13
rdi_13.b = cond:14
sub_1422a3c20(rsi_8 + 0xf8, &data_143cef100, r8_8.b)
sub_1422c87f0(rsi_8 + 0x70, &data_143cef100, *(r15 + 0x3d0), 1)

if (var_198.b == 0)
    sub_1422a3d10(rsi_8 + 0x138, &data_14399f630, data_143cef108, 0, 1)
else
    sub_1422a38b0(rsi_8 + 0x138, &data_143cef100, 1)

sub_1422ac7c0(rsi_8 + 0x178, &data_143cef118, rdi_13 + 1)
var_190 = nullptr
int64_t var_188 = 0
sub_1422ac7c0(rsi_8 + 0x1b8, &var_190, rdi_13 + 1)
void* const rcx_93 = var_190

if (rcx_93 != 0)
    sub_140a74f90(rcx_93)

void*** rbx_18 = *(rsi_8 + 0x1f8)

if (rbx_18 == 0)
    void*** rax_191 = j_sub_140a82f30(0x100)
    rbx_18 = rax_191
    
    if (rax_191 == 0)
        rbx_18 = nullptr
    else
        memset(rax_191, 0, 0x100)
        sub_1422891d0(rbx_18, 0)
        sub_1422891d0(&rbx_18[8], 0)
        sub_1422891d0(&rbx_18[0x10], 0)
        sub_1422891d0(&rbx_18[0x18], 0)
    
    *(rsi_8 + 0x1f8) = rbx_18

var_190 = nullptr
int64_t var_188_1 = 0
sub_1422ac7c0(rbx_18, &var_190, rdi_13 + 1)
void* const rcx_100 = var_190

if (rcx_100 != 0)
    sub_140a74f90(rcx_100)

void* rcx_102 = *(rsi_8 + 0x1f8) + 0x40
var_190 = nullptr
int64_t var_188_2 = 0
sub_1422ac7c0(rcx_102, &var_190, rdi_13 + 1)
void* const rcx_103 = var_190

if (rcx_103 != 0)
    sub_140a74f90(rcx_103)

void* rcx_105 = *(rsi_8 + 0x1f8) + 0x80
var_190 = nullptr
int64_t var_188_3 = 0
sub_1422ac7c0(rcx_105, &var_190, rdi_13 + 1)
void* const rcx_106 = var_190

if (rcx_106 != 0)
    sub_140a74f90(rcx_106)

void* rcx_108 = *(rsi_8 + 0x1f8) + 0xc0
var_190 = nullptr
int64_t var_188_4 = 0
uint64_t result = sub_1422ac7c0(rcx_108, &var_190, rdi_13 + 1)
void* const rcx_109 = var_190

if (rcx_109 != 0)
    result = sub_140a74f90(rcx_109)

*(rsi_8 + 0x44) &= 0xfffffff0
*(rsi_8 + 0x48) = 0
return result
