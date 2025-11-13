// 函数: sub_1421c22b0
// 地址: 0x1421c22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(data_143a2ee34))
int64_t* rcx = data_143f0f180
float zmm0 = 1f f/ zmm1.d
zmm1 = _mm_cvtepi32_ps(zx.o(data_143a2ee38))
float var_38 = zmm0
float var_34 = 1f f/ zmm1.d
void* arg_8
(*(*rcx + 0xf8))(rcx, &arg_8, &var_38, &data_143f4e560, 0, 1, var_38)
void* rsi = arg_8
void* arg_10 = rsi

if (rsi != 0)
    *(rsi + 8) += 1
    rsi = arg_10

sub_1405d1550(&arg_8)
int64_t r11 = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0
int64_t r14 = *(arg2 + 0x188)

if (r11 s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_1 << 3)) == data_143f4e550)
            break
        
        r8_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= r11)
            goto label_1421c23ce

int16_t* rdx_2

if (r11 s<= 0 || r8_1 == 0xffffffff)
label_1421c23ce:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_2 = &data_143ce8560
else
    void* rcx_13 = *(arg1 + 0xe8)
    
    if ((rcx_13.b & 1) != 0)
        rcx_13 = (rcx_13 s>> 1) + arg1 + 0xe8
    
    rdx_2 = rcx_13 + (sx.q(r8_1) << 1)

int16_t rax_4 = *rdx_2

if (rax_4 != 0xffff)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_8[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_5
    void** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f11618
    rcx_8[2] = r14
    rcx_8[3].d = zx.d(rax_4)
    rcx_8[4] = rsi

return sub_1405d1550(&arg_10)
