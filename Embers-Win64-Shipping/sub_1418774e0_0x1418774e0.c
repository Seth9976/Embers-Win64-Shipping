// 函数: sub_1418774e0
// 地址: 0x1418774e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t rax_1 = __security_cookie ^ &var_738
wchar16 const* const rax_2 = u".chunkdb"
int32_t var_1ec = 0x80
int32_t var_1e8 = 0xffffffff

if (*(arg1 + 0x190) != 0)
    rax_2 = u".delta.chunkdb"

int32_t r14 = 0
int32_t rbx = 0
int32_t var_6a8 = 0
int64_t* var_6b0 = nullptr
int32_t var_6a4 = 0
int64_t var_218
__builtin_memset(&var_218, 0, 0x2c)
int32_t var_1e4 = 0
void* var_1d8 = nullptr
int32_t var_1d0 = 0
double entry_zmm2[0x2]

if (*(arg1 + 0x38) == 0)
    var_6a8 = 1
    sub_1405c5060(&var_6b0)
    int64_t* r10_1 = var_6b0
    rbx = var_6a8
    int64_t* rcx_1 = &r10_1[2]
    *r10_1 = 0
    r10_1[1] = 0
    rcx_1[2] = 0
    rcx_1[3].d = 0
    *(rcx_1 + 0x1c) = 0x80
    int64_t* rax_3 = rcx_1[2]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    *rcx_1 = 0
    rcx_1[1] = 0
    r10_1[6].d = 0xffffffff
    *(r10_1 + 0x34) = 0
    r10_1[8] = 0
    r10_1[9].d = 0
    int64_t* r8_1 = *(arg1 + 0x168)
    int64_t r9_1 = *r8_1
    (*(r9_1 + 0xa8))(r8_1, &r10_1[sx.q(rbx - 1) * 0xa], entry_zmm2, r9_1)
else if (&var_6b0 != arg1 + 0x30)
    sub_141859700(&var_6b0, *(arg1 + 0x30), *(arg1 + 0x38), 0, 0)
    rbx = var_6a8

int64_t rdi = sx.q(*(arg1 + 0x1b0))
int32_t rax_5 = rbx + rdi.d
*(arg1 + 0x1b0) = rax_5

if (rax_5 s> *(arg1 + 0x1b4))
    sub_1405a4f90(arg1 + 0x1a8)

memset((rdi << 4) + *(arg1 + 0x1a8), 0, sx.q(rbx) << 4)
int64_t* rcx_9 = *(arg1 + 0x178)
int32_t var_718
int64_t var_668
int64_t var_658
int128_t* var_648
int512_t zmm1

if (rcx_9 == 0)
    var_668 = *(arg1 + 0x168)
    int64_t* rax_25 = *(arg1 + 0x170)
    
    if (rax_25 != 0)
        rax_25[1].d += 1
    
    void var_328
    void*** rax_27
    rax_27, zmm1 = sub_14187c1b0(sub_1418864b0(&var_328, &var_6b0, &var_668))
    int64_t* rcx_24 = *(arg1 + 0x208)
    
    if (rcx_24 != rax_27)
        *(arg1 + 0x208) = rax_27
        
        if (rcx_24 != 0)
            (**rcx_24)(rcx_24, 1)
    
    if (rax_25 != 0)
        rax_25[1].d -= 1
        
        if (rax_25[1].d == 1)
            (**rax_25)(rax_25)
            int32_t rax_31 = *(rax_25 + 0xc)
            *(rax_25 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rax_25 + 8))(rax_25, 1)
else
    if (*(arg1 + 0x48) == *(arg1 + 0x74))
        (*(*rcx_9 + 0xa8))(rcx_9, &var_218)
    else if (&var_218 != arg1 + 0x40)
        int64_t rbx_1 = sx.q(*(arg1 + 0x88))
        void var_1e0
        sub_1405a4aa0(&var_1e0, 0, rbx_1.d, 4)
        void* rax_8 = *(arg1 + 0x80)
        void* rdx_8 = arg1 + 0x78
        void* rcx_11 = &var_1e0
        
        if (rax_8 != 0)
            rdx_8 = rax_8
        
        if (var_1d8 != 0)
            rcx_11 = var_1d8
        
        memcpy(rcx_11, rdx_8, (rbx_1 << 2).d)
        int32_t var_1d0_1 = rbx_1.d
        sub_141823c70(&var_218, arg1 + 0x40)
    
    var_658 = *(arg1 + 0x178)
    int64_t* rax_11 = *(arg1 + 0x180)
    
    if (rax_11 != 0)
        rax_11[1].d += 1
    
    var_648 = *(arg1 + 0x168)
    int64_t* rax_13 = *(arg1 + 0x170)
    
    if (rax_13 != 0)
        rax_13[1].d += 1
    
    var_718.q = &var_658
    void var_338
    void*** rax_15
    rax_15, zmm1 = sub_14187c1b0(sub_1418868f0(&var_338, &var_6b0, &var_648, &var_218, var_718))
    int64_t* rcx_15 = *(arg1 + 0x208)
    
    if (rcx_15 != rax_15)
        *(arg1 + 0x208) = rax_15
        
        if (rcx_15 != 0)
            (**rcx_15)(rcx_15, 1)
    
    if (rax_13 != 0)
        rax_13[1].d -= 1
        
        if (rax_13[1].d == 1)
            (**rax_13)(rax_13)
            int32_t rax_19 = *(rax_13 + 0xc)
            *(rax_13 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*rax_13 + 8))(rax_13, 1)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t rax_23 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*(*rax_11 + 8))(rax_11, 1)

int64_t var_678 = 0
int64_t var_670 = 0
int64_t var_6a0 = 0
void** const var_3e8
memset(&var_3e8, 0, 0x90)
sub_140b4c2a0(&var_3e8)
int64_t var_358 = 0
var_3e8 = &data_142d6ad48
int64_t* var_350 = &var_678
int64_t var_348 = 0
sub_140b552b0(&var_3e8, 1)
var_3e8[0x1b](&var_3e8, 0)
void var_5b8
sub_141820450(&var_5b8)
sub_141824770(&var_3e8, &var_5b8, zmm1)
int64_t rdi_2 = sx.q(var_670.d)
int32_t rax_34 = var_670:4.d
var_658 = rdi_2
int64_t var_358_1 = 0
var_670.d = 0

if (rax_34 s< 0 && rax_34 != 0)
    sub_1405c5510(&var_678, 0)

int128_t var_560
sub_140b214c0(&var_560)
int32_t var_5a0
int64_t rbx_5 = sx.q(var_5a0)
int64_t var_550 = 0
int32_t var_548 = 0
int32_t rax_35 = (rbx_5 + 1).d
int32_t var_5a0_1 = rax_35
int64_t var_5a8
int32_t var_59c

if (rax_35 s> var_59c)
    sub_1405c4e40(&var_5a8)

int64_t rax_36 = var_5a8
int64_t rcx_37 = rbx_5 << 5
*(rcx_37 + rax_36) = var_560
zmm1.o = var_550.o
*(rcx_37 + rax_36 + 0x10) = zmm1.o
sub_141824770(&var_3e8, &var_5b8, zmm1)
int64_t* rcx_39 = *(arg1 + 0x208)
var_668 = sx.q(var_670.d) - rdi_2
void var_88
(*(*rcx_39 + 8))(rcx_39, &var_88)
int32_t var_80
int32_t var_54

if (var_80 - var_54 s<= 0)
    sub_14188c9d0(arg1, 1)
else
    int64_t* rsi_1 = var_6b0
    int32_t r8_10 = 0
    int32_t i_4 = 0
    void* rdi_3 = nullptr
    int32_t r15_1 = 0
    void* var_6c0 = nullptr
    int32_t i_2 = 0
    void* r12_3 = &rsi_1[sx.q(var_6a8) * 0xa]
    int32_t var_6b4_1 = 0
    int64_t var_178
    __builtin_memset(&var_178, 0, 0x2c)
    int32_t var_14c_1 = 0x80
    int32_t var_148_1 = 0xffffffff
    int32_t var_144_1 = 0
    int64_t var_138_1 = 0
    int32_t var_130_1 = 0
    int32_t var_6d0_1
    void* var_5c8
    
    if (rsi_1 == r12_3)
        var_6d0_1 = 0
    else
        do
            int64_t* rcx_40 = *(arg1 + 0x168)
            int64_t var_268 = 0
            int32_t var_234_1 = 0
            int64_t var_228_1 = 0
            int32_t var_220_1 = 0
            int64_t var_1c8
            __builtin_memset(&var_1c8, 0, 0x2c)
            int32_t var_194_1 = 0
            int64_t var_188_1 = 0
            int32_t var_180_1 = 0
            int32_t var_260_1 = 0
            int32_t var_23c_1 = 0x80
            int64_t var_258
            __builtin_memset(&var_258, 0, 0x1c)
            int32_t var_238_1 = 0xffffffff
            int32_t var_19c_1 = 0x80
            int32_t var_198_1 = 0xffffffff
            (*(*rcx_40 + 0x1a8))(rcx_40, rsi_1, &var_1c8)
            int64_t* rcx_41 = *(arg1 + 0x168)
            (*(*rcx_41 + 0x168))(rcx_41, &var_1c8, &var_268)
            int64_t var_128
            int64_t var_d8
            int64_t* rax_46
            rax_46, entry_zmm2 =
                sub_141835020(sub_141842470(&var_268, &var_128, &var_88), &var_d8, &var_178)
            
            if (&var_268 != rax_46)
                sub_140780e10(&var_268, rax_46)
                void var_230
                
                if (rax_46[8] == 0)
                    memmove(&var_230, &rax_46[7], 4)
                
                if (var_228_1 != 0)
                    sub_140a74f90(var_228_1)
                
                rdi_3 = var_6c0
                var_228_1 = rax_46[8]
                rax_46[8] = 0
                int32_t var_220_2 = rax_46[9].d
                rax_46[9].d = 0
            
            int32_t var_90_1 = 0
            int64_t var_98
            
            if (var_98 != 0)
                sub_140a74f90(var_98)
            
            int32_t var_d0_1 = 0
            int32_t var_cc
            
            if (var_cc != 0)
                sub_1405a5130(&var_d8, 0)
            
            int32_t var_a8_1 = 0xffffffff
            int32_t var_a4_1 = 0
            void var_c8
            sub_14059a8e0(&var_c8, 0)
            int64_t var_b8
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            int64_t rcx_51 = var_d8
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
            
            int32_t var_e0_1 = 0
            int64_t var_e8
            
            if (var_e8 != 0)
                sub_140a74f90(var_e8)
            
            int32_t var_120_1 = 0
            int32_t var_11c
            
            if (var_11c != 0)
                sub_1405a5130(&var_128, 0)
            
            int32_t var_f8_1 = 0xffffffff
            int32_t var_f4_1 = 0
            void var_118
            sub_14059a8e0(&var_118, 0)
            int64_t var_108
            
            if (var_108 != 0)
                sub_140a74f90(var_108)
            
            int64_t rcx_56 = var_128
            
            if (rcx_56 != 0)
                sub_140a74f90(rcx_56)
            
            if (var_260_1 - var_234_1 s> 0)
                r15_1 += 1
                entry_zmm2 = sub_141854830(&var_178, &var_268)
            
            int64_t i_5 = sx.q(i_2)
            int32_t i_3 = (i_5 + 1).d
            i_2 = i_3
            
            if (i_3 s> r14)
                sub_1405c5060(&var_6c0)
                r14 = var_6b4_1
                rdi_3 = var_6c0
                i_2 = i_3
            
            sub_14077e140(i_5 * 0x50 + rdi_3, &var_268)
            int32_t var_180_2 = 0
            
            if (var_188_1 != 0)
                sub_140a74f90(var_188_1)
            
            sub_14059ad90(&var_1c8, 0)
            int64_t var_1a8
            
            if (var_1a8 != 0)
                sub_140a74f90(var_1a8)
            
            int64_t rcx_65 = var_1c8
            
            if (rcx_65 != 0)
                sub_140a74f90(rcx_65)
            
            int32_t var_220_3 = 0
            
            if (var_228_1 != 0)
                sub_140a74f90(var_228_1)
            
            var_260_1 = 0
            int32_t var_238_2 = 0xffffffff
            int32_t var_234_2 = 0
            sub_14059a8e0(&var_258, 0)
            int64_t var_248
            
            if (var_248 != 0)
                sub_140a74f90(var_248)
            
            int64_t rcx_70 = var_268
            
            if (rcx_70 != 0)
                sub_140a74f90(rcx_70)
            
            rsi_1 = &rsi_1[0xa]
        while (rsi_1 != r12_3)
        
        i_4 = i_2
        
        if (r15_1 s<= 1)
            r8_10 = 0
            var_6d0_1 = 0
        else
            sub_140a2e390(&var_5c8, u"%d", zx.q(i_4))
            int32_t var_5c0
            
            if (var_5c0 == 0)
                var_6d0_1 = 0
            else
                var_6d0_1 = var_5c0 - 1
            
            void* rcx_72 = var_5c8
            
            if (rcx_72 != 0)
                sub_140a74f90(rcx_72)
            
            r8_10 = 0
    
    int32_t var_6cc_1 = 0
    int32_t var_608
    uint64_t* var_5d8
    
    if (i_4 s> 0)
        int64_t rax_54 = 0
        int64_t var_6a0_1 = 0
        int32_t rbx_25
        
        do
            void* rbx_9 = rax_54 * 0x50 + rdi_3
            var_5c8 = rbx_9
            
            if (*(rbx_9 + 8) - *(rbx_9 + 0x34) s> 0)
                int64_t r12_4 = sx.q(*(arg1 + 0x1a0))
                void* r14_1 = rbx_9 + 0x10
                int32_t r11_1 = *(r14_1 + 0x18)
                int32_t rcx_73 = 0
                int32_t var_6c4_1 = 0
                int64_t r15_2 = 0
                var_608 = 0
                int32_t var_604_1 = 1
                int32_t var_6d4_1 = (r12_4 - 1).d
                void* var_600_1 = r14_1
                int32_t var_5f8_1 = 0xffffffff
                int64_t var_5f4_1 = 0
                
                if (r11_1 != 0)
                    void* rax_57 = *(r14_1 + 0x10)
                    void* r9_3 = r14_1
                    
                    if (rax_57 != 0)
                        r9_3 = rax_57
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r11_1 - 1)
                    int32_t rdx_30 = *r9_3
                    
                    if (rdx_30 != 0)
                    label_141877fc8:
                        int32_t rax_64 = neg.d(rdx_30) & rdx_30
                        uint64_t rflags_1
                        int32_t temp0_7
                        temp0_7, rflags_1 = _bit_scan_reverse(rax_64)
                        int32_t var_604_2 = rax_64
                        int32_t rax_65
                        
                        if (rax_64 == 0)
                            rax_65 = 0x20
                        else
                            rax_65 = 0x1f - temp0_7
                        
                        var_5f4_1.d = r8_10 - rax_65 + 0x1f
                        
                        if (r8_10 - rax_65 + 0x1f s> r11_1)
                            var_5f4_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_31 = sx.q(rcx_73)
                            r8_10 += 0x20
                            rcx_73 += 1
                            var_5f4_1:4.d = r8_10
                            var_608 = rcx_73
                            
                            if (rdx_31.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_30 = *(r9_3 + (rdx_31 << 2) + 4)
                            var_5f8_1 = 0xffffffff
                            
                            if (rdx_30 != 0)
                                goto label_141877fc8
                        
                        var_5f4_1.d = r11_1
                
                int32_t r10_2 = *(rbx_9 + 0x28)
                var_560.q = rbx_9
                entry_zmm2 = var_5f8_1.o
                var_560 = var_608.o
                int32_t r8_18 = r10_2 s>> 5
                int128_t zmm0_1 = var_560
                int32_t r9_5 = r10_2 & 0xffffffe0
                int32_t var_6c8_1 = r10_2
                var_548.o = entry_zmm2
                entry_zmm2 = _mm_unpackhi_pd(entry_zmm2, entry_zmm2[0])
                int64_t var_518_1 = entry_zmm2.q
                zmm1.o = var_550.o
                int128_t var_538 = zmm0_1
                int128_t var_528_1 = zmm1.o
                
                if (r10_2 != r11_1)
                    void* rax_67 = *(r14_1 + 0x10)
                    void* r10_3 = r14_1
                    
                    if (rax_67 != 0)
                        r10_3 = rax_67
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r11_1 - 1)
                    int32_t rdx_35 = *(r10_3 + (sx.q(r8_18) << 2)) & 0xffffffff << (r10_2.b & 0x1f)
                    
                    if (rdx_35 != 0)
                    label_1418780ab:
                        int32_t rax_74 = neg.d(rdx_35) & rdx_35
                        uint64_t rflags_2
                        int32_t temp0_9
                        temp0_9, rflags_2 = _bit_scan_reverse(rax_74)
                        int32_t rax_75
                        
                        if (rax_74 == 0)
                            rax_75 = 0x20
                        else
                            rax_75 = 0x1f - temp0_9
                        
                        r10_2 = r9_5 - rax_75 + 0x1f
                        var_6c8_1 = r10_2
                        
                        if (r10_2 s> r11_1)
                            r10_2 = r11_1
                            var_6c8_1 = r11_1
                    else
                        while (true)
                            int64_t rcx_78 = sx.q(r8_18)
                            r9_5 += 0x20
                            r8_18 += 1
                            
                            if (rcx_78.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_35 = *(r10_3 + (rcx_78 << 2) + 4)
                            
                            if (rdx_35 != 0)
                                goto label_1418780ab
                        
                        r10_2 = r11_1
                        var_6c8_1 = r11_1
                
                uint64_t rbx_11 = sx.q(var_6d4_1)
                uint64_t rsi_3 = rbx_11 << 5
                r8_10 = 0
                
                while (true)
                    int64_t rax_76 = sx.q(var_528_1:0xc.d)
                    int64_t* rdx_36 = var_538.q
                    
                    if (rax_76.d == r10_2 && var_528_1.q == r14_1 && rdx_36 == var_5c8)
                        break
                    
                    int64_t* rcx_81 = *(arg1 + 0x168)
                    var_648 = *rdx_36 + rax_76 * 0x18
                    int64_t r14_3 = (*(*rcx_81 + 0x188))(rcx_81) + var_668
                    
                    if (r15_2 u< r14_3
                            && (rbx_11.d s< r12_4.d || *(*(arg1 + 0x198) + rsi_3 + 0x18) s> 0))
                        int64_t rdi_4 = sx.q(*(arg1 + 0x1a0))
                        int32_t rax_80 = (rdi_4 + 1).d
                        *(arg1 + 0x1a0) = rax_80
                        
                        if (rax_80 s> *(arg1 + 0x1a4))
                            sub_1405c4e40(arg1 + 0x198)
                        
                        var_6c4_1 += 1
                        var_6d4_1 += 1
                        rsi_3 += 0x20
                        __builtin_memset((rdi_4 << 5) + *(arg1 + 0x198), 0, 0x20)
                        int64_t* rbx_14 = (var_6a0_1 << 4) + *(arg1 + 0x1a8)
                        r15_2 = *(arg1 + 0xb0) - var_658
                        int64_t rdi_5 = sx.q(rbx_14[1].d)
                        int32_t rax_84 = (rdi_5 + 1).d
                        rbx_14[1].d = rax_84
                        
                        if (rax_84 s> *(rbx_14 + 0xc))
                            sub_1405a4cf0(rbx_14)
                        
                        *(*rbx_14 + (rdi_5 << 2)) = var_6d4_1
                    
                    void* rbx_16 = *(arg1 + 0x198) + rsi_3
                    int64_t rdi_6 = sx.q(*(rbx_16 + 0x18))
                    int32_t rax_86 = (rdi_6 + 1).d
                    *(rbx_16 + 0x18) = rax_86
                    
                    if (rax_86 s> *(rbx_16 + 0x1c))
                        sub_1405a4f90(rbx_16 + 0x10)
                    
                    *(*(rbx_16 + 0x10) + rdi_6 * 0x10) = *var_648
                    var_528_1:8.d &= not.d(var_538:0xc.d)
                    sub_14059bdd0(&var_538:8)
                    r10_2 = var_6c8_1
                    int64_t rax_90 = r15_2
                    rbx_11 = zx.q(var_6d4_1)
                    r15_2 -= r14_3
                    r8_10 = 0
                    r14_1 = var_600_1
                    
                    if (rax_90 u<= r14_3)
                        r15_2 = 0
                
                int16_t* rcx_102
                
                if (var_6c4_1 s> 1)
                    int32_t rbx_17 = *(arg1 + 0x98)
                    int64_t rdi_7 = *(arg1 + 0x90)
                    int16_t* var_688 = nullptr
                    
                    if (rbx_17 != 0)
                        sub_1405a4c70(&var_688, rbx_17, 0)
                        memcpy(var_688, rdi_7, rbx_17 * 2)
                    else
                        int32_t var_67c_1 = 0
                    
                    sub_140a2fa70(&var_688, u".delta.chunkdb", 1)
                    sub_140a2fa70(&var_688, u".chunkdb", 1)
                    
                    if (var_6d0_1 s> 0)
                        int64_t var_580
                        sub_140a2e390(&var_580, u".tagset%0*d", zx.q(var_6d0_1))
                        int32_t var_578
                        int32_t r8_23
                        
                        if (var_578 == 0)
                            r8_23 = 0
                        else
                            r8_23 = var_578 - 1
                        
                        sub_140a20ba0(&var_688, var_580, r8_23)
                        int64_t rcx_95 = var_580
                        
                        if (rcx_95 != 0)
                            sub_140a74f90(rcx_95)
                    
                    sub_140a2e390(&var_5d8, u"%d", zx.q(var_6c4_1))
                    uint64_t* rcx_97 = var_5d8
                    
                    if (rcx_97 != 0)
                        sub_140a74f90(rcx_97)
                    
                    if (r12_4.d s< *(arg1 + 0x1a0))
                        int64_t rdi_10 = r12_4 << 5
                        int32_t rsi_5 = 1 - r12_4.d
                        
                        do
                            int16_t* const r8_25 = &data_142d40450
                            
                            if (rbx_17 != 0)
                                r8_25 = var_688
                            
                            wchar16 const* const var_710_1 = rax_2
                            var_718 = rsi_5 + r12_4.d
                            int64_t var_638
                            sub_140a2e390(&var_638, u"%s.part%0*d%s", r8_25)
                            int64_t* rbx_19 = *(arg1 + 0x198) + rdi_10
                            
                            if (rbx_19 != &var_638)
                                int64_t rcx_100 = *rbx_19
                                
                                if (rcx_100 != 0)
                                    sub_140a74f90(rcx_100)
                                
                                *rbx_19 = var_638
                                var_638 = 0
                                int32_t var_630
                                rbx_19[1].d = var_630
                                int32_t var_62c
                                *(rbx_19 + 0xc) = var_62c
                                var_630.q = 0
                            
                            int64_t rcx_101 = var_638
                            
                            if (rcx_101 != 0)
                                sub_140a74f90(rcx_101)
                            
                            r12_4 = zx.q(r12_4.d + 1)
                            rdi_10 += 0x20
                        while (r12_4.d s< *(arg1 + 0x1a0))
                    
                    rcx_102 = var_688
                    
                    if (rcx_102 == 0)
                        r8_10 = 0
                    else
                        sub_140a74f90(rcx_102)
                        r8_10 = 0
                else if (var_6c4_1 == 1)
                    int32_t rbx_20 = *(arg1 + 0x98)
                    int64_t rdi_11 = *(arg1 + 0x90)
                    int16_t* var_698 = nullptr
                    
                    if (rbx_20 != 0)
                        sub_1405a4c70(&var_698, rbx_20, 0)
                        memcpy(var_698, rdi_11, rbx_20 * 2)
                    else
                        int32_t var_68c_1 = 0
                    
                    sub_140a2fa70(&var_698, u".delta.chunkdb", 1)
                    sub_140a2fa70(&var_698, u".chunkdb", 1)
                    sub_140a306e0(&var_698, &data_142e6c320, &data_142fe7d1c, 1)
                    
                    if (var_6d0_1 s> 0)
                        int64_t var_570
                        sub_140a2e390(&var_570, u".tagset%0*d", zx.q(var_6d0_1))
                        int32_t var_568
                        int32_t r8_30
                        
                        if (var_568 == 0)
                            r8_30 = 0
                        else
                            r8_30 = var_568 - 1
                        
                        sub_140a20ba0(&var_698, var_570, r8_30)
                        int64_t rcx_110 = var_570
                        
                        if (rcx_110 != 0)
                            sub_140a74f90(rcx_110)
                    
                    int64_t r8_31 = -1
                    
                    do
                        r8_31 += 1
                    while (rax_2[r8_31] != 0)
                    
                    sub_140a20ba0(&var_698, rax_2, r8_31.d)
                    int64_t* rbx_23 = (sx.q(var_6d4_1) << 5) + *(arg1 + 0x198)
                    
                    if (rbx_23 == &var_698)
                        r8_10 = 0
                    else
                        int16_t* rsi_6 = var_698
                        int32_t r8_32 = *(rbx_23 + 0xc)
                        rbx_23[1].d = rbx_20
                        
                        if (rbx_20 != 0 || r8_32 != 0)
                            sub_1405a4c70(rbx_23, rbx_20, r8_32)
                            memcpy(*rbx_23, rsi_6, rbx_20 * 2)
                            r8_10 = 0
                        else
                            r8_10 = 0
                            *(rbx_23 + 0xc) = 0
                    
                    rcx_102 = var_698
                    
                    if (rcx_102 != 0)
                        sub_140a74f90(rcx_102)
                        r8_10 = 0
                rdi_3 = var_6c0
            
            rbx_25 = var_6cc_1 + 1
            rax_54 = var_6a0_1 + 1
            var_6cc_1 = rbx_25
            var_6a0_1 = rax_54
        while (rbx_25 s< i_2)
    
    int32_t rbx_26 = *(arg1 + 0xa8)
    int64_t rdi_14 = *(arg1 + 0xa0)
    uint64_t var_618 = 0
    int32_t var_610_1 = rbx_26
    
    if (rbx_26 != 0)
        sub_1405a4c70(&var_618, rbx_26, 0)
        memcpy(var_618, rdi_14, rbx_26 * 2)
    else
        int32_t var_60c_1 = 0
    
    var_5d8 = &var_618
    int32_t* var_5d0_1 = &var_608
    int128_t var_438 = var_5d8.o
    void var_318
    void var_308
    sub_1418205a0(&var_308, sub_1406c9ca0(&var_318, &var_438))
    uint64_t rcx_118 = var_618
    
    if (rcx_118 != 0)
        sub_140a74f90(rcx_118)
    
    char var_2c4_1 = 0
    int32_t var_2f8_1 = 0x1e
    void*** rax_99 = sub_1418a1150(*(arg1 + 0x210))
    int64_t* rcx_120 = *(arg1 + 0x2c8)
    
    if (rcx_120 != rax_99)
        *(arg1 + 0x2c8) = rax_99
        
        if (rcx_120 != 0)
            (**rcx_120)(rcx_120, 1)
    
    void*** rax_101 = sub_1418a0680(*(arg1 + 0x1f0), arg1 + 0x220, *(arg1 + 0x210))
    int64_t* rcx_122 = *(arg1 + 0x2d0)
    
    if (rcx_122 != rax_101)
        *(arg1 + 0x2d0) = rax_101
        
        if (rcx_122 != 0)
            (**rcx_122)(rcx_122, 1)
    
    void*** rax_103 = sub_141830df0(*(arg1 + 0x1c8), 0x12)
    int64_t* rcx_124 = *(arg1 + 0x2d8)
    
    if (rcx_124 != rax_103)
        *(arg1 + 0x2d8) = rax_103
        
        if (rcx_124 != 0)
            (**rcx_124)(rcx_124, 1)
    
    int64_t rbx_27 = *(arg1 + 0x208)
    void*** rax_105 = j_sub_140a82f30(0x10)
    
    if (rax_105 == 0)
        rax_105 = nullptr
    else
        rax_105[1] = rbx_27
        *rax_105 = &data_142fe7ee0
    
    void*** rdx_57 = *(arg1 + 0x2e0)
    
    if (rdx_57 != rax_105)
        void*** rcx_125 = rdx_57
        *(arg1 + 0x2e0) = rax_105
        rdx_57 = rax_105
        
        if (rcx_125 != 0)
            (**rcx_125)(rcx_125, 1)
            rdx_57 = *(arg1 + 0x2e0)
    
    void*** rax_107 = sub_1418a1010(0x200, rdx_57, 0, *(arg1 + 0x2c8))
    int64_t* rcx_126 = *(arg1 + 0x2e8)
    
    if (rcx_126 != rax_107)
        *(arg1 + 0x2e8) = rax_107
        
        if (rcx_126 != 0)
            (**rcx_126)(rcx_126, 1)
    
    int64_t rdx_58 = *(arg1 + 0x1f8)
    int128_t var_460
    __builtin_memcpy(&var_460, "333333…", 0x11)
    int32_t var_478
    __builtin_memcpy(&var_478, 
        "\x64\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00", 0x14)
    int32_t var_44c_1 = 0x10
    int32_t var_448_1 = 8
    void*** rax_109 = sub_14187c960(&var_478, rdx_58)
    int64_t* rcx_128 = *(arg1 + 0x2f0)
    
    if (rcx_128 != rax_109)
        *(arg1 + 0x2f0) = rax_109
        
        if (rcx_128 != 0)
            (*(*rcx_128 + 8))(rcx_128, 1)
    
    int64_t var_510
    __builtin_memset(&var_510, 0, 0x2c)
    int32_t var_4e4_1 = 0x80
    int32_t var_4e0_1 = 0xffffffff
    int32_t var_4dc_1 = 0
    int64_t var_4d0_1 = 0
    int32_t var_4c8_1 = 0
    sub_1405af100(&var_510, &var_88)
    int64_t rbx_28 = *(arg1 + 0x1d8)
    int64_t rdi_15 = *(arg1 + 0x1d0)
    int64_t rsi_7 = *(arg1 + 0x2d8)
    int64_t r14_5 = *(arg1 + 0x208)
    int64_t r15_4 = *(arg1 + 0x200)
    int64_t r12_5 = *(arg1 + 0x2e8)
    var_648 = *(arg1 + 0x188)
    var_658 = *(arg1 + 0x2d0)
    int64_t r13_1 = *(arg1 + 0x1b8)
    var_668 = *(arg1 + 0x2f0)
    var_718.q = r14_5
    void var_2b8
    void*** rax_118
    int128_t zmm2
    int128_t entry_zmm3
    int128_t zmm3
    rax_118, zmm2, zmm3 = sub_14187c280(sub_141861750(&var_2b8, &var_308), r13_1, r12_5, r15_4, 
        entry_zmm2, entry_zmm3, var_718, rsi_7, rdi_15, rbx_28, var_668, var_658, var_648, &var_510)
    int64_t* rcx_132 = *(arg1 + 0x2f8)
    
    if (rcx_132 != rax_118)
        *(arg1 + 0x2f8) = rax_118
        
        if (rcx_132 != 0)
            (**rcx_132)(rcx_132, 1)
    
    int32_t r8_39 = *(arg1 + 0x1a0)
    void* rdx_62 = *(arg1 + 0x198)
    void** const var_498 = &data_142da2668
    void*** var_4a8_1 = nullptr
    int64_t (* var_4b8_1)(int64_t* arg1, char* arg2) = sub_14187ad30
    void* var_490_1 = arg1
    int64_t var_628 = 0
    sub_141859620(&var_628, rdx_62, r8_39, 0, 0)
    int64_t rdi_16 = *(arg1 + 0x2d8)
    int64_t rsi_8 = *(arg1 + 0x208)
    int64_t r14_6 = *(arg1 + 0x1d8)
    int64_t r15_5 = *(arg1 + 0x1c8)
    int64_t r12_6 = *(arg1 + 0x2f8)
    void*** rax_120 = j_sub_140a82f30(0xd0)
    void*** rdi_17
    
    if (rax_120 == 0)
        rdi_17 = nullptr
    else
        int64_t (* rdx_63)(int64_t* arg1, char* arg2) = var_4b8_1
        int128_t zmm0_2 = var_498.o
        int64_t var_598 = var_628
        int32_t var_620
        int32_t var_590_1 = var_620
        int32_t var_61c
        int32_t var_58c_1 = var_61c
        int64_t (* var_428)(int64_t* arg1, char* arg2)
        int64_t (** var_700_2)(int64_t* arg1, char* arg2) = &var_428
        var_428 = rdx_63
        
        if (rdx_63 != 0)
            rdx_63 = nullptr
        
        int64_t* var_708_2 = &var_598
        void*** var_418_1 = var_4a8_1
        var_4b8_1 = rdx_63
        int32_t var_718_1
        var_718_1.q = rsi_8
        int128_t var_408_1 = zmm0_2
        var_628 = 0
        int128_t var_488
        int128_t var_3f8_1 = var_488
        var_620.q = 0
        rdi_17 = sub_14185f570(rax_120, r12_6, r15_5, r14_6, zmm2, zmm3, var_718_1, rdi_16, 
            var_708_2, var_700_2)
    
    sub_140846380(&var_628)
    
    if (var_4b8_1 != 0)
        void** const* rcx_137 = &var_498
        
        if (var_4a8_1 != 0)
            rcx_137 = var_4a8_1
        
        (*rcx_137)[2](rcx_137)
    
    int64_t* rcx_138 = *(arg1 + 0x300)
    
    if (rcx_138 != rdi_17)
        *(arg1 + 0x300) = rdi_17
        
        if (rcx_138 != 0)
            (**rcx_138)(rcx_138, 1)
    
    sub_141822a10(&var_308)
    int32_t var_130_2 = 0
    
    if (var_138_1 != 0)
        sub_140a74f90(var_138_1)
    
    sub_14094b3a0(&var_178)
    int32_t i_1 = i_2
    void* rsi_9 = var_6c0
    
    if (i_1 != 0)
        void* rbx_30 = rsi_9 + 0x40
        int32_t i
        
        do
            *(rbx_30 + 8) = 0
            int64_t rcx_142 = *rbx_30
            
            if (rcx_142 != 0)
                sub_140a74f90(rcx_142)
            
            sub_14094b3a0(rbx_30 - 0x40)
            rbx_30 += 0x50
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (rsi_9 != 0)
        sub_140a74f90(rsi_9)

int32_t var_40 = 0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_14094b3a0(&var_88)
int64_t rcx_148 = var_5a8

if (rcx_148 != 0)
    sub_140a74f90(rcx_148)

sub_140b4cb40(&var_3e8)
int64_t rcx_150 = var_678

if (rcx_150 != 0)
    sub_140a74f90(rcx_150)

int32_t var_1d0_2 = 0

if (var_1d8 != 0)
    sub_140a74f90(var_1d8)

sub_14059ad90(&var_218, 0)
int64_t var_1f8

if (var_1f8 != 0)
    sub_140a74f90(var_1f8)

int64_t rcx_154 = var_218

if (rcx_154 != 0)
    sub_140a74f90(rcx_154)

int64_t result = sub_141865be0(&var_6b0)
__security_check_cookie(rax_1 ^ &var_738)
return result
