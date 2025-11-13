// 函数: sub_140a04e70
// 地址: 0x140a04e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t i_3 = arg2[0x8a].d
void* rbx = arg2[0x89]
int64_t* var_128 = arg2

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx += 0x40
        i = i_3
        i_3 -= 1
    while (i != 1)

arg2[0x8a].d = 0

if (*(arg2 + 0x454) != 0)
    sub_1405a52a0(&arg2[0x89], 0)

sub_140a092f0(arg2)
sub_140a09030(arg2)
sub_141ee8490(arg2)
int64_t rbx_1 = data_143f36150

if (*(arg1 + 0x310) != *(arg1 + 0x33c))
    int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_1 = arg1 + 0x340
    void* rcx_7 = *(r8_1 + 8)
    
    if (rcx_7 != 0)
        r8_1 = rcx_7
    
    int32_t i_1 = *(r8_1 + (((sx.q(*(arg1 + 0x350)) - 1) & sx.q(rax_4)) << 2))
    
    if (i_1 != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x308)
        
        do
            int64_t rax_6 = sx.q(i_1) * 3
            
            if (*(rdx_3 + (rax_6 << 3)) == rbx_1)
                break
            
            i_1 = *(rdx_3 + (rax_6 << 3) + 0x10)
        while (i_1 != 0xffffffff)

int64_t rbx_2 = data_143f35cc8
void* const rcx_12

if (*(arg1 + 0x158) == *(arg1 + 0x184))
label_140a05010:
    rcx_12 = nullptr
else
    int32_t rax_9 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
    void* r8_2 = arg1 + 0x188
    void* rcx_10 = *(r8_2 + 8)
    
    if (rcx_10 != 0)
        r8_2 = rcx_10
    
    int32_t rax_11 = *(r8_2 + (((sx.q(*(arg1 + 0x198)) - 1) & sx.q(rax_9)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_140a05010_1:
        rcx_12 = nullptr
    else
        int64_t r8_3 = *(arg1 + 0x150)
        
        while (true)
            int64_t rdx_7 = sx.q(rax_11) * 3
            rcx_12 = r8_3 + (rdx_7 << 3)
            
            if (*(r8_3 + (rdx_7 << 3)) == rbx_2)
                break
            
            rax_11 = *(rcx_12 + 0x10)
            
            if (rax_11 == 0xffffffff)
                goto label_140a05010_2
        
        if (rax_11 == 0xffffffff)
        label_140a05010_2:
            rcx_12 = nullptr

void* rsi = rcx_12 + 8

if (rcx_12 == 0)
    rsi = nullptr

void* const rsi_1

if (rsi != 0)
    rsi_1 = *rsi

if (rsi == 0 || *(rsi_1 + 8) != 1)
    rsi_1 = nullptr

void* var_138
sub_14090aa40(arg1 + 0x1a8, &var_138, data_143f36100)
int64_t rbx_3 = data_143f36108
void* const rcx_17

if (*(arg1 + 0x1b0) == *(arg1 + 0x1dc))
label_140a050b0:
    rcx_17 = nullptr
else
    int32_t rax_14 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
    void* r8_5 = arg1 + 0x1e0
    void* rcx_15 = *(r8_5 + 8)
    
    if (rcx_15 != 0)
        r8_5 = rcx_15
    
    int32_t rax_16 = *(r8_5 + (((sx.q(*(arg1 + 0x1f0)) - 1) & sx.q(rax_14)) << 2))
    
    if (rax_16 == 0xffffffff)
    label_140a050b0_1:
        rcx_17 = nullptr
    else
        int64_t r8_6 = *(arg1 + 0x1a8)
        
        while (true)
            int64_t rdx_12 = sx.q(rax_16) * 3
            rcx_17 = r8_6 + (rdx_12 << 3)
            
            if (*(r8_6 + (rdx_12 << 3)) == rbx_3)
                break
            
            rax_16 = *(rcx_17 + 0x10)
            
            if (rax_16 == 0xffffffff)
                goto label_140a050b0_2
        
        if (rax_16 == 0xffffffff)
        label_140a050b0_2:
            rcx_17 = nullptr

void* r13 = rcx_17 + 8

if (rcx_17 == 0)
    r13 = nullptr

void* const r13_1

if (r13 != 0)
    r13_1 = *r13

if (r13 == 0 || *(r13_1 + 8) != 3)
    r13_1 = nullptr

void* var_178
sub_14090aa40(arg1 + 0x1a8, &var_178, data_143f360f8)
int64_t rbx_4 = data_143f36110

if (*(arg1 + 0x1b0) != *(arg1 + 0x1dc))
    int32_t rax_19 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
    void* r8_8 = arg1 + 0x1e0
    void* rcx_20 = *(r8_8 + 8)
    
    if (rcx_20 != 0)
        r8_8 = rcx_20
    
    int32_t i_2 = *(r8_8 + (((sx.q(*(arg1 + 0x1f0)) - 1) & sx.q(rax_19)) << 2))
    
    if (i_2 != 0xffffffff)
        int64_t rdx_17 = *(arg1 + 0x1a8)
        
        do
            int64_t rax_21 = sx.q(i_2) * 3
            
            if (*(rdx_17 + (rax_21 << 3)) == rbx_4)
                break
            
            i_2 = *(rdx_17 + (rax_21 << 3) + 0x10)
        while (i_2 != 0xffffffff)

int64_t rbx_5 = data_143f360f0
void* const rcx_25

if (*(arg1 + 0x1b0) == *(arg1 + 0x1dc))
label_140a051af:
    rcx_25 = nullptr
else
    int32_t rax_24 = sub_140b5ead0(rbx_5.d) + rbx_5:4.d
    void* r8_9 = arg1 + 0x1e0
    void* rcx_23 = *(r8_9 + 8)
    
    if (rcx_23 != 0)
        r8_9 = rcx_23
    
    int32_t rax_26 = *(r8_9 + (((sx.q(*(arg1 + 0x1f0)) - 1) & sx.q(rax_24)) << 2))
    
    if (rax_26 == 0xffffffff)
    label_140a051af_1:
        rcx_25 = nullptr
    else
        int64_t r8_10 = *(arg1 + 0x1a8)
        
        while (true)
            int64_t rdx_21 = sx.q(rax_26) * 3
            rcx_25 = r8_10 + (rdx_21 << 3)
            
            if (*(r8_10 + (rdx_21 << 3)) == rbx_5)
                break
            
            rax_26 = *(rcx_25 + 0x10)
            
            if (rax_26 == 0xffffffff)
                goto label_140a051af_2
        
        if (rax_26 == 0xffffffff)
        label_140a051af_2:
            rcx_25 = nullptr

void* r14_1 = rcx_25 + 8

if (rcx_25 == 0)
    r14_1 = nullptr

void* const r14_2

if (r14_1 != 0)
    r14_2 = *r14_1

if (r14_1 == 0 || *(r14_2 + 8) != 2)
    r14_2 = nullptr

void* rbx_6 = arg1 + 0xa8
int32_t* var_a8 = nullptr
void* r10 = rbx_6 + 0x10
int32_t var_a0 = 0
int32_t* r9 = nullptr
int32_t r12 = 0
int32_t var_7c = 0x80
void* r11 = nullptr
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int32_t rcx_26 = 0
int32_t r8_11 = 0
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
void* var_68 = nullptr
int32_t var_60 = 0
int32_t rdi_1 = *(r10 + 0x18)
void* var_150 = rbx_6
int32_t var_170 = 0
int32_t var_16c = 1
void* var_168 = r10
int32_t var_160 = 0xffffffff
int64_t var_15c = 0

if (rdi_1 != 0)
    void* rax_27 = *(r10 + 0x10)
    
    if (rax_27 != 0)
        r10 = rax_27
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rdi_1 - 1)
    int32_t rdx_24 = *r10
    
    if (rdx_24 != 0)
    label_140a052a9:
        int32_t rax_34 = neg.d(rdx_24) & rdx_24
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_34)
        int32_t var_16c_1 = rax_34
        int32_t rax_35
        
        if (rax_34 == 0)
            rax_35 = 0x20
        else
            rax_35 = 0x1f - temp0_1
        
        var_15c.d = r8_11 - rax_35 + 0x1f
        
        if (r8_11 - rax_35 + 0x1f s> rdi_1)
            var_15c.d = rdi_1
    else
        while (true)
            int64_t rdx_25 = sx.q(rcx_26)
            r8_11 += 0x20
            rcx_26 += 1
            var_15c:4.d = r8_11
            var_170 = rcx_26
            
            if (rdx_25.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_24 = *(r10 + (rdx_25 << 2) + 4)
            var_160 = 0xffffffff
            
            if (rdx_24 != 0)
                goto label_140a052a9
        
        var_15c.d = rdi_1

double zmm2[0x2] = var_160.o
int32_t rdx_26 = *(rbx_6 + 0x28)
void* rdi_2 = var_178
void* r15_1 = var_138
uint128_t var_c8 = var_170.o
var_15c.d = rdx_26
double var_b8[0x2] = zmm2
uint64_t rax_38 = (0xffffffff << (rdx_26.b & 0x1f)).q u>> 0x20
uint64_t var_d8 = rax_38
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
uint128_t var_118 = rbx_6.o
uint128_t var_108 = var_c8
int64_t var_f8 = zmm2.q

while (true)
    int32_t rcx_30 = var_108:0xc.d
    int64_t rdx_27 = var_108.q
    
    if (rcx_30 == rax_38.d && rdx_27 == rbx_6 + 0x10 && var_118.q == rbx_6)
        int32_t var_80
        int32_t rdx_45 = var_80
        int32_t var_16c_2 = 1
        var_170 = 0
        int64_t* var_168_1 = &var_98
        int32_t rbx_16 = 0
        int32_t var_160_2 = 0xffffffff
        int64_t var_15c_1 = 0
        
        if (rdx_45 != 0)
            sub_14059bdd0(&var_170)
            rdx_45 = var_80
        
        zmm2 = var_160_2.o
        int64_t* rsi_2 = var_128
        var_15c_1.d = rdx_45
        uint128_t var_c8_1 = var_170.o
        double var_b8_1[0x2] = zmm2
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_118 = (&var_a8).o
        uint128_t var_108_1 = var_c8_1
        int64_t var_f8_1 = zmm2.q
        
        while (true)
            int64_t rax_81 = sx.q(var_108_1:0xc.d)
            void** rdx_46 = var_118.q
            
            if (rax_81.d == ((0xffffffff << (rdx_45.b & 0x1f)).q u>> 0x20).d
                    && var_108_1.q == &var_98 && rdx_46 == &var_a8)
                int32_t var_60_1 = 0
                
                if (var_68 != 0)
                    sub_140a74f90(var_68)
                
                void* result = sub_1409fb200(&var_a8)
                __security_check_cookie(rax_1 ^ &var_1e8)
                return result
            
            char var_190_1 = 1
            int64_t* r8_27 = *rdx_46 + 8 + rax_81 * 0xc0
            var_128 = nullptr
            int64_t var_120_1 = 0
            sub_140a01450(rsi_2, rbx_16, r8_27, &r8_27[2], &r8_27[4], &r8_27[6], &var_128, 
                &var_128, &var_128, &r8_27[8], &r8_27[0xa], var_190_1)
            rbx_16 += 1
            var_108_1:8.d &= not.d(var_118:0xc.d)
            sub_14059bdd0(&var_118:8)
    
    int32_t rax_40 = data_143a1c6c0
    
    if (rcx_30 s< *(rdx_27 + 0x18))
        rax_40 = rcx_30
    
    int64_t rbx_8 = sx.q(rax_40) << 4
    int64_t rdx_29 = sx.q(*(*(arg1 + 0xe0) + sx.q(*(rbx_8 + *var_150 + 0xc)) * 0x28 + 0x20))
    int32_t var_130 = rdx_29.d
    void* r11_1
    
    if (r12 == var_74)
    label_140a053ef:
        r11_1 = sub_1409fa550(&var_a8, rdx_29.d, &var_130)
    else
        void var_70
        void* rax_47 = &var_70
        
        if (r11 != 0)
            rax_47 = r11
        
        int32_t rax_48 = *(rax_47 + ((sx.q(var_60 - 1) & rdx_29) << 2))
        
        if (rax_48 == 0xffffffff)
        label_140a053ef_1:
            r11_1 = sub_1409fa550(&var_a8, rdx_29.d, &var_130)
        else
            while (r9[sx.q(rax_48) * 0x30] != rdx_29.d)
                rax_48 = r9[sx.q(rax_48) * 0x30 + 0x2e]
                
                if (rax_48 == 0xffffffff)
                    goto label_140a053ef_3
            
            if (rax_48 == 0xffffffff)
            label_140a053ef_2:
                r11_1 = sub_1409fa550(&var_a8, rdx_29.d, &var_130)
            else
                void* rax_56 = &r9[sx.q(rax_48) * 0x30]
                
                if (rax_56 == 0)
                label_140a053ef_3:
                    r11_1 = sub_1409fa550(&var_a8, rdx_29.d, &var_130)
                else
                    r11_1 = rax_56 + 8
    
    int64_t rdx_30 = 3
    var_178 = r11_1
    int64_t var_180_5 = 0
    void* rax_52 = *var_150 + rbx_8
    var_138 = rax_52
    
    if (rax_52 u> rax_52 + 0xc)
        rdx_30 = 0
    
    if (rax_52 u<= rax_52 + 0xc)
        void* rbx_9 = r11_1 + 0x60
        void* var_e8_1 = rbx_9
        void* r12_1 = r11_1 + 0x10
        int64_t rdx_44
        
        do
            int32_t r10_2 = *(rbx_9 + 8)
            int64_t rcx_37 = sx.q(*rax_52)
            int32_t var_184 = rcx_37.d
            int32_t* r8_21
            
            if (r10_2 == *(rbx_9 + 0x34))
            label_140a0549a:
                r8_21 = nullptr
            else
                void* rdx_31 = *(rbx_9 + 0x40)
                void* r9_1 = rbx_9 + 0x38
                
                if (rdx_31 != 0)
                    r9_1 = rdx_31
                
                int32_t rax_53 = *(r9_1 + (((sx.q(*(rbx_9 + 0x48)) - 1) & rcx_37) << 2))
                
                if (rax_53 == 0xffffffff)
                label_140a0549a_1:
                    r8_21 = nullptr
                else
                    while (true)
                        r8_21 = (sx.q(rax_53) << 4) + *rbx_9
                        
                        if (*r8_21 == rcx_37.d)
                            break
                        
                        rax_53 = r8_21[2]
                        
                        if (rax_53 == 0xffffffff)
                            goto label_140a0549a_2
                    
                    if (rax_53 == 0xffffffff)
                    label_140a0549a_2:
                        r8_21 = nullptr
            
            void* rbx_10 = &r8_21[1]
            
            if (r8_21 == 0)
                rbx_10 = nullptr
            
            if (rbx_10 == 0)
                int32_t var_148 = r10_2 - *(rbx_9 + 0x34)
                int64_t rbx_11 = sx.q(*(*(arg1 + 0x38) + rcx_37 * 0x18))
                sub_140998bf0(var_e8_1, &var_184, &var_148)
                r11_1 = var_178
                int32_t rcx_42 = *(r11_1 + 8)
                int64_t r9_3 = **(rsi_1 + 0x18)
                *(r11_1 + 8) = rcx_42 + 1
                
                if (rcx_42 + 1 s> *(r11_1 + 0xc))
                    sub_140638a00(r11_1)
                    r11_1 = var_178
                
                int64_t r8_23 = rbx_11 * 3
                int64_t rcx_44 = *r11_1
                int64_t rdx_36 = sx.q(rcx_42) * 3
                *(rcx_44 + (rdx_36 << 2)) = *(r9_3 + (r8_23 << 2))
                *(rcx_44 + (rdx_36 << 2) + 8) = *(r9_3 + (r8_23 << 2) + 8)
                int64_t rbx_12 = sx.q(*(r12_1 + 8))
                int32_t rax_63 = (rbx_12 + 1).d
                *(r12_1 + 8) = rax_63
                
                if (rax_63 s> *(r12_1 + 0xc))
                    sub_1405a4cf0(r12_1)
                    r11_1 = var_178
                
                *(*r12_1 + (rbx_12 << 2)) = var_148
                void* rbx_13 = r11_1 + 0x20
                int32_t rcx_47 = *(rbx_13 + 8)
                int64_t r8_24 = **(rdi_2 + 0x18)
                *(rbx_13 + 8) = rcx_47 + 1
                
                if (rcx_47 + 1 s> *(rbx_13 + 0xc))
                    sub_140638a00(rbx_13)
                    r11_1 = var_178
                
                int64_t r9_4 = sx.q(var_184)
                int64_t rcx_49 = *rbx_13
                void* rbx_14 = r11_1 + 0x30
                int64_t r10_4 = r9_4 * 3
                int64_t rdx_39 = sx.q(rcx_47) * 3
                *(rcx_49 + (rdx_39 << 2)) = *(r8_24 + (r10_4 << 2))
                *(rcx_49 + (rdx_39 << 2) + 8) = *(r8_24 + (r10_4 << 2) + 8)
                int32_t rcx_50 = *(rbx_14 + 8)
                var_148.q = **(r14_2 + 0x18)
                *(rbx_14 + 8) = rcx_50 + 1
                
                if (rcx_50 + 1 s> *(rbx_14 + 0xc))
                    sub_1405a4d70(rbx_14)
                    r9_4 = sx.q(var_184)
                    r11_1 = var_178
                
                void* rbx_15 = r11_1 + 0x50
                *(*rbx_14 + (sx.q(rcx_50) << 3)) = *(var_148.q + (r9_4 << 3))
                int64_t rcx_53 = **(r15_1 + 0x18)
                var_168.d = *(rcx_53 + (r10_4 << 2) + 8)
                var_170.q = *(rcx_53 + (r10_4 << 2))
                bool cond:10_1 = 0f f> *(**(r13_1 + 0x18) + (r9_4 << 2))
                int32_t rcx_55 = *(rbx_15 + 8)
                *(rbx_15 + 8) = rcx_55 + 1
                var_168:4.b = cond:10_1
                
                if (rcx_55 + 1 s> *(rbx_15 + 0xc))
                    sub_1405a4f90(rbx_15)
                    r11_1 = var_178
                
                *(*rbx_15 + sx.q(rcx_55) * 0x10) = var_170.o
            else
                int64_t r12_2 = sx.q(*(r12_1 + 8))
                int32_t rax_54 = (r12_2 + 1).d
                *(r11_1 + 0x18) = rax_54
                
                if (rax_54 s> *(r11_1 + 0x1c))
                    sub_1405a4cf0(r11_1 + 0x10)
                    r11_1 = var_178
                
                r12_1 = r11_1 + 0x10
                *(*(r11_1 + 0x10) + (r12_2 << 2)) = *rbx_10
            
            rbx_9 = r11_1 + 0x60
            rax_52 = var_138 + 4
            rdx_44 = var_180_5 + 1
            var_138 = rax_52
            var_180_5 = rdx_44
        while (rdx_44 != rdx_30)
    
    var_108:8.d &= not.d(var_118:0xc.d)
    sub_14059bdd0(&var_118:8)
    r11 = var_68
    r9 = var_a8
    rax_38 = var_d8
    r12 = var_a0
    rbx_6 = var_150
