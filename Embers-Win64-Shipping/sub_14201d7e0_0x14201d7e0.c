// 函数: sub_14201d7e0
// 地址: 0x14201d7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int128_t zmm8 = arg3
TEB* gsbase

if (data_143f406f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f406f8)
    
    if (data_143f406f8 == 0xffffffff)
        sub_140b58170(&data_143f406f0, "ApplyRadialDamage", 1)
        _Init_thread_footer(&data_143f406f8)

void var_2a8
void var_e8
sub_141eb54c0(&var_e8, data_143f406f0, &var_2a8, 0, arg10)
sub_141eb8b70(&var_e8, arg9)
int64_t rcx_4 = data_143f5b298
int64_t var_258 = 0
int32_t var_250 = 0
void* rax_4
uint128_t zmm6_1
rax_4, zmm6_1 = sub_1423de540(rcx_4, arg1, 1)
int128_t zmm7 = arg6
int128_t* var_2c0
void* var_2b8
int32_t var_2a0
int32_t var_298

if (rax_4 != 0)
    int32_t var_294_1 = zmm7.d
    var_298 = 2
    sub_141ec40e0()
    var_2b8 = &var_e8
    var_2c0 = &var_298
    var_2a0 = not.d(data_143f3a804) & data_143f3a800
    char var_29c_1 = 0
    zmm6_1, zmm7, zmm8 =
        sub_141ec85d0(rax_4, &var_258, arg4, &data_14399f720, &var_2a0, var_2c0, var_2b8)

int32_t rax_32 = 0
int32_t rcx_9 = 0
int32_t rsi = 0
int32_t var_104 = 0
int64_t* var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
void* var_f8 = nullptr
int32_t var_f0 = 0

if (var_250 s> 0)
    int32_t var_130
    
    do
        int32_t* rdi_1 = var_258 + sx.q(rsi) * 0x18
        void* i = j_sub_140d3c6e0(rdi_1)
        var_2a0.q = i
        
        if (i != 0 && *(i + 0x59) s< 0 && i != arg10 && sub_140d3e110(&rdi_1[2]) != 0)
            uint128_t var_1c8
            memset(&var_1c8, 0, 0x88)
            int32_t var_1c0_1 = 0x3f800000
            var_2c0 = &var_1c8
            int32_t* var_2c8
            var_2c8.d = arg12
            char rax_9
            rax_9, zmm6_1, zmm7, zmm8 =
                sub_142020d40(sub_140d3c6e0(&rdi_1[2]), arg4, arg10, arg9, var_2c8.d, var_2c0)
            
            if (rax_9 != 0)
                uint32_t rcx_17 = (i u>> 4).d
                int32_t rdx_6 = (0x9e3779b9 - rcx_17) ^ rcx_17 << 8
                int32_t r9_3 = neg.d(rdx_6 + rcx_17) ^ rdx_6 u>> 0xd
                int32_t rcx_20 = (rcx_17 - rdx_6 - r9_3) ^ r9_3 u>> 0xc
                int32_t rdx_9 = (rdx_6 - rcx_20 - r9_3) ^ rcx_20 << 0x10
                int32_t r9_6 = (r9_3 - rdx_9 - rcx_20) ^ rdx_9 u>> 5
                int32_t rcx_23 = (rcx_20 - rdx_9 - r9_6) ^ r9_6 u>> 3
                int32_t rdx_12 = (rdx_9 - rcx_23 - r9_6) ^ rcx_23 << 0xa
                int32_t r9_9 = (r9_6 - rdx_12 - rcx_23) ^ rdx_12 u>> 0xf
                int64_t* rbx_3
                
                if (var_130 == var_104)
                label_14201db0e:
                    rbx_3 = sub_142012d90(&var_138, r9_9, &var_2a0)
                else
                    void var_100
                    void* rcx_24 = &var_100
                    
                    if (var_f8 != 0)
                        rcx_24 = var_f8
                    
                    int32_t rax_29 = *(rcx_24 + ((sx.q(var_f0 - 1) & sx.q(r9_9)) << 2))
                    
                    if (rax_29 == 0xffffffff)
                    label_14201db0e_1:
                        rbx_3 = sub_142012d90(&var_138, r9_9, &var_2a0)
                    else
                        int64_t* rdx_16 = var_138
                        
                        while (rdx_16[sx.q(rax_29) * 4] != i)
                            rax_29 = rdx_16[sx.q(rax_29) * 4 + 3].d
                            
                            if (rax_29 == 0xffffffff)
                                goto label_14201db0e_3
                        
                        if (rax_29 == 0xffffffff)
                        label_14201db0e_2:
                            rbx_3 = sub_142012d90(&var_138, r9_9, &var_2a0)
                        else
                            void* rbx_5 = &rdx_16[sx.q(rax_29) * 4]
                            
                            if (rbx_5 == 0)
                            label_14201db0e_3:
                                rbx_3 = sub_142012d90(&var_138, r9_9, &var_2a0)
                            else
                                rbx_3 = rbx_5 + 8
                
                int64_t rdi_2 = sx.q(rbx_3[1].d)
                int32_t rcx_28 = (rdi_2 + 1).d
                rbx_3[1].d = rcx_28
                
                if (rcx_28 s> *(rbx_3 + 0xc))
                    sub_1405c5340(rbx_3)
                
                int64_t rax_31 = *rbx_3
                int128_t* rcx_30 = rdi_2 * 0x88
                *(rcx_30 + rax_31) = var_1c8
                uint128_t var_1b8
                *(rcx_30 + rax_31 + 0x10) = var_1b8
                uint128_t var_1a8
                *(rcx_30 + rax_31 + 0x20) = var_1a8
                uint128_t var_198
                *(rcx_30 + rax_31 + 0x30) = var_198
                uint128_t var_188
                *(rcx_30 + rax_31 + 0x40) = var_188
                uint128_t var_178
                *(rcx_30 + rax_31 + 0x50) = var_178
                uint128_t var_168
                *(rcx_30 + rax_31 + 0x60) = var_168
                uint128_t var_158
                *(rcx_30 + rax_31 + 0x70) = var_158
                int64_t var_148
                *(rcx_30 + rax_31 + 0x80) = var_148
        
        rsi += 1
    while (rsi s< var_250)
    
    rcx_9 = var_104
    rax_32 = var_130

int64_t* r15
r15.b = 0

if (rax_32 - rcx_9 s> 0)
    void* rbx_4 = arg8
    
    if (rbx_4 == 0)
        rbx_4 = sub_142496c20()
    else
        void* rax_34 = sub_142496c20()
        
        if (rax_34 == 0)
            rbx_4 = sub_142496c20()
        else
            int64_t rax_35 = sx.q(*(rax_34 + 0x38))
            
            if (rax_35.d s> *(rbx_4 + 0x38) || *(*(rbx_4 + 0x30) + (rax_35 << 3)) != rax_34 + 0x30)
                rbx_4 = sub_142496c20()
    
    int32_t rcx_32 = 0
    int32_t r9_10 = 0
    uint64_t var_224_1 = *arg4
    int32_t r8_4 = 0
    int32_t var_288_1 = arg7.d
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
    void** const var_248 = &data_14329dfd8
    uint128_t zmm0_2
    zmm0_2.d = zmm8.d
    int32_t rax_38 = *(arg4 + 8)
    _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc6)
    int32_t var_21c_1 = rax_38
    zmm0_2.d = arg5.d
    _mm_shuffle_ps(zmm0_2, zmm0_2, 0x27)
    int32_t var_228_1 = var_288_1
    zmm0_2.d = zmm7.d
    zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x39)
    int64_t var_218 = 0
    int64_t var_210_1 = 0
    void* var_240_1 = rbx_4
    uint128_t var_238_1 = zmm0_2
    int32_t var_288_2 = 0xffffffff
    int64_t var_284_1 = 0
    var_298.o = zmm0_2
    var_298 = 0
    int32_t var_294_2 = 1
    int64_t var_12c
    void* var_290 = &var_12c:4
    int32_t var_110
    
    if (var_110 != 0)
        void* r10_1 = &var_12c:4
        void* var_118
        
        if (var_118 != 0)
            r10_1 = var_118
        
        int32_t temp0_5
        int32_t temp1_1
        temp0_5:temp1_1 = sx.q(var_110 - 1)
        int32_t rdx_22 = *r10_1
        
        if (rdx_22 != 0)
        label_14201dcfc:
            int32_t rax_47 = neg.d(rdx_22) & rdx_22
            uint64_t rflags_1
            int32_t temp0_6
            temp0_6, rflags_1 = _bit_scan_reverse(rax_47)
            int32_t var_294_3 = rax_47
            int32_t rax_48
            
            if (rax_47 == 0)
                rax_48 = 0x20
            else
                rax_48 = 0x1f - temp0_6
            
            int32_t rax_49 = r8_4 - rax_48 + 0x1f
            
            if (rax_49 s> var_110)
                rax_49 = var_110
            
            var_284_1.d = rax_49
        else
            while (true)
                int64_t rdx_23 = sx.q(rcx_32)
                r8_4 += 0x20
                rcx_32 += 1
                var_284_1:4.d = r8_4
                var_298 = rcx_32
                
                if (rdx_23.d s>= (temp1_1 + (temp0_5 & 0x1f)) s>> 5)
                    var_284_1.d = var_110
                    break
                
                rdx_22 = *(r10_1 + (rdx_23 << 2) + 4)
                var_288_2 = 0xffffffff
                
                if (rdx_22 != 0)
                    goto label_14201dcfc
    
    uint128_t zmm4_1 = var_288_2.o
    int64_t** var_1d8_1 = &var_138
    int16_t var_260_1 = 0
    int64_t** var_268_1 = &var_138
    uint128_t var_1e8_1 = zmm4_1
    uint128_t zmm3 = var_298.o
    uint128_t zmm1_1 = _mm_unpackhi_pd(zmm4_1, zmm4_1.q)
    var_298.o = (&var_138).o
    zmm0_2.q = zmm1_1.q
    var_288_2.o = zmm3
    uint128_t var_278_1 = zmm0_2
    
    if ((zmm4_1.q u>> 0x20).d s< *(zmm3.q + 0x18))
        int32_t var_27c
        int32_t rcx_36 = var_27c
        r15.b = 1
        
        while (true)
            int64_t rdx_25 = sx.q(rcx_36) << 5
            void* rcx_37 = *var_298.q
            int64_t* rdi_3 = *(rdx_25 + rcx_37)
            int64_t* rax_53 = rcx_37 + 8 + rdx_25
            
            if (&var_218 != rax_53)
                int32_t rbx_6 = rax_53[1].d
                int64_t rsi_1 = *rax_53
                var_210_1.d = rbx_6
                
                if (rbx_6 != 0 || r9_10 != 0)
                    sub_141a73160(&var_218, rbx_6, r9_10)
                    memcpy(var_218, rsi_1, rbx_6 * 0x88)
                else
                    var_210_1:4.d = 0
            
            (*(*rdi_3 + 0x588))(rdi_3, zmm6_1, &var_248, arg11, arg10, var_2c0, var_2b8)
            var_284_1:4.d &= not.d(var_290:4.d)
            sub_14059bdd0(&var_290)
            rcx_36 = var_27c
            
            if (rcx_36 s>= *(var_288_2.q + 0x18))
                break
            
            r9_10 = var_210_1:4.d
        
        if (var_260_1.b != 0 && var_260_1:1.b != 0)
            sub_1405b6520(var_268_1, var_268_1[1].d - *(var_268_1 + 0x34), 1)
        
        int64_t rcx_43 = var_218
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)

int32_t var_f0_1 = 0

if (var_f8 != 0)
    sub_140a74f90(var_f8)

sub_140597460(&var_138)
int64_t rcx_46 = var_258

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_2e8)
return zx.q(r15.b)
