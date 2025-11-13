// 函数: sub_1420faf20
// 地址: 0x1420faf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
TEB* gsbase

if (data_143f487c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f487c8)
    
    if (data_143f487c8 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_17 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.VirtualTexturedLightmaps", r8_4)
        int64_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0
        else
            int64_t rdx_6 = *rax_17
            rax_18 = (*(rdx_6 + 0x58))(rax_17, rdx_6)
        
        data_143f487c0 = rax_18
        _Init_thread_footer(&data_143f487c8)

char rax_5

if (*(data_143f487c0 + 4) != 0)
    rax_5 = sub_1419ba670(arg1)

int64_t r14

if (*(data_143f487c0 + 4) == 0 || rax_5 == 0)
    r14.b = 0
else
    r14.b = 1

int128_t* rax_6
uint128_t var_238

if (arg3 == 0)
    var_238 = zx.o(0)
    int128_t var_208
    __builtin_memset(&var_208, 0, 0x14)
    void var_217
    void* rax_7 = &var_217
    
    for (int32_t i = 0; i u< 4; )
        i += 4
        *(rax_7 - 1) = 0
        rax_7 += 4
    
    rax_6 = &var_238
else
    rax_6 = sub_1422e5a50(arg3, &var_238)
uint128_t zmm1 = rax_6[1]
int128_t zmm4 = rax_6[3]
uint128_t var_278 = zmm1
int32_t var_268 = rax_6[2].d

if (rax_6[4].d != 2)
    zmm1 = data_142d3f670
    arg2[3] = data_142f13080
    arg2[1] = zx.o(0)
    *arg2 = zmm1
else
    uint128_t var_298_1 = zmm1
    arg2[3] = zmm1
    uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(var_268.b))
    _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    zmm3.d = _mm_cvtepi32_ps(zx.o(var_268:1.b)).d
    _mm_shuffle_ps(zmm3, zmm3, 0xc6)
    zmm3.d = _mm_cvtepi32_ps(zx.o(var_268:2.b)).d
    _mm_shuffle_ps(zmm3, zmm3, 0x27)
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(var_268:3.b))
    arg2[1] = zmm4
    zmm3.d = zmm2.d
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
    uint128_t var_298_2 = zmm3
    *arg2 = zmm3

int64_t* rcx_5
int128_t var_1e8

if (arg3 == 0)
    rcx_5 = &var_1e8
    __builtin_memcpy(&var_1e8, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    int128_t var_1a8
    __builtin_memset(&var_1a8, 0, 0x20)
    data_142d3f660
    int128_t var_188
    __builtin_memcpy(&var_188, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    int64_t var_148_1 = 0
    int32_t var_138_1 = 0
else
    rcx_5 = sub_1422e4ff0(arg3, &var_1e8)
zmm1 = *(rcx_5 + 0x10)
uint128_t var_118 = *rcx_5
uint128_t var_108 = zmm1
zmm1 = *(rcx_5 + 0x30)
uint128_t var_f8 = *(rcx_5 + 0x20)
uint128_t var_e8 = zmm1
uint128_t var_d8 = *(rcx_5 + 0x40)
uint128_t var_c8 = *(rcx_5 + 0x50)
zmm1 = *(rcx_5 + 0x80)
uint128_t var_b8 = *(rcx_5 + 0x60)
uint128_t var_98
uint128_t* result = &var_98
uint128_t var_a8 = *(rcx_5 + 0x70)
uint128_t zmm0 = *(rcx_5 + 0x90)
var_98 = zmm1
uint128_t var_88 = zmm0
zmm0 = *(rcx_5 + 0xb0)
int72_t var_78 = (*(rcx_5 + 0xa0)).9
uint128_t var_58 = *(rcx_5 + 0xc0)

if (zmm0.d != 2)
    arg2[2] = data_142f13080
    __builtin_memcpy(&arg2[4], 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x"
    "3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
    __builtin_memset(&arg2[6], 0, 0x20)
else
    sub_1423d2320(arg1)
    uint32_t r15_1 = 0
    arg2[2] = zmm0
    
    if (r14.b == 0)
        __builtin_memset(&arg2[8], 0, 0x20)
    label_1420fb24c:
        void* rcx_13 = &arg2[zx.q(r15_1) + 0xa]
        uint64_t i_2 = zx.q(5 - r15_1)
        uint64_t i_1
        
        do
            *rcx_13 = 0
            rcx_13 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    else
        int64_t* rax_14
        int64_t r8_2
        rax_14, r8_2 = sub_1420dbf90(*(arg3 + 0x20))
        r8_2.b = 1
        int64_t r9_1 = *rax_14
        (*(r9_1 + 0x28))(rax_14, &arg2[8], r8_2, r9_1, zmm0)
        r15_1 = zx.d(*(rax_14 + 0x11))
        int32_t rbx_1 = 0
        
        if (r15_1 != 0)
            int64_t rsi_1 = 0
            
            do
                (*(*rax_14 + 0x30))(rax_14, &arg2[0xa] + rsi_1, zx.q(rbx_1))
                rbx_1 += 1
                rsi_1 += 0x10
            while (rbx_1 u< r15_1)
        
        if (r15_1 u< 5)
            goto label_1420fb24c
    
    uint128_t* rcx_14
    
    if (var_78:8.b == 0)
        result = &var_b8
        rcx_14 = &var_98
    else
        result = &var_118
        rcx_14 = &var_f8
    
    zmm1 = *rcx_14
    arg2[4] = *result
    zmm0 = result[1]
    arg2[6] = zmm1
    zmm1 = rcx_14[1]
    arg2[5] = zmm0
    arg2[7] = zmm1

__security_check_cookie(rax_1 ^ &var_2b8)
return result
