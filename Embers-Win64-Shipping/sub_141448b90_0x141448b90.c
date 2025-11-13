// 函数: sub_141448b90
// 地址: 0x141448b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
void* r13 = arg4
int64_t rsi = sx.q(*(rax + 0xef0))

if (rsi.d s> 0)
    int64_t rbx_1 = sx.q(*(arg1 + 0x2f8))
    int32_t rax_1 = (rbx_1 + rsi).d
    *(arg1 + 0x2f8) = rax_1
    
    if (rax_1 s> *(arg1 + 0x2fc))
        sub_141460be0(arg1 + 0x2f0, rbx_1.d)
    
    memset(rbx_1 * 0x70 + *(arg1 + 0x2f0), 0, rsi * 0x70)
    rax = *(arg1 + 8)

int64_t count = sx.q(*(rax + 0xdc0))
int32_t i_8 = 0
int64_t var_358 = 0
int64_t rcx_3 = 0
int32_t var_34c = 0
int32_t var_350 = count.d

if (count.d s> 0)
    sub_141460980(&var_358, 0)
    rcx_3 = var_358

memset(rcx_3, 0, count)
int64_t var_328 = 0
int64_t rcx_5 = 0
int32_t var_31c = 0
int32_t var_320 = count.d

if (count.d s> 0)
    sub_141460980(&var_328, 0)
    rcx_5 = var_328

memset(rcx_5, 0, count)
int64_t var_2c0 = 0
int64_t var_2b8 = 0
char rax_3

if (*(arg1 + 0xa8) s> 0)
    rax_3 = sub_1422eb5d0(*(arg1 + 0xa0))

char var_3e8

if (*(arg1 + 0xa8) s> 0 && (rax_3 != 0 || *(*(arg1 + 0xa0) + 0xd7c) != 0))
    var_3e8 = 1
else
    var_3e8 = 0

int128_t zmm6
int128_t zmm7
int128_t zmm8
zmm6, zmm7, zmm8 = sub_141464cb0(*(arg1 + 8))
sub_1413d7190(*(arg1 + 8))
int64_t r15 = 0
int32_t* r11_1 = *(arg1 + 8) + 0xe88
int64_t var_348 = 0
int32_t r10 = r11_1[0xa]
void* r9 = &r11_1[4]
int64_t var_340 = 0
int32_t var_318 = 0
int32_t rdi = 0
int32_t var_314 = 1
int32_t r12 = 0
void* var_310 = r9
int32_t rcx_10 = 0
int32_t var_308 = 0xffffffff
int32_t r8_3 = 0
int64_t var_304 = 0

if (r10 != 0)
    void* rax_4 = *(r9 + 0x10)
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141448d55:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_314_1 = rax_11
        int32_t var_288_1 = temp0_1
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_1
        
        var_304.d = r8_3 - rax_12 + 0x1f
        
        if (r8_3 - rax_12 + 0x1f s> r10)
            var_304.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_10)
            r8_3 += 0x20
            rcx_10 += 1
            var_304:4.d = r8_3
            var_318 = rcx_10
            
            if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_308_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141448d55
        
        var_304.d = r10

int32_t* var_2b0 = r11_1
int32_t* var_240 = r11_1
int128_t var_298 = 0xffffffff
double var_2a8[0x2] = var_318.o
double var_268[0x2] = var_2b0.o
int64_t var_248 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
void* r12_1

if (0 s>= r10)
    r12_1 = arg1
else
    int32_t i = var_2a8[1]:4.d
    
    do
        void* r14_1 = *(*var_268[0] + sx.q(i) * 0x10)
        
        if (sub_1413a07e0(r14_1) != 0)
            int64_t rsi_1 = sx.q(rdi)
            rdi = (rsi_1 + 1).d
            var_340.d = rdi
            
            if (rdi s> r12)
                sub_1405a4d70(&var_348)
                r12 = var_340:4.d
                rdi = var_340.d
                r15 = var_348
            
            *(r15 + (rsi_1 << 3)) = r14_1
        
        var_2a8[1].d &= not.d(var_268[1]:4.d)
        sub_14059bdd0(&var_268[1])
        i = var_2a8[1]:4.d
    while (i s< *(var_2a8[0] i+ 0x18))
    
    r12_1 = arg1
    
    if (rdi s> 0)
        void*** (* rdx_8)() = *(r12_1 + 8)
        int64_t var_200 = r15
        int32_t var_1f8_1 = rdi
        zmm6, zmm7, zmm8 = sub_1413ae170(arg2, rdx_8, &var_200, 1)

uint64_t rsi_3 = *(r12_1 + 8) + 0xe88

if (*(rsi_3 + 8) != *(rsi_3 + 0x34))
    int32_t rax_20 = *(rsi_3 + 0xc)
    *(rsi_3 + 8) = 0
    
    if (rax_20 s< 0 && rax_20 != 0)
        sub_1405a5410(rsi_3, 0)
    
    void* rdi_1 = rsi_3 + 0x10
    *(rsi_3 + 0x30) = 0xffffffff
    int32_t* r14_2 = rdi_1 + 0x18
    *(rsi_3 + 0x34) = 0
    void* rax_21 = *(rdi_1 + 0x10)
    uint32_t rdx_11 = (*r14_2 + 0x1f) u>> 5
    
    if (rax_21 != 0)
        rdi_1 = rax_21
    
    if (rdx_11 u> 8)
        memset(rdi_1, 0, zx.q(rdx_11) << 2)
    else if (rdx_11 != 0)
        __builtin_memset(rdi_1, 0, zx.q(rdx_11) << 2)
    
    *r14_2 = 0
    void* rdi_2 = rsi_3 + 0x38
    int64_t rcx_20 = sx.q(*(rsi_3 + 0x48))
    void* rax_22 = *(rdi_2 + 8)
    
    if (rcx_20 s> 0)
        if (rax_22 != 0)
            rdi_2 = rax_22
        
        __builtin_memset(rdi_2, 0xffffffff, rcx_20 << 2)

if (r15 != 0)
    sub_140a74f90(r15)

int32_t rax_256 = *(r12_1 + 0xa8)
int32_t rdx_12 = 0
int64_t* r15_1 = arg6
char var_3e7 = 1
int32_t var_3c0 = 0
char r14_25

if (rax_256 s<= 0)
    r14_25 = var_3e8
else
    int128_t var_68_1 = zmm7
    int64_t rcx_22 = 0
    zmm7 = 0x3c010204
    int128_t var_78_1 = zmm8
    zmm8 = 0xbf000000
    int128_t var_58_1 = zmm6
    int64_t var_2c8_1 = 0
    
    do
        int64_t* r13_2 = rcx_22 * 0x5240 + *(r12_1 + 0xa0)
        void* rdi_3 = arg4
        void* rax_23 = *(arg4 + 0xa20)
        
        if (rax_23 != 0)
            rdi_3 = rax_23
        
        void* rax_25 = r13_2[1]
        int32_t rcx_25 = *(*(r12_1 + 8) + 0xdc0)
        r13_2[0x2ba].d = rcx_25
        uint32_t rsi_5 = (rcx_25 + 0x1f) u>> 5
        uint64_t rcx_28 = zx.q((*(r13_2 + 0x15d4) + 0x1f) u>> 5)
        
        if (rsi_5 u<= rcx_28.d)
            void* rax_31 = r13_2[0x2b9]
            void* rdi_6 = &r13_2[0x2b7]
            
            if (rax_31 != 0)
                rdi_6 = rax_31
            
            if (rcx_28.d u> 8)
                memset(rdi_6, 0, zx.q(rcx_28.d) << 2)
            else if (rcx_28.d != 0)
                __builtin_memset(rdi_6, 0, rcx_28 << 2)
        else
            sub_1410b36b0(&r13_2[0x2b7], 0, rsi_5, 4)
            void* r14_3 = &r13_2[0x2b7]
            *(r13_2 + 0x15d4) = rsi_5 << 5
            void* rax_29 = r13_2[0x2b9]
            
            if (rax_29 != 0)
                r14_3 = rax_29
            
            if (rsi_5 u> 8)
                memset(r14_3, 0, zx.q(rsi_5) << 2)
            else if (rsi_5 != 0)
                __builtin_memset(r14_3, 0, zx.q(rsi_5) << 2)
            
            uint64_t rdx_13 = zx.q(rsi_5 - 1)
            *(r14_3 + (rdx_13 << 2)) &= 0xffffffff u>> ((neg.d(r13_2[0x2ba].d)).b & 0x1f)
        
        int32_t rdx_14 = r13_2[0x3b1].d
        int32_t rax_33 = *(*(r12_1 + 8) + 0xdc0)
        
        if (rax_33 s> rdx_14)
            r13_2[0x3b1].d = rax_33
            
            if (rax_33 s> *(r13_2 + 0x1d8c))
                sub_14113b710(&r13_2[0x3b0], rdx_14)
        else if (rax_33 s< rdx_14 && rax_33 != rdx_14)
            r13_2[0x3b1].d = rax_33
            sub_141460e90(&r13_2[0x3b0])
        
        void* rsi_6 = &r13_2[0x2bb]
        void* r15_3 = rsi_6 + 0x18
        int32_t rcx_37 = *(*(r12_1 + 8) + 0xdc0)
        *r15_3 = rcx_37
        uint32_t r14_5 = (rcx_37 + 0x1f) u>> 5
        uint64_t rcx_40 = zx.q((*(rsi_6 + 0x1c) + 0x1f) u>> 5)
        
        if (r14_5 u<= rcx_40.d)
            void* rax_39 = *(rsi_6 + 0x10)
            
            if (rax_39 != 0)
                rsi_6 = rax_39
            
            if (rcx_40.d u> 8)
                memset(rsi_6, 0, zx.q(rcx_40.d) << 2)
            else if (rcx_40.d != 0)
                __builtin_memset(rsi_6, 0, rcx_40 << 2)
        else
            sub_1410b36b0(rsi_6, 0, r14_5, 4)
            *(rsi_6 + 0x1c) = r14_5 << 5
            void* rax_37 = *(rsi_6 + 0x10)
            
            if (rax_37 != 0)
                rsi_6 = rax_37
            
            if (r14_5 u> 8)
                memset(rsi_6, 0, zx.q(r14_5) << 2)
            else if (r14_5 != 0)
                __builtin_memset(rsi_6, 0, zx.q(r14_5) << 2)
            
            uint64_t rdx_15 = zx.q(r14_5 - 1)
            *(rsi_6 + (rdx_15 << 2)) &= 0xffffffff u>> ((neg.d(*r15_3)).b & 0x1f)
        
        void* rsi_7 = &r13_2[0x2bf]
        void* r15_4 = rsi_7 + 0x18
        int32_t rcx_48 = *(*(r12_1 + 8) + 0xdc0)
        *r15_4 = rcx_48
        uint32_t r14_7 = (rcx_48 + 0x1f) u>> 5
        uint64_t rcx_51 = zx.q((*(rsi_7 + 0x1c) + 0x1f) u>> 5)
        
        if (r14_7 u<= rcx_51.d)
            void* rax_45 = *(rsi_7 + 0x10)
            
            if (rax_45 != 0)
                rsi_7 = rax_45
            
            if (rcx_51.d u> 8)
                memset(rsi_7, 0, zx.q(rcx_51.d) << 2)
            else if (rcx_51.d != 0)
                __builtin_memset(rsi_7, 0, rcx_51 << 2)
        else
            sub_1410b36b0(rsi_7, 0, r14_7, 4)
            *(rsi_7 + 0x1c) = r14_7 << 5
            void* rax_43 = *(rsi_7 + 0x10)
            
            if (rax_43 != 0)
                rsi_7 = rax_43
            
            if (r14_7 u> 8)
                memset(rsi_7, 0, zx.q(r14_7) << 2)
            else if (r14_7 != 0)
                __builtin_memset(rsi_7, 0, zx.q(r14_7) << 2)
            
            uint64_t rdx_16 = zx.q(r14_7 - 1)
            *(rsi_7 + (rdx_16 << 2)) &= 0xffffffff u>> ((neg.d(*r15_4)).b & 0x1f)
        
        int64_t rsi_8 = sx.q(r13_2[0x2c4].d)
        int64_t r14_8 = sx.q(*(*(r12_1 + 8) + 0xdc0))
        int32_t rax_47 = (r14_8 + rsi_8).d
        r13_2[0x2c4].d = rax_47
        
        if (rax_47 s> *(r13_2 + 0x1624))
            sub_14083a310(&r13_2[0x2c3], rsi_8.d)
        
        memset(r13_2[0x2c3] + (rsi_8 << 3), 0, r14_8 << 3)
        void* rsi_9 = &r13_2[0x2c5]
        void* r15_5 = rsi_9 + 0x18
        int32_t rcx_61 = *(*(r12_1 + 8) + 0xdc0)
        *r15_5 = rcx_61
        uint32_t r14_10 = (rcx_61 + 0x1f) u>> 5
        uint64_t rcx_64 = zx.q((*(rsi_9 + 0x1c) + 0x1f) u>> 5)
        
        if (r14_10 u<= rcx_64.d)
            void* rax_54 = *(rsi_9 + 0x10)
            
            if (rax_54 != 0)
                rsi_9 = rax_54
            
            if (rcx_64.d u> 8)
                memset(rsi_9, 0, zx.q(rcx_64.d) << 2)
            else if (rcx_64.d != 0)
                __builtin_memset(rsi_9, 0, rcx_64 << 2)
        else
            sub_1410b36b0(rsi_9, 0, r14_10, 4)
            *(rsi_9 + 0x1c) = r14_10 << 5
            void* rax_52 = *(rsi_9 + 0x10)
            
            if (rax_52 != 0)
                rsi_9 = rax_52
            
            if (r14_10 u> 8)
                memset(rsi_9, 0, zx.q(r14_10) << 2)
            else if (r14_10 != 0)
                __builtin_memset(rsi_9, 0, zx.q(r14_10) << 2)
            
            uint64_t rdx_18 = zx.q(r14_10 - 1)
            *(rsi_9 + (rdx_18 << 2)) &= 0xffffffff u>> ((neg.d(*r15_5)).b & 0x1f)
        
        void* rsi_10 = &r13_2[0x2cd]
        void* r15_6 = rsi_10 + 0x18
        int32_t rcx_72 = *(*(r12_1 + 8) + 0x1bb0)
        *r15_6 = rcx_72
        uint32_t r14_12 = (rcx_72 + 0x1f) u>> 5
        uint64_t rcx_75 = zx.q((*(rsi_10 + 0x1c) + 0x1f) u>> 5)
        
        if (r14_12 u<= rcx_75.d)
            void* rax_60 = *(rsi_10 + 0x10)
            
            if (rax_60 != 0)
                rsi_10 = rax_60
            
            if (rcx_75.d u> 8)
                memset(rsi_10, 0, zx.q(rcx_75.d) << 2)
            else if (rcx_75.d != 0)
                __builtin_memset(rsi_10, 0, rcx_75 << 2)
        else
            sub_1410b36b0(rsi_10, 0, r14_12, 4)
            *(rsi_10 + 0x1c) = r14_12 << 5
            void* rax_58 = *(rsi_10 + 0x10)
            
            if (rax_58 != 0)
                rsi_10 = rax_58
            
            if (r14_12 u> 8)
                memset(rsi_10, 0, zx.q(r14_12) << 2)
            else if (r14_12 != 0)
                __builtin_memset(rsi_10, 0, zx.q(r14_12) << 2)
            
            uint64_t rdx_19 = zx.q(r14_12 - 1)
            *(rsi_10 + (rdx_19 << 2)) &= 0xffffffff u>> ((neg.d(*r15_6)).b & 0x1f)
        
        void* rsi_11 = &r13_2[0x2d1]
        void* r15_7 = rsi_11 + 0x18
        int32_t rcx_83 = *(*(r12_1 + 8) + 0x1bb0)
        *r15_7 = rcx_83
        uint32_t r14_14 = (rcx_83 + 0x1f) u>> 5
        uint64_t rcx_86 = zx.q((*(rsi_11 + 0x1c) + 0x1f) u>> 5)
        
        if (r14_14 u<= rcx_86.d)
            void* rax_66 = *(rsi_11 + 0x10)
            
            if (rax_66 != 0)
                rsi_11 = rax_66
            
            if (rcx_86.d u> 8)
                memset(rsi_11, 0, zx.q(rcx_86.d) << 2)
            else if (rcx_86.d != 0)
                __builtin_memset(rsi_11, 0, rcx_86 << 2)
        else
            sub_1410b36b0(rsi_11, 0, r14_14, 4)
            *(rsi_11 + 0x1c) = r14_14 << 5
            void* rax_64 = *(rsi_11 + 0x10)
            
            if (rax_64 != 0)
                rsi_11 = rax_64
            
            if (r14_14 u> 8)
                memset(rsi_11, 0, zx.q(r14_14) << 2)
            else if (r14_14 != 0)
                __builtin_memset(rsi_11, 0, zx.q(r14_14) << 2)
            
            uint64_t rdx_20 = zx.q(r14_14 - 1)
            *(rsi_11 + (rdx_20 << 2)) &= 0xffffffff u>> ((neg.d(*r15_7)).b & 0x1f)
        
        void* rsi_12 = &r13_2[0x2d5]
        void* r15_8 = rsi_12 + 0x18
        int32_t rcx_94 = *(*(r12_1 + 8) + 0x1bb0)
        *r15_8 = rcx_94
        uint32_t r14_16 = (rcx_94 + 0x1f) u>> 5
        uint64_t rcx_97 = zx.q((*(rsi_12 + 0x1c) + 0x1f) u>> 5)
        
        if (r14_16 u<= rcx_97.d)
            void* rax_72 = *(rsi_12 + 0x10)
            
            if (rax_72 != 0)
                rsi_12 = rax_72
            
            if (rcx_97.d u> 8)
                memset(rsi_12, 0, zx.q(rcx_97.d) << 2)
            else if (rcx_97.d != 0)
                __builtin_memset(rsi_12, 0, rcx_97 << 2)
        else
            sub_1410b36b0(rsi_12, 0, r14_16, 4)
            *(rsi_12 + 0x1c) = r14_16 << 5
            void* rax_70 = *(rsi_12 + 0x10)
            
            if (rax_70 != 0)
                rsi_12 = rax_70
            
            if (r14_16 u> 8)
                memset(rsi_12, 0, zx.q(r14_16) << 2)
            else if (r14_16 != 0)
                __builtin_memset(rsi_12, 0, zx.q(r14_16) << 2)
            
            uint64_t rdx_21 = zx.q(r14_16 - 1)
            *(rsi_12 + (rdx_21 << 2)) &= 0xffffffff u>> ((neg.d(*r15_8)).b & 0x1f)
        
        int64_t rsi_13 = sx.q(r13_2[0x2dc].d)
        int64_t r14_17 = sx.q(*(*(r12_1 + 8) + 0x1be8))
        int32_t rax_74 = (rsi_13 + r14_17).d
        r13_2[0x2dc].d = rax_74
        
        if (rax_74 s> *(r13_2 + 0x16e4))
            sub_14083a440(&r13_2[0x2db], rsi_13.d)
        
        memset(r13_2[0x2db] + (rsi_13 << 3), 0, r14_17 << 3)
        int16_t var_3e4_1 = 0x7f7f
        uint64_t i_17 = zx.q(*(*(r12_1 + 8) + 0xdc0))
        r13_2[0x2da].d = 0
        
        if (*(r13_2 + 0x16d4) != i_17.d)
            sub_141460ef0(&r13_2[0x2d9], i_17.d)
        
        if (i_17.d s> 0)
            uint64_t i_14 = i_17
            uint64_t i_1
            
            do
                int64_t r14_18 = sx.q(r13_2[0x2da].d)
                int32_t rax_77 = (r14_18 + 1).d
                r13_2[0x2da].d = rax_77
                
                if (rax_77 s> *(r13_2 + 0x16d4))
                    sub_141460b90(&r13_2[0x2d9], r14_18.d)
                
                int16_t* rdx_25 = r13_2[0x2d9] + (r14_18 << 1)
                
                if (rdx_25 != 0)
                    *rdx_25 = 0x7f7f
                
                i_1 = i_14
                i_14 -= 1
            while (i_1 != 1)
        
        uint64_t i_16 = zx.q(*(*(r12_1 + 8) + 0xdc0))
        r13_2[0x2ac].d = 0
        
        if (*(r13_2 + 0x1564) != i_16.d)
            sub_140638c50(&r13_2[0x2ab], i_16.d)
        
        if (i_16.d s> 0)
            uint64_t i_13 = i_16
            uint64_t i_2
            
            do
                int64_t rsi_15 = sx.q(r13_2[0x2ac].d)
                int32_t rax_80 = (rsi_15 + 1).d
                r13_2[0x2ac].d = rax_80
                
                if (rax_80 s> *(r13_2 + 0x1564))
                    sub_140638870(&r13_2[0x2ab])
                
                int64_t* rdx_28 = r13_2[0x2ab] + (rsi_15 << 3)
                
                if (rdx_28 != 0)
                    *rdx_28 = 0
                
                i_2 = i_13
                i_13 -= 1
            while (i_2 != 1)
        
        int32_t rdx_29
        
        if (sub_140b011d0() == 0 || *(data_143ed5dd0 + 4) s<= 0)
            rdx_29 = 1
        else
            uint128_t zmm1_1
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(r13_2[0x2ba].d)).d f* zmm7.d
            zmm1_1.d = zmm1_1.d f+ zmm1_1.d
            rdx_29 = 1 - (int.d(zmm8.d f- zmm1_1.d) s>> 1)
        
        if (rdx_29 s> *(r13_2 + 0x48a4))
            sub_141105150(&r13_2[0x913], rdx_29)
        
        int64_t rsi_16 = sx.q(r13_2[0x914].d)
        int32_t rax_86 = (rsi_16 + 1).d
        r13_2[0x914].d = rax_86
        
        if (rax_86 s> *(r13_2 + 0x48a4))
            sub_141104ec0(&r13_2[0x913], rsi_16.d)
        
        int64_t rdx_31 = r13_2[0x913] + rsi_16 * 0x28
        
        if (rdx_31 != 0)
            __builtin_memset(rdx_31, 0, 0x28)
        
        int32_t rdx_32 = *(*(r12_1 + 8) + 0xef0)
        r13_2[0x31b].d = 0
        
        if (*(r13_2 + 0x18dc) != rdx_32)
            sub_141460f10(&r13_2[0x31a], rdx_32)
        
        void* rax_89 = *(r12_1 + 8)
        int32_t rdx_33 = *(rax_89 + 0xdc0)
        
        if (rdx_33 s> *(r13_2 + 0x1754))
            sub_14083ad10(&r13_2[0x2e9], rdx_33)
            rax_89 = *(r12_1 + 8)
        
        int32_t i_3 = 0
        
        if (*(rax_89 + 0xef0) s> 0)
            do
                int64_t rsi_17 = sx.q(r13_2[0x31b].d)
                int32_t rax_90 = (rsi_17 + 1).d
                r13_2[0x31b].d = rax_90
                
                if (rax_90 s> *(r13_2 + 0x18dc))
                    sub_141460d10(&r13_2[0x31a], rsi_17.d)
                
                int64_t rdx_35 = rsi_17 * 0x78
                int64_t* rdx_36 = rdx_35 + r13_2[0x31a]
                
                if (rdx_35 != neg.q(r13_2[0x31a]))
                    *rdx_36 = 0
                    void* rcx_117 = &rdx_36[2]
                    rdx_36[1] = 0
                    *(rcx_117 + 0x10) = 0
                    *(rcx_117 + 0x18) = 0
                    *(rcx_117 + 0x1c) = 0x80
                    void* rax_91 = *(rcx_117 + 0x10)
                    
                    if (rax_91 != 0)
                        rcx_117 = rax_91
                    
                    *rcx_117 = 0
                    *(rcx_117 + 8) = 0
                    void* rcx_118 = &rdx_36[9]
                    rdx_36[6] = 0
                    rdx_36[7] = 0
                    rdx_36[8].d &= 0xfffffffe
                    rdx_36[0xb] = 0
                    rdx_36[0xc].d = 0
                    *(rdx_36 + 0x64) = 0x80
                    void* rax_92 = rdx_36[0xb]
                    
                    if (rax_92 != 0)
                        rcx_118 = rax_92
                    
                    *rcx_118 = 0
                    *(rcx_118 + 8) = 0
                    rdx_36[0xd] = 0
                    rdx_36[0xe] = 0
                
                rax_89 = *(r12_1 + 8)
                i_3 += 1
            while (i_3 s< *(rax_89 + 0xef0))
        
        int32_t rdx_37 = *(rax_89 + 0xdc0)
        int32_t rsi_18 = 0
        r13_2[0x2cc].d = 0
        
        if (*(r13_2 + 0x1664) != rdx_37)
            sub_14083ae30(&r13_2[0x2cb], rdx_37)
            rsi_18 = r13_2[0x2cc].d
        
        int64_t r14_19 = sx.q(*(*(r12_1 + 8) + 0xdc0))
        int32_t rax_94 = r14_19.d + rsi_18
        r13_2[0x2cc].d = rax_94
        
        if (rax_94 s> *(r13_2 + 0x1664))
            sub_14083a990(&r13_2[0x2cb], rsi_18)
        
        memset((sx.q(rsi_18) << 4) + r13_2[0x2cb], 0, r14_19 << 4)
        void* rdi_22
        
        if (rax_25 != 0 && *(rax_25 + 0x10) s> 0)
            bool cond:9_1 = *(rax_25 + 0x224) == 0
            *(rax_25 + 0x220) = 0
            
            if (not(cond:9_1))
                sub_140638cc0(rax_25 + 0x218, 0)
            
            *(rax_25 + 0x248) = 0xffffffff
            *(rax_25 + 0x24c) = 0
            sub_14059a8e0(rax_25 + 0x228, 0)
            int32_t i_15 = *(rax_25 + 0x260)
            
            if (i_15 s> 0)
                int64_t r8_49 = 0
                uint64_t i_12 = zx.q(i_15)
                uint64_t i_4
                
                do
                    void* rdx_39 = *(rax_25 + 0x258)
                    void* rax_95 = rax_25 + 0x250
                    rdi_22 = (sx.q(*(rax_25 + 0x260)) - 1) & r8_49
                    
                    if (rdx_39 != 0)
                        rax_95 = rdx_39
                    
                    r8_49 += 1
                    *(rax_95 + (rdi_22 << 2)) = 0xffffffff
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
        
        int64_t rax_96
        
        if (rax_25 == 0)
            rax_96 = 0
        else
            rax_96 = sub_14141f7b0(rax_25, r13_2, *(r12_1 + 8))
        
        r13_2[0x9fb] = rax_96
        
        if (rax_96 != 0)
            *(r12_1 + 0x399) = 1
        
        int64_t* rcx_128 = *(r12_1 + 8) + 0x6288
        
        if (rcx_128[2].d - *(rcx_128 + 0x3c) s<= 0)
            void* rsi_20 = r13_2[1]
            
            if (rsi_20 != 0)
                if (*(rsi_20 + 0x3b0) s> 0)
                    sub_14059a8e0(rsi_20 + 0x338, 0)
                    sub_14059a8e0(rsi_20 + 0x358, 0)
                    sub_14059a8e0(rsi_20 + 0x378, 0)
                    sub_14059a8e0(rsi_20 + 0x398, 0)
                
                if (*(rsi_20 + 0x3d0) - *(rsi_20 + 0x3fc) s> 0)
                    sub_141453140(rsi_20 + 0x3c8, 0)
        else
            sub_141465170(rcx_128, r13_2)
        
        if (r13_2[0x1a0].d != 8 || *(data_143ed5e60 + 4) == 0)
            rdi_22.b = 0
        else
            rdi_22.b = 1
        
        int64_t* rcx_134 = r13_2[0xa2c]
        char rax_103
        
        if (rcx_134 != 0)
            rax_103 = (*(*rcx_134 + 0x20))(rcx_134)
        
        if (rcx_134 == 0 || rax_103 == 0)
            void* r14_22 = *(r12_1 + 8)
            
            if (*(data_143ed5df8 + 4) == 0)
                if (rdi_22.b == 0)
                    int32_t var_3c4 = 0
                    zmm6.d =
                        data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                    int64_t rax_207
                    int64_t rdi_32
                    
                    if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s> 0)
                        rax_207 = r13_2[1]
                        rdi_32 = rax_207 + 0x338
                    
                    if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s<= 0 || rax_207 == 0)
                        rdi_32 = 0
                    
                    int32_t rax_208 = r13_2[0x2ba].d
                    int32_t rax_209 = rax_208 + 0x1f
                    
                    if (rax_208 + 0x1f s< 0)
                        rax_209 += 0x1f
                    
                    int32_t temp0_11 =
                        divs.dp.d(sx.q((rax_209 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                    data_1439b6dd0
                    char rax_215 = sub_140b011d0()
                    char rax_216
                    int32_t r8_58
                    
                    if (rax_215 != 0 && *(data_143ed5dd0 + 4) != 0)
                        rax_216 = sub_140a80e70()
                        r8_58 = 0
                    
                    if (rax_215 == 0 || *(data_143ed5dd0 + 4) == 0 || rax_216 == 0)
                        r8_58 = 1
                    
                    var_298.d = zmm6.d
                    var_2b0 = &var_3c4
                    var_2a8[0] = r14_22
                    int64_t (* var_220)(void* arg1, int32_t* arg2) = sub_141447540
                    var_2a8[1] = r13_2
                    void** var_218_1 = &var_2b0
                    var_298:8.q = rdi_32
                    sub_14077b750(temp0_11, &var_220, r8_58)
                    
                    if (0 == var_3c4)
                        var_3c4 = 0
                else
                    int32_t var_3c8 = 0
                    zmm6.d =
                        data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                    int64_t rax_194
                    int64_t rdi_31
                    
                    if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s> 0)
                        rax_194 = r13_2[1]
                        rdi_31 = rax_194 + 0x338
                    
                    if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s<= 0 || rax_194 == 0)
                        rdi_31 = 0
                    
                    int32_t rax_195 = r13_2[0x2ba].d
                    int32_t rax_196 = rax_195 + 0x1f
                    
                    if (rax_195 + 0x1f s< 0)
                        rax_196 += 0x1f
                    
                    int32_t temp0_10 =
                        divs.dp.d(sx.q((rax_196 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                    data_1439b6dd0
                    char rax_202 = sub_140b011d0()
                    char rax_203
                    int32_t r8_57
                    
                    if (rax_202 != 0 && *(data_143ed5dd0 + 4) != 0)
                        rax_203 = sub_140a80e70()
                        r8_57 = 0
                    
                    if (rax_202 == 0 || *(data_143ed5dd0 + 4) == 0 || rax_203 == 0)
                        r8_57 = 1
                    
                    int32_t var_b0_1 = zmm6.d
                    int32_t* var_c8 = &var_3c8
                    void* var_c0_1 = r14_22
                    int64_t (* var_230)(void* arg1, int32_t* arg2) = sub_1414475e0
                    int64_t* var_b8_1 = r13_2
                    int32_t** var_228_1 = &var_c8
                    int64_t var_a8_1 = rdi_31
                    sub_14077b750(temp0_10, &var_230, r8_57)
                    
                    if (0 == var_3c8)
                        var_3c8 = 0
            else if (rdi_22.b == 0)
                int32_t var_3cc = 0
                zmm6.d =
                    data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                int64_t rax_181
                int64_t rdi_30
                
                if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s> 0)
                    rax_181 = r13_2[1]
                    rdi_30 = rax_181 + 0x338
                
                if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s<= 0 || rax_181 == 0)
                    rdi_30 = 0
                
                int32_t rax_182 = r13_2[0x2ba].d
                int32_t rax_183 = rax_182 + 0x1f
                
                if (rax_182 + 0x1f s< 0)
                    rax_183 += 0x1f
                
                int32_t temp0_9 =
                    divs.dp.d(sx.q((rax_183 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                data_1439b6dd0
                char rax_189 = sub_140b011d0()
                char rax_190
                int32_t r8_56
                
                if (rax_189 != 0 && *(data_143ed5dd0 + 4) != 0)
                    rax_190 = sub_140a80e70()
                    r8_56 = 0
                
                if (rax_189 == 0 || *(data_143ed5dd0 + 4) == 0 || rax_190 == 0)
                    r8_56 = 1
                
                int32_t var_d8_1 = zmm6.d
                int32_t* var_f0 = &var_3cc
                void* var_e8_1 = r14_22
                int64_t (* var_1a0)(void* arg1, int32_t* arg2) = sub_141447560
                int64_t* var_e0_1 = r13_2
                int32_t** var_198_1 = &var_f0
                int64_t var_d0_1 = rdi_30
                sub_14077b750(temp0_9, &var_1a0, r8_56)
                
                if (0 == var_3cc)
                    var_3cc = 0
            else
                int32_t var_3d0 = 0
                zmm6.d =
                    data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                int64_t rax_168
                int64_t rdi_29
                
                if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s> 0)
                    rax_168 = r13_2[1]
                    rdi_29 = rax_168 + 0x338
                
                if (*(r14_22 + 0x6298) - *(r14_22 + 0x62c4) s<= 0 || rax_168 == 0)
                    rdi_29 = 0
                
                int32_t rax_169 = r13_2[0x2ba].d
                int32_t rax_170 = rax_169 + 0x1f
                
                if (rax_169 + 0x1f s< 0)
                    rax_170 += 0x1f
                
                int32_t temp0_8 =
                    divs.dp.d(sx.q((rax_170 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                data_1439b6dd0
                char rax_176 = sub_140b011d0()
                char rax_177
                int32_t r8_55
                
                if (rax_176 != 0 && *(data_143ed5dd0 + 4) != 0)
                    rax_177 = sub_140a80e70()
                    r8_55 = 0
                
                if (rax_176 == 0 || *(data_143ed5dd0 + 4) == 0 || rax_177 == 0)
                    r8_55 = 1
                
                int32_t var_100_1 = zmm6.d
                int32_t* var_118 = &var_3d0
                void* var_110_1 = r14_22
                int64_t (* var_1b0)(void* arg1, int32_t* arg2) = sub_141447650
                int64_t* var_108_1 = r13_2
                int32_t** var_1a8_1 = &var_118
                int64_t var_f8_1 = rdi_29
                sub_14077b750(temp0_8, &var_1b0, r8_55)
                
                if (0 == var_3d0)
                    var_3d0 = 0
        else
            void* r14_21 = *(r12_1 + 8)
            
            if (*(data_143ed5df8 + 4) == 0)
                if (rdi_22.b == 0)
                    int32_t var_3d4 = 0
                    zmm6.d =
                        data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                    int64_t rax_152
                    int64_t rdi_28
                    
                    if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s> 0)
                        rax_152 = r13_2[1]
                        rdi_28 = rax_152 + 0x338
                    
                    if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s<= 0 || rax_152 == 0)
                        rdi_28 = 0
                    
                    int32_t rax_153 = r13_2[0x2ba].d
                    int32_t rax_154 = rax_153 + 0x1f
                    
                    if (rax_153 + 0x1f s< 0)
                        rax_154 += 0x1f
                    
                    int32_t temp0_7 =
                        divs.dp.d(sx.q((rax_154 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                    data_1439b6dd0
                    int32_t r8_54
                    
                    if (sub_140b011d0() == 0)
                        r8_54 = 1
                    else
                        int64_t* rcx_141 = r13_2[0xa2c]
                        int64_t rdx_56 = *rcx_141
                        
                        if ((*(rdx_56 + 0x30))(rcx_141, rdx_56) == 0 || *(data_143ed5dd0 + 4) == 0)
                            r8_54 = 1
                        else
                            r8_54 = 0
                            
                            if (sub_140a80e70() == 0)
                                r8_54 = 1
                    
                    int32_t var_128_1 = zmm6.d
                    int32_t* var_140 = &var_3d4
                    void* var_138_1 = r14_21
                    int64_t (* var_1c0)(void* arg1, int32_t* arg2) = sub_141447590
                    int64_t* var_130_1 = r13_2
                    int32_t** var_1b8_1 = &var_140
                    int64_t var_120_1 = rdi_28
                    sub_14077b750(temp0_7, &var_1c0, r8_54)
                    
                    if (0 == var_3d4)
                        var_3d4 = 0
                else
                    int32_t var_3d8 = 0
                    zmm6.d =
                        data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                    int64_t rax_137
                    int64_t rdi_27
                    
                    if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s> 0)
                        rax_137 = r13_2[1]
                        rdi_27 = rax_137 + 0x338
                    
                    if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s<= 0 || rax_137 == 0)
                        rdi_27 = 0
                    
                    int32_t rax_138 = r13_2[0x2ba].d
                    int32_t rax_139 = rax_138 + 0x1f
                    
                    if (rax_138 + 0x1f s< 0)
                        rax_139 += 0x1f
                    
                    int32_t temp0_6 =
                        divs.dp.d(sx.q((rax_139 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                    data_1439b6dd0
                    int32_t r8_53
                    
                    if (sub_140b011d0() == 0)
                        r8_53 = 1
                    else
                        int64_t* rcx_139 = r13_2[0xa2c]
                        int64_t rdx_52 = *rcx_139
                        
                        if ((*(rdx_52 + 0x30))(rcx_139, rdx_52) == 0 || *(data_143ed5dd0 + 4) == 0)
                            r8_53 = 1
                        else
                            r8_53 = 0
                            
                            if (sub_140a80e70() == 0)
                                r8_53 = 1
                    
                    int32_t var_88_1 = zmm6.d
                    int32_t* var_a0 = &var_3d8
                    void* var_98_1 = r14_21
                    int64_t (* var_1d0)(void* arg1, int32_t* arg2) = sub_1414475a0
                    int64_t* var_90_1 = r13_2
                    int32_t** var_1c8_1 = &var_a0
                    int64_t var_80_1 = rdi_27
                    sub_14077b750(temp0_6, &var_1d0, r8_53)
                    
                    if (0 == var_3d8)
                        var_3d8 = 0
            else if (rdi_22.b == 0)
                int32_t var_3dc = 0
                zmm6.d =
                    data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                int64_t rax_122
                int64_t rdi_26
                
                if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s> 0)
                    rax_122 = r13_2[1]
                    rdi_26 = rax_122 + 0x338
                
                if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s<= 0 || rax_122 == 0)
                    rdi_26 = 0
                
                int32_t rax_123 = r13_2[0x2ba].d
                int32_t rax_124 = rax_123 + 0x1f
                
                if (rax_123 + 0x1f s< 0)
                    rax_124 += 0x1f
                
                int32_t temp0_5 =
                    divs.dp.d(sx.q((rax_124 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                data_1439b6dd0
                int32_t r8_52
                
                if (sub_140b011d0() == 0)
                    r8_52 = 1
                else
                    int64_t* rcx_137 = r13_2[0xa2c]
                    int64_t rdx_48 = *rcx_137
                    
                    if ((*(rdx_48 + 0x30))(rcx_137, rdx_48) == 0 || *(data_143ed5dd0 + 4) == 0)
                        r8_52 = 1
                    else
                        r8_52 = 0
                        
                        if (sub_140a80e70() == 0)
                            r8_52 = 1
                
                int32_t var_150_1 = zmm6.d
                int32_t* var_168 = &var_3dc
                void* var_160_1 = r14_21
                int64_t (* var_1e0)(void* arg1, int32_t* arg2) = sub_1414474f0
                int64_t* var_158_1 = r13_2
                int32_t** var_1d8_1 = &var_168
                int64_t var_148_1 = rdi_26
                sub_14077b750(temp0_5, &var_1e0, r8_52)
                
                if (0 == var_3dc)
                    var_3dc = 0
            else
                int32_t var_3e0 = 0
                zmm6.d =
                    data_143a30378:8.d.d f* sub_141447490(&data_143a30368, (*(r13_2 + 0xae4)).d)
                int64_t rax_107
                int64_t rdi_25
                
                if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s> 0)
                    rax_107 = r13_2[1]
                    rdi_25 = rax_107 + 0x338
                
                if (*(r14_21 + 0x6298) - *(r14_21 + 0x62c4) s<= 0 || rax_107 == 0)
                    rdi_25 = 0
                
                int32_t rax_108 = r13_2[0x2ba].d
                int32_t rax_109 = rax_108 + 0x1f
                
                if (rax_108 + 0x1f s< 0)
                    rax_109 += 0x1f
                
                int32_t temp0_4 =
                    divs.dp.d(sx.q((rax_109 s>> 5) - 1 + data_1439b6dd0), data_1439b6dd0)
                data_1439b6dd0
                int32_t r8_51
                
                if (sub_140b011d0() == 0)
                    r8_51 = 1
                else
                    int64_t* rcx_135 = r13_2[0xa2c]
                    int64_t rdx_44 = *rcx_135
                    
                    if ((*(rdx_44 + 0x30))(rcx_135, rdx_44) == 0 || *(data_143ed5dd0 + 4) == 0)
                        r8_51 = 1
                    else
                        r8_51 = 0
                        
                        if (sub_140a80e70() == 0)
                            r8_51 = 1
                
                int32_t var_178_1 = zmm6.d
                int32_t* var_190 = &var_3e0
                void* var_188_1 = r14_21
                int64_t (* var_1f0)(void* arg1, int32_t* arg2) = sub_141447550
                int64_t* var_180_1 = r13_2
                int32_t** var_1e8_1 = &var_190
                int64_t var_170_1 = rdi_25
                sub_14077b750(temp0_4, &var_1f0, r8_51)
                
                if (0 == var_3e0)
                    var_3e0 = 0
        
        sub_1414646a0(*(r12_1 + 8), r13_2)
        
        if (r13_2[0x169].d != *(r13_2 + 0xb74))
            bool cond:10_1 = r13_2[0x2ba].d == 0
            int32_t rdi_33 = 1
            void* rax_219 = &r13_2[0x2b7]
            int32_t var_3b4_1 = 1
            void* var_3b0_1 = rax_219
            int32_t rcx_152 = 0
            int32_t var_3b8 = 0
            int32_t var_3a8_1 = 0xffffffff
            int32_t var_3a4_1 = 0
            
            if (not(cond:10_1))
                sub_14059bdd0(&var_3b8)
                rcx_152 = var_3a4_1
                rax_219 = var_3b0_1
                rdi_33 = var_3b4_1
            
            if (rcx_152 s< *(rax_219 + 0x18))
                while (true)
                    void var_278
                    
                    if (*sub_141454d30(&r13_2[0x168], &var_278, 
                            *(*(r12_1 + 8) + 0xe38) + (sx.q(rcx_152) << 2)) != 0xffffffff)
                        void* rax_222 = r13_2[0x2b9]
                        void* rdx_73 = &r13_2[0x2b7]
                        int64_t rcx_156 = sx.q(var_3b8)
                        
                        if (rax_222 != 0)
                            rdx_73 = rax_222
                        
                        *(rdx_73 + (rcx_156 << 2)) &= not.d(rdi_33)
                    
                    var_3a8_1 &= not.d(rdi_33)
                    sub_14059bdd0(&var_3b8)
                    rcx_152 = var_3a4_1
                    
                    if (rcx_152 s>= *(var_3b0_1 + 0x18))
                        break
                    
                    rdi_33 = var_3b4_1
        
        if (r13_2[0x17c].b != 0)
            int32_t rcx_158 = 0
            bool cond:11_1 = r13_2[0x173].d == *(r13_2 + 0xbc4)
            int32_t rdi_35 = 1
            int32_t var_398 = 0
            
            if (cond:11_1)
                rcx_158 = 2
            
            int32_t var_394_1 = 1
            int32_t var_388_1 = 0xffffffff
            int32_t var_384_1 = 0
            *(r13_2 + 0x497c) = rcx_158 | (*(r13_2 + 0x497c) & 0xfffffffd)
            void* rax_229 = &r13_2[0x2b7]
            int32_t rcx_160 = 0
            void* var_390_1 = rax_229
            
            if (r13_2[0x2ba].d != 0)
                sub_14059bdd0(&var_398)
                rcx_160 = var_384_1
                rax_229 = var_390_1
                rdi_35 = var_394_1
            
            if (rcx_160 s< *(rax_229 + 0x18))
                while (true)
                    void var_274
                    
                    if (*sub_141454d30(&r13_2[0x172], &var_274, 
                            *(*(r12_1 + 8) + 0xe38) + (sx.q(rcx_160) << 2)) == 0xffffffff)
                        void* rax_232 = r13_2[0x2b9]
                        void* rdx_76 = &r13_2[0x2b7]
                        int64_t rcx_164 = sx.q(var_398)
                        
                        if (rax_232 != 0)
                            rdx_76 = rax_232
                        
                        *(rdx_76 + (rcx_164 << 2)) &= not.d(rdi_35)
                    
                    var_388_1 &= not.d(rdi_35)
                    sub_14059bdd0(&var_398)
                    rcx_160 = var_384_1
                    
                    if (rcx_160 s>= *(var_390_1 + 0x18))
                        break
                    
                    rdi_35 = var_394_1
        
        if (*(r13_2 + 0xd79) != 0)
            bool cond:13_1 = r13_2[0x2ba].d == 0
            int32_t rdi_37 = 1
            void* rax_236 = &r13_2[0x2b7]
            int32_t var_374_1 = 1
            void* var_370_1 = rax_236
            int32_t rcx_166 = 0
            int32_t var_378 = 0
            int32_t var_368_1 = 0xffffffff
            int32_t var_364_1 = 0
            
            if (not(cond:13_1))
                sub_14059bdd0(&var_378)
                rcx_166 = var_364_1
                rax_236 = var_370_1
                rdi_37 = var_374_1
            
            if (rcx_166 s< *(rax_236 + 0x18))
                while (true)
                    if ((*(*(*(*(*(r12_1 + 8) + 0xdb8) + (sx.q(rcx_166) << 3)) + 8) + 0x37) & 8)
                            == 0)
                        void* rax_239 = r13_2[0x2b9]
                        void* rdx_78 = &r13_2[0x2b7]
                        int64_t rcx_170 = sx.q(var_378)
                        
                        if (rax_239 != 0)
                            rdx_78 = rax_239
                        
                        *(rdx_78 + (rcx_170 << 2)) &= not.d(rdi_37)
                    
                    var_368_1 &= not.d(rdi_37)
                    sub_14059bdd0(&var_378)
                    rcx_166 = var_364_1
                    
                    if (rcx_166 s>= *(var_370_1 + 0x18))
                        break
                    
                    rdi_37 = var_374_1
        
        rsi_3 = arg2
        char var_428
        zmm7, zmm8 = sub_14145a6d0(rsi_3, *(r12_1 + 8), r13_2, arg6, var_428)
        int64_t var_338 = 0
        int64_t r14_24 = 0
        int64_t var_330_1 = 0
        int64_t var_2e8_1 = *(r12_1 + 8) + 0xe68
        int32_t rdi_39 = 0
        int32_t var_2f8 = 0
        int32_t var_2e0_1 = 0xffffffff
        int32_t r15_9 = 0
        int32_t var_2f4_1 = 1
        int32_t i_9 = 0
        sub_141454c60(&var_2f8)
        int32_t i_5 = i_9
        
        if (i_5 s< r13_2[0x2ba].d)
            do
                int64_t rsi_29 = sx.q(rdi_39)
                int64_t r13_3 = *(*(arg1 + 8) + 0xdb8)
                rdi_39 = (rsi_29 + 1).d
                var_330_1.d = rdi_39
                
                if (rdi_39 s> r15_9)
                    sub_1405a4d70(&var_338)
                    r15_9 = var_330_1:4.d
                    rdi_39 = var_330_1.d
                    r14_24 = var_338
                
                *(r14_24 + (rsi_29 << 3)) = *(r13_3 + (sx.q(i_5) << 3))
                var_2e0_1 &= not.d(var_2f4_1)
                sub_141454c60(&var_2f8)
                i_5 = i_9
            while (i_5 s< r13_2[0x2ba].d)
            
            rsi_3 = arg2
            i_8 = 0
            
            if (rdi_39 s> 0)
                int64_t var_210 = r14_24
                int32_t var_208_1 = rdi_39
                zmm7, zmm8 = sub_1413ae170(rsi_3, *(arg1 + 8), &var_210, 1)
            
            if (r14_24 != 0)
                sub_140a74f90(r14_24)
        
        r14_25 = var_3e8
        r12_1 = arg1
        
        if (r14_25 == 0)
            var_428 = var_3e7
            zmm7, zmm8 = sub_141447bb0(rsi_3, *(r12_1 + 8), r13_2, rdi_3 + sx.q(rdx_12) * 0x288, 
                var_428, &var_358, &var_2c0, &var_328)
        
        void* rax_254 = *(r12_1 + 8)
        int32_t rax_255
        
        if (*(rax_254 + 0xfd0) - *(rax_254 + 0xffc) s<= 0)
            rax_255 = 0
        
        if (*(rax_254 + 0xfd0) - *(rax_254 + 0xffc) s> 0 || data_143ed57b8 != 0)
            rax_255 = 0x4000
        
        *(r13_2 + 0x497c) &= 0xffffbfff
        rdx_12 = var_3c0 + 1
        *(r13_2 + 0x497c) |= rax_255
        rcx_22 = var_2c8_1 + 1
        rax_256 = *(r12_1 + 0xa8)
        var_3c0 = rdx_12
        var_2c8_1 = rcx_22
        var_3e7 *= 2
    while (rdx_12 s< rax_256)
    
    r13 = arg4
    r15_1 = arg6

if (rax_256 s> 1 && r14_25 != 0)
    void* rdi_41 = *(r12_1 + 0xa0)
    uint64_t r9_5 = 0
    void* r8_64 = rdi_41 + 0x15b8
    void* rcx_182 = *(r8_64 + 0x10)
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(*(r8_64 + 0x18) + 0x1f)
    int32_t rax_261 = (temp6_1 + (temp5_1 & 0x1f)) s>> 5
    
    if (rcx_182 != 0)
        r8_64 = rcx_182
    
    void* rdi_42 = rdi_41 + 0x67f8
    void* rcx_183 = *(rdi_42 + 0x10)
    
    if (rcx_183 != 0)
        rdi_42 = rcx_183
    
    if (rax_261 != 0)
        if (rax_261 u>= 0x10)
            uint64_t rax_262 = zx.q(rax_261 - 1)
            
            if (r8_64 u> rdi_42 + (rax_262 << 2) || r8_64 + (rax_262 << 2) u< rdi_42)
                int32_t r10_2 = 8
                
                do
                    uint64_t rax_266 = zx.q(r10_2 - 4)
                    *(r8_64 + (r9_5 << 2)) |= *(rdi_42 + (r9_5 << 2))
                    r9_5 = zx.q(r9_5.d + 0x10)
                    *(r8_64 + (rax_266 << 2)) |= *(rdi_42 + (rax_266 << 2))
                    uint64_t rax_267 = zx.q(r10_2)
                    *(r8_64 + (rax_267 << 2)) |= *(rdi_42 + (rax_267 << 2))
                    uint64_t rax_268 = zx.q(r10_2 + 4)
                    r10_2 += 0x10
                    *(r8_64 + (rax_268 << 2)) |= *(rdi_42 + (rax_268 << 2))
                while (r9_5.d u< rax_261 - (rax_261 & 0xf))
        
        if (r9_5.d u< rax_261)
            uint64_t i_11 = zx.q(rax_261 - r9_5.d)
            void* rcx_184 = r8_64 + (zx.q(r9_5.d) << 2)
            uint64_t i_6
            
            do
                *rcx_184 |= *(rdi_42 - r8_64 + rcx_184)
                rcx_184 += 4
                i_6 = i_11
                i_11 -= 1
            while (i_6 != 1)

rsi_3.b = 1
int32_t i_7 = 0

if (*(r12_1 + 0xa8) s> 0)
    do
        void* rax_271 = *(r13 + 0xa20)
        
        if (r14_25 != 0)
            int64_t i_10 = sx.q(i_7)
            void* r9_6 = r13
            
            if (rax_271 != 0)
                r9_6 = rax_271
            
            sub_141447bb0(arg2, *(r12_1 + 8), i_10 * 0x5240 + *(r12_1 + 0xa0), r9_6 + i_10 * 0x288, 
                rsi_3.b, &var_358, &var_2c0, &var_328)
        
        rsi_3.b *= 2
        i_7 += 1
    while (i_7 s< *(r12_1 + 0xa8))
    
    i_8 = 0

void* var_3f8 = r12_1 + 0xb0
void* result = sub_141454db0(r12_1, r12_1 + 0xa0, *(r12_1 + 8), r12_1 + 0x10, arg5, r15_1, arg7, 
    &var_358, &var_2c0, &var_328)

if (*(r12_1 + 0xa8) s> 0)
    int64_t rsi_30 = 0
    
    do
        void** rdi_45 = *(r12_1 + 0xa0) + rsi_30
        
        if ((*(rdi_45 + 0x497c) & 2) == 0)
            if (*(rdi_45 + 0xd7a) != 0)
                result = sub_142391c90(zx.q(rdi_45[0x15a].d))
                
                if (result.b == 0)
                label_14144a9ad:
                    void* rax_276 = *(r13 + 0xa20)
                    void* r9_9 = r13
                    
                    if (rax_276 != 0)
                        r9_9 = rax_276
                    
                    result = sub_1414297f0(r12_1, rdi_45, arg3, r9_9 + sx.q(i_8) * 0x288)
                else if (*(rdi_45 + 0xd7c) != 0)
                    goto label_14144a996
            else
                if (*(rdi_45 + 0xd7c) == 0)
                    goto label_14144a9ad
                
            label_14144a996:
                result = sub_142391c90(zx.q(rdi_45[0x15a].d))
                
                if (result.b == 0)
                    result = *rdi_45
                    
                    if (result != 0 && *(result + 8) s> 1)
                        goto label_14144a9ad
        
        i_8 += 1
        rsi_30 += 0x5240
    while (i_8 s< *(r12_1 + 0xa8))

return result
