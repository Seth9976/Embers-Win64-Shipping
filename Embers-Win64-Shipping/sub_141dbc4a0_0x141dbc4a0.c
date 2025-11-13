// 函数: sub_141dbc4a0
// 地址: 0x141dbc4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_58 = zmm6
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int128_t zmm8 = zx.o(0)
uint128_t zmm1

if (data_143f38be0 != 1)
    bool z_1
    
    if (0 == *(arg1 + 0x18c))
        *(arg1 + 0x18c) = 0
        z_1 = true
    else
        *(arg1 + 0x18c)
        z_1 = false
    
    if (z_1)
        zmm1 = *(arg1 + 0x190)
        int64_t zmm0
        zmm0.d = zmm1.q.d f- *(arg1 + 0x20c)
        
        if (not(zmm0.d f<= *(arg1 + 0x208)))
            *(arg1 + 0x20c) = zmm1.d
            uint8_t rdi_1 = *(arg4 + 0xb0) u>> 6 & 1
            uint32_t r15_1 = zx.d(*(arg4 + 0xb9))
            
            if ((*(arg1 + 0x180) & 1) != 0)
                *(arg1 + 0x18c) = 1
                uint128_t zmm7 = zx.o(*arg3)
                void* var_188_1 = arg1
                int64_t rax_9 = *(arg1 + 8)
                int32_t rax_10 = arg3[1].d
                zmm6 = (*(*(arg1 + 0x50) + 0x28)).o
                int32_t var_164_1 = arg2[1].d
                int64_t var_16c_1 = *arg2
                int32_t var_15c_1 = *(arg1 + 0x38)
                uint8_t var_158_1 = rdi_1
                void*** rax_13 = sub_140a82f30(0x48, 8)
                *rax_13 = &data_142ff8768
                *(rax_13 + 8) = _mm_unpacklo_pd(rax_9.o, zmm7.q)
                *(rax_13 + 0x18) = rax_10.o
                *(rax_13 + 0x28) = r15_1.o
                *(rax_13 + 0x38) = zmm6
                void*** var_128_1 = rax_13
                void* (* var_138)(int32_t* arg1)
                void* (* rax_14)(int32_t* arg1) = var_138
                
                if (rax_13 != -8)
                    rax_14 = j_sub_141db8f30
                
                var_138 = rax_14
                sub_141e85f30(&var_138)
            else
                TEB* gsbase
                
                if (data_143f38da0 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143f38da0)
                    
                    if (data_143f38da0 == 0xffffffff)
                        sub_140b58170(&data_143f38d98, "SoundOcclusion", 1)
                        _Init_thread_footer(&data_143f38da0)
                
                char var_198
                void var_f8
                sub_141eb54c0(&var_f8, data_143f38d98, &var_198, rdi_1, nullptr)
                int32_t rdx_1 = *(arg1 + 0x38)
                
                if (rdx_1 != 0)
                    sub_141eb8ac0(&var_f8, rdx_1)
                
                void* rax_6 = sub_140d3c6e0(arg1 + 8)
                
                if (rax_6 != 0)
                    char rax_7
                    rax_7, zmm8 =
                        sub_141ec6cd0(rax_6, arg3, arg2, r15_1.b, &var_f8, &data_143f3a660)
                    int32_t rcx_6
                    rcx_6.b = rax_7 != 0
                    *(arg1 + 0x188)
                    *(arg1 + 0x188) = rcx_6
                
                int64_t var_98
                
                if (var_98 != 0)
                    sub_140a74f90(var_98)
                
                int64_t var_b8
                
                if (var_b8 != 0)
                    sub_140a74f90(var_b8)
    
    char rax_15 = *(arg1 + 0x180)
    
    if ((rax_15 & 1) != 0)
        zmm8 = *(arg4 + 0x220)
    
    *(arg1 + 0x180) = rax_15 | 1
else
    *(arg1 + 0x188)
    *(arg1 + 0x188) = 0

uint64_t result = 0
bool z_2

if (0 == *(arg1 + 0x188))
    *(arg1 + 0x188) = 0
    z_2 = true
else
    result = zx.q(*(arg1 + 0x188))
    z_2 = false

void* rsi

if (z_2)
    sub_141e860b0(arg1 + 0x1c4, 0x469c4000.d, zmm8.d)
    rsi = arg1 + 0x1e0
    result = sub_141e860b0(rsi, 0x3f800000.d, zmm8.d)
else
    zmm1 = *(arg4 + 0x218)
    
    if (not(zmm1.d f>= *(arg1 + 0x1dc)))
        result = sub_141e860b0(arg1 + 0x1c4, zmm1.d, zmm8.d)
    
    zmm1 = *(arg4 + 0x21c)
    rsi = arg1 + 0x1e0
    
    if (zmm1.d f< *(arg1 + 0x1f8))
        result = sub_141e860b0(rsi, zmm1.d, zmm8.d)

zmm6 = _mm_cvtpd_ps(zx.o(data_14399f938))
sub_141e8b090(arg1 + 0x1c4, zmm6.d)
sub_141e8b090(rsi, zmm6.d)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
