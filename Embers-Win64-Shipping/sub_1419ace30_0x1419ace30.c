// 函数: sub_1419ace30
// 地址: 0x1419ace30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_14395f4d0
uint128_t zmm1 = zx.o(*arg4)
int64_t* rcx = data_143f0f180
void* rax_2 = *arg3
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(arg4[1])).d f/ float.s(zx.q(*(rax_2 + 0x64)))
int32_t var_44 = zmm2.d
zmm1.d = _mm_cvtepi32_ps(zmm1).d f/ float.s(zx.q(*(rax_2 + 0x60)))
int32_t var_48 = zmm1.d
void* arg_8
(*(*rcx + 0xf8))(rcx, &arg_8, &var_48, &data_143f11480, 1, 1, var_48, zx.d(arg5), rax_2, rax)
void* rsi = arg_8
void* arg_10 = rsi

if (rsi != 0)
    *(rsi + 8) += 1
    rsi = arg_10

sub_1405d1550(&arg_8)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0
int64_t r14 = *(arg2 + 0x1a0)

if (rbx s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_1 << 3)) == data_143f11470)
            break
        
        r8_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= rbx)
            goto label_1419acf7e

int16_t* rdx_2

if (rbx s<= 0 || r8_1 == 0xffffffff)
label_1419acf7e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_2 = &data_143ce8560
else
    void* rcx_14 = *(arg1 + 0xe8)
    
    if ((rcx_14.b & 1) != 0)
        rcx_14 = (rcx_14 s>> 1) + arg1 + 0xe8
    
    rdx_2 = rcx_14 + (sx.q(r8_1) << 1)

int16_t rax_8 = *rdx_2

if (rax_8 != 0xffff)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_8[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_9
    void** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f11618
    rcx_8[2] = r14
    rcx_8[3].d = zx.d(rax_8)
    rcx_8[4] = rsi

sub_1405d1550(&arg_10)
return sub_1405d1550(arg3)
