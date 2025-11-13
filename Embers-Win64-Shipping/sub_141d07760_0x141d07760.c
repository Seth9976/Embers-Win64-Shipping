// 函数: sub_141d07760
// 地址: 0x141d07760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_20 = rbx
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int16_t* r12 = arg2
void* rdi = arg1
int32_t var_228 = 0
int32_t rdx = 0
int32_t rcx = 0
int64_t* r15 = arg3
int64_t var_e8 = 0
int32_t r14 = 0
int32_t var_e0 = 0
uint64_t rsi
rsi.b = 1
int32_t var_bc = 0x80
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int16_t* var_218
__builtin_memset(&var_218, 0, 0x20)
int32_t var_210

if (r12 != 0 && *r12 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r12[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_218, rbx.d)
        int32_t var_20c
        rcx = var_20c
        rdx = var_210
    
    int32_t rax_2 = rbx.d + rdx
    var_210 = rax_2
    
    if (rax_2 s> rcx)
        sub_140594770(&var_218)
    
    UnDecorator::getReferenceType(var_218, r12, rbx.d * 2)

sub_140b20c40(&var_218)
char rax_3 = sub_1405948d0()
int32_t var_228_1
uint64_t var_1b8
char rax_5

if (rax_3 != 0)
    r14 = 1
    var_228_1 = 1
    rax_5 = sub_140a32a50(&var_218, sub_140b254c0(&var_1b8), 1)

int64_t var_190
char rax_7

if (rax_3 == 0 || rax_5 == 0)
    r14 |= 2
    var_228_1 = r14
    rax_7 = sub_140a32a50(&var_218, sub_140b0f3a0(&var_190), 1)

if ((rax_3 != 0 && rax_5 != 0) || rax_7 != 0)
    rbx.b = 1
else
    rbx.b = 0

if ((r14.b & 2) != 0)
    int64_t rcx_9 = var_190
    r14 &= 0xfffffffd
    var_228_1 = r14
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if ((r14.b & 1) != 0)
    uint64_t rcx_10 = var_1b8
    r14 &= 0xfffffffe
    var_228_1 = r14
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

uint64_t var_208
int64_t var_200

if (rbx.b == 0)
    EnterCriticalSection(rdi + 0x38)
    int64_t rdi_1 = sx.q(*(rdi + 0x18))
    
    if (rdi_1.d != 0)
        int32_t rax_8 = var_200.d
        int32_t rdx_5 = rax_8 + rdi_1.d
        
        if (rdx_5 s> var_200:4.d)
            sub_1405a5410(&var_208, rdx_5)
            rax_8 = var_200.d
        
        memcpy((sx.q(rax_8) << 4) + var_208, *(arg1 + 0x10), (rdi_1 << 4).d)
        var_200.d += rdi_1.d
    
    if (rdi != -0x38)
        LeaveCriticalSection(rdi + 0x38)
    
    rdi = arg1

int32_t rbx_3 = 0
int32_t var_1f8 = 0

if (var_200.d s<= 0)
    goto label_141d07f21

int64_t r12_1 = 0
int64_t var_198_1 = 0
void** const var_1e0

while (true)
    int16_t* r8_4 = &data_142d40450
    char var_230_1 = 0
    
    if (var_210 != 0)
        r8_4 = var_218
    
    int64_t* rax_10 = *(var_208 + r12_1 + 8)
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int32_t var_10c_1 = 0x80
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    sub_141cf2ef0(rax_10, &var_138, r8_4, 1, 1, var_230_1)
    int64_t var_128
    int64_t* var_1d8_1 = &var_128
    int32_t rcx_18 = 0
    var_1e0.d = 0
    int32_t r8_5 = 0
    var_1e0:4.d = 1
    void** var_1d0
    var_1d0.d = 0xffffffff
    var_1d0 = 0
    double var_1c8
    int32_t var_110
    
    if (var_110 != 0)
        int64_t* r9_2 = &var_128
        int64_t* var_118
        
        if (var_118 != 0)
            r9_2 = var_118
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_110 - 1)
        int32_t rdx_11 = *r9_2
        
        if (rdx_11 != 0)
        label_141d07aab:
            int32_t rax_18 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
            var_1e0:4.d = rax_18
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_2
            
            int32_t rax_20 = r8_5 - rax_19 + 0x1f
            
            if (rax_20 s> var_110)
                rax_20 = var_110
            
            var_1d0:4.d = rax_20
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_18)
                r8_5 += 0x20
                rcx_18 += 1
                var_1c8.d = r8_5
                var_1e0.d = rcx_18
                
                if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_1d0:4.d = var_110
                    break
                
                rdx_11 = *(r9_2 + (rdx_12 << 2) + 4)
                var_1d0.d = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141d07aab
    
    arg4 = var_1d0.o
    double zmm0_1[0x2] = var_1e0.o
    uint64_t var_98 = &var_138
    double rax_21 = arg4[0]
    double var_90_1[0x2] = zmm0_1
    double var_80_1[0x2] = arg4
    double zmm1_1[0x2] = var_90_1
    double var_180[0x2] = var_98.o
    int64_t var_160_1 = (_mm_unpackhi_pd(arg4, arg4[0])).q
    
    if ((rax_21 u>> 0x20).d s< var_110)
        int32_t rcx_20 = zmm1_1[1]:4.d
        
        while (rsi.b != 0)
            int64_t* r13_1 = *var_180[0] + sx.q(rcx_20) * 0x18
            void var_158
            
            if (*sub_140960120(&var_e8, &var_158, r13_1) == 0xffffffff)
                int32_t rdx_15 = r13_1[1].d
                
                if (rdx_15 == 0)
                    r12_1.b = 0
                else
                    int32_t rax_26 = rdx_15 - 1
                    
                    if (rax_26 == 0)
                        r12_1.b = 0
                    else
                        if (rdx_15 == 0)
                            rax_26 = 0
                        
                        if (*(*r13_1 + (sx.q(rax_26) << 1) - 2) != 0x2f)
                            r12_1.b = 0
                        else
                            r12_1.b = 1
                
                double r15_1 = -nan.0
                
                if (r12_1.b == 0)
                    var_98.o = data_14321e0d0
                    __builtin_memset(&var_90_1[1], 0, 0x1c)
                    int64_t var_68
                    __builtin_memset(&var_68, 0, 0x1a)
                    int16_t* rax_28
                    
                    if (rdx_15 == 0)
                        rax_28 = &data_142d40450
                    else
                        rax_28 = *r13_1
                    
                    var_1b8 = 0
                    rsi = 0
                    int32_t var_1b0_1 = 0
                    int32_t r14_1 = 0
                    EnterCriticalSection(rdi + 0x38)
                    int64_t rdi_2 = sx.q(*(rdi + 0x18))
                    int32_t temp2_1 = rdi_2.d
                    
                    if (temp2_1 != 0)
                        if (temp2_1 s> 0)
                            sub_1405a5410(&var_1b8, rdi_2.d)
                            r14_1 = var_1b0_1
                            rsi = var_1b8
                        
                        memcpy((sx.q(r14_1) << 4) + rsi, *(arg1 + 0x10), (rdi_2 << 4).d)
                        var_1b0_1 = r14_1 + rdi_2.d
                    
                    if (rdi != -0x38)
                        LeaveCriticalSection(rdi + 0x38)
                    
                    char rax_29 = sub_141d02340(&var_1b8, rax_28, nullptr, &var_98)
                    
                    if (rsi != 0)
                        sub_140a74f90(rsi)
                    
                    if (rax_29 != 0)
                        r15_1 = var_90_1[0]
                        int64_t var_58
                        
                        if (var_58:4.d != 0)
                            r15_1 = var_90_1[1]
                    
                    sub_140a1d5c0(&var_68)
                    rdx_15 = r13_1[1].d
                    r14 = var_228_1
                
                var_1c8 = r15_1
                void** rax_31 = rax_10[0x27]
                var_1e0 = rax_31
                void** var_1d8_2 = rax_31
                var_1d0 = rax_31
                char var_1c0 = (var_1c0 & 0xfe) | r12_1.b | 6
                
                if (r12_1.b == 0)
                    int16_t* const rdx_24
                    
                    if (rdx_15 == 0)
                        rdx_24 = &data_142d40450
                    else
                        rdx_24 = *r13_1
                    
                    r15 = arg3
                    rsi.b = (*(*r15 + 8))(r15, rdx_24, &var_1e0) != 0
                else
                    int32_t rbx_6 = rdx_15 - 1
                    int16_t* const r14_4
                    
                    if (rdx_15 != 0)
                        r14_4 = *r13_1
                    else
                        rbx_6 = 0
                        r14_4 = &data_142d40450
                    
                    if (rbx_6 - 1 s< 0)
                        rbx_6 = 0
                    else if (rbx_6 - 1 s< rbx_6)
                        rbx_6 -= 1
                    
                    int16_t* var_1f0 = nullptr
                    int32_t rdx_20 = 0
                    int32_t var_1e8_1 = 0
                    int32_t rax_34 = 0
                    int32_t var_1e4_1 = 0
                    int16_t* rdi_3 = nullptr
                    int16_t* const rdx_23
                    
                    if (r14_4 != 0 && *r14_4 != 0 && rbx_6 s> 0)
                        if (rbx_6 + 1 s> 0)
                            sub_1405947f0(&var_1f0, rbx_6 + 1)
                            rax_34 = var_1e4_1
                            rdx_20 = var_1e8_1
                            rdi_3 = var_1f0
                        
                        rsi = zx.q(rdx_20 + 1 + rbx_6)
                        int32_t var_1e8_2 = rsi.d
                        
                        if (rsi.d s> rax_34)
                            sub_140594770(&var_1f0)
                            rsi = zx.q(var_1e8_2)
                            rdi_3 = var_1f0
                        
                        UnDecorator::getReferenceType(rdi_3, r14_4, rbx_6 * 2)
                        rdx_23 = rdi_3
                        rdi_3[sx.q(rsi.d) - 1] = 0
                    
                    if (r14_4 == 0 || *r14_4 == 0 || rbx_6 s<= 0 || rsi.d == 0)
                        rdx_23 = &data_142d40450
                    
                    r15 = arg3
                    rsi.b = (*(*r15 + 8))(r15, rdx_23, &var_1e0) != 0
                    r14 = (r14 | 4) & 0xfffffffb
                    var_228_1 = r14
                    
                    if (rdi_3 != 0)
                        sub_140a74f90(rdi_3)
                
                sub_140598750(&var_e8, &var_190)
                int64_t* var_188
                sub_140596d10(var_188, r13_1)
                var_188[2].d = 0xffffffff
                int32_t rax_40 = var_188[1].d
                int16_t* rdx_27
                
                if (rax_40 == 0)
                    rdx_27 = &data_142d40450
                else
                    rdx_27 = *var_188
                
                int32_t rcx_42 = rax_40 - 1
                
                if (rax_40 == 0)
                    rcx_42 = 0
                
                int32_t rax_41 = sub_1405969c0(rcx_42, rdx_27)
                var_230_1.q = 0
                char var_238_1
                var_238_1.d = var_190.d
                void var_154
                sub_14059a6d0(&var_e8, &var_154, rax_41, var_188, var_238_1, var_230_1)
            
            zmm1_1[1].d &= not.d(var_180[1]:4.d)
            sub_14059bdd0(&var_180[1])
            rcx_20 = zmm1_1[1]:4.d
            
            if (rcx_20 s>= *(zmm1_1[0] i+ 0x18))
                break
            
            rdi = arg1
        
        rbx_3 = var_1f8
        r12_1 = var_198_1
    
    int32_t var_f0_2 = 0
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)
    
    sub_140669e00(&var_138)
    rbx_3 += 1
    r12_1 += 0x10
    var_1f8 = rbx_3
    var_198_1 = r12_1
    
    if (rbx_3 s>= var_200.d)
        break
    
    rdi = arg1

if (rsi.b != 0)
    r12 = arg2
label_141d07f21:
    int64_t* rcx_47 = *(arg1 + 8)
    
    if ((*(*rcx_47 + 0xd8))(rcx_47, r12, arg4) != 0)
        int64_t* rcx_48 = *(arg1 + 8)
        
        if (var_e0 != var_b4)
            int64_t* var_1d8_3 = r15
            var_1e0 = &data_14321cbf0
            int64_t* var_1d0_1 = &var_e8
            uint64_t* var_1c8_1 = &var_208
        
        rsi = zx.q((*(*rcx_48 + 0x110))())

int16_t* rcx_49 = var_218

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

uint64_t rcx_50 = var_208

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140669e00(&var_e8)
__security_check_cookie(rax_1 ^ &var_258)
return zx.q(rsi.b)
