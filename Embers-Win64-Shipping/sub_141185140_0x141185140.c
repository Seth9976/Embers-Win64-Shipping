// 函数: sub_141185140
// 地址: 0x141185140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_618
int64_t rax_1 = __security_cookie ^ &var_618
int64_t* rdi = arg5
int32_t var_5c8 = 0
int64_t r14 = arg1
int32_t rbx = arg3[1].d
int64_t r8 = 0
int64_t* var_5b8 = rdi
int64_t var_5a0 = 0
int64_t var_598 = 0

if (rbx s> 0)
    var_598.d = rbx
    sub_1405a4d70(&var_5a0)
    r8 = var_5a0
else if (rbx s< 0 && rbx != 0)
    var_598.d = rbx
    sub_1405c53d0(&var_5a0)
    r8 = var_5a0

int32_t rdx_1 = 0

if (rbx != 0)
    do
        arg1 = sx.q(rdx_1)
        rdx_1 += 1
        *(r8 + (arg1 << 3)) = arg1 * 0x5240 + *arg3
    while (rdx_1 u< rbx)

uint128_t var_578 = data_142d3f660
int64_t* var_568 = nullptr
void* const var_5b0
uint64_t var_588

if (rbx != 0)
    void* rbx_1 = *arg3
    var_5b0 = rbx_1
    int64_t* rbx_2 = *(rbx_1 + 0x5030)
    int64_t* rcx_3
    int64_t* rdi_1
    int32_t r15_1
    
    if (rbx_2 == 0)
        rbx_2 = var_5b8
        rdi_1 = nullptr
        rcx_3 = nullptr
        r15_1 = 2
    else
        (*(*rbx_2 + 0x30))(rbx_2)
        rdi_1 = var_5b8
        rcx_3 = rbx_2
        r15_1 = 1
    
    int64_t* rdx_2 = var_568
    var_5c8.q = rdx_2
    var_568 = rcx_3
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x30))(rcx_3)
        rdx_2 = var_5c8.q
    
    if (rdx_2 != 0)
        (*(*rdx_2 + 0x38))(rdx_2)
    
    if ((r15_1.b & 2) != 0)
        r15_1 &= 0xfffffffd
        
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x38))(rdi_1)
    
    if ((r15_1.b & 1) != 0 && rbx_2 != 0)
        (*(*rbx_2 + 0x38))(rbx_2)
    
    void* const r15_2 = var_5b0
    var_5b0.d = *(r15_2 + 0x508c)
    int32_t rax_10 = *(r15_2 + 0x5088)
    TEB* gsbase
    
    if (data_143cda914
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    int32_t rdi_2 = *(r15_2 + 0x5088)
    int32_t rbx_3 = *(r15_2 + 0x508c)
    uint128_t zmm7 = zx.o(*(r15_2 + 0x15a0) - *(r15_2 + 0x1598))
    int32_t rax_17 = *(r15_2 + 0x15a4) - *(r15_2 + 0x159c)
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdi_2 * 2))
    zmm7 = _mm_cvtepi32_ps(zmm7)
    uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax_17))
    zmm7.d = zmm7.d f/ zmm0.d
    int32_t rax_19 = var_5b0.d
    zmm0 = _mm_cvtepi32_ps(zx.o(rbx_3 * 2))
    
    if (rax_10 s>= rax_19)
        rax_19 = rax_10
    
    zmm6.d = zmm6.d f/ zmm0.d
    uint128_t zmm0_1
    zmm0_1, arg1 = logf(_mm_cvtepi32_ps(zx.o(rax_19)).d)
    zmm0_1.d = zmm0_1.d f* data_143cda910
    zmm0_1.d = zmm0_1.d f- 9f
    rdi = var_5b8
    uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rdi_2))
    zmm0_1 = _mm_max_ss(zmm0_1.d, 0)
    float zmm2 = 1f f/ zmm4_1.d
    _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    int32_t var_5c0_1 = zmm0_1.d
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rbx_3))
    int32_t var_580_1 = var_5c0_1
    zmm0_1 = _mm_unpacklo_ps(zmm7, zmm6.q)
    zmm4_1.d = zmm1.d
    _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
    zmm4_1.d = zmm2
    var_588 = zmm0_1.q
    _mm_shuffle_ps(zmm4_1, zmm4_1, 0x27)
    zmm4_1.d = 1f f/ zmm1.d
    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x39)
    var_5c8.o = zmm4_1
    uint128_t var_578_1 = zmm4_1

if (data_1439b5fc8 s<= 0 || (*arg4 != 0 && data_1439b5fd0 s<= 0))
    arg1.b = 1
else
    arg1.b = 0

void*** r15_3 = *arg3
int64_t result = sx.q(arg3[1].d)
char var_5d8 = arg1.b
void* rbx_5 = result * 0x5240 + r15_3
var_5c8.q = rbx_5

while (r15_3 != rbx_5)
    void* rdi_3 = *rdi
    var_5b0 = nullptr
    int64_t var_5a8_1 = 0
    void* rsi_2 = sx.q(var_5b8[1].d) * 0x58 + rdi_3
    
    if (rdi_3 != rsi_2)
        do
            void* rcx_20
            
            if (arg1.b == 0)
                int32_t rbx_6 = data_1439b5fcc
                
                if (*arg4 != 0)
                    rbx_6 = data_1439b5fd4
                
                void var_2e0
                sub_1419928d0(&var_2e0, r14)
                void** var_5e0_1 = &var_5b0
                void* var_5e8_1 = rdi_3
                int32_t var_5f0_1 = rbx_6
                uint64_t* var_5f8_1 = &var_588
                sub_14117f030(&var_2e0, arg2, r15_3, arg4)
                sub_14199ef00(&var_2e0)
                void* rax_23 = *(rdi_3 + 0x50)
                
                if (rax_23 != 0)
                    *(rax_23 + 0x120) = 1
                
                int32_t var_b8_1 = 0
                int32_t var_b4
                void var_c0
                
                if (var_b4 != 0)
                    sub_1410b3aa0(&var_c0, 0)
                int32_t var_130_1 = 0
                int32_t var_12c
                void var_138
                
                if (var_12c != 0)
                    sub_1410b3aa0(&var_138, 0)
                int32_t var_188_1 = 0
                int32_t var_1c8_1 = 0
                int32_t var_1c4
                void var_1d0
                
                if (var_1c4 != 0)
                    sub_1410b3bb0(&var_1d0, 0)
                int32_t var_1a0_1 = 0xffffffff
                int32_t var_19c_1 = 0
                void var_1c0
                sub_141095ed0(&var_1c0, 0)
                int32_t var_1d8_1 = 0
                int32_t var_218_1 = 0
                int32_t var_214
                void var_220
                
                if (var_214 != 0)
                    sub_1410b3bb0(&var_220, 0)
                int32_t var_1f0_1 = 0xffffffff
                int32_t var_1ec_1 = 0
                void var_210
                sub_141095ed0(&var_210, 0)
                int32_t var_228_1 = 0
                void var_270
                sub_141096480(&var_270, 0)
                void var_2c0
                rcx_20 = &var_2c0
                int32_t var_278_1 = 0
            else
                void var_558
                sub_1419928d0(&var_558, r14)
                sub_141180420(&var_558, arg2, rdi_3, &var_5b0)
                sub_14199ef00(&var_558)
                int32_t var_330_1 = 0
                int32_t var_32c
                void var_338
                
                if (var_32c != 0)
                    sub_1410b3aa0(&var_338, 0)
                int32_t var_3a8_1 = 0
                int32_t var_3a4
                void var_3b0
                
                if (var_3a4 != 0)
                    sub_1410b3aa0(&var_3b0, 0)
                int32_t var_400_1 = 0
                int32_t var_440_1 = 0
                int32_t var_43c
                void var_448
                
                if (var_43c != 0)
                    sub_1410b3bb0(&var_448, 0)
                int32_t var_418_1 = 0xffffffff
                int32_t var_414_1 = 0
                void var_438
                sub_141095ed0(&var_438, 0)
                int32_t var_450_1 = 0
                int32_t var_490_1 = 0
                int32_t var_48c
                void var_498
                
                if (var_48c != 0)
                    sub_1410b3bb0(&var_498, 0)
                int32_t var_468_1 = 0xffffffff
                int32_t var_464_1 = 0
                void var_488
                sub_141095ed0(&var_488, 0)
                int32_t var_4a0_1 = 0
                void var_4e8
                sub_141096480(&var_4e8, 0)
                void var_538
                rcx_20 = &var_538
                int32_t var_4f0_1 = 0
            
            sub_14108c840(rcx_20)
            arg1 = zx.q(var_5d8)
            rdi_3 += 0x58
        while (rdi_3 != rsi_2)
        
        rbx_5 = var_5c8.q
    
    result = sub_1411a4610(r14, &var_5b0)
    void* const rcx_32 = var_5b0
    
    if (rcx_32 != 0)
        result = sub_140a74f90(rcx_32)
    
    arg1 = zx.q(var_5d8)
    r15_3 = &r15_3[0xa48]
    rdi = var_5b8

if (var_568 != 0)
    result = (*(*var_568 + 0x38))(var_568)

int64_t rcx_34 = var_5a0

if (rcx_34 != 0)
    result = sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_618)
return result
