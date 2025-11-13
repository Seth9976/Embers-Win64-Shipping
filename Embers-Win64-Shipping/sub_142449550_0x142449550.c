// 函数: sub_142449550
// 地址: 0x142449550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
uint64_t r12
r12.b = 0
int64_t r13 = 0
int32_t rsi = 0
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t* var_208 = nullptr
int32_t var_210 = 0
int32_t var_1fc = 0
int64_t* var_218
void var_1f8
double var_1e8[0x2]
int64_t var_1c8
int64_t** var_1a8
int32_t var_108
void* var_100
int64_t var_f8
int32_t var_f0
int32_t var_e8
char i
int32_t var_e0
void* var_d8
int64_t var_d0
int32_t var_c8

if (arg2 == 0)
    if (arg3 != 0)
        goto label_142449b87
    
    void* rax_2 = sub_142452380()
    var_108 = 5
    char var_b0_1 = 0
    sub_142442440(&var_100)
    sub_1405ab0f0(&var_100, arg1, rax_2)
    char var_b0_2 = 1
    sub_1405b0c60(&var_108)
    int32_t var_168_1 = 0
    char var_110_1 = 0
    
    if (i == 0)
        void* rsi_1 = var_d8
        
        do
            int32_t var_234_1 = 1
            int32_t r11_1 = *(rsi_1 + 0x1c8)
            void* var_230_1 = rsi_1 + 0x1b0
            int32_t rcx_3 = 0
            int32_t var_238_1 = 0
            int32_t r8_1 = 0
            int32_t var_228_1 = 0xffffffff
            int64_t var_224_1 = 0
            
            if (r11_1 != 0)
                void* rax_3 = *(rsi_1 + 0x1c0)
                void* r9_1 = rsi_1 + 0x1b0
                
                if (rax_3 != 0)
                    r9_1 = rax_3
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r11_1 - 1)
                int32_t rdx_3 = *r9_1
                
                if (rdx_3 != 0)
                label_14244970c:
                    int32_t rax_10 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                    int32_t var_234_2 = rax_10
                    int32_t rax_11
                    
                    if (rax_10 == 0)
                        rax_11 = 0x20
                    else
                        rax_11 = 0x1f - temp0_1
                    
                    var_224_1.d = r8_1 - rax_11 + 0x1f
                    
                    if (r8_1 - rax_11 + 0x1f s> r11_1)
                        var_224_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_4 = sx.q(rcx_3)
                        r8_1 += 0x20
                        rcx_3 += 1
                        var_224_1:4.d = r8_1
                        var_238_1 = rcx_3
                        
                        if (rdx_4.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                        int32_t var_228_2 = 0xffffffff
                        
                        if (rdx_3 != 0)
                            goto label_14244970c
                    
                    var_224_1.d = r11_1
            
            int32_t rdx_5 = *(rsi_1 + 0x1c8)
            var_224_1.d = rdx_5
            int128_t var_180_1 = 0xffffffff
            double var_190_1[0x2] = var_238_1.o
            int32_t rdi_1 = 0xffffffff << (rdx_5 & 0x1f).b
            int32_t r8_4 = rdx_5 s>> 5
            int32_t r9_3 = rdx_5 & 0xffffffe0
            var_1c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int32_t var_228_3 = rdi_1
            var_1e8 = (rsi_1 + 0x1a0).o
            
            if (rdx_5 != r11_1)
                void* rax_15 = *(rsi_1 + 0x1c0)
                void* r10_1 = rsi_1 + 0x1b0
                
                if (rax_15 != 0)
                    r10_1 = rax_15
                
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(r11_1 - 1)
                int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & rdi_1
                
                if (rdx_9 != 0)
                label_1424497e7:
                    int32_t rax_21 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rax_21)
                    int32_t rax_22
                    
                    if (rax_21 == 0)
                        rax_22 = 0x20
                    else
                        rax_22 = 0x1f - temp0_3
                    
                    var_224_1.d = r9_3 - rax_22 + 0x1f
                    
                    if (r9_3 - rax_22 + 0x1f s> r11_1)
                        var_224_1.d = r11_1
                else
                    while (true)
                        int64_t rcx_7 = sx.q(r8_4)
                        r9_3 += 0x20
                        r8_4 += 1
                        
                        if (rcx_7.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
                        var_228_3 = 0xffffffff
                        
                        if (rdx_9 != 0)
                            goto label_1424497e7
                    
                    var_224_1.d = r11_1
            
            while (true)
                int64_t rdx_10 = sx.q(var_190_1[1]:4.d)
                int32_t rax_14
                
                if (rdx_10.d != (var_228_3.q u>> 0x20).d || var_190_1[0] != rsi_1 + 0x1b0)
                    rax_14.b = 0
                else
                    rax_14 = 1
                
                double rcx_9 = var_1e8[0]
                
                if (rax_14.b == 0 || rcx_9 != rsi_1 + 0x1a0)
                    rax_14 = 1
                else
                    rax_14.b = 0
                
                if (rax_14.b == 0)
                    break
                
                int64_t* rbx_3 = *(*rcx_9 + rdx_10 * 0x10)
                
                if (rbx_3 != 0)
                    void* rax_25 = sub_142577430()
                    void* rcx_11 = rbx_3[2]
                    int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                    
                    if (rax_26.d s<= *(rcx_11 + 0x38)
                            && *(*(rcx_11 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30)
                        var_218 = rbx_3
                        
                        if (sub_141f82e20(rbx_3) != 0)
                            var_1a8 = &var_218
                            void* var_1a0_1 = var_218 + 0x1fc
                            sub_142427390(&var_a8, &var_1f8, &var_1a8, nullptr)
                            
                            if (r12.b == 0)
                                int64_t* rax_31 = var_218
                                r12 = zx.q(r12.b)
                                uint32_t zmm0_2[0x4] = *(rax_31 + 0x1fc)
                                zmm0_2[0] = zmm0_2[0] f- rax_31[0x40].d
                                
                                if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> 9.99999994e-09f)
                                    r12 = 1
                
                var_190_1[1].d &= not.d(var_1e8[1]:4.d)
                sub_14059bdd0(&var_1e8[1])
            
            r13 = sx.q(var_210)
            
            if (rsi_1 != 0)
                void* rax_34 = sub_142496850()
                void* rdx_13 = *(rsi_1 + 0x10)
                int64_t rax_35 = sx.q(*(rax_34 + 0x38))
                
                if (rax_35.d s<= *(rdx_13 + 0x38)
                        && *(*(rdx_13 + 0x30) + (rax_35 << 3)) == rax_34 + 0x30)
                    int64_t rbx_4 = r13
                    r13 = zx.q(r13.d + 1)
                    var_210 = r13.d
                    int32_t var_200_1 = r13.d
                    
                    if (r13.d s> var_1fc)
                        sub_1405a4d70(&var_208)
                        r13 = zx.q(var_200_1)
                        var_210 = r13.d
                    
                    var_208[rbx_4] = rsi_1
            
            int32_t r8_8 = var_c8
            int32_t rdx_15 = var_f0
            void* r15_2 = var_100
            int32_t rdi_5 = var_e8 + 1
            
            if (rdi_5 s>= r8_8 + rdx_15)
            label_142449b43:
                int64_t var_d8_1 = 0
                char var_e4 = 1
                break
            
            int64_t r14_2 = sx.q(rdi_5) << 3
            
            while (true)
                if (rdi_5 s>= rdx_15)
                    rsi_1 = *(var_d0 + (sx.q(rdi_5 - rdx_15) << 3))
                else
                    rsi_1 = *(r14_2 + var_f8)
                
                var_e0 += 1
                
                if (rsi_1 != 0)
                    void* rax_43 = sub_141dc9840(rsi_1)
                    
                    if (rax_43 != 0)
                        void* const rax_50
                        
                        if ((var_108.b & 1) != 0)
                            int32_t rax_44 = *(rsi_1 + 0xc)
                            
                            if (rax_44 s>= data_143e1d9b4)
                                rax_50 = nullptr
                            else
                                int16_t temp12_1
                                int32_t temp13_1
                                temp12_1:temp13_1 = sx.q(rax_44)
                                uint32_t rdx_17 = zx.d(temp12_1)
                                int32_t rax_46 = temp13_1 + rdx_17
                                rax_50 = *(data_143e1d9a0 + (sx.q(rax_46 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_46.w) - rdx_17) * 0x18
                        
                        if ((var_108.b & 1) == 0 || ((*(rax_50 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_25 = var_108
                            
                            if (((rcx_25 u>> 1).b & 1) == 0)
                                goto label_142449a4c
                            
                            uint64_t rax_54 = sub_1405949a0()
                            
                            if (rax_54.b != 0)
                                rcx_25 = var_108
                            label_142449a4c:
                                
                                if (((rcx_25 u>> 2).b & 1) == 0)
                                label_142449af4:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_43) == r15_2)
                                        if (rax_43 == *(r15_2 + 0x30))
                                            break
                                        
                                        void* rax_56 = sub_1425bd0d0()
                                        void* rdx_20 = *(rsi_1 + 0x10)
                                        int64_t rax_57 = sx.q(*(rax_56 + 0x38))
                                        
                                        if (rax_57.d s> *(rdx_20 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_20 + 0x30) + (rax_57 << 3)) != rax_56 + 0x30)
                                            break
                                else
                                    if ((*(rax_43 + 0x1f4) & 0x20) == 0
                                            || (*(rax_43 + 0x1f6) & 8) != 0)
                                        rax_54 = zx.q(*(rax_43 + 0x1f5))
                                    
                                    char r9_5
                                    
                                    if (((*(rax_43 + 0x1f4) & 0x20) != 0
                                            && (*(rax_43 + 0x1f6) & 8) == 0) || (rax_54.b & 0x40) != 0
                                            || rax_54.b s< 0)
                                        r9_5 = 1
                                    else
                                        r9_5 = 0
                                    
                                    void* rdx_19 = *(rax_43 + 0xb8)
                                    char* r8_10 = *(rax_43 + 0x248)
                                    uint8_t rcx_26
                                    
                                    if (rdx_19 != 0)
                                        rax_54 = sx.q(*(rdx_19 + 0x168))
                                        
                                        if (rax_54.d s< 0 || rax_54.d s>= *(rdx_19 + 0x160))
                                            rcx_26 = 0
                                        else
                                            rcx_26 = 1
                                    
                                    int64_t rcx_28
                                    
                                    if (rdx_19 == 0 || rcx_26 == 0)
                                        rcx_28 = 0
                                    else
                                        rcx_28 = rax_54 * 0x78 + *(rdx_19 + 0x158)
                                    
                                    if (rcx_28 == 0 || r8_10 == rcx_28)
                                        rcx_28.b = 1
                                    else
                                        rcx_28.b = 0
                                    
                                    if (r8_10 == 0 || *r8_10 == 2)
                                        rax_54.b = 1
                                    else
                                        rax_54.b = 0
                                    
                                    if (rcx_28.b != 0 || rax_54.b != 0)
                                        rax_54.b = 1
                                    
                                    if (r9_5 != 0 && rax_54.b != 0)
                                        goto label_142449af4
                    
                    r8_8 = var_c8
                    rdx_15 = var_f0
                
                rdi_5 += 1
                r14_2 += 8
                
                if (rdi_5 s>= r8_8 + rdx_15)
                    goto label_142449b43
            
            void* var_d8_2 = rsi_1
            var_e8 = rdi_5
        while (i == 0)
    
    void var_160
    sub_142442440(&var_160)
    goto label_14244a157

double zmm0[0x2]

if (arg3 == 0)
    int32_t var_234_3 = 1
    int32_t r10_2 = *(arg2 + 0x1c8)
    void* var_230_2 = arg2 + 0x1b0
    int32_t rcx_34 = 0
    int32_t var_238_2 = 0
    int32_t r8_13 = 0
    int32_t var_228_4 = 0xffffffff
    int64_t var_224_2 = 0
    
    if (r10_2 != 0)
        void* rax_64 = *(arg2 + 0x1c0)
        void* r9_6 = arg2 + 0x1b0
        
        if (rax_64 != 0)
            r9_6 = rax_64
        
        int32_t temp0_6
        int32_t temp1_1
        temp0_6:temp1_1 = sx.q(r10_2 - 1)
        int32_t rdx_24 = *r9_6
        
        if (rdx_24 != 0)
        label_142449c8c:
            int32_t rax_71 = ((rdx_24 - 1) & rdx_24) ^ rdx_24
            uint64_t rflags_3
            int32_t temp0_7
            temp0_7, rflags_3 = _bit_scan_reverse(rax_71)
            int32_t var_234_4 = rax_71
            int32_t rax_72
            
            if (rax_71 == 0)
                rax_72 = 0x20
            else
                rax_72 = 0x1f - temp0_7
            
            var_224_2.d = r8_13 - rax_72 + 0x1f
            
            if (r8_13 - rax_72 + 0x1f s> r10_2)
                var_224_2.d = r10_2
        else
            while (true)
                int64_t rdx_25 = sx.q(rcx_34)
                r8_13 += 0x20
                rcx_34 += 1
                var_224_2:4.d = r8_13
                var_238_2 = rcx_34
                
                if (rdx_25.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                    break
                
                rdx_24 = *(r9_6 + (rdx_25 << 2) + 4)
                int32_t var_228_5 = 0xffffffff
                
                if (rdx_24 != 0)
                    goto label_142449c8c
            
            var_224_2.d = r10_2
    
    int32_t rdx_26 = *(arg2 + 0x1c8)
    var_224_2.d = rdx_26
    int128_t var_180_2 = 0xffffffff
    double var_190_2[0x2] = var_238_2.o
    int32_t rdi_6 = 0xffffffff << (rdx_26 & 0x1f).b
    int32_t r8_16 = rdx_26 s>> 5
    int32_t r9_8 = rdx_26 & 0xffffffe0
    var_1c8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int32_t var_228_6 = rdi_6
    var_1e8 = (arg2 + 0x1a0).o
    
    if (rdx_26 != r10_2)
        void* rax_76 = *(arg2 + 0x1c0)
        void* r11_2 = arg2 + 0x1b0
        
        if (rax_76 != 0)
            r11_2 = rax_76
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_2 - 1)
        int32_t rdx_30 = *(r11_2 + (sx.q(r8_16) << 2)) & rdi_6
        
        if (rdx_30 != 0)
        label_142449d67:
            int32_t rax_82 = ((rdx_30 - 1) & rdx_30) ^ rdx_30
            uint64_t rflags_4
            int32_t temp0_9
            temp0_9, rflags_4 = _bit_scan_reverse(rax_82)
            int32_t rax_83
            
            if (rax_82 == 0)
                rax_83 = 0x20
            else
                rax_83 = 0x1f - temp0_9
            
            var_224_2.d = r9_8 - rax_83 + 0x1f
            
            if (r9_8 - rax_83 + 0x1f s> r10_2)
                var_224_2.d = r10_2
        else
            while (true)
                int64_t rcx_38 = sx.q(r8_16)
                r9_8 += 0x20
                r8_16 += 1
                
                if (rcx_38.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_30 = *(r11_2 + (rcx_38 << 2) + 4)
                var_228_6 = 0xffffffff
                
                if (rdx_30 != 0)
                    goto label_142449d67
            
            var_224_2.d = r10_2
    
    while (true)
        int64_t rdx_31 = sx.q(var_190_2[1]:4.d)
        int32_t rax_75
        
        if (rdx_31.d != (var_228_6.q u>> 0x20).d || var_190_2[0] != arg2 + 0x1b0)
            rax_75.b = 0
        else
            rax_75 = 1
        
        double rcx_40 = var_1e8[0]
        
        if (rax_75.b == 0 || rcx_40 != arg2 + 0x1a0)
            rax_75 = 1
        else
            rax_75.b = 0
        
        if (rax_75.b == 0)
            break
        
        int64_t* rbx_7 = *(*rcx_40 + rdx_31 * 0x10)
        
        if (rbx_7 != 0)
            void* rax_86 = sub_142577430()
            void* rcx_42 = rbx_7[2]
            int64_t rax_87 = sx.q(*(rax_86 + 0x38))
            
            if (rax_87.d s<= *(rcx_42 + 0x38)
                    && *(*(rcx_42 + 0x30) + (rax_87 << 3)) == rax_86 + 0x30)
                var_218 = rbx_7
                
                if (sub_141f82e20(rbx_7) != 0)
                    var_1a8 = &var_218
                    void* var_1a0_3 = var_218 + 0x1fc
                    sub_142427390(&var_a8, &var_1f8, &var_1a8, nullptr)
                    
                    if (r12.b == 0)
                        int64_t* rax_92 = var_218
                        r12 = zx.q(r12.b)
                        zmm0 = *(rax_92 + 0x1fc)
                        zmm0[0].d = zmm0[0].d f- rax_92[0x40].d
                        
                        if (_mm_and_ps(zmm0, 0x7fffffff)[0].d f> 9.99999994e-09f)
                            r12 = 1
        
        var_190_2[1].d &= not.d(var_1e8[1]:4.d)
        sub_14059bdd0(&var_1e8[1])
    
    r13 = zx.q(var_210)
    rsi = var_1fc
else
label_142449b87:
    var_218 = arg3
    
    if (sub_141f82e20(arg3) != 0)
        void* rax_62 = var_218 + 0x1fc
        var_1a8 = &var_218
        void* var_1a0_2 = rax_62
        sub_142427390(&var_a8, &var_1f8, &var_1a8, nullptr)
        int64_t* rax_63 = var_218
        zmm0 = *(rax_63 + 0x1fc)
        zmm0[0].d = zmm0[0].d f- rax_63[0x40].d
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0].d f<= 9.99999994e-09f))
            r12.b = 1

int64_t var_a0

if (var_a0.d - var_74 s<= 0)
label_14244a1dc:
    int64_t var_98
    int64_t* var_88
    
    if (r12.b != 0)
    label_14244a1f3:
        int64_t* var_230_3 = &var_98
        int32_t rcx_68 = 0
        int32_t var_238_3 = 0
        int32_t r8_24 = 0
        int32_t var_234_5 = 1
        int32_t var_228_7 = 0xffffffff
        int64_t var_224_3 = 0
        int32_t var_80
        
        if (var_80 != 0)
            int64_t* r9_11 = &var_98
            
            if (var_88 != 0)
                r9_11 = var_88
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(var_80 - 1)
            int32_t rdx_47 = *r9_11
            
            if (rdx_47 != 0)
            label_14244a27b:
                int32_t rax_134 = neg.d(rdx_47) & rdx_47
                uint64_t rflags_5
                int32_t temp0_11
                temp0_11, rflags_5 = _bit_scan_reverse(rax_134)
                int32_t var_234_6 = rax_134
                int32_t rax_135
                
                if (rax_134 == 0)
                    rax_135 = 0x20
                else
                    rax_135 = 0x1f - temp0_11
                
                int32_t rax_136 = r8_24 - rax_135 + 0x1f
                
                if (rax_136 s> var_80)
                    rax_136 = var_80
                
                var_224_3.d = rax_136
            else
                while (true)
                    int64_t rdx_48 = sx.q(rcx_68)
                    r8_24 += 0x20
                    rcx_68 += 1
                    var_224_3:4.d = r8_24
                    var_238_3 = rcx_68
                    
                    if (rdx_48.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        var_224_3.d = var_80
                        break
                    
                    rdx_47 = *(r9_11 + (rdx_48 << 2) + 4)
                    int32_t var_228_8 = 0xffffffff
                    
                    if (rdx_47 != 0)
                        goto label_14244a27b
        
        int16_t var_1b0_1 = 0
        int64_t* var_170_1 = &var_a8
        int64_t* var_1b8_1 = &var_a8
        double zmm3[0x2] = var_238_3.o
        zmm0 = 0xffffffff
        double temp0_12[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        double rax_137 = zmm3[0]
        int32_t temp0_13 = _mm_bsrli_si128(0xffffffff, 4)
        zmm0[0] = temp0_12.q
        var_1e8 = (&var_a8).o
        var_1c8.o = zmm0
        
        if (temp0_13 s< *(rax_137 i+ 0x18))
            int32_t i_1 = zmm3[1]:4.d
            
            do
                int64_t rdx_49 = sx.q(i_1) * 3
                int64_t rcx_71 = *var_1e8[0]
                sub_141f24620(*(rcx_71 + (rdx_49 << 3)), (*(rcx_71 + (rdx_49 << 3) + 8))[0].d)
                zmm3[1].d &= not.d(var_1e8[1]:4.d)
                sub_14059bdd0(&var_1e8[1])
                i_1 = zmm3[1]:4.d
            while (i_1 s< *(zmm3[0] i+ 0x18))
            
            if (var_1b0_1.b != 0 && var_1b0_1:1.b != 0)
                sub_14242f120(var_1b8_1, var_1b8_1[1].d - *(var_1b8_1 + 0x34), 1)
    
    int64_t* rax_143 = var_208
    
    if (rax_143 != 0)
        sub_140a74f90(rax_143)
    
    int32_t var_60_1 = 0
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    bool cond:6 = var_a0:4.d == 0
    var_a0.d = 0
    
    if (not(cond:6))
        sub_1405a5130(&var_a8, 0)
    
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    sub_14059a8e0(&var_98, 0)
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    int64_t rcx_80 = var_a8
    
    if (rcx_80 != 0)
        sub_140a74f90(rcx_80)
    
    __security_check_cookie(rax_1 ^ &var_258)
    return zx.q(r12.b)

void* rax_97 = sub_142496850()
void* rbx_8 = rax_97

if (rax_97 == 0)
    rbx_8 = nullptr
else
    void* rax_98 = sub_142496850()
    
    if (rax_98 == 0)
        rbx_8 = nullptr
    else
        int64_t rax_99 = sx.q(*(rax_98 + 0x38))
        
        if (rax_99.d s> *(rbx_8 + 0x38) || *(*(rbx_8 + 0x30) + (rax_99 << 3)) != rax_98 + 0x30)
            rbx_8 = nullptr

var_108 = 5
char var_b0_3 = 0
sub_142442440(&var_100)
sub_1405ab0f0(&var_100, arg1, rbx_8)
char var_b0_4 = 1
sub_14242a940(&var_108)

if (i == 0)
    void* rdi_9 = var_d8
    
    while (true)
        int64_t rbx_9 = sx.q(r13.d)
        r13 = zx.q((rbx_9 + 1).d)
        int32_t var_200_2 = r13.d
        
        if (r13.d s> rsi)
            sub_1405a4d70(&var_208)
            r13 = zx.q(var_200_2)
        
        var_208[rbx_9] = rdi_9
        int32_t r8_20 = var_c8
        int32_t rdx_37 = var_f0
        void* r15_3 = var_100
        int32_t rsi_4 = var_e8 + 1
        
        if (rsi_4 s>= r8_20 + rdx_37)
        label_14244a144:
            int64_t var_d8_3 = 0
            char var_e4_1 = 1
            break
        
        void** r14_4 = sx.q(rsi_4) << 3
        
        while (true)
            if (rsi_4 s>= rdx_37)
                rdi_9 = *(var_d0 + (sx.q(rsi_4 - rdx_37) << 3))
            else
                rdi_9 = *(r14_4 + var_f8)
            
            var_e0 += 1
            
            if (rdi_9 != 0)
                void* rax_107 = sub_141dc9840(rdi_9)
                
                if (rax_107 != 0)
                    void* const rax_114
                    
                    if ((var_108.b & 1) != 0)
                        int32_t rax_108 = *(rdi_9 + 0xc)
                        
                        if (rax_108 s>= data_143e1d9b4)
                            rax_114 = nullptr
                        else
                            int16_t temp10_1
                            int32_t temp11_1
                            temp10_1:temp11_1 = sx.q(rax_108)
                            uint32_t rdx_39 = zx.d(temp10_1)
                            int32_t rax_110 = temp11_1 + rdx_39
                            rax_114 = *(data_143e1d9a0 + (sx.q(rax_110 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_110.w) - rdx_39) * 0x18
                    
                    if ((var_108.b & 1) == 0 || ((*(rax_114 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_59 = var_108
                        
                        if (((rcx_59 u>> 1).b & 1) == 0)
                            goto label_14244a041
                        
                        uint64_t rax_118 = sub_1405949a0()
                        
                        if (rax_118.b != 0)
                            rcx_59 = var_108
                        label_14244a041:
                            
                            if (((rcx_59 u>> 2).b & 1) == 0)
                            label_14244a0e9:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_107) == r15_3)
                                    if (rax_107 == *(r15_3 + 0x30))
                                        break
                                    
                                    void* rax_120 = sub_1425bd0d0()
                                    void* rdx_42 = *(rdi_9 + 0x10)
                                    int64_t rax_121 = sx.q(*(rax_120 + 0x38))
                                    
                                    if (rax_121.d s> *(rdx_42 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_42 + 0x30) + (rax_121 << 3)) != rax_120 + 0x30)
                                        break
                            else
                                if ((*(rax_107 + 0x1f4) & 0x20) == 0
                                        || (*(rax_107 + 0x1f6) & 8) != 0)
                                    rax_118 = zx.q(*(rax_107 + 0x1f5))
                                
                                char r9_10
                                
                                if (((*(rax_107 + 0x1f4) & 0x20) != 0
                                        && (*(rax_107 + 0x1f6) & 8) == 0) || (rax_118.b & 0x40) != 0
                                        || rax_118.b s< 0)
                                    r9_10 = 1
                                else
                                    r9_10 = 0
                                
                                void* rdx_41 = *(rax_107 + 0xb8)
                                char* r8_22 = *(rax_107 + 0x248)
                                uint8_t rcx_60
                                
                                if (rdx_41 != 0)
                                    rax_118 = sx.q(*(rdx_41 + 0x168))
                                    
                                    if (rax_118.d s< 0 || rax_118.d s>= *(rdx_41 + 0x160))
                                        rcx_60 = 0
                                    else
                                        rcx_60 = 1
                                
                                int64_t rcx_62
                                
                                if (rdx_41 == 0 || rcx_60 == 0)
                                    rcx_62 = 0
                                else
                                    rcx_62 = rax_118 * 0x78 + *(rdx_41 + 0x158)
                                
                                if (rcx_62 == 0 || r8_22 == rcx_62)
                                    rcx_62.b = 1
                                else
                                    rcx_62.b = 0
                                
                                if (r8_22 == 0 || *r8_22 == 2)
                                    rax_118.b = 1
                                else
                                    rax_118.b = 0
                                
                                if (rcx_62.b != 0 || rax_118.b != 0)
                                    rax_118.b = 1
                                
                                if (r9_10 != 0 && rax_118.b != 0)
                                    goto label_14244a0e9
                
                r8_20 = var_c8
                rdx_37 = var_f0
            
            rsi_4 += 1
            r14_4 = &r14_4[1]
            
            if (rsi_4 s>= r8_20 + rdx_37)
                goto label_14244a144
        
        void* var_d8_4 = rdi_9
        var_e8 = rsi_4
        
        if (i != 0)
            break
        
        rsi = var_1fc

label_14244a157:
sub_142442440(&var_100)

if (r13.d s<= 0 || var_a0.d - var_74 s<= 0)
    goto label_14244a1dc

int64_t* rdx_43 = var_208
int64_t rbx_11 = 0
int64_t* rdi_10 = rdx_43
void* rcx_66 = &rdx_43[sx.q(r13.d)]
uint64_t rsi_8 = (rcx_66 - rdx_43 + 7) u>> 3

if (rdx_43 u> rcx_66)
    rsi_8 = 0

if (rsi_8 != 0)
    do
        sub_141f8b060(*rdi_10, &var_a8)
        rbx_11 += 1
        rdi_10 = &rdi_10[1]
    while (rbx_11 != rsi_8)

r12.b = 1
goto label_14244a1f3
