// 函数: sub_1414d9e60
// 地址: 0x1414d9e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
sub_1410ead70(&var_278)
int512_t zmm1
zmm1.o = data_142d3f660
int128_t var_c8
__builtin_memcpy(&var_c8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
        3f", 
    0x30)
int128_t var_98
__builtin_memset(&var_98, 0, 0x20)
sub_1414dfb30(arg1, arg2, *(arg1 + 0x10), &var_278)
int64_t* rcx_2 = data_143f0f180
int32_t var_398 = 1
void* arg_8
(*(*rcx_2 + 0xf8))(rcx_2, &arg_8, &var_278, &data_143ee84f0, 1, 0)
void* r14 = arg_8
void* var_368 = r14

if (r14 != 0)
    *(r14 + 8) += 1
    r14 = var_368

sub_1405d1550(&arg_8)
uint64_t r8_2 = zx.q(*(arg1 + 0x544))
uint64_t rdx_2 = zx.q(*(arg1 + 0x540))
int64_t r15 = *(*(arg1 + 0x10) + 0x10)
int32_t rcx_4 = *(arg1 + 0x550) * 2
int32_t zmm9 = float.s(rdx_2)
int32_t zmm6 = float.s(zx.q(r8_2.d + rcx_4 + *(arg1 + 0x54c)))
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t zmm7 = float.s(zx.q(*(arg1 + 0x548) + rcx_4 + rdx_2.d))
void* rax_8 = &rcx_7[5]

if (rax_8 u> *(arg2 + 0x38))
    rdx_2, zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_7[5]

*(arg2 + 0x30) = rax_8
void** rax_9 = *(arg2 + 8)
*(arg2 + 0x14) += 1
char var_388 = 0
*rax_9 = rcx_7
rdx_2.b = 1
*(arg2 + 8) = &rcx_7[1]
rcx_7[2].d = zmm9
*(rcx_7 + 0x14) = float.s(r8_2)
*(rcx_7 + 0x1c) = zmm7
rcx_7[4].d = zmm6
*rcx_7 = &data_142d54998
rcx_7[3].d = 0
*(rcx_7 + 0x24) = 0x3f800000
rcx_7[1] = 0
int128_t var_2a8
__builtin_memset(&var_2a8, 0, 0x20)
var_398.b = 0
int512_t zmm0_1 = sub_14199cb60(arg2, rdx_2.b, 2, &var_2a8, 0, 0x3f800000, 0, 0)
int32_t rcx_12 = *(arg1 + 0x544)
int32_t r8_3 = *(arg1 + 0x550)
int32_t rdx_3 = *(arg1 + 0x540)
int32_t zmm6_1 = float.s(zx.q(rcx_12 + r8_3 + *(arg1 + 0x54c)))
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm7 = float.s(zx.q(*(arg1 + 0x548) + rdx_3 + r8_3))
void* rax_16 = &rcx_17[5]

if (rax_16 u> *(arg2 + 0x38))
    zmm0_1, zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_17[5]

*(arg2 + 0x30) = rax_16
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[1] = 0
rcx_17[3].d = 0
rcx_17[2].d = float.s(zx.q(rdx_3 + r8_3))
*(rcx_17 + 0x14) = float.s(zx.q(rcx_12 + r8_3))
*(rcx_17 + 0x1c) = zmm7
rcx_17[4].d = zmm6_1
*rcx_17 = &data_142d54998
*(rcx_17 + 0x24) = 0x3f800000
void* rdx_5 = *(arg3 + 8)
int64_t r9_2 = *(arg1 + 0x10)
int64_t rdi = data_14395d9e8
int64_t rbx = data_1439b62c8
void** const var_360 = &data_142f11938
int64_t** var_378
int64_t* var_350 = &var_378
void* var_348 = arg1 + 0x8a8
var_378 = nullptr
int32_t var_370 = 0
void* r12 = arg1 + 0x890
void* var_340 = arg1 + 0x8f0
void* var_358 = r12
var_398.q = &var_360
void** var_338
sub_14125c360(&var_338, rdx_5, *(rdx_5 + 8), r9_2, var_398)
int32_t rdx_6 = *(arg1 + 0x570)
var_338 = &data_142fb7b40
uint8_t rcx_23 = (rdx_6 u>> 4).b & 1
int64_t var_308 = rdi
int32_t i = 0
int64_t var_310 = rbx
int32_t var_300 = 0x11
int64_t var_2f8 = r15
int64_t var_2f0 = 0
int64_t var_2e8 = 0
void* var_2e0 = r14
int32_t var_2d8 = 0
void* var_2d0 = arg1
uint8_t var_2c8 = rcx_23
uint8_t var_2c7 = (rdx_6 u>> 5).b & 1
uint8_t var_2c6 = (rdx_6 u>> 7).b & 1
uint8_t var_2c5 = rcx_23

if (*(arg1 + 0x650) s> 0)
    void** rbx_1 = nullptr
    
    do
        int64_t rdx_8 = *(arg1 + 0x648)
        var_398 = 0xffffffff
        zmm0_1 =
            sub_1414c3470(&var_338, *(rbx_1 + rdx_8), -1, *(rbx_1 + rdx_8 + 8), zmm0_1, 0xffffffff)
        i += 1
        rbx_1 = &rbx_1[3]
    while (i s< *(arg1 + 0x650))

int32_t i_1 = 0

if (*(arg1 + 0x630) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        void* r14_1 = *(r12_1 + *(arg1 + 0x628))
        zmm0_1.o = *(*(*(arg1 + 0x10) + 0x1658) + sx.q(*(r14_1 + 0x110)) * 0x10)
        zmm0_1.o = _mm_bsrli_si128(zmm0_1.o, 8)
        int32_t rax_25 = zmm0_1.d
        
        if (not(test_bit(rax_25, 0xf)))
            int64_t* rcx_27 = *(r14_1 + 8)
            void var_288
            zmm0_1.o = *(*(*rcx_27 + 0x70))(rcx_27, &var_288)
            rax_25 = zmm0_1.12:8.d
        
        if ((rax_25.b & 4) != 0 && (rax_25.b & 1) != 0)
            int32_t j = 0
            
            if (*(r14_1 + 0x50) s> 0)
                int64_t rbx_2 = 0
                
                do
                    void* r10_2 = *(r14_1 + 0x48) + rbx_2
                    int64_t r8_6
                    
                    if ((*(r10_2 + 0x9c) & 0x100000) == 0)
                        r8_6 = -1
                    else
                        r8_6 = *(*(*(arg1 + 0x10) + 0x16d8) + (sx.q(*(r10_2 + 0xac)) << 3))
                    
                    zmm0_1 = sub_1414c3470(&var_338, r10_2, r8_6, *(*(r10_2 + 0xa0) + 8), zmm0_1, 
                        *(r10_2 + 0xa8))
                    j += 1
                    rbx_2 += 0xb0
                while (j s< *(r14_1 + 0x50))
        
        i_1 += 1
        r12_1 = &r12_1[1]
    while (i_1 s< *(arg1 + 0x630))
    
    r12 = arg1 + 0x890

if (var_370 s> 0)
    char rax_31 = sub_141421520(*(*(arg1 + 0x10) + 0x1548))
    void* rcx_31 = *(arg1 + 0x10)
    int64_t arg_20 = 0
    var_398.q = arg1 + 0x8f0
    sub_14125f360(rcx_31, &var_378, r12, arg1 + 0x8a8, var_398)
    sub_1412c7690(*(arg3 + 0x3b0), &var_378, r12, &arg_20, 1)
    var_388.q = arg2
    sub_1412e4c00(&var_378, arg1 + 0x8a8, arg_20, 0, rax_31, 1, var_388)

return sub_1405d1550(&var_368)
