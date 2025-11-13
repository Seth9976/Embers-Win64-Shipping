// 函数: sub_141304770
// 地址: 0x141304770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void**** result = arg1
wchar16* rbx = arg3
TEB* gsbase

if (data_143eb67b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb67b0)
    
    if (data_143eb67b0 == 0xffffffff)
        int64_t* rcx_25 = data_143db18d0
        
        if (rcx_25 == 0)
            sub_140a53c40()
            rcx_25 = data_143db18d0
        
        arg3.b = 1
        int64_t* rax_54 = (*(*rcx_25 + 0xb0))(rcx_25, u"r.BloomQuality", arg3)
        int64_t rax_52
        
        if (rax_54 == 0)
            rax_52 = 0
        else
            rax_52 = (*(*rax_54 + 0x58))(rax_54)
        
        data_143eb67a8 = rax_52
        _Init_thread_footer(&data_143eb67b0)

int32_t rcx_2 = *(data_143eb67a8 + 4)
int32_t r15

if (rcx_2 s>= 0)
    r15 = 6
    
    if (rcx_2 s< 6)
        r15 = rcx_2
else
    r15 = 0

uint32_t zmm7[0x4]
uint32_t var_68[0x4] = zmm7
float zmm9[0x4]
float var_88[0x4] = zmm9
uint64_t var_120 = arg4[1].q
uint128_t var_130 = *arg4
int128_t var_1c8
__builtin_memset(&var_1c8, 0, 0x18)
int64_t var_1b8
int32_t rdx_5
int32_t r8_1
int32_t r9_1
int32_t r10
void*** r14_1

if (r15 == 0)
label_141304db8:
    r14_1 = var_130.q
label_141304dbc:
    r10 = var_1c8.d
    r9_1 = var_1c8:4.d
    r8_1 = var_1c8:8.d
    rdx_5 = var_1c8:0xc.d
else
    int32_t rax_5 = sub_1422e5a30(rbx)
    int64_t rcx_4
    
    if (rax_5 u> 0x1f || not(test_bit(0xc8451800, rax_5)))
        rcx_4 = sx.q(rax_5)
    
    int64_t rdx
    int128_t zmm6
    float zmm8[0x4]
    
    if ((rax_5 u> 0x1f || not(test_bit(0xc8451800, rax_5)))
            && *(&data_143f025f0 + rcx_4 * 0x14) != data_143f025b0)
        arg3.b = 0
    else
        int32_t rax_8
        rax_8, rdx, arg3, zmm6, zmm8 = sub_14197ef40(sub_1422e5a30(rbx))
        
        if (rax_8 u>= 4)
            arg3.b = 0
        else
            int32_t rax_9 = sub_1422e5a30(rbx)
            int64_t rcx_8
            
            if (rax_9 u> 0x1b || not(test_bit(0x857c041, rax_9)))
                rcx_8 = sx.q(rax_9)
            
            if ((rax_9 u> 0x1b || not(test_bit(0x857c041, rax_9)))
                    && ((*(rcx_8 * 0x14 + &data_143f025fc) u>> 2).b & 1) == 0)
                arg3.b = 0
            else
                arg3.b = 1
    
    if (*(rbx + 0xe01) != 1 || *(rbx + 0x15a8) == 0)
        rdx.b = 0
    else
        rdx.b = 1
    
    wchar16 const* const var_1a8
    int32_t var_f8
    uint128_t zmm1
    uint128_t zmm2
    
    if (arg3.b == 0)
    label_1413048ef:
        
        if (rdx.b != 0 && arg3.b == 0)
            int64_t* rdi_1 = *(rbx + 0x1080)
            
            if (rdi_1 == 0)
                rdi_1 = *(data_143f5b298 + 0x350)
                
                if (rdi_1 != 0 && rdi_1[0xf] != 0)
                label_14130493b:
                    zmm6 = sub_142397530(rdi_1, 0x40a00000, 0)
                    sub_1423c57c0(rdi_1)
                    
                    if (sub_1423c57c0(rdi_1) == 1 && (*(rdi_1 + 0x3d) & 0x10) == 0)
                        int128_t* rax_14 = *(arg4 + 0x18)
                        zmm1 = *arg4
                        zmm2 = *rax_14
                        int64_t var_198
                        var_198.d = data_143f02318
                        int32_t var_108
                        var_108.q = arg4[1].q
                        void* r15_1 = zmm1.q
                        int64_t r13_1 = zmm2.q
                        uint64_t var_138_1 = rax_14[1].q
                        var_f8.q = r15_1
                        int64_t var_f0
                        var_f0.d = _mm_bsrli_si128(zmm1, 8).d
                        uint128_t temp0_2 = _mm_bsrli_si128(zmm2, 8)
                        var_f0:4.d = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
                        uint32_t var_e4_1 = (var_108.q u>> 0x20).d
                        uint32_t var_d4_1 = (_mm_bsrli_si128(zmm2, 8).q u>> 0x20).d
                        int64_t var_d0
                        var_d0.d = var_138_1.d
                        var_d0:4.d = (var_138_1 u>> 0x20).d
                        int64_t rax_25 = *(r15_1 + 0x44)
                        var_198:4.d = rax_25.d
                        int64_t var_190
                        var_190.d = rax_25:4.d
                        int32_t var_d8_1 = temp0_2.d
                        int64_t var_180
                        var_180:4.d = *(r15_1 + 0x5c)
                        int128_t var_168
                        var_168.q = u"UnknownTexture2D"
                        int64_t var_e0_1 = r13_1
                        int128_t var_178
                        var_178:8.w = 0
                        var_1a8.o = data_143f02308
                        var_190:4.d = 0
                        int64_t var_188
                        var_188.d = 1
                        var_188:4.d = 0x10000
                        var_180.w = 1
                        var_178.d = 0
                        var_178:4.d = 0x10009
                        var_168:8.w = 1
                        var_168:0xa.b = 0
                        void*** rax_28 = sub_141188e50(arg2, &var_1a8, u"FFTBloom", 0)
                        int16_t var_140_1 = 0
                        r14_1 = rax_28
                        void*** rax_29 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
                        void*** rdi_2 = rax_29
                        
                        if (rax_29 == 0)
                            rdi_2 = nullptr
                        else
                            rdi_2[1] = r14_1[1]
                            *rdi_2 = &data_142f285c0
                            rdi_2[2] = 0
                            *(rdi_2 + 0x18) = rax_28.o
                        
                        int128_t* rax_31 = sub_14081d830(0x20, *(arg2 + 8), 1, 0)
                        void** var_1e8_1 = &var_1a8
                        *(rax_31 + 0x18) = 0
                        int128_t zmm0_2 = var_f8.o
                        *rax_31 = r15_1
                        *(rax_31 + 8) = r13_1
                        int64_t var_1a0
                        var_1a0.o = zmm0_2
                        rax_31[1].q = rdi_2
                        var_1a8 = rbx
                        var_190.o = var_108.o
                        var_178:8.q = rdi_2
                        var_180.o = var_d8_1.o
                        void var_1d8
                        sub_1412ec3d0(arg2, &var_1d8, rax_31, 2, var_1e8_1)
                        goto label_141304dbc
            else if (rdi_1[0xf] != 0)
                goto label_14130493b
    else if (rdx.b != 0)
        char rax_11 = data_143eb8bd8
        char rcx_11 = rax_11
        
        if (rax_11 == 0)
            rcx_11 = 1
        
        data_143eb8bd8 = rcx_11
        goto label_1413048ef
    
    void* rax_32 = data_143eb3608
    int32_t r14_2 = 5
    int32_t var_118 = 0xffffffff
    int32_t var_114
    __builtin_memcpy(&var_114, 
        "\x03\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00", 0x14)
    zmm7 = *(rax_32 + 4)
    void* var_f0_1 = &rbx[0x836]
    zmm9 = zmm7
    zmm7 = __andps_xmmxud_memxud(zmm7, data_142d3f770)
    zmm9 = _mm_max_ss(zmm9[0], 0)
    void* var_e0_2 = &rbx[0x82e]
    var_f8 = (*(rbx + 0x1018)).d
    void* var_d0_1 = &rbx[0x826]
    int32_t var_e8_2 = (*(rbx + 0x1014)).d
    void* var_c0_1 = &rbx[0x81e]
    int32_t var_d8_2 = (*(rbx + 0x1010)).d
    void* var_b0_1 = &rbx[0x816]
    int32_t var_c8_1 = (*(rbx + 0x100c)).d
    void* var_a0_1 = &rbx[0x80e]
    int32_t i_2 = (&var_118)[zx.q(r15)]
    int32_t var_b8_1 = (*(rbx + 0x1008)).d
    int32_t var_a8_1 = (*(rbx + 0x1004)).d
    
    if (i_2 == 0)
        goto label_141304db8
    
    rdx_5 = var_1c8:0xc.d
    uint128_t* rdi_3 = &var_f8
    r8_1 = var_1c8:8.d
    r9_1 = var_1c8:4.d
    uint64_t i_1 = zx.q(i_2)
    r10 = var_1c8.d
    int64_t rsi = var_1b8
    int128_t var_58_1 = zmm6
    zmm6 = 0x322bcc77
    float var_78_1[0x4] = zmm8
    zmm8 = data_142f5cd30
    uint64_t i
    
    do
        zmm2 = *rdi_3
        
        if (not(zmm2.d f<= zmm6.d))
            zmm1 = data_143dbb1f0.d
            zmm2.d = zmm2.d f* *(rbx + 0x1000)
            int64_t var_198_1
            __builtin_memset(&var_198_1, 0, 0x30)
            int32_t var_150_1 = 0
            int32_t var_154_1 = data_143dbb1f0:4.d.d
            var_1a8 = u"BloomX"
            int32_t var_158_1 = zmm1.d
            wchar16 const* const var_1a0_1 = u"BloomY"
            uint64_t rcx_18 = zx.q(r14_2) * 3
            int64_t rax_41 = *(arg4 + 0x18)
            zmm1 = *(rax_41 + (rcx_18 << 3))
            int32_t var_108_1
            var_108_1.q = *(rax_41 + (rcx_18 << 3) + 0x10)
            int64_t var_198_2 = zmm1.q
            int64_t var_190_1
            var_190_1.d = _mm_bsrli_si128(zmm1, 8).d
            int128_t var_178_1
            var_178_1:4.d = r9_1
            var_178_1:8.d = r8_1
            var_178_1:0xc.d = rdx_5
            int64_t rax_42 = _mm_bsrli_si128(zmm1, 8).q
            float var_158_2 = zmm9[0]
            var_190_1:4.d = (rax_42 u>> 0x20).d
            int64_t var_188_1
            var_188_1.d = var_108_1
            var_188_1:4.d = (var_108_1.q u>> 0x20).d
            uint32_t var_154_2 = zmm7[0]
            int32_t var_150_2 = zmm2.d
            int64_t var_180_1 = rsi
            var_178_1.d = r10
            uint128_t zmm0 = _mm_mul_ps(**(rdi_3 + 8), zmm8)
            var_1b8.o = zmm0
            uint128_t var_168_1 = zmm0
            void var_1d0
            int128_t* rax_48
            rax_48, zmm6, zmm7, zmm8, zmm9 = sub_14138b5f0(&var_1d0, arg2, rbx, &var_1a8)
            rsi = *rax_48
            r10 = *(rax_48 + 8)
            r9_1 = *(rax_48 + 0xc)
            r8_1 = rax_48[1].d
            rdx_5 = *(rax_48 + 0x14)
        
        rdi_3 = &rdi_3[1]
        r14_2 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14_1 = var_130.q
    var_1b8 = rsi
    result = arg1

*result = r14_1
*(result + 0xc) = var_130:0xc.d
result[1].d = var_130:8.d
result[2].d = var_120.d
*(result + 0x14) = var_120:4.d
result[3] = var_1b8
result[4].d = r10
*(result + 0x24) = r9_1
result[5].d = r8_1
*(result + 0x2c) = rdx_5
__security_check_cookie(rax_1 ^ &var_208)
return result
