// 函数: sub_14215fe70
// 地址: 0x14215fe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t i = 0
void* var_98 = nullptr
int32_t var_90 = 0
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
void* var_e8 = nullptr
int32_t var_e0 = 0
int32_t var_bc = 0x80
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
void* var_a8 = nullptr
int32_t var_a0 = 0
char*** var_148
char** var_140
char* var_138

while (i s>= 0)
    if (i s>= arg1[1].d)
        break
    
    void* rax_3 = sub_140d3c6e0(*arg1 + (sx.q(i) << 3))
    
    if (rax_3 != 0)
        int64_t var_130
        sub_140d3a3a0(&var_130, *(rax_3 + 0x10))
        int64_t rcx_3 = var_130
        int32_t rsi_3 = (rcx_3 u>> 0x20).d ^ rcx_3.d
        int32_t* rax_13
        
        if (var_90 == var_64)
        labelid_16:
            rax_13 = sub_14215b1f0(&var_98, rsi_3, &var_130)
        else
            void var_60
            void* rdx_2 = &var_60
            
            if (var_58 != 0)
                rdx_2 = var_58
            
            int32_t rbx_1 = *(rdx_2 + ((sx.q(var_50 - 1) & sx.q(rsi_3)) << 2))
            
            if (rbx_1 == 0xffffffff)
            label_14215fff0:
                rax_13 = sub_14215b1f0(&var_98, rsi_3, &var_130)
            else
                void* rdx_3 = var_98
                int64_t rdi_1
                
                while (true)
                    int64_t var_f0 = rcx_3
                    rdi_1 = sx.q(rbx_1) * 0x14
                    var_148 = *(rdi_1 + rdx_3)
                    
                    if (sub_14077a170(&var_148, &var_f0) != 0)
                        break
                    
                    rdx_3 = var_98
                    rbx_1 = *(rdi_1 + rdx_3 + 0xc)
                    
                    if (rbx_1 == 0xffffffff)
                        goto label_14215fff0_2
                    
                    rcx_3 = var_130
                
                if (rbx_1 == 0xffffffff)
                label_14215fff0_1:
                    rax_13 = sub_14215b1f0(&var_98, rsi_3, &var_130)
                else
                    void* rax_11 = var_98
                    
                    if (rax_11 == neg.q(rdi_1))
                    label_14215fff0_2:
                        rax_13 = sub_14215b1f0(&var_98, rsi_3, &var_130)
                    else
                        rax_13 = rax_11 + rdi_1 + 8
        
        *rax_13 += 1
        void* rdx_6 = *(*(rax_3 + 0x10) + 0x40)
        
        if (rdx_6 != 0)
            char** var_128
            sub_140d3a3a0(&var_128, rdx_6)
            char** rax_15 = var_128
            int32_t rsi_6 = (rax_15 u>> 0x20).d ^ rax_15.d
            
            if (var_e0 != var_b4)
                void var_b0
                void* rdx_7 = &var_b0
                
                if (var_a8 != 0)
                    rdx_7 = var_a8
                
                int32_t rbx_2 = *(rdx_7 + ((sx.q(var_a0 - 1) & sx.q(rsi_6)) << 2))
                
                if (rbx_2 != 0xffffffff)
                    void* rdx_8 = var_e8
                    int64_t rdi_2
                    
                    while (true)
                        var_140 = rax_15
                        rdi_2 = sx.q(rbx_2) * 0x14
                        var_138 = *(rdi_2 + rdx_8)
                        
                        if (sub_14077a170(&var_138, &var_140) != 0)
                            break
                        
                        rdx_8 = var_e8
                        rbx_2 = *(rdi_2 + rdx_8 + 0xc)
                        
                        if (rbx_2 == 0xffffffff)
                            goto label_1421600bc
                        
                        rax_15 = var_128
                    
                    if (rbx_2 != 0xffffffff)
                        void* rax_19 = var_e8
                        void* rax_20 = rax_19 + rdi_2
                        
                        if (rax_19 != neg.q(rdi_2))
                            *(rax_20 + 8) += 1
                            i += 1
                            continue
            
        label_1421600bc:
            int32_t* rax_22 = sub_14215b1f0(&var_e8, rsi_6, &var_128)
            *rax_22 += 1
    
    i += 1

char var_198
var_138 = &var_198
var_140 = &var_138

if (var_90 - var_64 s> 0)
    sub_142162350(&var_98)
    char r8_7 = var_198
    void* rcx_17 = var_98
    var_148 = &var_140
    sub_14215be10(rcx_17, var_90 - var_64, r8_7)

sub_140858540(&var_98)
var_138 = &var_198
var_140 = &var_138

if (var_e0 - var_b4 s> 0)
    sub_142162350(&var_e8)
    char r8_8 = var_198
    void* rcx_20 = var_e8
    var_148 = &var_140
    sub_14215be10(rcx_20, var_e0 - var_b4, r8_8)

sub_140858540(&var_e8)
int32_t var_184 = 1
int64_t* var_180 = &var_88
int32_t rcx_22 = 0
int32_t var_188 = 0
int32_t r8_9 = 0
int32_t var_178 = 0xffffffff
int64_t var_174 = 0
int32_t var_70

if (var_70 != 0)
    int64_t* r9_1 = &var_88
    int64_t* var_78
    
    if (var_78 != 0)
        r9_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_17 = *r9_1
    
    if (rdx_17 != 0)
    label_14216021b:
        int32_t rax_34 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_34)
        int32_t var_184_1 = rax_34
        int32_t rax_35
        
        if (rax_34 == 0)
            rax_35 = 0x20
        else
            rax_35 = 0x1f - temp0_2
        
        int32_t rax_36 = r8_9 - rax_35 + 0x1f
        
        if (rax_36 s> var_70)
            rax_36 = var_70
        
        var_174.d = rax_36
    else
        while (true)
            int64_t rdx_18 = sx.q(rcx_22)
            r8_9 += 0x20
            rcx_22 += 1
            var_174:4.d = r8_9
            var_188 = rcx_22
            
            if (rdx_18.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_174.d = var_70
                break
            
            rdx_17 = *(r9_1 + (rdx_18 << 2) + 4)
            var_178 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_14216021b

int16_t var_150 = 0
void** var_f8 = &var_98
void** var_158 = &var_98
int128_t var_108 = 0xffffffff
int128_t zmm3 = var_188.o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_188.o = (&var_98).o
var_178.o = zmm3
var_108 = zmm0
int128_t var_168 = zmm0
int32_t i_1

if (0 s< *(zmm3.q + 0x18))
    do
        var_174:4.d &= not.d(var_180:4.d)
        sub_14059bdd0(&var_180)
    while (i_1 s< *(var_178.q + 0x18))
    
    if (var_150.b != 0 && var_150:1.b != 0)
        sub_14084bdb0(var_158, var_158[1].d - *(var_158 + 0x34), 1)

var_180 = &var_d8
int32_t rcx_27 = 0
int32_t var_188_1 = 0
int32_t r8_12 = 0
int32_t var_184_2 = 1
int32_t var_178_1 = 0xffffffff
int64_t var_174_1 = 0
int64_t* var_c8
int32_t var_c0

if (var_c0 != 0)
    int64_t* r9_2 = &var_d8
    
    if (var_c8 != 0)
        r9_2 = var_c8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(var_c0 - 1)
    int32_t rdx_23 = *r9_2
    
    if (rdx_23 != 0)
    label_14216038b:
        int32_t rax_48 = neg.d(rdx_23) & rdx_23
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_48)
        int32_t var_184_3 = rax_48
        int32_t rbx_3
        
        if (rax_48 == 0)
            rbx_3 = 0x20
        else
            rbx_3 = 0x1f - temp0_4
        
        int32_t rax_49 = r8_12 - rbx_3 + 0x1f
        
        if (rax_49 s> var_c0)
            rax_49 = var_c0
        
        var_174_1.d = rax_49
    else
        while (true)
            int64_t rdx_24 = sx.q(rcx_27)
            r8_12 += 0x20
            rcx_27 += 1
            var_174_1:4.d = r8_12
            var_188_1 = rcx_27
            
            if (rdx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_174_1.d = var_c0
                break
            
            rdx_23 = *(r9_2 + (rdx_24 << 2) + 4)
            var_178_1 = 0xffffffff
            
            if (rdx_23 != 0)
                goto label_14216038b

void** var_f8_1 = &var_e8
int16_t var_150_1 = 0
void** var_158_1 = &var_e8
int128_t var_108_1 = 0xffffffff
zmm3 = var_188_1.o
var_188_1.o = (&var_e8).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_178_1.o = zmm3
int128_t var_168_1 = zmm0

if (0 s< *(zmm3.q + 0x18))
    do
        var_174_1:4.d &= not.d(var_180:4.d)
        sub_14059bdd0(&var_180)
    while (i_1 s< *(var_178_1.q + 0x18))
    
    if (var_150_1.b != 0 && var_150_1:1.b != 0)
        sub_14084bdb0(var_158_1, var_158_1[1].d - *(var_158_1 + 0x34), 1)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

var_e0 = 0
int32_t var_b8_1 = 0xffffffff
int32_t var_b4_1 = 0
sub_14059a8e0(&var_d8, 0)

if (var_c8 != 0)
    sub_140a74f90(var_c8)

void* rcx_36 = var_e8

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

void* result = sub_1405ae200(&var_98)
int64_t rcx_38 = *arg2

if (rcx_38 != 0)
    result = sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
