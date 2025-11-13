// 函数: sub_141772da0
// 地址: 0x141772da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
char rax_2 = *(arg1 + 0xe8)
void* rbx = arg1
int64_t* rsi = arg3
int64_t* var_258 = arg3
*(arg1 + 0xe8) = rax_2 + 1
int32_t i_9 = 0
char rcx = rax_2 + 1

if (rax_2 == 0xff)
    rcx = 1

*(rbx + 0xe8) = rcx
int32_t rcx_1 = *(rbx + 0x20)
int64_t (* var_1d8)(int64_t* arg1, int32_t* arg2) = sub_14176ffa0
int32_t r15 = 0
void* var_250
int32_t var_1d0 = &var_250
int32_t i_11 = 0
int32_t* var_228 = nullptr
int32_t var_21c
__builtin_memset(&var_21c, 0, 0x18)
var_250 = rbx
int128_t zmm6 = sub_14077b750(rcx_1, &var_1d8, 0)
void* var_1a0 = arg2
int64_t* var_198
__builtin_memset(&var_198, 0, 0x15)
int32_t var_180 = 0
sub_141750820(&var_1a0)
int32_t var_278
int32_t i_7
int32_t var_248
void* result_1
int32_t var_1e4
int128_t var_1c8
void* i
int32_t var_188_1
int64_t* var_f8
int64_t var_f0
int64_t var_e8
double zmm2[0x2]

if (i != 0)
    int64_t* r12 = var_198
    void* rsi_1 = rbx + 0x38
    int64_t r13_1 = 0
    int32_t r14_1 = 1
    
    do
        sub_140865c40(rsi_1, &i_7, *(*(i + 0xc8) + (sx.q(var_188_1) << 3)))
        int64_t i_14 = sx.q(i_7)
        void* const rcx_5
        
        if (i_14.d == 0xffffffff)
            rcx_5 = nullptr
        else
            rcx_5 = *rsi_1 + i_14 * 0x18
        
        int64_t rdi_1 = sx.q(*(rcx_5 + 8))
        int32_t rcx_6 = *(*(rbx + 0xd8) + (rdi_1 << 2))
        
        if (rcx_6 != 0 && rcx_6 != zx.d(*(rbx + 0xe8)))
            *((rdi_1 << 5) + *(rbx + 8) + 0x18) = 0xffffffff
            *(*(rbx + 0xd8) + (rdi_1 << 2)) = zx.d(*(rbx + 0xe8))
        
        if (*((rdi_1 << 5) + *(rbx + 8) + 0x18) s< 0)
            __builtin_memset(&var_f8, 0, 0x2c)
            int32_t var_c4_1 = 0
            int64_t var_b8_1 = 0
            int32_t var_b0_1 = 0
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x2c)
            int32_t var_74_1 = 0
            int64_t var_68_1 = 0
            int32_t var_60_1 = 0
            int32_t var_cc_1 = 0x80
            int32_t var_c8_1 = 0xffffffff
            int32_t var_7c_1 = 0x80
            int32_t var_78_1 = 0xffffffff
            sub_1417720f0(rbx, rdi_1.d, r15, &var_f8, &var_a8)
            int32_t var_244_1 = 1
            var_248 = 0
            int32_t rcx_11 = 0
            int64_t var_98
            int64_t* var_240_1 = &var_98
            int32_t rdi_2 = 0
            int32_t var_238_1 = 0xffffffff
            int64_t var_234_1 = 0
            int64_t* var_88
            int32_t var_80
            
            if (var_80 != 0)
                int64_t* r8_3 = &var_98
                
                if (var_88 != 0)
                    r8_3 = var_88
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(var_80 - 1)
                int32_t rdx_8 = *r8_3
                
                if (rdx_8 != 0)
                label_1417730a9:
                    int32_t rax_17 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    char temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_17)
                    int32_t var_244_2 = rax_17
                    int32_t rax_18
                    
                    if (rax_17 == 0)
                        rax_18 = 0x20
                    else
                        rax_18 = 0x1f - temp0_1
                    
                    int32_t rax_19 = rdi_2 - rax_18 + 0x1f
                    
                    if (rax_19 s> var_80)
                        rax_19 = var_80
                    
                    var_234_1.d = rax_19
                else
                    while (true)
                        int64_t rdx_9 = sx.q(rcx_11)
                        rdi_2 += 0x20
                        rcx_11 += 1
                        var_234_1:4.d = rdi_2
                        var_248 = rcx_11
                        
                        if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            var_234_1.d = var_80
                            break
                        
                        rdx_8 = *(r8_3 + (rdx_9 << 2) + 4)
                        var_238_1 = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_1417730a9
            
            zmm2 = var_238_1.o
            int128_t var_148_1 = var_248.o
            var_1e4 = var_80
            double var_138_1[0x2] = zmm2
            zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
            var_1c8 = (&var_a8).o
            int128_t var_1b8_1 = var_148_1
            int64_t var_1a8_1 = zmm2.q
            
            while (true)
                int64_t rcx_15 = sx.q(var_1b8_1:0xc.d)
                int64_t* rax_20 = var_1c8.q
                
                if (rcx_15.d == ((0xffffffff << (var_80.b & 0x1f)).q u>> 0x20).d
                        && var_1b8_1.q == &var_98 && rax_20 == &var_a8)
                    break
                
                var_250 = *(*rax_20 + rcx_15 * 0x10)
                sub_140812a70(&var_f8, &var_278, &var_250, nullptr)
                var_1b8_1:8.d &= not.d(var_1c8:0xc.d)
                sub_14059bdd0(&var_1c8:8)
            
            if (var_f0.d != var_c4_1)
                int64_t i_15 = sx.q(i_11)
                int64_t var_210_1
                
                if (r14_1 s> i_15.d)
                    int32_t j_1 = r14_1 - i_15.d
                    int32_t i_16 = i_15.d + j_1
                    i_11 = i_16
                    var_210_1.d = i_16
                    
                    if (i_16 s> var_210_1:4.d)
                        sub_1405c5060(&result_1)
                        i_11 = var_210_1.d
                    
                    int64_t* rdi_9 = i_15 * 0x50 + result_1
                    
                    if (j_1 != 0)
                        int64_t* rdx_13 = &rdi_9[4]
                        int32_t j
                        
                        do
                            *rdi_9 = 0
                            int64_t* rcx_21 = &rdx_13[-2]
                            rdx_13[-3] = 0
                            rdi_9 = &rdi_9[0xa]
                            *rdx_13 = 0
                            rdx_13[1].d = 0
                            *(rdx_13 + 0xc) = 0x80
                            int64_t* rax_26 = *rdx_13
                            rdx_13 = &rdx_13[0xa]
                            
                            if (rax_26 != 0)
                                rcx_21 = rax_26
                            
                            *rcx_21 = 0
                            rcx_21[1] = 0
                            rdx_13[-8].d = 0xffffffff
                            *(rdx_13 - 0x3c) = 0
                            rdx_13[-6] = 0
                            rdx_13[-5].d = 0
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                else if (r14_1 s< i_15.d)
                    int32_t r9_3
                    r9_3.b = 1
                    sub_14177dac0(&result_1, r14_1, i_15.d - r14_1, r9_3.b)
                    i_11 = var_210_1.d
                int64_t* rdi_11 = result_1 + r13_1
                
                if (rdi_11 == &var_f8)
                    rbx = arg1
                    r15 += 1
                    r14_1 += 1
                    r13_1 += 0x50
                else
                    sub_140780e10(rdi_11, &var_f8)
                    void var_c0
                    
                    if (var_b8_1 == 0)
                        memmove(&rdi_11[7], &var_c0, 4)
                    int64_t rcx_26 = rdi_11[8]
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    rbx = arg1
                    r15 += 1
                    rdi_11[8] = var_b8_1
                    r14_1 += 1
                    r13_1 += 0x50
                    var_b8_1 = 0
                    rdi_11[9].d = var_b0_1
                    int32_t var_b0_2 = 0
            
            int32_t var_60_2 = 0
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)
            
            int64_t var_a0_1
            bool cond:6_1 = var_a0_1:4.d == 0
            var_a0_1.d = 0
            
            if (not(cond:6_1))
                sub_1405a5410(&var_a8, 0)
            
            int32_t var_78_2 = 0xffffffff
            int32_t var_74_2 = 0
            sub_14059a8e0(&var_98, 0)
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t rcx_31 = var_a8
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            int32_t var_b0_3 = 0
            
            if (var_b8_1 != 0)
                sub_140a74f90(var_b8_1)
            
            var_f0.d = 0
            
            if (var_f0:4.d != 0)
                sub_1405a5410(&var_f8, 0)
            
            int32_t var_c8_2 = 0xffffffff
            int32_t var_c4_2 = 0
            sub_14059a8e0(&var_e8, 0)
            int64_t var_d8
            
            if (var_d8 != 0)
                sub_140a74f90(var_d8)
            
            int64_t* rcx_36 = var_f8
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
        
        if (r12 != 0)
            int32_t var_178
            int32_t rax_33 = var_178 + 1
            var_178 = rax_33
            
            if (rax_33 s>= r12[1].d)
            label_1417733fb:
                var_180 += 1
                sub_141750820(&var_1a0)
                r12 = var_198
            else
                int64_t (** rdx_18)(int64_t* arg1, int32_t* arg2) = *(*r12 + (sx.q(rax_33) << 3))
                int64_t (* rcx_43)(int64_t* arg1, int32_t* arg2) = *rdx_18
                var_1d0 = rdx_18[1].d
                char rax_36
                
                if (rcx_43 == 0)
                    rax_36 = 0
                else
                    rax_36 = *(rcx_43 + 0x40)
                
                var_1d0:4.b = rax_36
                var_1d8 = rcx_43
                i.o = var_1d8.o
        else
            int32_t rax_31 = var_188_1 + 1
            var_188_1 = rax_31
            int32_t var_17c
            
            if (rax_31 s>= var_17c)
                goto label_1417733fb
    while (i != 0)
    
    rsi = var_258
    i_9 = i_11

void* r13_2 = rbx + 0x98
int64_t rdi_12 = sx.q(*(r13_2 + 8))

if (r15 s> rdi_12.d)
    *(r13_2 + 8) = r15
    
    if (r15 s> *(r13_2 + 0xc))
        sub_1405a4f90(r13_2)
    
    memset((rdi_12 << 4) + *r13_2, 0, sx.q(r15 - rdi_12.d) << 4)
    rbx = arg1
else if (r15 s< rdi_12.d)
    sub_140838580(r13_2, r15, rdi_12.d - r15, 1)

int64_t rdi_14 = sx.q(*(rbx + 0x30))
var_250 = rbx + 0x28

if (r15 s> rdi_14.d)
    *(rbx + 0x30) = r15
    int32_t rbx_5 = r15 - rdi_14.d
    
    if (r15 s> *(rbx + 0x34))
        sub_1405daba0(rbx + 0x28)
    
    if (rbx_5 != 0)
        __builtin_memset(rdi_14 + *(rbx + 0x28), 0, zx.q(rbx_5))
    
    rbx = arg1
else if (r15 s< rdi_14.d && r15 != rdi_14.d)
    *(rbx + 0x30) = r15
    sub_1405dac10(rbx + 0x28)

int32_t i_1 = 0

if (*(rbx + 0x20) s> 0)
    void* r8_9 = arg1
    void* rbx_6 = nullptr
    
    do
        int64_t rdx_21 = *(r8_9 + 0x18)
        int64_t rax_37 = sx.q(*(rbx_6 + rdx_21))
        int32_t rdi_16
        
        if (rax_37.d == 0xffffffff)
            rdi_16 = -1
        else
            rdi_16 = *((rax_37 << 5) + *(r8_9 + 8) + 0x18)
        
        int64_t rax_39 = sx.q(*(rbx_6 + rdx_21 + 4))
        int32_t rdx_22
        
        if (rax_39.d == 0xffffffff)
            rdx_22 = -1
        else
            rdx_22 = *((rax_39 << 5) + *(r8_9 + 8) + 0x18)
        
        if (rdi_16 != 0xffffffff)
            rdx_22 = rdi_16
        
        if (rdx_22 s>= 0)
            int64_t* rdi_19 = (sx.q(rdx_22) << 4) + *r13_2
            int64_t r15_1 = sx.q(rdi_19[1].d)
            int32_t rax_41 = (r15_1 + 1).d
            rdi_19[1].d = rax_41
            
            if (rax_41 s> *(rdi_19 + 0xc))
                sub_1405a4cf0(rdi_19)
                r8_9 = arg1
            
            *(*rdi_19 + (r15_1 << 2)) = i_1
        
        i_1 += 1
        rbx_6 += 0x18
    while (i_1 s< *(r8_9 + 0x20))

int32_t i_12
int32_t* rdi_20

if (i_9 s<= 0)
    if (i_9 s< 0)
        int32_t rax_45 = neg.d(i_9)
        
        if (rax_45 != 0)
            int32_t i_17 = neg.d(rax_45)
            
            if (i_17 != i_9)
                memmove(sx.q(i_9) << 2, sx.q(rax_45 + i_9) << 2, (i_17 - i_9) << 2)
            
            sub_1405dac90(&var_228)
            i_12 = i_17
    
    rdi_20 = var_228
else
    sub_1405a4cf0(&var_228)
    rdi_20 = var_228
    memset(rdi_20, 0, sx.q(i_9) << 2)
    i_12 = i_9

if (i_9 != 0)
    int32_t r15_2 = 0
    
    if (i_9 s> 0)
        void* result_2 = result_1
        int32_t* r12_1 = rdi_20
        
        do
            *r12_1 = 0
            int32_t r10_1 = *(result_2 + 0x28)
            int32_t rcx_60 = 0
            var_248 = 0
            int32_t var_244_3 = 1
            int32_t rdi_22 = 0
            void* var_240_2 = result_2 + 0x10
            int32_t var_238_2 = 0xffffffff
            int64_t var_234_2 = 0
            
            if (r10_1 != 0)
                void* rax_48 = *(result_2 + 0x20)
                void* r8_14 = result_2 + 0x10
                
                if (rax_48 != 0)
                    r8_14 = rax_48
                
                int32_t temp7_1
                int32_t temp8_1
                temp7_1:temp8_1 = sx.q(r10_1 - 1)
                int32_t rdx_29 = *r8_14
                
                if (rdx_29 != 0)
                label_1417736e9:
                    int32_t rax_55 = neg.d(rdx_29) & rdx_29
                    uint64_t rflags_2
                    char temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rax_55)
                    int32_t var_244_4 = rax_55
                    int32_t rax_56
                    
                    if (rax_55 == 0)
                        rax_56 = 0x20
                    else
                        rax_56 = 0x1f - temp0_3
                    
                    var_234_2.d = rdi_22 - rax_56 + 0x1f
                    
                    if (rdi_22 - rax_56 + 0x1f s> r10_1)
                        var_234_2.d = r10_1
                else
                    while (true)
                        int64_t rdx_30 = sx.q(rcx_60)
                        rdi_22 += 0x20
                        rcx_60 += 1
                        var_234_2:4.d = rdi_22
                        var_248 = rcx_60
                        
                        if (rdx_30.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_29 = *(r8_14 + (rdx_30 << 2) + 4)
                        var_238_2 = 0xffffffff
                        
                        if (rdx_29 != 0)
                            goto label_1417736e9
                    
                    var_234_2.d = r10_1
            
            zmm2 = var_238_2.o
            int128_t var_148_2 = var_248.o
            double var_138_2[0x2] = zmm2
            var_1e4 = r10_1
            zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
            var_1c8 = result_2.o
            int128_t var_1b8_2 = var_148_2
            int64_t var_1a8_2 = zmm2.q
            
            while (true)
                int64_t rcx_64 = sx.q(var_1b8_2:0xc.d)
                int64_t* rax_58 = var_1c8.q
                
                if (rcx_64.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                        && var_1b8_2.q == result_2 + 0x10 && rax_58 == result_2)
                    break
                
                int64_t* rdx_32 = *(*rax_58 + rcx_64 * 0x10)
                int64_t* rax_60 = nullptr
                
                if (*(rdx_32 + 0xc) u>= 2)
                    rax_60 = rdx_32
                
                if (rax_60 != 0)
                    int64_t rdx_33 = sx.q(rax_60[1].d)
                    void* rcx_66 = *rax_60
                    
                    if (*(rdx_33 + *(rcx_66 + 0x398)) != 2)
                        *(*(rcx_66 + 0x350) + (rdx_33 << 2)) = r15_2
                
                var_1b8_2:8.d &= not.d(var_1c8:0xc.d)
                sub_14059bdd0(&var_1c8:8)
            
            r15_2 += 1
            r12_1 = &r12_1[1]
            result_2 += 0x50
        while (r15_2 s< i_11)
        
        rsi = var_258
        i_9 = i_11
    
    void* rdi_35 = arg1
    int32_t rax_65 = *(rdi_35 + 0x90)
    int64_t* var_260
    void var_170
    void var_16c
    void var_168
    uint64_t i_13
    void* var_158
    int64_t** var_128
    
    if (rax_65 == 0)
        rax_65 = 0
        
        if (i_9 s> 0)
            char* r15_3 = nullptr
            void* r14_4 = result_1 + 0x28
            int128_t var_48_1 = zmm6
            var_158 = r14_4
            char* var_200_1 = nullptr
            i_13 = zx.q(i_9)
            
            while (true)
                void* var_1f0_1 = r14_4 - 0x18
                i_9.b = 1
                int32_t var_1f4_1 = 1
                int32_t var_1e8_3 = 0xffffffff
                r15_3[*var_250] = 1
                int32_t rdi_26 = *r14_4
                int32_t var_1f8 = 0
                var_1e4.q = 0
                
                if (rdi_26 != 0)
                    sub_14059bdd0(&var_1f8)
                    rdi_26 = *r14_4
                
                zmm2 = var_1e8_3.o
                int32_t var_1e4_1 = rdi_26
                void* rbx_8 = r14_4 - 0x28
                double var_138_3[0x2] = zmm2
                void* var_150_3 = rbx_8
                int128_t var_148_3 = var_1f8.o
                zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                var_1c8 = var_150_3.o
                int128_t var_1b8_3 = var_148_3
                int64_t var_1a8_3 = zmm2.q
                
                while (true)
                    int64_t rcx_71 = sx.q(var_1b8_3:0xc.d)
                    int64_t* rax_69 = var_1c8.q
                    
                    if (rcx_71.d == ((0xffffffff << (rdi_26.b & 0x1f)).q u>> 0x20).d
                            && var_1b8_3.q == r14_4 - 0x18 && rax_69 == rbx_8)
                        break
                    
                    int64_t* rdx_35 = *(*rax_69 + rcx_71 * 0x10)
                    int64_t* rcx_73 = nullptr
                    
                    if (*(rdx_35 + 0xc) u>= 1)
                        rcx_73 = rdx_35
                    
                    if (rcx_73 != 0)
                        int64_t* rax_71 = nullptr
                        
                        if (*(rcx_73 + 0xc) u>= 2)
                            rax_71 = rcx_73
                        
                        if (rax_71 != 0 && *(sx.q(rax_71[1].d) + *(*rax_71 + 0x398)) == 1)
                            var_1b8_3:8.d &= not.d(var_1c8:0xc.d)
                            sub_14059bdd0(&var_1c8:8)
                            continue
                    
                    i_9.b = 0
                    break
                
                int32_t rdi_29 = *r14_4
                var_1f8 = 0
                int32_t var_1f4_2 = 1
                void* var_1f0_2 = r14_4 - 0x18
                int32_t var_1e8_5 = 0xffffffff
                var_1e4_1.q = 0
                
                if (rdi_29 != 0)
                    sub_14059bdd0(&var_1f8)
                    rdi_29 = *r14_4
                
                zmm2 = var_1e8_5.o
                int128_t zmm0_1 = var_1f8.o
                var_1a0 = rbx_8
                var_198.o = zmm0_1
                var_1e4 = rdi_29
                zmm0_1 = var_1a0.o
                int64_t* rdx_39 = (0xffffffff << (rdi_29.b & 0x1f)).q u>> 0x20
                var_188_1.o = zmm2
                var_260 = rdx_39
                zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                var_f8.o = zmm0_1
                var_e8.o = i.o
                int64_t var_d8_1 = zmm2.q
                
                while (true)
                    int64_t var_e0
                    int64_t rcx_79 = sx.q(var_e0:4.d)
                    int64_t* rax_75 = var_f8
                    
                    if (rcx_79.d == rdx_39.d && var_e8 == r14_4 - 0x18 && rax_75 == rbx_8)
                        break
                    
                    int64_t* rbx_9 = *(*rax_75 + rcx_79 * 0x10)
                    int64_t* rcx_81 = nullptr
                    char r8_15 = *(rbx_9 + 0xc)
                    
                    if (r8_15 u>= 1)
                        rcx_81 = rbx_9
                    
                    if (rcx_81 != 0)
                        int64_t* rax_77 = nullptr
                        
                        if (*(rcx_81 + 0xc) u>= 2)
                            rax_77 = rcx_81
                        
                        if (rax_77 != 0 && *(sx.q(rax_77[1].d) + *(*rax_77 + 0x398)) == 1
                                && i_9.b == 0)
                            int64_t* rdi_30 = nullptr
                            
                            if (r8_15 u>= 2)
                                rdi_30 = rbx_9
                            
                            if (rdi_30 != 0)
                                int64_t rdx_41 = sx.q(rdi_30[1].d)
                                void* rcx_83 = *rdi_30
                                char r8_16 = *(rdx_41 + *(rcx_83 + 0x398))
                                
                                if ((r8_16 == 1 || r8_16 == 4)
                                        && *(rdx_41 + *(rcx_83 + 0x368)) == 0)
                                    sub_14177fe50(rcx_83, rdx_41.d, 0)
                                    sub_14177fa60(*rdi_30, zx.q(rdi_30[1].d), 4)
                                    char rax_81 = *(rbx_9 + 0xc)
                                    int64_t* r8_18 = nullptr
                                    
                                    if (rax_81 u>= 3)
                                        r8_18 = rbx_9
                                    
                                    if (r8_18 == 0)
                                        var_258 = rdi_30
                                        
                                        if (*sub_140865c40(&rsi[0x12], &var_16c, rdi_30)
                                                == 0xffffffff)
                                            i_7 = rsi[0x1d].d
                                            var_248.q = &var_258
                                            int32_t* var_240_3 = &i_7
                                            sub_1413b83d0(&rsi[0x12], &var_168, &var_248, nullptr)
                                            int64_t rdi_32 = sx.q(rsi[0x1d].d)
                                            int32_t rax_88 = (rdi_32 + 1).d
                                            rsi[0x1d].d = rax_88
                                            
                                            if (rax_88 s> *(rsi + 0xec))
                                                sub_1405a4d70(&rsi[0x1c])
                                            
                                            *(rsi[0x1c] + (rdi_32 << 3)) = var_258
                                        
                                        sub_14175b460(rsi)
                                    else if (rax_81 != 6)
                                        var_258 = r8_18
                                        
                                        if (*sub_140865c40(&rsi[0x1e], &var_278, r8_18)
                                                == 0xffffffff)
                                            i_7 = rsi[0x29].d
                                            var_128 = &var_258
                                            int32_t* var_120_1 = &i_7
                                            sub_1413b83d0(&rsi[0x1e], &var_170, &var_128, nullptr)
                                            int64_t r14_5 = sx.q(rsi[0x29].d)
                                            int32_t rax_84 = (r14_5 + 1).d
                                            rsi[0x29].d = rax_84
                                            
                                            if (rax_84 s> *(rsi + 0x14c))
                                                sub_1405a4d70(&rsi[0x28])
                                            
                                            *(rsi[0x28] + (r14_5 << 3)) = var_258
                                        
                                        sub_14175b460(rsi)
                                    else
                                        rsi[0x11].b = 1
                    
                    char rdx_51 = *(rbx_9 + 0xc)
                    int64_t* rdi_33 = nullptr
                    
                    if (rdx_51 u>= 2)
                        rdi_33 = rbx_9
                    
                    if (rdi_33 != 0)
                        void* r10_2 = *rdi_33
                        int64_t r9_5 = sx.q(rdi_33[1].d)
                        
                        if (*(r9_5 + *(r10_2 + 0x398)) != 2)
                            uint64_t rax_91 = 0
                            
                            if (rdx_51 u>= 1)
                                rax_91 = rbx_9
                            
                            if (rax_91 == 0)
                                rax_91.b = 3
                            else
                                int64_t* rcx_94 = nullptr
                                
                                if (*(rax_91 + 0xc) u>= 2)
                                    rcx_94 = rax_91
                                
                                if (rcx_94 == 0)
                                    rax_91.b = 2
                                else
                                    rax_91 = zx.q(*(sx.q(rcx_94[1].d) + *(*rcx_94 + 0x398)))
                            
                            if (rax_91.b != 1 && i_9.b != 0)
                                sub_141776c90(rsi, rbx_9, 0)
                                int64_t rax_93 = sx.q(rdi_33[1].d)
                                int64_t zmm0_3 = _mm_unpacklo_ps(zx.o(0), 0).q
                                int64_t var_110
                                var_110.d = 0
                                var_1d0 = 0
                                int64_t rdx_54 = rax_93 * 3
                                int64_t rcx_97 = *(*rdi_33 + 0x1b8)
                                *(rcx_97 + (rdx_54 << 2)) = zmm0_3
                                *(rcx_97 + (rdx_54 << 2) + 8) = 0
                                int64_t rax_95 = sx.q(rdi_33[1].d)
                                zmm0_3 = _mm_unpacklo_ps(zx.o(0), 0).q
                                int64_t rdx_55 = rax_95 * 3
                                int64_t rcx_98 = *(*rdi_33 + 0x1d0)
                                *(rcx_98 + (rdx_55 << 2)) = zmm0_3
                                *(rcx_98 + (rdx_55 << 2) + 8) = var_1d0
                                r9_5 = zx.q(rdi_33[1].d)
                                r10_2 = *rdi_33
                            
                            sub_14177fe50(r10_2, r9_5.d, i_9.b)
                    
                    int64_t* rax_98 = nullptr
                    
                    if (*(rbx_9 + 0xc) u>= 1)
                        rax_98 = rbx_9
                    
                    if (rax_98 != 0)
                        int64_t* rcx_100 = nullptr
                        
                        if (*(rax_98 + 0xc) u>= 2)
                            rcx_100 = rax_98
                        
                        if (rcx_100 != 0 && *(sx.q(rcx_100[1].d) + *(*rcx_100 + 0x398)) == 1)
                            sub_141776c90(rsi, rbx_9, 0)
                    
                    var_e0.d &= not.d(var_f0:4.d)
                    sub_14059bdd0(&var_f0)
                    rdx_39 = var_260
                    rbx_8 = var_150_3
                
                r15_3 = &var_200_1[1]
                r14_4 = var_158 + 0x50
                var_200_1 = r15_3
                uint64_t i_18 = i_13
                i_13 -= 1
                var_158 = r14_4
                
                if (i_18 == 1)
                    break
            
            rdi_35 = arg1
            rax_65 = *(rdi_35 + 0x90)
    
    i_7 = 0
    int32_t i_2 = 0
    
    if (rax_65 s> 0)
        int64_t* r15_5 = nullptr
        var_258 = nullptr
        void* r11_1 = nullptr
        var_250 = nullptr
        
        do
            int64_t rax_102 = *(rdi_35 + 0x88)
            char r9_1 = 1
            int32_t r12_2 = -1
            int64_t** r13_5 = *(r11_1 + rax_102)
            int64_t r10_3 = sx.q(*(r11_1 + rax_102 + 8))
            int64_t** rdx_58 = r13_5
            void* r8_23 = &r13_5[r10_3]
            
            if (r13_5 != r8_23)
                while (true)
                    int64_t* rcx_104 = *rdx_58
                    
                    if (rcx_104 != 0)
                        int64_t* rax_103 = nullptr
                        
                        if (*(rcx_104 + 0xc) u>= 2)
                            rax_103 = rcx_104
                        
                        void* rcx_105
                        int64_t rdi_36
                        
                        if (rax_103 != 0)
                            rdi_36 = sx.q(rax_103[1].d)
                            rcx_105 = *rax_103
                        
                        int32_t rcx_106
                        
                        if (rax_103 == 0 || *(rdi_36 + *(rcx_105 + 0x398)) == 2)
                            rcx_106 = -1
                        else
                            rcx_106 = *(*(rcx_105 + 0x350) + (rdi_36 << 2))
                        
                        if (r12_2 != 0xffffffff)
                            if (rcx_106 s>= 0 && r12_2 != rcx_106)
                                rdi_35 = arg1
                                break
                        else if (rcx_106 s>= 0)
                            r12_2 = rcx_106
                    
                    rdx_58 = &rdx_58[1]
                    
                    if (rdx_58 == r8_23)
                        rdi_35 = arg1
                        
                        if (r12_2 == 0xffffffff)
                            goto label_141773e51
                        
                        int64_t rdx_59 = sx.q(r12_2)
                        void* rcx_109 = rdx_59 * 0x50 + result_1
                        
                        if (*(rcx_109 + 8) - *(rcx_109 + 0x34) != r10_3.d)
                            goto label_141773e51
                        
                        var_228[rdx_59] = *(r15_5 + *(rdi_35 + 0xa8))
                        goto label_1417741ae
            
        label_141773e51:
            uint64_t r14_9 = r10_3 << 3 u>> 3
            int64_t r15_6 = 0
            
            if (r13_5 u> r8_23)
                r14_9 = 0
            
            r9_1 = 0
            uint64_t var_200_2 = r14_9
            
            if (r14_9 != 0)
                do
                    int64_t* rbx_10 = *r13_5
                    
                    if (rbx_10 != 0)
                        int64_t* rdi_37 = nullptr
                        
                        if (*(rbx_10 + 0xc) u>= 2)
                            rdi_37 = rbx_10
                        
                        if (rdi_37 != 0)
                            int64_t rdx_60 = sx.q(rdi_37[1].d)
                            void* rcx_111 = *rdi_37
                            int32_t* rdx_64
                            void** rdx_66
                            void* rbx_11
                            void* rdi_39
                            int64_t (** r8_28)(int64_t* arg1, int32_t* arg2)
                            int64_t* r8_30
                            
                            if (*(rdx_60 + *(rcx_111 + 0x398)) == 2)
                                if (rdi_37 != 0)
                                    int64_t rdx_67 = sx.q(rdi_37[1].d)
                                    void* rcx_116 = *rdi_37
                                    char r8_31 = *(rdx_67 + *(rcx_116 + 0x398))
                                    
                                    if ((r8_31 == 1 || r8_31 == 4)
                                            && *(rdx_67 + *(rcx_116 + 0x368)) == 0)
                                        sub_14177fe50(rcx_116, rdx_67.d, 0)
                                        sub_14177fa60(*rdi_37, zx.q(rdi_37[1].d), 4)
                                        char rax_121 = *(rbx_10 + 0xc)
                                        int64_t* r8_33 = nullptr
                                        
                                        if (rax_121 u>= 3)
                                            r8_33 = rbx_10
                                        
                                        if (r8_33 == 0)
                                            var_260 = rdi_37
                                            rbx_11 = &rsi[0x1c]
                                            
                                            if (*sub_140865c40(&rsi[0x12], &i_13, rdi_37)
                                                    != 0xffffffff)
                                                r14_9 = var_200_2
                                                sub_14175b460(rsi)
                                            else
                                                int64_t** var_118
                                                r8_30 = &var_118
                                                var_278 = *(rbx_11 + 8)
                                                rdx_66 = &var_158
                                                var_118 = &var_260
                                                int32_t* var_110_1 = &var_278
                                            label_141774150:
                                                sub_1413b83d0(&rsi[0x12], rdx_66, r8_30, nullptr)
                                                int64_t rdi_40 = sx.q(*(rbx_11 + 8))
                                                int32_t rax_128 = (rdi_40 + 1).d
                                                bool cond:22_1 = rax_128 s<= *(rbx_11 + 0xc)
                                                *(rbx_11 + 8) = rax_128
                                                
                                                if (not(cond:22_1))
                                                    sub_1405a4d70(rbx_11)
                                                
                                                *(*rbx_11 + (rdi_40 << 3)) = var_260
                                                r14_9 = var_200_2
                                                sub_14175b460(rsi)
                                        else if (rax_121 != 6)
                                            var_260 = r8_33
                                            rdi_39 = &rsi[0x28]
                                            void var_104
                                            
                                            if (*sub_140865c40(&rsi[0x1e], &var_104, r8_33)
                                                    != 0xffffffff)
                                                sub_14175b460(rsi)
                                            else
                                                r8_28 = &var_1d8
                                                var_278 = *(rdi_39 + 8)
                                                void var_100
                                                rdx_64 = &var_100
                                                var_1d8 = &var_260
                                                int32_t* var_1d0_1 = &var_278
                                            label_1417740c9:
                                                sub_1413b83d0(&rsi[0x1e], rdx_64, r8_28, nullptr)
                                                int64_t rbx_12 = sx.q(*(rdi_39 + 8))
                                                int32_t rax_124 = (rbx_12 + 1).d
                                                *(rdi_39 + 8) = rax_124
                                                
                                                if (rax_124 s> *(rdi_39 + 0xc))
                                                    sub_1405a4d70(rdi_39)
                                                
                                                *(*rdi_39 + (rbx_12 << 3)) = var_260
                                                sub_14175b460(rsi)
                                        else
                                            rsi[0x11].b = 1
                            else if (*(rdx_60 + *(rcx_111 + 0x368)) == 0)
                                sub_14177fe50(rcx_111, rdx_60.d, 0)
                                int64_t* rdi_38 = nullptr
                                
                                if (*(rbx_10 + 0xc) u>= 2)
                                    rdi_38 = rbx_10
                                
                                if (rdi_38 != 0)
                                    int64_t rdx_61 = sx.q(rdi_38[1].d)
                                    void* rcx_112 = *rdi_38
                                    char r8_25 = *(rdx_61 + *(rcx_112 + 0x398))
                                    
                                    if ((r8_25 == 1 || r8_25 == 4)
                                            && *(rdx_61 + *(rcx_112 + 0x368)) == 0)
                                        sub_14177fe50(rcx_112, rdx_61.d, 0)
                                        sub_14177fa60(*rdi_38, zx.q(rdi_38[1].d), 4)
                                        char rax_114 = *(rbx_10 + 0xc)
                                        int64_t* r8_27 = nullptr
                                        
                                        if (rax_114 u>= 3)
                                            r8_27 = rbx_10
                                        
                                        if (r8_27 == 0)
                                            var_260 = rdi_38
                                            rbx_11 = &rsi[0x1c]
                                            
                                            if (*sub_140865c40(&rsi[0x12], &var_170, rdi_38)
                                                    == 0xffffffff)
                                                r8_30 = &var_128
                                                var_278 = *(rbx_11 + 8)
                                                void var_108
                                                rdx_66 = &var_108
                                                var_128 = &var_260
                                                int32_t* var_120_2 = &var_278
                                                goto label_141774150
                                            
                                            r14_9 = var_200_2
                                            sub_14175b460(rsi)
                                        else if (rax_114 != 6)
                                            var_260 = r8_27
                                            rdi_39 = &rsi[0x28]
                                            
                                            if (*sub_140865c40(&rsi[0x1e], &var_168, r8_27)
                                                    == 0xffffffff)
                                                r8_28 = &var_248
                                                var_278 = *(rdi_39 + 8)
                                                rdx_64 = &var_16c
                                                var_248.q = &var_260
                                                int32_t* var_240_4 = &var_278
                                                goto label_1417740c9
                                            
                                            sub_14175b460(rsi)
                                        else
                                            rsi[0x11].b = 1
                    
                    r13_5 = &r13_5[1]
                    r15_6 += 1
                while (r15_6 != r14_9)
                
                r11_1 = var_250
                r9_1 = 0
                i_2 = i_7
                rdi_35 = arg1
            
            r15_5 = var_258
        label_1417741ae:
            
            if (r12_2 != 0xffffffff)
                *(sx.q(r12_2) + *(rdi_35 + 0x28)) = r9_1
            
            i_2 += 1
            r11_1 += 0x10
            r15_5 += 4
            i_7 = i_2
            var_250 = r11_1
            var_258 = r15_5
        while (i_2 s< *(rdi_35 + 0x90))
    
    i_9 = i_11

void* r13_6 = arg1
int32_t rax_131 = *(r13_6 + 0x94)
int64_t* rbx_13 = *(r13_6 + 0x88)
int32_t i_8 = *(r13_6 + 0x90)

if (rax_131 s< 0)
    if (i_8 != 0)
        int32_t i_3
        
        do
            int64_t rcx_129 = *rbx_13
            
            if (rcx_129 != 0)
                sub_140a74f90(rcx_129)
            
            rbx_13 = &rbx_13[2]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
        rax_131 = *(r13_6 + 0x94)
    
    *(r13_6 + 0x90) = 0
    
    if (rax_131 != 0)
        sub_1405a5410(r13_6 + 0x88, 0)
else
    if (i_8 != 0)
        int32_t i_4
        
        do
            int64_t rcx_128 = *rbx_13
            
            if (rcx_128 != 0)
                sub_140a74f90(rcx_128)
            
            rbx_13 = &rbx_13[2]
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
    
    *(r13_6 + 0x90) = 0

if (i_9 s> *(r13_6 + 0x94))
    sub_1405a5410(r13_6 + 0x88, i_9)

if (i_9 s> 0)
    void* result_3 = result_1
    uint64_t i_10 = zx.q(i_9)
    uint64_t i_5
    
    do
        int64_t* rax_132 = sub_1413d1420(result_3, &var_248)
        int64_t rsi_2 = sx.q(*(r13_6 + 0x90))
        int32_t rcx_133 = (rsi_2 + 1).d
        *(r13_6 + 0x90) = rcx_133
        
        if (rcx_133 s> *(r13_6 + 0x94))
            sub_1405a4f90(r13_6 + 0x88)
        
        int64_t* rcx_137 = (rsi_2 << 4) + *(r13_6 + 0x88)
        *rcx_137 = 0
        *rcx_137 = *rax_132
        *rax_132 = 0
        rcx_137[1].d = rax_132[1].d
        *(rcx_137 + 0xc) = *(rax_132 + 0xc)
        rax_132[1] = 0
        int64_t rcx_138 = var_248.q
        
        if (rcx_138 != 0)
            sub_140a74f90(rcx_138)
        
        result_3 += 0x50
        i_5 = i_10
        i_10 -= 1
    while (i_5 != 1)
    r13_6 = arg1

if (r13_6 + 0xa8 == &var_228)
    int32_t* rax_139 = var_228
    
    if (rax_139 != 0)
        sub_140a74f90(rax_139)
else
    int64_t rcx_139 = *(r13_6 + 0xa8)
    
    if (rcx_139 != 0)
        sub_140a74f90(rcx_139)
    
    *(r13_6 + 0xa8) = var_228
    *(r13_6 + 0xb0) = i_12
    *(r13_6 + 0xb4) = var_21c

if (i_9 != 0)
    void* rdi_44 = result_1 + 0x40
    int32_t i_6
    
    do
        *(rdi_44 + 8) = 0
        int64_t rcx_141 = *rdi_44
        
        if (rcx_141 != 0)
            sub_140a74f90(rcx_141)
        
        sub_14100e680(rdi_44 - 0x40)
        rdi_44 += 0x50
        i_6 = i_9
        i_9 -= 1
    while (i_6 != 1)

void* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
