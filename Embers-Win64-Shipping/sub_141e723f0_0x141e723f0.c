// 函数: sub_141e723f0
// 地址: 0x141e723f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s< 1)
    return 

int64_t* rax_1 = *arg2
int16_t* const rsi_1 = &data_142d40450
wchar16* _String

if (rax_1[1].d == 0)
    _String = &data_142d40450
else
    _String = *rax_1

_wtof(_String)
int128_t zmm7
zmm7.d = fconvert.s(arg1)

if (zmm7.d f<= 0f)
    return 

TEB* gsbase

if (data_143f39bd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f39bd8)
    
    if (data_143f39bd8 == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f39bd0 =
            (*(*rcx_9 + 0xb0))(rcx_9, au.streamcaching.StreamCacheSizeOverrideMB", r8_3)
        _Init_thread_footer(&data_143f39bd8)

arg1.d = zmm7.q.d f* 1024f
int64_t rax_4 = 0

if (not(arg1.d f< 9.22337204e+18f))
    arg1.d = arg1.d f- 9.22337204e+18f
    
    if (not(arg1.d f>= 9.22337204e+18f))
        rax_4 = -0x8000000000000000

int64_t* rcx_3 = data_143f39bd0
int64_t rdi_3 = (int.q(arg1.d) + rax_4) << 0xa
(*(*rcx_3 + 0x98))(rcx_3)
arg1.d = arg1.d f* 1024f
int64_t rax_6 = 0

if (not(arg1.d f< 9.22337204e+18f))
    arg1.d = arg1.d f- 9.22337204e+18f
    
    if (not(arg1.d f>= 9.22337204e+18f))
        rax_6 = -0x8000000000000000

int64_t rbx_3 = (int.q(arg1.d) + rax_6) << 0xa

if (rdi_3 u< rbx_3)
    void*** rax_7
    rax_7, zmm7 = sub_141f88540()
    int64_t* rax_8 = sub_1405f7040(rax_7)
    int64_t r8_1 = *rax_8
    (*(r8_1 + 0xf8))(rax_8, rbx_3 - rdi_3, r8_1)

int64_t* rbx_5 = data_143f39bd0
int16_t* var_38
sub_140a2e390(&var_38, u"%g", _mm_cvtps_pd(zmm7.q))
int32_t var_30

if (var_30 != 0)
    rsi_1 = var_38

(*(*rbx_5 + 0x80))(rbx_5, rsi_1, 0x8000000)
int16_t* rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)
