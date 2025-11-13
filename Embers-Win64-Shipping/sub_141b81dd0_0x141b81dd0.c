// 函数: sub_141b81dd0
// 地址: 0x141b81dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_1430765e0
arg1[0x21].b &= 0xfc
*(arg1 + 0x109) = 0
arg1[0x23] = 0
arg1[0x24].d = 0
*(arg1 + 0x10d) &= 0xfe
__builtin_memset(&arg1[0x22], 0, 0x14)
*(arg1 + 0x124) = 0x3f800000
*arg1 = &data_14307d8e0
sub_140a96170(&arg1[0x25])
sub_140d3a3a0(&arg1[0x28], nullptr)
arg1[0x29] = 0
__builtin_memcpy(&arg1[0x2a], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
arg1[0x2d] = 0
arg1[0x2e] = 0
sub_140d3a3a0(&arg1[0x2f], nullptr)
arg1[0x30] = 0
sub_140d93b50(&arg1[0x31])
arg1[0x3b] = &data_142d8ad18
arg1[0x3c].d = 0x42000000
*(arg1 + 0x1e4) = 0x42000000
*(arg1 + 0x1ec) = 0
*(arg1 + 0x1f4) = 0
*(arg1 + 0x1f8) = data_14399f5c0
arg1[0x41].b = 0
__builtin_memset(&arg1[0x42], 0, 0x20)
int16_t* zmm1 = data_143dbb1f0
arg1[0x47].d = zmm1.d
arg1[0x46].d = zmm1.d
arg1[0x48].b = 0
int16_t* var_98 = zmm1
int128_t zmm0 = var_98:4.d
*(arg1 + 0x23c) = zmm0.d
*(arg1 + 0x234) = zmm0.d
*(arg1 + 0x244) = 3
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b].b &= 0xfc
sub_140d3a3a0(&arg1[0x4f], nullptr)
arg1[0x50] = 0
arg1[0x52] = 0
arg1[0x53] = 0
*(arg1 + 0xb4) &= 0xfe
*(arg1 + 0x28c) = 0
arg1[0x4c].d = 0x3f800000
*(arg1 + 0x264) = 0x3f800000
arg1[0x2c].b = 0
*(arg1 + 0x150) = data_14399f5c0
uint128_t zmm0_1

if (&var_98 != &arg1[0x2d])
    zmm0_1 = *(arg1 + 0x168)
    *(arg1 + 0x168) = zx.o(0)
    int64_t* rbx_1 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

uint64_t rcx_7 = zx.q(data_14401b1a0)
zmm0_1 = data_143dbb1e0
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x28d) = 0
*(arg1 + 0x268) = zmm0_1

if (data_143f31818 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_7 << 3))))
    _Init_thread_header(&data_143f31818)
    
    if (data_143f31818 == 0xffffffff)
        var_98 = nullptr
        int32_t var_90_1 = 0
        sub_1405947f0(&var_98, 0x1b)
        int32_t rax_7 = var_90_1 + 0x1b
        
        if (rax_7 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_98, &data_143de5780)
        int16_t* const rdx_3 = &data_142d40450
        
        if (rax_7 != 0)
            rdx_3 = var_98
        
        sub_141b78fd0(&data_143f31800, rdx_3, 0)
        int16_t* rcx_18 = var_98
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        atexit(sub_142cf64b0)
        _Init_thread_footer(&data_143f31818)

zmm0_1 = data_14399f5e0
int32_t var_88 = 0
int16_t var_84 = 0
int64_t var_80 = 0
uint128_t var_78 = zmm0_1
int64_t* rax_4 = sub_140b58170(&var_98, "Bold", 1)
void var_68
sub_140693420(&arg1[0x31], sub_140d93a40(&var_68, data_143f31810, 0x18, rax_4, &var_88))
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp3_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *var_30
            (*(r8_2 + 8))(var_30, 1, r8_2)

return arg1
