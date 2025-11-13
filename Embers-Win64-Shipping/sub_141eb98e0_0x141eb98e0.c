// 函数: sub_141eb98e0
// 地址: 0x141eb98e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_268
int64_t rax_2 = __security_cookie ^ &var_268
char rax_3 = sub_141dcdf70(arg2)
int32_t rdx_1 = *(arg2 + 0x1a8) - *(arg2 + 0x1d4)
int32_t rdi_1 = 0
void* var_58_1 = nullptr
int32_t var_50_1 = 0
int32_t var_4c_1 = 0x18
void var_118

if (rdx_1 s> 0x18)
    sub_141dd5f20(&var_118, rdx_1)

int64_t rdx_2 = *(arg2 + 0x130)
void* var_1c8 = arg2
void* var_1c0_1 = &var_118

if (rdx_2 != 0)
    sub_141eb8240(&var_1c8, rdx_2)

int32_t var_22c_1 = 1
int32_t r9_1 = *(arg2 + 0x1c8)
int32_t rcx_3 = 0
int32_t var_230 = 0
void* var_228_1 = arg2 + 0x1b0
int32_t var_220_1 = 0xffffffff
int32_t var_21c_1 = 0

if (r9_1 != 0)
    void* rax_4 = *(arg2 + 0x1c0)
    void* r8 = arg2 + 0x1b0
    
    if (rax_4 != 0)
        r8 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9_1 - 1)
    int32_t rdx_5 = *r8
    
    if (rdx_5 != 0)
    label_141eb9a27:
        int32_t rax_11 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_22c_2 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_21c_1 = rdi_1 - rax_12 + 0x1f
        
        if (rdi_1 - rax_12 + 0x1f s> r9_1)
            var_21c_1 = r9_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_3)
            rdi_1 += 0x20
            rcx_3 += 1
            var_21c_1 = rdi_1
            var_230 = rcx_3
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r8 + (rdx_6 << 2) + 4)
            var_220_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141eb9a27
        
        var_21c_1 = r9_1

int32_t rdx_7 = *(arg2 + 0x1c8)
double zmm2[0x2] = var_220_1.o
var_21c_1 = rdx_7
double var_198_1[0x2] = zmm2
int128_t var_1a8_1 = var_230.o
int32_t rbx_1 = 0xffffffff << (rdx_7 & 0x1f).b
int32_t rdi_4 = rdx_7 s>> 5
int32_t r8_2 = rdx_7 & 0xffffffe0
int64_t var_1d8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_220_2 = rbx_1
int128_t var_1f8 = (arg2 + 0x1a0).o
int128_t var_1e8_1 = var_1a8_1

if (rdx_7 != r9_1)
    void* rax_16 = *(arg2 + 0x1c0)
    void* r10_1 = arg2 + 0x1b0
    
    if (rax_16 != 0)
        r10_1 = rax_16
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_1 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(rdi_4) << 2)) & rbx_1
    
    if (rdx_11 != 0)
    label_141eb9b05:
        int32_t rax_22 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_4
        
        var_21c_1 = r8_2 - rax_23 + 0x1f
        
        if (r8_2 - rax_23 + 0x1f s> r9_1)
            var_21c_1 = r9_1
    else
        while (true)
            int64_t rcx_7 = sx.q(rdi_4)
            r8_2 += 0x20
            rdi_4 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_7 << 2) + 4)
            var_220_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141eb9b05
        
        var_21c_1 = r9_1

while (true)
    int64_t rdx_12 = sx.q(var_1e8_1:0xc.d)
    int32_t rax_15
    
    if (rdx_12.d != (var_220_2.q u>> 0x20).d || var_1e8_1.q != arg2 + 0x1b0)
        rax_15.b = 0
    else
        rax_15.b = 1
    
    int64_t* rcx_9 = var_1f8.q
    
    if (rax_15.b == 0 || rcx_9 != arg2 + 0x1a0)
        rax_15.b = 1
    else
        rax_15.b = 0
    
    if (rax_15.b == 0)
        break
    
    void* rdi_5 = *(*rcx_9 + rdx_12 * 0x10)
    
    if (rdi_5 != 0)
        void* rax_26 = sub_1425881f0()
        void* rdx_13 = *(rdi_5 + 0x10)
        int64_t rax_27 = sx.q(*(rax_26 + 0x38))
        
        if (rax_27.d s> *(rdx_13 + 0x38) || *(*(rdx_13 + 0x30) + (rax_27 << 3)) != rax_26 + 0x30)
            int64_t rbx_2 = sx.q(var_50_1)
            int32_t rax_31 = (rbx_2 + 1).d
            var_50_1 = rax_31
            
            if (rax_31 s> var_4c_1)
                sub_141a14450(&var_118, rbx_2.d)
            
            void* rcx_14 = &var_118
            
            if (var_58_1 != 0)
                rcx_14 = var_58_1
            
            *(rcx_14 + (rbx_2 << 3)) = rdi_5
        else if (rdi_5 != *(arg2 + 0x130))
            void* rax_29 = *(rdi_5 + 0xc0)
            
            if (rax_29 == 0 || *(rax_29 + 0xa0) != arg2)
                sub_141eb8240(&var_1c8, rdi_5)
            else if ((*(rdi_5 + 0x88) & 1) == 0)
                for (int64_t* i = *(rax_29 + 0xd0); i != &i[sx.q(*(rax_29 + 0xd8))]; i = &i[1])
                    if (*i == rdi_5)
                        goto label_141eb9c40
                
                sub_141eb8240(&var_1c8, rdi_5)
    
label_141eb9c40:
    var_1e8_1:8.d &= not.d(var_1f8:0xc.d)
    sub_14059bdd0(&var_1f8:8)

int64_t var_168
__builtin_memset(&var_168, 0, 0x2c)
int32_t var_13c_1 = 0x80
int32_t var_138_1 = 0xffffffff
int32_t var_134_1 = 0
int64_t var_128_1 = 0
int32_t var_120_1 = 0

if (var_50_1 s> 0)
    sub_1409d93a0(&var_168, var_50_1)
    int32_t rdx_19
    
    if (var_50_1 u< 4)
        rdx_19 = 1
    else
        uint32_t rdi_7 = var_50_1 u>> 1
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rdi_7 + 8)
        int32_t rcx_17
        
        if (rdi_7 == 0xfffffff8)
            rcx_17 = 0x20
        else
            rcx_17 = 0x1f - temp0_5
        
        int32_t rcx_19 = rcx_17 << 0x1a s>> 0x1f
        uint64_t rflags_4
        char temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rdi_7 + 7)
        char rdx_18
        
        if (rcx_19 == 0)
            rdx_18 = 0x20
        else
            rdx_18 = 0x1f - temp0_6
        
        rdx_19 = 1 << ((not.d(rcx_19)).b & (0x20 - rdx_18))
    
    if (var_120_1 == 0 || var_120_1 s< rdx_19)
        int32_t var_120_2 = rdx_19
        sub_1405c0420(&var_168)

void* rdi_9 = &var_118
int64_t rbx_3 = 0

if (var_58_1 != 0)
    rdi_9 = var_58_1

int64_t rsi_3 = sx.q(var_50_1) << 3
uint64_t rsi_4 = rsi_3 u>> 3

if (rdi_9 u> rdi_9 + rsi_3)
    rsi_4 = 0

int32_t var_210

if (rsi_4 != 0)
    do
        void* rcx_23 = *rdi_9
        void* var_1d0 = rcx_23
        
        if (rax_3 != 0)
            goto label_141eb9d5f
        
        if (sub_141ee7380(rcx_23) != 0)
            rcx_23 = var_1d0
        label_141eb9d5f:
            var_1c8 = sub_140d209c0(rcx_23)
            var_230.q = &var_1d0
            void** var_228_2 = &var_1c8
            sub_140bd29a0(&var_168, &var_210, &var_230, nullptr)
        
        rdi_9 += 8
        rbx_3 += 1
    while (rbx_3 != rsi_4)

int32_t rax_45 = arg1[1].d
int64_t* var_178_1 = nullptr
int32_t var_16c_1 = 0x80
uint64_t rbx_5 = zx.q((rax_45 + 0x1f) u>> 5)
int64_t var_188

if (rbx_5.d u> 4)
    sub_1405a4a00(&var_188, 0, rbx_5.d, 4)
    int64_t* rsi_5 = &var_188
    int32_t var_16c_2 = rbx_5.d << 5
    
    if (var_178_1 != 0)
        rsi_5 = var_178_1
    
    if (rbx_5.d u> 8)
        memset(rsi_5, 0xff, zx.q(rbx_5.d) << 2)
    else if (rbx_5.d != 0)
        __builtin_memset(rsi_5, 0xffffffff, zx.q(rbx_5.d) << 2)
    
    void* rdx_21 = rsi_5 + (zx.q((rbx_5 - 1).d) << 2)
    *rdx_21 &= 0xffffffff u>> ((neg.d(rax_45)).b & 0x1f)
else if (rbx_5.d == 0)
    var_188 = 0
    int64_t var_180_1 = 0
else
    int32_t rax_51 = (rbx_5 - 1).d
    
    if (rax_51 s> 8)
        memset(&var_188, 0xff, (rbx_5 << 2) + -fffffffffffffffc)
    else if (rax_51 s> 0)
        __builtin_memset(&var_188, 0xffffffff, ((rbx_5 << 2) + -fffffffffffffffc) u>> 2 << 2)
    
    void* rdi_11 = &var_188 + (rbx_5 << 2)
    *(&var_188 + (zx.q((rbx_5 - 1).d) << 2)) = 0xffffffff u>> ((neg.d(rax_45)).b & 0x1f)
    
    if (4 - rbx_5.d s> 8)
        memset(rdi_11, 0, (4 - zx.q(rbx_5.d)) << 2)
    else if (4 - rbx_5.d s> 0)
        __builtin_memset(rdi_11, 0, (4 - zx.q(rbx_5.d)) << 2 u>> 2 << 2)

int32_t i_1 = 0

if (arg1[1].d s> 0)
    int32_t rbx_6 = 1
    int64_t r14_3 = 0
    
    do
        void* rsi_6 = *arg1
        char rax_55
        
        if (sub_140d3e110(rsi_6 + 8 + r14_3) == 0 || *(rsi_6 + r14_3 + 0x10) == 0)
            rax_55 = 0
        else
            rax_55 = 1
        
        if (rax_55 == 0)
            int64_t* rcx_45 = &var_188
            
            if (var_178_1 != 0)
                rcx_45 = var_178_1
            
            int32_t i_3 = i_1
            
            if (i_1 s< 0)
                i_3 = i_1 + 0x1f
            
            void* rcx_46 = rcx_45 + (sx.q(i_3 s>> 5) << 2)
            *rcx_46 &= not.d(rbx_6)
        
        i_1 += 1
        rbx_6 = rol.d(rbx_6, 1)
        r14_3 += 0x28
    while (i_1 s< arg1[1].d)

void* r15_2 = &var_118
int64_t r12_2 = 0

if (var_58_1 != 0)
    r15_2 = var_58_1

int64_t r13_2 = sx.q(var_50_1) << 3
uint64_t r13_3 = r13_2 u>> 3

if (r15_2 u> r15_2 + r13_2)
    r13_3 = 0

if (r13_3 != 0)
    do
        void* rsi_7 = *r15_2
        
        if (rsi_7 != 0)
            bool rax_64
            
            if (rax_3 == 0)
                rax_64 = sub_141ee7380(rsi_7)
            
            if (rax_3 != 0 || rax_64 != 0)
                sub_140865c40(&var_168, &var_210, rsi_7)
                int64_t rax_65 = sx.q(var_210)
                void* const rcx_49
                
                if (rax_65.d == 0xffffffff)
                    rcx_49 = nullptr
                else
                    rcx_49 = var_168 + rax_65 * 0x18
                
                void* r14_4 = *(rcx_49 + 8)
                int32_t rcx_50 = 0
                var_230 = 0
                int32_t rdx_26 = 1
                int32_t var_22c_3 = 1
                int32_t rbx_7 = 0
                int64_t* var_228_3 = &var_188
                int32_t r8_12 = -1
                var_21c_1 = 0
                int32_t rdi_12 = 0
                var_21c_1 = 0
                
                if (rax_45 != 0)
                    int64_t* r10_2 = &var_188
                    
                    if (var_178_1 != 0)
                        r10_2 = var_178_1
                    
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q(rax_45 - 1)
                    int32_t i_2 = *r10_2
                    
                    while (i_2 == 0)
                        int64_t rdx_29 = sx.q(rcx_50)
                        rdi_12 += 0x20
                        rcx_50 += 1
                        var_21c_1 = rdi_12
                        var_230 = rcx_50
                        
                        if (rdx_29.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                            goto label_141eba19d
                        
                        i_2 = *(r10_2 + (rdx_29 << 2) + 4)
                        r8_12 = -1
                    
                    rdx_26 = neg.d(i_2) & i_2
                    uint64_t rflags_5
                    int32_t temp0_7
                    temp0_7, rflags_5 = _bit_scan_reverse(rdx_26)
                    var_22c_3 = rdx_26
                    int32_t rax_72
                    
                    if (rdx_26 == 0)
                        rax_72 = 0x20
                    else
                        rax_72 = 0x1f - temp0_7
                    
                    rbx_7 = rdi_12 - rax_72 + 0x1f
                    var_21c_1 = rbx_7
                
                if ((rax_45 == 0 || rbx_7 s<= rax_45) && rbx_7 s< rax_45)
                    while (true)
                        int64_t* rdi_14 = *(*arg1 + sx.q(rbx_7) * 0x28 + 0x10)
                        void* rax_76 = rdi_14[1]
                        int64_t rcx_53
                        
                        if (rax_76 == 0)
                            rcx_53 = 0
                        else
                            rcx_53 = *(rax_76 + 0x10)
                        
                        if (rcx_53 == *(r14_4 + 0x10))
                            char rcx_54 = rdi_14[2].b
                            
                            if (*(rsi_7 + 0x8c) == rcx_54)
                                if (r14_4 == rax_76)
                                label_141eba110:
                                    
                                    if (rcx_54 != 2)
                                    label_141eba165:
                                        (*(*rdi_14 + 0x10))(rdi_14, rsi_7, zx.q(arg3))
                                        int64_t* rcx_57 = &var_188
                                        
                                        if (var_178_1 != 0)
                                            rcx_57 = var_178_1
                                        
                                        int32_t rax_82 = rbx_7
                                        
                                        if (rbx_7 s< 0)
                                            rax_82 = rbx_7 + 0x1f
                                        
                                        void* rdx_34 = rcx_57 + (sx.q(rax_82 s>> 5) << 2)
                                        *rdx_34 &= not.d(1 << (rbx_7.b & 0x1f))
                                        break
                                    
                                    int32_t rax_78 = *(rdi_14 + 0x14)
                                    
                                    if (rax_78 s>= 0 && rax_78 == *(rsi_7 + 0x84))
                                        goto label_141eba165
                                else if (data_143de5424 != 0 && *(r14_4 + 0x18) == *(rax_76 + 0x18))
                                    goto label_141eba110
                        
                        sub_14059bdd0(&var_230)
                        rbx_7 = var_21c_1
                        
                        if (rbx_7 s>= var_228_3[3].d)
                            break
                        
                        r8_12 &= not.d(rdx_26)
                        rdx_26 = var_22c_3
        
    label_141eba19d:
        r15_2 += 8
        r12_2 += 1
    while (r12_2 != r13_3)

int32_t rcx_59 = 0
var_230 = 0
int32_t r9_3 = arg1[7].d
int32_t var_22c_4 = 1
void* var_228_4 = &arg1[4]
int32_t rdi_15 = 0
int32_t var_220_4 = 0xffffffff
int64_t var_21c_2 = 0

if (r9_3 != 0)
    void* rax_87 = arg1[6]
    void* r8_15 = &arg1[4]
    
    if (rax_87 != 0)
        r8_15 = rax_87
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(r9_3 - 1)
    int32_t rdx_37 = *r8_15
    
    if (rdx_37 != 0)
    label_141eba235:
        int32_t rax_94 = neg.d(rdx_37) & rdx_37
        uint64_t rflags_6
        int32_t temp0_8
        temp0_8, rflags_6 = _bit_scan_reverse(rax_94)
        int32_t var_22c_5 = rax_94
        int32_t rax_95
        
        if (rax_94 == 0)
            rax_95 = 0x20
        else
            rax_95 = 0x1f - temp0_8
        
        var_21c_2.d = rdi_15 - rax_95 + 0x1f
        
        if (rdi_15 - rax_95 + 0x1f s> r9_3)
            var_21c_2.d = r9_3
    else
        while (true)
            int64_t rdx_38 = sx.q(rcx_59)
            rdi_15 += 0x20
            rcx_59 += 1
            var_21c_2:4.d = rdi_15
            var_230 = rcx_59
            
            if (rdx_38.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_37 = *(r8_15 + (rdx_38 << 2) + 4)
            var_220_4 = 0xffffffff
            
            if (rdx_37 != 0)
                goto label_141eba235
        
        var_21c_2.d = r9_3

int32_t rdx_39 = arg1[7].d
zmm2 = var_220_4.o
var_21c_2.d = rdx_39
double var_198_2[0x2] = zmm2
int128_t var_1a8_2 = var_230.o
int32_t rbx_9 = 0xffffffff << (rdx_39 & 0x1f).b
int32_t rdi_18 = rdx_39 s>> 5
int32_t r8_17 = rdx_39 & 0xffffffe0
int64_t var_1d8_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_220_5 = rbx_9
var_1f8 = (&arg1[2]).o
int128_t var_1e8_2 = var_1a8_2

if (rdx_39 != r9_3)
    void* rax_99 = arg1[6]
    void* r10_3 = &arg1[4]
    
    if (rax_99 != 0)
        r10_3 = rax_99
    
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(r9_3 - 1)
    int32_t rdx_43 = *(r10_3 + (sx.q(rdi_18) << 2)) & rbx_9
    
    if (rdx_43 != 0)
    label_141eba312:
        int32_t rax_105 = neg.d(rdx_43) & rdx_43
        uint64_t rflags_7
        int32_t temp0_10
        temp0_10, rflags_7 = _bit_scan_reverse(rax_105)
        int32_t rax_106
        
        if (rax_105 == 0)
            rax_106 = 0x20
        else
            rax_106 = 0x1f - temp0_10
        
        var_21c_2.d = r8_17 - rax_106 + 0x1f
        
        if (r8_17 - rax_106 + 0x1f s> r9_3)
            var_21c_2.d = r9_3
    else
        while (true)
            int64_t rcx_63 = sx.q(rdi_18)
            r8_17 += 0x20
            rdi_18 += 1
            
            if (rcx_63.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                break
            
            rdx_43 = *(r10_3 + (rcx_63 << 2) + 4)
            var_220_5 = 0xffffffff
            
            if (rdx_43 != 0)
                goto label_141eba312
        
        var_21c_2.d = r9_3

while (true)
    int64_t rdx_44 = sx.q(var_1e8_2:0xc.d)
    int32_t rax_98
    
    if (rdx_44.d != (var_220_5.q u>> 0x20).d || var_1e8_2.q != &arg1[4])
        rax_98.b = 0
    else
        rax_98.b = 1
    
    int64_t rcx_65 = var_1f8.q
    
    if (rax_98.b == 0 || rcx_65 != &arg1[2])
        rax_98.b = 1
    else
        rax_98.b = 0
    
    if (rax_98.b == 0)
        break
    
    int64_t* rdi_21 = rdx_44 * 0x50 + *rcx_65
    int64_t* rbx_10 = *rdi_21
    
    if (rbx_10 != 0)
        void* rax_107 = rbx_10[0x18]
        void* const rax_112
        
        if (rax_107 != 0)
            int32_t rax_108 = *(rax_107 + 0xc)
            
            if (rax_108 s>= data_143e1d9b4)
                rax_112 = nullptr
            else
                uint32_t rdx_45 = zx.d(rax_108.w)
                
                if (rax_108 s< 0)
                    rax_108 += 0xffff
                    rdx_45 -= 0x10000
                
                rax_112 = *(data_143e1d9a0 + (sx.q(rax_108 s>> 0x10) << 3)) + sx.q(rdx_45) * 0x18
        
        if (rax_107 == 0 || ((*(rax_112 + 8) u>> 0x1d).b & 1) != 0)
            sub_141f32b40(rbx_10, *(arg2 + 0x130), &data_143f3f280, 0)
            sub_141f49090(rbx_10, &rdi_21[2], 0, 0, 0)
    
    var_1e8_2:8.d &= not.d(var_1f8:0xc.d)
    sub_14059bdd0(&var_1f8:8)

if (var_178_1 != 0)
    sub_140a74f90(var_178_1)

int32_t var_120_3 = 0

if (var_128_1 != 0)
    sub_140a74f90(var_128_1)

int64_t var_160
var_160.d = 0
int32_t var_138_2 = 0xffffffff
int32_t var_134_2 = 0
int64_t var_158
sub_14059a8e0(&var_158, 0)
int64_t var_148

if (var_148 != 0)
    sub_140a74f90(var_148)

int64_t rcx_76 = var_168

if (rcx_76 != 0)
    sub_140a74f90(rcx_76)

if (var_58_1 != 0)
    sub_140a74f90(var_58_1)

__security_check_cookie(rax_2 ^ &var_268)
