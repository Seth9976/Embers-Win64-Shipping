// 函数: sub_141cb4450
// 地址: 0x141cb4450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void* var_290 = arg2
void* var_2c8 = arg1
int64_t var_178
__builtin_memset(&var_178, 0, 0x2c)
int32_t var_14c = 0x80
int32_t var_148 = 0xffffffff
int32_t var_144 = 0
void* var_138 = nullptr
int32_t var_130 = 0
int64_t (* var_1c8)()
void** const var_1a8
uint128_t var_198

if (*arg8 == 0)
    void*** rax_2 = nullptr
    var_1a8 = &data_142d42d18
    void*** var_1b8_1 = nullptr
    int64_t (* rcx)() = sub_140759670
    var_1c8 = sub_140759670
    
    if (arg8 != &var_1c8)
        arg6 = *arg8
        arg7 = *(arg8 + 0x10)
        int128_t zmm4 = *(arg8 + 0x20)
        uint128_t zmm5 = *(arg8 + 0x30)
        *arg8 = var_1c8.o
        int128_t zmm0 = var_1a8.o
        *(arg8 + 0x10) = var_1b8_1.o
        arg5 = var_198
        *(arg8 + 0x20) = zmm0
        var_1c8.o = arg6
        rcx = var_1c8
        var_1b8_1.o = arg7
        rax_2 = var_1b8_1
        *(arg8 + 0x30) = arg5
        var_1a8.o = zmm4
        var_198 = zmm5
    
    if (rcx != 0)
        void** const* rcx_1 = &var_1a8
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        (*rcx_1)[2](rcx_1, arg5, arg6, arg7)

int32_t var_354 = 1
int32_t r10 = *(arg1 + 0x1c0)
int64_t* var_300 = arg1 + 0x198
int32_t rcx_2 = 0
int32_t var_358 = 0
void* var_350 = arg1 + 0x1a8
int32_t rdi_1 = 0
int32_t var_348 = 0xffffffff
int64_t var_344 = 0

if (r10 != 0)
    void* rax_4 = *(arg1 + 0x1b8)
    void* r8 = arg1 + 0x1a8
    
    if (rax_4 != 0)
        r8 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r8
    
    if (rdx_3 != 0)
    label_141cb4645:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_354_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_344.d = rdi_1 - rax_12 + 0x1f
        
        if (rdi_1 - rax_12 + 0x1f s> r10)
            var_344.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            rdi_1 += 0x20
            rcx_2 += 1
            var_344:4.d = rdi_1
            var_358 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8 + (rdx_4 << 2) + 4)
            var_348 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141cb4645
        
        var_344.d = r10

int32_t rdx_5 = *(arg1 + 0x1c0)
arg6 = var_348.o
int128_t var_2b8 = var_358.o
int32_t rbx = 0xffffffff << (rdx_5.b & 0x1f)
int32_t rdi_4 = rdx_5 s>> 5
int32_t r8_2 = rdx_5 & 0xffffffe0
int32_t var_2e0 = rbx
int32_t var_2dc = rdx_5
double var_2a8[0x2] = arg6
int64_t var_338 = (_mm_unpackhi_pd(arg6, arg6[0])).q
var_358.o = (arg1 + 0x198).o
var_348.o = var_2b8

if (rdx_5 != r10)
    void* rax_14 = *(arg1 + 0x1b8)
    void* r9 = arg1 + 0x1a8
    
    if (rax_14 != 0)
        r9 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r9 + (sx.q(rdi_4) << 2)) & rbx
    int32_t var_2dc_2
    
    if (rdx_9 != 0)
    label_141cb470d:
        int32_t rax_21 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_4
        
        int32_t var_2dc_1 = r8_2 - rax_22 + 0x1f
        
        if (r8_2 - rax_22 + 0x1f s> r10)
            var_2dc_2 = r10
    else
        while (true)
            int64_t rcx_7 = sx.q(rdi_4)
            r8_2 += 0x20
            rdi_4 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r9 + (rcx_7 << 2) + 4)
            var_2e0 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141cb470d
        
        var_2dc_2 = r10

int64_t* r13 = var_300

while (true)
    int32_t var_33c
    int64_t rax_24 = sx.q(var_33c)
    int64_t* rdx_10 = var_358.q
    int64_t* var_328
    int32_t var_310
    int64_t* var_2f8
    int32_t var_2d0
    
    if (rax_24.d == (var_2e0.q u>> 0x20).d && var_348.q == arg1 + 0x1a8 && rdx_10 == r13)
        if (arg3 != 0)
            int64_t var_168
            var_350 = &var_168
            int32_t rcx_14 = 0
            var_358 = 0
            int32_t var_348_1 = 0xffffffff
            int32_t rdi_7 = 0
            int32_t var_354_2 = 1
            int64_t var_344_1 = 0
            int32_t var_150
            
            if (var_150 != 0)
                int64_t* r8_6 = &var_168
                int64_t* var_158
                
                if (var_158 != 0)
                    r8_6 = var_158
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(var_150 - 1)
                int32_t rdx_15 = *r8_6
                
                if (rdx_15 != 0)
                label_141cb48e5:
                    int32_t rax_41 = neg.d(rdx_15) & rdx_15
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_41)
                    int32_t var_354_3 = rax_41
                    int32_t rax_42
                    
                    if (rax_41 == 0)
                        rax_42 = 0x20
                    else
                        rax_42 = 0x1f - temp0_5
                    
                    int32_t rax_43 = rdi_7 - rax_42 + 0x1f
                    
                    if (rax_43 s> var_150)
                        rax_43 = var_150
                    
                    var_344_1.d = rax_43
                else
                    while (true)
                        int64_t rdx_16 = sx.q(rcx_14)
                        rdi_7 += 0x20
                        rcx_14 += 1
                        var_344_1:4.d = rdi_7
                        var_358 = rcx_14
                        
                        if (rdx_16.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            var_344_1.d = var_150
                            break
                        
                        rdx_15 = *(r8_6 + (rdx_16 << 2) + 4)
                        var_348_1 = 0xffffffff
                        
                        if (rdx_15 != 0)
                            goto label_141cb48e5
            
            arg6 = var_348_1.o
            int64_t* var_2c0_1 = &var_178
            var_2b8 = var_358.o
            int32_t var_2dc_3 = var_150
            double var_2a8_1[0x2] = arg6
            arg5 = var_2b8
            double temp0_6[0x2] = _mm_unpackhi_pd(arg6, arg6[0])
            var_358.o = var_2c0_1.o
            var_348_1.o = arg5
            int64_t var_338_1 = temp0_6.q
            
            while (true)
                int64_t rax_44 = sx.q(var_33c)
                int64_t* rcx_18 = var_358.q
                
                if (rax_44.d == ((0xffffffff << (var_150.b & 0x1f)).q u>> 0x20).d
                        && var_348_1.q == &var_168 && rcx_18 == &var_178)
                    break
                
                sub_141caaef0(*(*rcx_18 + rax_44 * 0x10))
                var_344_1:4.d &= not.d(var_350:4.d)
                sub_14059bdd0(&var_350)
            
            int64_t var_170
            bool cond:9_1 = var_170:4.d == 0
            var_170.d = 0
            
            if (not(cond:9_1))
                sub_1405a5410(&var_178, 0)
            
            int32_t var_148_1 = 0xffffffff
            int32_t var_144_1 = 0
            sub_14059a8e0(&var_168, 0)
            int32_t rax_48 = var_130
            
            if (rax_48 s> 0)
                int64_t rdi_11 = 0
                uint64_t r8_7 = zx.q(rax_48)
                
                while (true)
                    void var_140
                    void* rcx_24 = &var_140
                    int64_t rdx_19 = sx.q(rax_48 - 1) & rdi_11
                    
                    if (var_138 != 0)
                        rcx_24 = var_138
                    
                    rdi_11 += 1
                    *(rcx_24 + (rdx_19 << 2)) = 0xffffffff
                    uint64_t temp10_1 = r8_7
                    r8_7 -= 1
                    
                    if (temp10_1 == 1)
                        break
                    
                    rax_48 = var_130
        
        void* rsi_5 = var_290
        int32_t rcx_25 = 0
        void* var_d8 = nullptr
        int32_t rdi_12 = 0
        int32_t var_a4 = 0
        void* var_98 = nullptr
        int32_t var_90 = 0
        void* r14_2 = rsi_5 + 0x10
        int32_t var_d0 = 0
        int32_t var_ac = 0x80
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x1c)
        int32_t var_a8 = 0xffffffff
        int32_t r10_1 = *(r14_2 + 0x18)
        var_358 = 0
        int32_t var_354_4 = 1
        var_350 = r14_2
        int32_t var_348_2 = 0xffffffff
        int64_t var_344_2 = 0
        
        if (r10_1 != 0)
            void* rax_51 = *(r14_2 + 0x10)
            void* r8_8 = r14_2
            
            if (rax_51 != 0)
                r8_8 = rax_51
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_1 - 1)
            int32_t rdx_22 = *r8_8
            
            if (rdx_22 != 0)
            label_141cb4b26:
                int32_t rax_58 = neg.d(rdx_22) & rdx_22
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_58)
                int32_t var_354_5 = rax_58
                int32_t rax_59
                
                if (rax_58 == 0)
                    rax_59 = 0x20
                else
                    rax_59 = 0x1f - temp0_7
                
                var_344_2.d = rdi_12 - rax_59 + 0x1f
                
                if (rdi_12 - rax_59 + 0x1f s> r10_1)
                    var_344_2.d = r10_1
            else
                while (true)
                    int64_t rdx_23 = sx.q(rcx_25)
                    rdi_12 += 0x20
                    rcx_25 += 1
                    var_344_2:4.d = rdi_12
                    var_358 = rcx_25
                    
                    if (rdx_23.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_22 = *(r8_8 + (rdx_23 << 2) + 4)
                    var_348_2 = 0xffffffff
                    
                    if (rdx_22 != 0)
                        goto label_141cb4b26
                
                var_344_2.d = r10_1
        
        int32_t rdx_24 = *(rsi_5 + 0x28)
        arg6 = var_348_2.o
        var_2b8 = var_358.o
        int32_t rbx_3 = 0xffffffff << (rdx_24.b & 0x1f)
        int32_t rdi_15 = rdx_24 s>> 5
        int32_t r8_10 = rdx_24 & 0xffffffe0
        int32_t var_2e0_2 = rbx_3
        int32_t var_2dc_4 = rdx_24
        double var_2a8_2 = arg6[0]
        int64_t var_338_2 = (_mm_unpackhi_pd(arg6, arg6[0])).q
        var_358.o = rsi_5.o
        var_348_2.o = var_2b8
        
        if (rdx_24 != r10_1)
            void* rax_61 = *(r14_2 + 0x10)
            void* r9_2 = r14_2
            
            if (rax_61 != 0)
                r9_2 = rax_61
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r10_1 - 1)
            int32_t rdx_28 = *(r9_2 + (sx.q(rdi_15) << 2)) & rbx_3
            int32_t var_2dc_6
            
            if (rdx_28 != 0)
            label_141cb4bee:
                int32_t rax_68 = neg.d(rdx_28) & rdx_28
                uint64_t rflags_5
                int32_t temp0_9
                temp0_9, rflags_5 = _bit_scan_reverse(rax_68)
                int32_t r13_1
                
                if (rax_68 == 0)
                    r13_1 = 0x20
                else
                    r13_1 = 0x1f - temp0_9
                
                int32_t var_2dc_5 = r8_10 - r13_1 + 0x1f
                
                if (r8_10 - r13_1 + 0x1f s> r10_1)
                    var_2dc_6 = r10_1
            else
                while (true)
                    int64_t rcx_30 = sx.q(rdi_15)
                    r8_10 += 0x20
                    rdi_15 += 1
                    
                    if (rcx_30.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_28 = *(r9_2 + (rcx_30 << 2) + 4)
                    var_2e0_2 = 0xffffffff
                    
                    if (rdx_28 != 0)
                        goto label_141cb4bee
                
                var_2dc_6 = r10_1
        
        int64_t* r12_3 = var_300
        void* r13_2 = var_2c8
        
        while (true)
            int64_t rax_70 = sx.q(var_33c)
            int64_t* rdx_29 = var_358.q
            int32_t var_308
            
            if (rax_70.d == (var_2e0_2.q u>> 0x20).d && var_348_2.q == r14_2 && rdx_29 == rsi_5)
                int32_t var_b0
                int32_t r8_15 = var_b0
                int32_t var_fc = 0x80
                int64_t var_128
                __builtin_memset(&var_128, 0, 0x2c)
                int32_t rdi_20 = 0
                int32_t var_f8 = 0xffffffff
                int32_t var_f4 = 0
                void* var_e8 = nullptr
                int32_t var_e0 = 0
                int64_t var_88
                __builtin_memset(&var_88, 0, 0x2c)
                int32_t var_5c = 0x80
                int32_t var_58 = 0xffffffff
                int32_t var_54 = 0
                int64_t var_48 = 0
                int32_t var_40 = 0
                void* var_258 = nullptr
                int64_t var_250 = 0
                int64_t var_320 = 0
                int64_t var_318 = 0
                var_358 = 0
                int32_t var_354_6 = 1
                var_350 = &var_c8
                int32_t var_348_3 = 0xffffffff
                int64_t var_344_3 = 0
                int64_t var_120
                
                if (r8_15 != 0)
                    sub_14059bdd0(&var_358)
                    r8_15 = var_b0
                    rdi_20 = var_120:4.d
                
                arg6 = var_348_3.o
                int32_t var_2dc_7 = r8_15
                int128_t var_278 = var_358.o
                uint64_t rdx_48 = (0xffffffff << (r8_15.b & 0x1f)).q u>> 0x20
                double var_268 = arg6[0]
                uint64_t var_228 = rdx_48
                arg5 = var_278
                double temp0_10[0x2] = _mm_unpackhi_pd(arg6, arg6[0])
                void* var_2c0_2
                var_2c0_2.o = (&var_d8).o
                var_2b8 = arg5
                var_2a8_2 = temp0_10.q
                
                while (true)
                    int64_t rax_101 = sx.q(var_2a8_2:4.d)
                    
                    if (rax_101.d == rdx_48.d && var_2b8:8.q == &var_c8 && var_2c0_2 == &var_d8)
                        int64_t rcx_85 = var_320
                        
                        if (rcx_85 != 0)
                            sub_140a74f90(rcx_85)
                        
                        void* rcx_86 = var_258
                        
                        if (rcx_86 != 0)
                            sub_140a74f90(rcx_86)
                        
                        sub_1405ae080(&var_88)
                        int32_t var_e0_1 = 0
                        
                        if (var_e8 != 0)
                            sub_140a74f90(var_e8)
                        
                        sub_14100e680(&var_128)
                        int32_t var_90_1 = 0
                        
                        if (var_98 != 0)
                            sub_140a74f90(var_98)
                        
                        sub_140597460(&var_d8)
                        int32_t var_130_1 = 0
                        
                        if (var_138 != 0)
                            sub_140a74f90(var_138)
                        
                        void* result = sub_14100e680(&var_178)
                        
                        if (*arg8 != 0)
                            void* rax_131 = arg8[2]
                            void* rcx_94 = &arg8[4]
                            
                            if (rax_131 != 0)
                                rcx_94 = rax_131
                            
                            result = (*(*rcx_94 + 0x10))(rcx_94, arg8)
                        
                        __security_check_cookie(rax_1 ^ &var_388)
                        return result
                    
                    int64_t* rax_103 = (rax_101 << 5) + *var_2c0_2
                    int64_t* rsi_7 = rax_103[1]
                    void* r14_3 = *rax_103
                    int64_t rax_104 = sx.q(rax_103[2].d)
                    void* var_238_1 = r14_3
                    var_328 = rsi_7
                    void* r12_4 = &rsi_7[rax_104]
                    void* var_230_1 = r12_4
                    
                    if (rsi_7 != r12_4)
                        while (true)
                            var_2f8 = *rsi_7
                            
                            if (var_120.d != var_f4)
                                var_120.d = 0
                                
                                if (rdi_20 s< 0 && rdi_20 != 0)
                                    sub_1405a5410(&var_128, 0)
                                
                                int32_t var_f8_1 = 0xffffffff
                                var_f4 = 0
                                int64_t var_118
                                sub_140774790(&var_118)
                                int64_t rcx_56 = sx.q(var_e0)
                                
                                if (rcx_56 s> 0)
                                    void var_f0
                                    void* rdi_21 = &var_f0
                                    
                                    if (var_e8 != 0)
                                        rdi_21 = var_e8
                                    
                                    __builtin_memset(rdi_21, 0xffffffff, rcx_56 << 2)
                            
                            sub_1408d84f0(&var_88)
                            int32_t rax_108 = var_318:4.d
                            int32_t i = 0
                            var_318.d = 0
                            
                            if (rax_108 s< 0 && rax_108 != 0)
                                sub_1405c5570(&var_320, 0)
                                i = var_318.d
                            
                            int64_t* rbx_6 = var_2f8
                            var_1c8 = &var_2f8
                            var_300 = rbx_6
                            int64_t** var_1c0_1 = &var_300
                            int64_t* var_1b0_1 = &var_88
                            var_1a8 = &var_258
                            int64_t* var_1a0_1 = &var_320
                            var_198.q = &var_128
                            var_198:8.q = &var_d8
                            int64_t* var_188_1 = &var_178
                            var_2c8 = r14_3
                            void var_248
                            
                            if (*sub_1408296b0(&var_128, &var_248, r14_3) == 0xffffffff)
                                void var_244
                                int32_t* rax_110 = sub_1408296b0(&var_178, &var_244, r14_3)
                                int32_t rcx_61 = 1
                                var_310 = 0x18
                                
                                if (*rax_110 != 0xffffffff)
                                    rcx_61 = 3
                                
                                void* rax_111 = arg8[2]
                                var_308 = rcx_61
                                void* rcx_62 = &arg8[4]
                                
                                if (rax_111 != 0)
                                    rcx_62 = rax_111
                                
                                int32_t rax_114 = (*arg8)((*(*rcx_62 + 8))(rcx_62), rbx_6, rbx_6, 
                                    r14_3, &var_310, &var_308)
                                
                                if (rax_114 != 0)
                                    var_2d0 = 0x10
                                    var_358.q = &var_2c8
                                    var_350 = &var_2d0
                                    void var_240
                                    sub_1408419d0(&var_88, &var_240, &var_358, nullptr)
                                    
                                    if (rax_114 == 2)
                                        int64_t rdi_23 = sx.q(var_318.d)
                                        int32_t rax_115 = (rdi_23 + 1).d
                                        var_318.d = rax_115
                                        
                                        if (rax_115 s> var_318:4.d)
                                            sub_1405a4d70(&var_320)
                                        
                                        *(var_320 + (rdi_23 << 3)) = var_2c8
                                
                                i = var_318.d
                            
                            if (arg4 != 0 && i != 0)
                                uint128_t var_218
                                var_310.q = &var_218
                                
                                do
                                    int64_t r10_2 = var_320
                                    int64_t* rbx_7 = *(r10_2 + (sx.q(i - 1) << 3))
                                    
                                    if (0 != 0)
                                        memmove(r10_2 + (sx.q(i - 1) << 3), r10_2 + (sx.q(i) << 3), 
                                            0 << 3)
                                        i = var_318.d
                                    
                                    var_318.d = i - 1
                                    sub_1405c53d0(&var_320)
                                    var_300 = rbx_7
                                    sub_141c8f0c0(&var_128, &var_290, &var_300, nullptr)
                                    int64_t* rdi_25 = var_300
                                    var_218 = var_1c8.o
                                    uint128_t var_208_1 = arg8.o
                                    uint128_t var_1f8_1 = var_1a8.o
                                    uint128_t var_1e8_1 = var_198
                                    uint64_t var_1d8_1 = var_188_1
                                    
                                    if ((arg4 & 2) != 0)
                                        sub_141c977c0(&var_310, &rdi_25[4], 2)
                                    
                                    if ((arg4 & 1) != 0)
                                        sub_141c977c0(&var_310, &rdi_25[6], 1)
                                    
                                    if ((arg4 & 0x10) != 0)
                                        sub_141c977c0(&var_310, &rdi_25[0xc], 0x10)
                                    
                                    if ((arg4 & 8) != 0)
                                        sub_141c977c0(&var_310, &rdi_25[0xa], 8)
                                    
                                    if ((arg4 & 4) != 0)
                                        sub_141c977c0(&var_310, &rdi_25[8], 4)
                                    
                                    i = var_318.d
                                while (i != 0)
                                
                                rsi_7 = var_328
                                r14_3 = var_238_1
                                r12_4 = var_230_1
                            
                            int32_t var_60
                            int32_t rdi_26 = var_60
                            int32_t var_2ec_1 = 1
                            int32_t var_2f0 = 0
                            int64_t var_78
                            int64_t* var_2e8_1 = &var_78
                            int32_t var_2e0_4 = 0xffffffff
                            var_2dc_7.q = 0
                            
                            if (rdi_26 != 0)
                                sub_14059bdd0(&var_2f0)
                                rdi_26 = var_60
                            
                            arg6 = var_2e0_4.o
                            uint128_t zmm0_1 = var_2f0.o
                            var_1c8 = &var_88
                            var_1b0_1.o = arg6
                            var_2dc_7 = rdi_26
                            var_1c0_1.o = zmm0_1
                            zmm0_1 = var_1c8.o
                            double temp0_11[0x2] = _mm_unpackhi_pd(arg6, arg6[0])
                            void** var_280
                            var_280.o = zmm0_1
                            var_278 = arg8.o
                            var_268 = temp0_11.q
                            
                            while (true)
                                int64_t rax_124 = sx.q(var_268:4.d)
                                
                                if (rax_124.d == ((0xffffffff << (rdi_26.b & 0x1f)).q u>> 0x20).d
                                        && var_278:8.q == &var_78 && var_280 == &var_88)
                                    break
                                
                                void** rdi_27 = *var_280 + rax_124 * 0x18
                                int64_t* rcx_81 = *rdi_27 + 0x70
                                var_328 = var_2f8
                                sub_1405a7050(rcx_81, &var_328)
                                sub_141c98300(var_2f8, *rdi_27, (rdi_27[1].d).b, 0)
                                var_268.d &= not.d(var_278:4.d)
                                sub_14059bdd0(&var_278)
                            
                            rsi_7 = &rsi_7[1]
                            var_328 = rsi_7
                            
                            if (rsi_7 == r12_4)
                                break
                            
                            rdi_20 = var_120:4.d
                    
                    var_2a8_2.d &= not.d(var_2b8:4.d)
                    sub_14059bdd0(&var_2b8)
                    rdx_48 = var_228
                    rdi_20 = var_120:4.d
            
            int64_t* rbx_4 = *rdx_29 + rax_70 * 0x48
            sub_141c9fe70(r12_3, &var_308, &rbx_4[4])
            int64_t rax_72 = sx.q(var_308)
            void* const rax_75
            
            if (rax_72.d == 0xffffffff)
                rax_75 = nullptr
            else
                rax_75 = rax_72 * 0x30 + *r12_3
            
            int64_t** rdi_16 = rax_75 + 0x20
            
            if (rax_75 == 0)
                rdi_16 = nullptr
            
            int64_t* rdi_17
            
            if (rdi_16 == 0)
                rdi_17 = nullptr
            else
                rdi_17 = *rdi_16
            
            var_328 = rdi_17
            
            if (rdi_17 != 0)
                uint32_t rcx_35 = (rdi_17 u>> 4).d
                int32_t rdx_32 = (0x9e3779b9 - rcx_35) ^ rcx_35 << 8
                int32_t r9_5 = neg.d(rdx_32 + rcx_35) ^ rdx_32 u>> 0xd
                int32_t rcx_38 = (rcx_35 - rdx_32 - r9_5) ^ r9_5 u>> 0xc
                int32_t rdx_35 = (rdx_32 - rcx_38 - r9_5) ^ rcx_38 << 0x10
                int32_t r9_8 = (r9_5 - rdx_35 - rcx_38) ^ rdx_35 u>> 5
                int32_t rcx_41 = (rcx_38 - rdx_35 - r9_8) ^ r9_8 u>> 3
                int32_t rdx_38 = (rdx_35 - rcx_41 - r9_8) ^ rcx_41 << 0xa
                int32_t r9_11 = (r9_8 - rdx_38 - rcx_41) ^ rdx_38 u>> 0xf
                void* rdi_18
                
                if (var_d0 == var_a4)
                labelid_1c:
                    rdi_18 = sub_1413b8b20(&var_d8, r9_11, &var_328)
                else
                    void var_a0
                    void* rcx_42 = &var_a0
                    
                    if (var_98 != 0)
                        rcx_42 = var_98
                    
                    int32_t rax_95 = *(rcx_42 + ((sx.q(var_90 - 1) & sx.q(r9_11)) << 2))
                    
                    if (rax_95 == 0xffffffff)
                    label_141cb4d8e:
                        rdi_18 = sub_1413b8b20(&var_d8, r9_11, &var_328)
                    else
                        void* r8_13 = var_d8
                        int64_t rcx_44
                        
                        while (true)
                            rcx_44 = sx.q(rax_95) << 5
                            
                            if (*(r8_13 + rcx_44) == rdi_17)
                                break
                            
                            rax_95 = *(r8_13 + rcx_44 + 0x18)
                            
                            if (rax_95 == 0xffffffff)
                                goto label_141cb4d8e_2
                        
                        if (rax_95 == 0xffffffff)
                        label_141cb4d8e_1:
                            rdi_18 = sub_1413b8b20(&var_d8, r9_11, &var_328)
                        else
                            void* rdi_19 = r8_13 + rcx_44
                            
                            if (rdi_19 == 0)
                            label_141cb4d8e_2:
                                rdi_18 = sub_1413b8b20(&var_d8, r9_11, &var_328)
                            else
                                rdi_18 = rdi_19 + 8
                
                int128_t* rax_97 = sub_141c9a300(r13_2 + 8, rbx_4)
                int64_t rbx_5 = sx.q(*(rdi_18 + 8))
                int32_t rcx_47 = (rbx_5 + 1).d
                *(rdi_18 + 8) = rcx_47
                
                if (rcx_47 s> *(rdi_18 + 0xc))
                    sub_1405a4d70(rdi_18)
                
                *(*rdi_18 + (rbx_5 << 3)) = rax_97
                rsi_5 = var_290
            
            var_344_2:4.d &= not.d(var_350:4.d)
            sub_14059bdd0(&var_350)
    
    var_2f8 = &var_178
    void* r14_1 = *(*rdx_10 + rax_24 * 0x30 + 0x20)
    int64_t rbx_1 = 0
    int64_t* rdi_5 = *(r14_1 + 0x60)
    uint64_t rsi_2 = sx.q(*(r14_1 + 0x68)) << 3 u>> 3
    
    if (rdi_5 u> &rdi_5[sx.q(*(r14_1 + 0x68))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_11 = var_2f8
            var_328 = *rdi_5
            sub_141c8f0c0(rcx_11, &var_2d0, &var_328, nullptr)
            rbx_1 += 1
            rdi_5 = &rdi_5[1]
        while (rbx_1 != rsi_2)
    
    int64_t* rdi_6 = *(r14_1 + 0x50)
    int64_t rbx_2 = 0
    uint64_t rsi_4 = sx.q(*(r14_1 + 0x58)) << 3 u>> 3
    
    if (rdi_6 u> &rdi_6[sx.q(*(r14_1 + 0x58))])
        rsi_4 = 0
    
    if (rsi_4 != 0)
        do
            int64_t* rcx_12 = var_2f8
            var_328 = *rdi_6
            sub_141c8f0c0(rcx_12, &var_310, &var_328, nullptr)
            rbx_2 += 1
            rdi_6 = &rdi_6[1]
        while (rbx_2 != rsi_4)
    
    var_344:4.d &= not.d(var_350:4.d)
    sub_14059bdd0(&var_350)
