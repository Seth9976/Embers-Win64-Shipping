// 函数: sub_1407b18d0
// 地址: 0x1407b18d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
memset(arg2, 0, 0x68)
int32_t var_21c = 0x80
__builtin_memset(&arg2[0xc], 0, 0x14)
__builtin_memset(&arg2[0x12], 0, 0x1c)
int64_t r12 = *(arg1 + 0x28)
int32_t rsi = *(arg1 + 0xd8)
int32_t r15 = *(arg1 + 0xf0)
uint128_t zmm6 = zx.o(*(arg1 + 0xe4))
uint32_t r14 = *(arg1 + 0xec)
int64_t var_2c8 = *(arg1 + 0xd0)
int64_t var_248
__builtin_memset(&var_248, 0, 0x2c)
int32_t var_218 = 0xffffffff
int32_t var_214 = 0
int64_t var_208 = 0
int32_t var_200 = 0
sub_140780cc0(&var_248, arg1 + 0x30)
int32_t var_26c = 0x80
int64_t var_298
__builtin_memset(&var_298, 0, 0x2c)
int32_t var_264 = 0
int64_t var_258 = 0
int32_t var_250 = 0
int32_t var_268 = 0xffffffff
sub_140780cc0(&var_298, arg1 + 0x80)
int32_t rdx_2
int32_t r8

if (*(arg1 + 0xe0) == 0)
    r8 = var_2c8:4.d
    rdx_2 = var_2c8.d
else
    int32_t zmm4_1 = *(arg1 + 0xdc)
    uint32_t zmm3[0x4] = *(arg1 + 0xe4)
    uint128_t zmm2
    zmm2.d = 1f f/ zmm4_1
    zmm3[0] = zmm3[0] f* zmm2.d
    rdx_2 = int.d(zmm3[0])
    uint32_t zmm0_1[0x4] = zmm2
    zmm2.d = zmm2.d f* *(arg1 + 0xec)
    var_2c8.d = rdx_2
    zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0xe8)
    rsi = int.d(zmm2.d)
    r8 = int.d(zmm0_1[0])
    zmm0_1 = zx.o(0)
    zmm0_1[0] = float.s(rdx_2)
    var_2c8:4.d = r8
    zmm0_1[0] = zmm0_1[0] f* zmm4_1
    zmm0_1[0] = zmm0_1[0] f- zmm3[0]
    
    if (not(__andps_xmmxud_memxud(zmm0_1, data_142d3f770)[0] f<= 9.99999994e-09f))
        int32_t rax_2 = rdx_2 + 1
        r8 += 1
        int32_t rcx_3 = rsi + 1
        rdx_2 = rax_2
        var_2c8.d = rax_2
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_2))
        var_2c8:4.d = r8
        rsi = rcx_3
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_3))
        zmm2 = _mm_cvtepi32_ps(zx.o((var_2c8 u>> 0x20).d))
        zmm1.d = zmm1.d f* zmm4_1
        zmm0_1[0] = zmm0_1[0] f* zmm4_1
        zmm2.d = zmm2.d f* zmm4_1
        r14 = zmm0_1[0]
        zmm6 = _mm_unpacklo_ps(zmm1, zmm2.q)

*arg2 = rdx_2
arg2[2] = rsi
arg2[1] = r8
*(arg2 + 0x18) = zmm6.q
arg2[8] = r14
arg2[5] = r15
int64_t rbx_1 = *(arg3 + 0xe0)
int64_t var_1d0
__builtin_memset(&var_1d0, 0, 0x2c)
int32_t var_19c = 0
int64_t var_190 = 0
int32_t var_188 = 0
int64_t var_1f8 = r12
uint64_t var_1e0 = zmm6.q
int32_t var_1a4 = 0x80
int32_t var_1a0 = 0xffffffff
sub_140780cc0(&var_1d0, &var_248)
int64_t var_180
__builtin_memset(&var_180, 0, 0x2c)
int32_t var_154 = 0x80
int32_t var_150 = 0xffffffff
int32_t var_14c = 0
int64_t var_140 = 0
int32_t var_138 = 0
sub_140780cc0(&var_180, &var_298)

if (sub_140a80f40() == 0)
    uint32_t rax_6
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
        void var_2b0
        void** rax_12 = sub_140789a30(&var_2b0, nullptr, 0xff)
        void* rbx_2 = *rax_12
        *(rbx_2 + 0x10) = var_1f8
        *(rbx_2 + 0x18) = var_2c8
        *(rbx_2 + 0x20) = rsi
        *(rbx_2 + 0x24) = r15
        *(rbx_2 + 0x28) = var_1e0
        *(rbx_2 + 0x30) = r14
        sub_14077e140(rbx_2 + 0x38, &var_1d0)
        sub_14077e140(rbx_2 + 0x88, &var_180)
        *(rbx_2 + 0xd8) = rbx_1
        void* rcx_17 = *rax_12
        int64_t* rdi_2 = *(rcx_17 + 0xe8)
        
        if (rdi_2 != 0)
            rdi_2[9].d += 1
        
        sub_1407c9910(rcx_17, rax_12[1], rax_12[2].d, 1)
        
        if (rdi_2 != 0)
            rdi_2[9].d -= 1
            
            if (rdi_2[9].d == 1)
                sub_140a2f6e0(rdi_2)
    else
        int64_t var_128 = var_1f8
        int32_t var_118_1 = rsi
        uint64_t var_120_1 = var_2c8
        int32_t var_114_1 = r15
        uint32_t var_108_1 = r14
        uint64_t var_110_1 = var_1e0
        void var_100
        sub_14077e140(&var_100, &var_1d0)
        void var_b0
        sub_14077e140(&var_b0, &var_180)
        int64_t var_60_1 = rbx_1
        sub_1407820d0(&var_128)
        sub_14077fbc0(&var_128)
else
    sub_1407820d0(&var_1f8)

sub_14077fbc0(&var_1f8)
int32_t var_250_1 = 0

if (var_258 != 0)
    sub_140a74f90(var_258)

int64_t var_290
var_290.d = 0
int32_t var_268_1 = 0xffffffff
int32_t var_264_1 = 0
int64_t var_288
sub_14059a8e0(&var_288, 0)
int64_t var_278

if (var_278 != 0)
    sub_140a74f90(var_278)

int64_t rcx_24 = var_298

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int32_t var_200_1 = 0

if (var_208 != 0)
    sub_140a74f90(var_208)

int64_t var_240
var_240.d = 0
int32_t var_218_1 = 0xffffffff
int32_t var_214_1 = 0
int64_t var_238
sub_14059a8e0(&var_238, 0)
int64_t var_228

if (var_228 != 0)
    sub_140a74f90(var_228)

int64_t rcx_29 = var_248

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

void* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_2e8)
return result
