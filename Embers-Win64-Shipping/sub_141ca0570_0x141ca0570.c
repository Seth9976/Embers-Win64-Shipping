// 函数: sub_141ca0570
// 地址: 0x141ca0570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint64_t r9_3 = zx.q(*(arg1 + 0x14c) + *(arg1 + 0xfc) + *(arg1 + 0xac) + *(arg1 + 0x5c))
uint64_t rdx_1 = zx.q(*(arg1 + 0xc) + (*(arg1 + 0x19c) << 1) + *(arg1 + 0x1ec))
int32_t var_f4 = 0
uint32_t rcx_4 = ((*(arg1 + 0x2c) + 0x1f) u>> 5)
    + (((rdx_1 * 3).d + (r9_3 << 2).d + *(arg1 + 0x25c) + *(arg1 + 0x24c) + *(arg1 + 0x23c)) << 1)
uint32_t rcx_8 = rcx_4 + ((*(arg1 + 0x20c) + 0x1f) u>> 5) + ((*(arg1 + 0x1bc) + 0x1f) u>> 5)
    + ((*(arg1 + 0x16c) + 0x1f) u>> 5) + ((*(arg1 + 0x11c) + 0x1f) u>> 5)
int32_t rcx_13 = rcx_8 + ((*(arg1 + 0xcc) + 0x1f) u>> 5) + ((*(arg1 + 0x7c) + 0x1f) u>> 5)
    + *(arg1 + 0x48) + *(arg1 + 0x228) + *(arg1 + 0x1d8)
int32_t rcx_18 = (rcx_13 + *(arg1 + 0x188) + *(arg1 + 0x138) + *(arg1 + 0xe8) + *(arg1 + 0x98)) << 2
int32_t* var_100 = &var_f4
sub_141c96a40(&var_100, arg1 + 0x50)
sub_141c96a40(&var_100, arg1 + 0xa0)
sub_141c96a40(&var_100, arg1 + 0xf0)
sub_141c96a40(&var_100, arg1 + 0x140)
var_100.d = 0
int32_t rsi = 0
int32_t var_f8 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_5c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int32_t r11 = *(arg1 + 0x28)
int32_t rcx_23 = 0
int32_t var_120 = 0
int32_t r8_1 = 0
int32_t var_11c = 1
void* var_118 = arg1 + 0x10
int32_t var_110 = 0xffffffff
int64_t var_10c = 0

if (r11 != 0)
    void* rax_25 = *(arg1 + 0x20)
    void* r9_4 = arg1 + 0x10
    
    if (rax_25 != 0)
        r9_4 = rax_25
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *r9_4
    
    if (rdx_8 != 0)
    label_141ca07bb:
        int32_t rax_32 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_32)
        int32_t var_11c_1 = rax_32
        int32_t rax_33
        
        if (rax_32 == 0)
            rax_33 = 0x20
        else
            rax_33 = 0x1f - temp0_2
        
        var_10c.d = r8_1 - rax_33 + 0x1f
        
        if (r8_1 - rax_33 + 0x1f s> r11)
            var_10c.d = r11
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_23)
            r8_1 += 0x20
            rcx_23 += 1
            var_10c:4.d = r8_1
            var_120 = rcx_23
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_4 + (rdx_9 << 2) + 4)
            int32_t var_110_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141ca07bb
        
        var_10c.d = r11

int32_t rdx_10 = *(arg1 + 0x28)
int128_t var_a8 = 0xffffffff
int32_t rdi = 0xffffffff << (rdx_10.b & 0x1f)
int128_t var_b8 = var_120.o
int32_t r8_4 = rdx_10 s>> 5
int32_t r9_6 = rdx_10 & 0xffffffe0
int64_t var_d0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_110_2 = rdi
var_10c.d = rdx_10
int128_t var_f0 = arg1.o
int128_t var_e0 = var_b8

if (rdx_10 != r11)
    void* rax_35 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_35 != 0)
        r10_1 = rax_35
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_14 = *(r10_1 + (sx.q(r8_4) << 2)) & rdi
    
    if (rdx_14 != 0)
    label_141ca0893:
        int32_t rax_42 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_42)
        int32_t rax_43
        
        if (rax_42 == 0)
            rax_43 = 0x20
        else
            rax_43 = 0x1f - temp0_4
        
        var_10c.d = r9_6 - rax_43 + 0x1f
        
        if (r9_6 - rax_43 + 0x1f s> r11)
            var_10c.d = r11
    else
        while (true)
            int64_t rcx_28 = sx.q(r8_4)
            r9_6 += 0x20
            r8_4 += 1
            
            if (rcx_28.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r10_1 + (rcx_28 << 2) + 4)
            var_110_2 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_141ca0893
        
        var_10c.d = r11

while (true)
    int64_t rax_45 = sx.q(var_e0:0xc.d)
    int64_t* rdx_15 = var_f0.q
    
    if (rax_45.d == (var_110_2.q u>> 0x20).d && var_e0.q == arg1 + 0x10 && rdx_15 == arg1)
        int64_t* var_68
        
        if (arg2 != 0)
            int32_t rcx_43 = 0
            int32_t var_11c_2 = 1
            int32_t r8_7 = 0
            int32_t var_120_1 = 0
            int64_t* var_118_1 = &var_78
            int32_t var_110_3 = 0xffffffff
            int64_t var_10c_1 = 0
            int32_t var_60
            
            if (var_60 != 0)
                int64_t* r9_9 = &var_78
                
                if (var_68 != 0)
                    r9_9 = var_68
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(var_60 - 1)
                int32_t rdx_25 = *r9_9
                
                if (rdx_25 != 0)
                label_141ca0aab:
                    int32_t rax_74 = neg.d(rdx_25) & rdx_25
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_74)
                    int32_t var_11c_3 = rax_74
                    int32_t rax_75
                    
                    if (rax_74 == 0)
                        rax_75 = 0x20
                    else
                        rax_75 = 0x1f - temp0_5
                    
                    int32_t rax_76 = r8_7 - rax_75 + 0x1f
                    
                    if (rax_76 s> var_60)
                        rax_76 = var_60
                    
                    var_10c_1.d = rax_76
                else
                    while (true)
                        int64_t rdx_26 = sx.q(rcx_43)
                        r8_7 += 0x20
                        rcx_43 += 1
                        var_10c_1:4.d = r8_7
                        var_120_1 = rcx_43
                        
                        if (rdx_26.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            var_10c_1.d = var_60
                            break
                        
                        rdx_25 = *(r9_9 + (rdx_26 << 2) + 4)
                        int32_t var_110_4 = 0xffffffff
                        
                        if (rdx_25 != 0)
                            goto label_141ca0aab
            
            int128_t var_a8_1 = 0xffffffff
            var_10c_1.d = var_60
            int128_t var_b8_1 = var_120_1.o
            int64_t temp0_6 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            var_f0 = (&var_88).o
            int128_t var_e0_1 = var_b8_1
            int64_t var_d0_1 = temp0_6
            
            while (var_e0_1:0xc.d != ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d
                    || var_e0_1.q != &var_78 || var_f0.q != &var_88)
                var_e0_1:8.d &= not.d(var_f0:0xc.d)
                sub_14059bdd0(&var_f0:8)
        
        int32_t rcx_48 = 0
        int32_t var_11c_4 = 1
        int32_t var_120_2 = 0
        int32_t r11_1 = *(arg1 + 0x1b8)
        int32_t r14_2 = 0
        void* var_118_2 = arg1 + 0x1a0
        int32_t r15_2 = 0
        int32_t var_110_6 = 0xffffffff
        int32_t r8_9 = 0
        int64_t var_10c_2 = 0
        
        if (r11_1 != 0)
            void* rax_79 = *(arg1 + 0x1b0)
            void* r9_10 = arg1 + 0x1a0
            
            if (rax_79 != 0)
                r9_10 = rax_79
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_30 = *r9_10
            
            if (rdx_30 != 0)
            label_141ca0bfb:
                int32_t rax_86 = neg.d(rdx_30) & rdx_30
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_86)
                int32_t var_11c_5 = rax_86
                int32_t rax_87
                
                if (rax_86 == 0)
                    rax_87 = 0x20
                else
                    rax_87 = 0x1f - temp0_7
                
                var_10c_2.d = r8_9 - rax_87 + 0x1f
                
                if (r8_9 - rax_87 + 0x1f s> r11_1)
                    var_10c_2.d = r11_1
            else
                while (true)
                    int64_t rdx_31 = sx.q(rcx_48)
                    r8_9 += 0x20
                    rcx_48 += 1
                    var_10c_2:4.d = r8_9
                    var_120_2 = rcx_48
                    
                    if (rdx_31.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_30 = *(r9_10 + (rdx_31 << 2) + 4)
                    int32_t var_110_7 = 0xffffffff
                    
                    if (rdx_30 != 0)
                        goto label_141ca0bfb
                
                var_10c_2.d = r11_1
        
        int32_t rdx_32 = *(arg1 + 0x1b8)
        int128_t var_a8_2 = 0xffffffff
        int32_t r12_1 = 0xffffffff << (rdx_32.b & 0x1f)
        int128_t var_b8_2 = var_120_2.o
        int32_t r8_12 = rdx_32 s>> 5
        int32_t r9_12 = rdx_32 & 0xffffffe0
        int64_t var_d0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_110_8 = r12_1
        var_10c_2.d = rdx_32
        var_f0 = (arg1 + 0x190).o
        int128_t var_e0_2 = var_b8_2
        
        if (rdx_32 != r11_1)
            void* rax_89 = *(arg1 + 0x1b0)
            void* r10_5 = arg1 + 0x1a0
            
            if (rax_89 != 0)
                r10_5 = rax_89
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r11_1 - 1)
            int32_t rdx_36 = *(r10_5 + (sx.q(r8_12) << 2)) & r12_1
            
            if (rdx_36 != 0)
            label_141ca0cd3:
                int32_t rax_96 = neg.d(rdx_36) & rdx_36
                uint64_t rflags_5
                int32_t temp0_9
                temp0_9, rflags_5 = _bit_scan_reverse(rax_96)
                int32_t rax_97
                
                if (rax_96 == 0)
                    rax_97 = 0x20
                else
                    rax_97 = 0x1f - temp0_9
                
                var_10c_2.d = r9_12 - rax_97 + 0x1f
                
                if (r9_12 - rax_97 + 0x1f s> r11_1)
                    var_10c_2.d = r11_1
            else
                while (true)
                    int64_t rcx_53 = sx.q(r8_12)
                    r9_12 += 0x20
                    r8_12 += 1
                    
                    if (rcx_53.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_36 = *(r10_5 + (rcx_53 << 2) + 4)
                    var_110_8 = 0xffffffff
                    
                    if (rdx_36 != 0)
                        goto label_141ca0cd3
                
                var_10c_2.d = r11_1
        
        while (true)
            int64_t rax_99 = sx.q(var_e0_2:0xc.d)
            int64_t* rdx_37 = var_f0.q
            
            if (rax_99.d == (var_110_8.q u>> 0x20).d && var_e0_2.q == arg1 + 0x1a0
                    && rdx_37 == arg1 + 0x190)
                int32_t var_40_1 = 0
                int32_t rbx_12 = (*(arg1 + 0x1e8) - *(arg1 + 0x214)) * 0x30 + r15_2 + r14_2 + rsi
                    + var_f8 + var_100.d + var_f4 + rcx_18
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
                
                var_80 = 0
                int32_t var_58_1 = 0xffffffff
                int32_t var_54_1 = 0
                sub_14059a8e0(&var_78, 0)
                
                if (var_68 != 0)
                    sub_140a74f90(var_68)
                
                int64_t rcx_63 = var_88
                
                if (rcx_63 != 0)
                    sub_140a74f90(rcx_63)
                
                __security_check_cookie(rax_1 ^ &var_148)
                return zx.q(rbx_12)
            
            r14_2 -= 0xffffff80
            void* rdx_38 = *(*rdx_37 + rax_99 * 0x30 + 0x20)
            r15_2 += (*(rdx_38 + 0x7c) + *(rdx_38 + 0x6c) + *(rdx_38 + 0x5c) + *(rdx_38 + 0x4c)
                + *(rdx_38 + 0x3c) + *(rdx_38 + 0x2c)) << 3
            var_e0_2:8.d &= not.d(var_f0:0xc.d)
            sub_14059bdd0(&var_f0:8)
    
    void* rdx_16 = *(*rdx_15 + rax_45 * 0x18 + 8)
    uint32_t rax_48 = 0
    var_100.d = var_100.d + (*(rdx_16 + 0x44) << 2) + 0x50
    void* rcx_34 = *(rdx_16 + 0x28)
    
    if (rcx_34 != 0)
        rax_48 = (*(rcx_34 + 0xc) + 1) * 0x18
    
    var_f8 += rax_48
    int64_t* i = *sub_14098ef70(rdx_16 + 0x28)
    int64_t* rax_53 = sub_14098ef70(rdx_16 + 0x28)
    
    for (int64_t r14_1 = *rax_53 + sx.q(rax_53[1].d) * 0x18; i != r14_1; i = &i[3])
        int64_t rax_55 = *i
        int32_t rdi_3 = *(i + 0x14) * 2
        rsi += rdi_3
        int32_t r10_3 = sub_140b5ead0(rax_55.d) + rax_55:4.d
        int32_t* rax_63
        
        if (var_80 == var_54)
        labelid_4:
            rax_63 = sub_141c90080(&var_88, r10_3, i)
        else
            void var_50
            void* rcx_39 = &var_50
            
            if (var_48 != 0)
                rcx_39 = var_48
            
            int32_t rax_62 = *(rcx_39 + ((sx.q(var_40 - 1) & sx.q(r10_3)) << 2))
            
            if (rax_62 == 0xffffffff)
            label_141ca09d9:
                rax_63 = sub_141c90080(&var_88, r10_3, i)
            else
                int64_t r8_5 = var_88
                int64_t rdx_21
                
                while (true)
                    int64_t rdx_20 = sx.q(rax_62) * 5
                    rdx_21 = rdx_20 << 2
                    
                    if (*(r8_5 + (rdx_20 << 2)) == *i)
                        break
                    
                    rax_62 = *(r8_5 + rdx_21 + 0xc)
                    
                    if (rax_62 == 0xffffffff)
                        goto label_141ca09d9_2
                
                if (rax_62 == 0xffffffff)
                label_141ca09d9_1:
                    rax_63 = sub_141c90080(&var_88, r10_3, i)
                else
                    void* rax_66 = rdx_21 + r8_5
                    
                    if (rax_66 == 0)
                    label_141ca09d9_2:
                        rax_63 = sub_141c90080(&var_88, r10_3, i)
                    else
                        rax_63 = rax_66 + 8
        
        *rax_63 += rdi_3
    
    var_e0:8.d &= not.d(var_f0:0xc.d)
    sub_14059bdd0(&var_f0:8)
