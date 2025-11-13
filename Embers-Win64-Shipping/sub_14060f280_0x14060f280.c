// 函数: sub_14060f280
// 地址: 0x14060f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rbx = nullptr
uint64_t* r14 = arg1 + 0x198
void* r15 = arg1
r14[1].d = 0

if (*(r14 + 0xc) != 0)
    sub_1405dadb0(r14, 0)

*arg2 = 0
arg2[1] = 0
void* rax_2 = *(r15 + 0xc0)
int64_t* var_1b0 = nullptr
void* var_1a8 = nullptr
int64_t* var_1d8 = nullptr
int64_t rsi = *(rax_2 + 0x10)
int64_t rdi = *(rax_2 + 0x18)
int32_t var_170

if (rsi != rdi)
    int64_t rdi_1 = rdi - rsi
    int64_t rbx_2 = rdi_1 s>> 3
    int64_t* rax_3 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
        &var_170, rbx_2)
    var_1b0 = rax_3
    var_1a8 = &rax_3[rbx_2]
    memmove(rax_3, rsi, rdi_1.d)
    rax_2 = *(r15 + 0xc0)
    rbx = rax_3
    var_1d8 = rbx

float* rdi_2 = nullptr
int32_t rcx_3

if (rax_2 == 0)
    rcx_3 = 0
else
    rcx_3 = *(rax_2 + 8)

int32_t var_214
int32_t* var_210 = &var_214
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rcx_3))
var_214 = 0
int32_t var_1e0
int32_t* var_208 = &var_1e0
int32_t** var_1c8 = &var_210
var_1e0 = 0
int32_t var_200
int32_t var_1c0 = &var_200
float var_1dc = 0.5f f/ zmm8.d
int64_t var_d8
sub_14060c1e0(&var_d8, &var_1c8)
void var_c8
void* var_b8

if (*(*(r15 + 0xc0) + 4) s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int32_t i = 0
    int128_t zmm7
    int128_t var_58_1 = zmm7
    
    do
        void* rax_7 = *rbx
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x2c)
        int64_t rcx_5 = *(rax_7 + 0x10)
        void** r13_2 = *(rax_7 + 8)
        int32_t var_fc_1 = 0x80
        int32_t var_f8_1 = 0xffffffff
        int32_t var_f4_1
        __builtin_memset(&var_f4_1, 0, 0x1c)
        
        if (r13_2 != rcx_5)
            do
                void* rsi_1 = *r13_2
                int32_t rcx_6 = 0
                var_200 = 0
                zmm6 = zx.o(0)
                void* var_1f8_1 = &var_c8
                zmm7 = zx.o(0)
                int32_t var_1fc_1 = 1
                int32_t r15_1 = 0
                int32_t var_1f0_1 = 0xffffffff
                int32_t r8_2 = 0
                int64_t var_1ec_1 = 0
                int32_t var_b0
                
                if (var_b0 != 0)
                    void* r9_1 = &var_c8
                    
                    if (var_b8 != 0)
                        r9_1 = var_b8
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(var_b0 - 1)
                    int32_t rdx_5 = *r9_1
                    
                    if (rdx_5 != 0)
                    label_14060f50b:
                        int32_t rax_14 = neg.d(rdx_5) & rdx_5
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                        int32_t var_1fc_2 = rax_14
                        int32_t rax_15
                        
                        if (rax_14 == 0)
                            rax_15 = 0x20
                        else
                            rax_15 = 0x1f - temp0_2
                        
                        int32_t rax_16 = r8_2 - rax_15 + 0x1f
                        
                        if (rax_16 s> var_b0)
                            rax_16 = var_b0
                        
                        var_1ec_1.d = rax_16
                    else
                        while (true)
                            rcx_6 += 1
                            r8_2 += 0x20
                            var_200 = rcx_6
                            var_1ec_1:4.d = r8_2
                            
                            if (rcx_6 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                                var_1ec_1.d = var_b0
                                break
                            
                            var_1f0_1 = 0xffffffff
                            rdx_5 = *(r9_1 + (sx.q(rcx_6) << 2))
                            
                            if (rdx_5 != 0)
                                goto label_14060f50b
                
                double zmm2[0x2] = var_1f0_1.o
                double var_140_1[0x2] = zmm2
                var_1ec_1.d = var_b0
                uint128_t var_150_1 = var_200.o
                double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                uint128_t var_198 = (&var_d8).o
                uint128_t var_148
                uint128_t var_188_1 = var_148
                int64_t var_178_1 = temp0_3.q
                int32_t rbx_3
                
                while (true)
                    int64_t rax_17 = sx.q(var_188_1:0xc.d)
                    int64_t* rdx_7 = var_198.q
                    
                    if (rax_17.d == ((0xffffffff << (var_b0.b & 0x1f)).q u>> 0x20).d
                            && var_188_1.q == &var_c8 && rdx_7 == &var_d8)
                        rbx_3 = *(rsi_1 + 0xc)
                        break
                    
                    rbx_3 = *(rsi_1 + 0xc)
                    int64_t rcx_10 = rax_17 * 5
                    int64_t rax_18 = *rdx_7
                    int32_t rax_19 = *(rax_18 + (rcx_10 << 2) + 8)
                    var_1c8 = *(rax_18 + (rcx_10 << 2))
                    int32_t rax_20 = var_1c8.d
                    
                    if (rbx_3 s< rax_20)
                        break
                    
                    zmm6 = var_1c8:4.d
                    zmm7 = rax_19
                    r15_1 = rax_20
                    var_188_1:8.d &= not.d(var_198:0xc.d)
                    sub_14059bdd0(&var_198:8)
                
                int32_t rcx_12 = *(rsi_1 + 8)
                uint128_t zmm0_1
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rbx_3 - r15_1)).d f* zmm7.d
                zmm0_1.d = zmm0_1.d f+ zmm6.d
                
                if (rcx_12 - 8 u<= 6)
                    int64_t rbx_4 = sx.q(arg2[1].d)
                    var_208:4.b = *(rsi_1 + 0x18)
                    var_208:5.b = *(rsi_1 + 0x1c)
                    var_208:6.b = *(rsi_1 + 0x20)
                    int32_t rax_29 = (rbx_4 + 1).d
                    var_210.d = zmm0_1.d
                    var_210:4.b = rcx_12.b
                    var_208.d = i
                    arg2[1].d = rax_29
                    
                    if (rax_29 s> *(arg2 + 0xc))
                        sub_140610660(arg2)
                    
                    *(*arg2 + rbx_4 * 0x10) = var_210.o
                    rdi_2 = nullptr
                else if (rcx_12 != 0x51)
                    rdi_2 = nullptr
                else
                    int32_t var_1b8_1 = zmm0_1.d
                    uint128_t zmm1_1
                    zmm1_1.d = zmm8.d f* *(rsi_1 + 0x24)
                    zmm0_1.d = 60f f/ zmm1_1.d
                    int32_t var_1b4_1 = zmm0_1.d
                    sub_14060e360(&var_d8, &var_170)
                    int32_t* var_168
                    int32_t* rcx_19 = var_168
                    rdi_2 = nullptr
                    
                    if (rcx_19 == 0)
                        rcx_19 = nullptr
                    else
                        *(rcx_19 + 4) = var_1b8_1.q
                        *rcx_19 = rbx_3
                        rcx_19[3] = 0xffffffff
                    
                    sub_14060eb50(&var_d8, &var_1e0, *rcx_19, rcx_19, var_170, nullptr)
                
                r13_2 = &r13_2[1]
            while (r13_2 != rcx_5)
            
            r15 = arg1
            rbx = var_1d8
        
        int64_t var_120_1
        var_120_1.d = 0
        int128_t var_118
        int128_t* rcx_17 = &var_118
        int32_t var_f8_2 = 0xffffffff
        int32_t var_f4_2 = 0
        int128_t* rdx_9
        int128_t* var_108
        
        if (var_fc_1 u> 0x80)
            int32_t var_fc_2 = 0x80
            sub_1405a4410(rcx_17, 0)
            rdx_9 = var_108
        else
            rdx_9 = var_108
            int32_t var_100
            uint32_t rax_33 = (var_100 + 0x1f) u>> 5
            
            if (rdx_9 != 0)
                rcx_17 = rdx_9
            
            if (rax_33 u> 8)
                memset(rcx_17, 0, zx.q(rax_33) << 2)
                rdx_9 = var_108
            else if (rax_33 != 0)
                memset(rcx_17, 0, zx.q(rax_33) << 2)
                rdx_9 = var_108
        
        if (rdx_9 != 0)
            sub_140a74f90(rdx_9)
        
        int64_t rcx_22 = var_128
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rbx = &rbx[1]
        i += 1
        var_1d8 = rbx
    while (i s< *(*(r15 + 0xc0) + 4))
    
    r14 = r15 + 0x198

int32_t rdx_12 = arg2[1].d
void* rcx_23 = *arg2
char var_218
char* var_1d0_1 = &var_218
var_218 = 0
sub_14060b220(rcx_23, rdx_12)
int32_t i_1 = 0

if (arg2[1].d s> 0)
    do
        while (int.d(fconvert.t(*(rdi_2 + *arg2))) s> *(r15 + 0x1a0))
            int64_t rbx_5 = sx.q(r14[1].d)
            int32_t rax_37 = (rbx_5 + 1).d
            r14[1].d = rax_37
            
            if (rax_37 s> *(r14 + 0xc))
                sub_1405a4cf0(r14)
            
            *(*r14 + (rbx_5 << 2)) = i_1
        
        i_1 += 1
        rdi_2 = &rdi_2[4]
    while (i_1 s< arg2[1].d)

int32_t var_90 = 0
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int32_t var_d0 = 0
int32_t var_cc

if (var_cc != 0)
    sub_1405c55e0(&var_d8, 0)

int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
sub_14059a8e0(&var_c8, 0)

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t rcx_31 = var_d8

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t* r8_9 = var_1b0

if (r8_9 != 0)
    int64_t* rax_40 = r8_9
    
    if (((var_1a8 - r8_9) & 0xfffffffffffffff8) u>= 0x1000)
        r8_9 = r8_9[-1]
        
        if (rax_40 - r8_9 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(r8_9)

__security_check_cookie(rax_1 ^ &var_248)
return arg2
