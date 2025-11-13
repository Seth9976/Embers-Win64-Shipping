// 函数: sub_141e8fdc0
// 地址: 0x141e8fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14220abb0(arg1)
*arg1 = &data_143258948
arg1[0x44] = &data_1432591c0
arg1[0x54] = 0
arg1[0x5a] = 0
__builtin_memset(&arg1[0x6a], 0, 0x40)
sub_141ff42b0(&arg1[0x72])
arg1[0x7a].b = 0
*(arg1 + 0x3d4) = 0
float zmm1[0x4] = data_143f3a0a0
*(arg1 + 0x3f0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x3e0) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x400) = __andps_xmmxud_memxud(data_143f3a0a0, data_143f3a0b0)
arg1[0x82] = 0
arg1[0x83] = 0
arg1[0x8b] = 0
sub_141ff42b0(&arg1[0x8d])
TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f3a400 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f3a400)
    
    if (data_143f3a400 == 0xffffffff)
        sub_140b58260(&data_143f3a3e0, u"Characters", 1)
        _vfprintf_p_l(&data_143f3a3e8, u"Characters", u"SpriteCategory")
        atexit(sub_142cfb020)
        _Init_thread_footer(&data_143f3a400)

arg1[0x45].d &= 0xfffffffa
arg1[0x45].d |= 2
uint64_t rbx = data_143f3a348
int64_t* rax_2 = sub_142488170()
void* rax_3
int64_t r8_1
rax_3, r8_1 = sub_140cd9110(arg1, rbx, rax_2, rax_2, 1, 0)
arg1[0x52] = rax_3
r8_1.b = 1
*(rax_3 + 0x424) = 0x42080000
*(rax_3 + 0x420) = 0x42b00000
int64_t* rcx_4 = arg1[0x52]
(*(*rcx_4 + 0x620))(rcx_4, data_143f3a5b0, r8_1)
*(arg1[0x52] + 0x211) = 0
sub_141f49250(arg1[0x52], 1)
sub_141ef5320(arg1[0x52], 0)
void* rax_6 = arg1[0x52]
*(rax_6 + 0x41c) |= 4
arg1[0x26] = arg1[0x52]
int32_t rax_9 = arg1[0x66].d & 0xfffffbff
*(arg1 + 0x334) = 0
arg1[0x68].d = 0
arg1[0x66].d = rax_9 | 0x100
*(arg1 + 0x344) = 1
arg1[0x5f].d = 0x3f800000
uint64_t rbx_1 = data_143f3a340
int64_t* rax_11 = sub_142490590()
void* rax_12 = sub_140cd9110(arg1, rbx_1, rax_11, rax_11, 1, 0)
arg1[0x51] = rax_12

if (rax_12 != 0)
    *(rax_12 + 0xb0) = arg1[0x52]
    *(arg1 + 0x32c) = *(arg1[0x51] + 0x1d4) * 0.800000012f

uint64_t rbx_2 = data_143f3a338
int64_t* rax_14 = sub_142591550()
void* rax_15 = sub_140cd9110(arg1, rbx_2, rax_14, rax_14, 0, 0)
arg1[0x50] = rax_15

if (rax_15 != 0)
    *(rax_15 + 0x20e) |= 2
    void* rax_16 = arg1[0x50]
    int64_t arg_8 = 0
    *(rax_16 + 0x20e) |= 4
    void* rax_17 = arg1[0x50]
    *(rax_17 + 0x20a) &= 0xef
    *(arg1[0x50] + 0x5a4) = 1
    void* rax_19 = arg1[0x50]
    *(rax_19 + 0x20b) |= 0x40
    void* rax_20 = arg1[0x50]
    *(rax_20 + 0x20b) |= 0x10
    arg1[0x50][7].b = 0
    sub_141f4a650(arg1[0x50], arg1[0x52], 0)
    
    if (data_143f3a410 s> *(rsi + 0x14))
        _Init_thread_header(&data_143f3a410)
        
        if (data_143f3a410 == 0xffffffff)
            sub_140b58260(&data_143f3a408, u"CharacterMesh", 1)
            _Init_thread_footer(&data_143f3a410)
    
    int64_t* rcx_11 = arg1[0x50]
    int64_t r8_4
    r8_4.b = 1
    (*(*rcx_11 + 0x620))(rcx_11, data_143f3a408, r8_4)
    sub_141f256b0(arg1[0x50], 0)
    sub_141ef5320(arg1[0x50], 0)

*(arg1 + 0x310) = data_14399f720
return arg1
