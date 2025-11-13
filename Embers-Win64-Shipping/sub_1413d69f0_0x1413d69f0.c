// 函数: sub_1413d69f0
// 地址: 0x1413d69f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
wchar16 const* const rbx = u"ReflectionBrightness"
int32_t var_1a8 = data_143f02318
char var_320 = 0
int32_t var_1a4 = 1
int64_t var_1a0 = 1
int32_t var_198 = 1
int16_t var_190 = 1
int32_t var_184 = 1
char var_328 = 1
char var_330 = 1
wchar16 const* const var_178 = u"UnknownTexture2D"
int64_t* var_2e0 = nullptr
int16_t var_180 = 0
int128_t var_1b8 = data_143f02308
int32_t var_194 = 0x10000
int64_t var_18c = 0xa
int16_t var_170 = 1
char var_16e = 0
sub_1419a0ce0(&data_1439c9260, arg1, &var_1b8, &var_2e0, ReflectionBrightness", var_330, var_328, 
    var_320)
int128_t zmm1 = data_142d3f5a0
int64_t* r12 = var_2e0
void* rax_3 = r12[1]
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x1a)
void* var_168 = rax_3
int64_t var_160 = 0
int32_t var_158 = 0xffffffff
int16_t var_154 = 0x500
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x11)
int32_t var_94 = 0
int16_t var_50
var_50:1.b = *(rax_3 + 0x38) u> 1
void var_150
memset(&var_150, 0, 0xa8)
sub_1410e0180(arg1, &var_168)
int64_t rsi_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rsi_2 + 0x2a

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x2c)
    rsi_2 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rsi_2 + 0x2a

*(arg1 + 0x30) = rax_4
wchar16 const i

do
    i = *rbx
    *(rbx + rsi_2 - u"ReflectionBrightness") = i
    rbx = &rbx[1]
while (i != 0)
void*** rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[0x27]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[0x27]

*(arg1 + 0x30) = rax_5
void**** rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_6 = rcx_7
*(arg1 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_168, rsi_2)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_168)
int64_t var_58
*(arg1 + 0x178) = var_58:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int64_t var_20c
__builtin_memset(&var_20c, 0, 0x43)
int128_t var_268
__builtin_memset(&var_268, 0, 0x30)
int128_t var_220 = zx.o(0)
int16_t var_1c8 = 0
sub_140fdc870(arg1, &var_268)
int64_t var_230 = data_14395da18
int64_t var_228 = data_14395d9e8
int64_t var_238 = data_14395da00
int64_t* rax_12 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
void* var_278
sub_1419a2ec0(rax_12, &var_278, &data_143ed5e80, 0)
void* var_2b8
sub_1419a2ec0(rax_12, &var_2b8, &data_143ec9920, 0)
void* rcx_16 = var_278
var_268.q = data_1439c9210
int64_t rax_14 = 0

if (rcx_16 != 0)
    int64_t rdx_7 = sx.q(*(rcx_16 + 0x10c))
    void* var_270
    int64_t* rbx_2 = *(var_270 + 0x10)
    int64_t rax_16 = rbx_2[3]
    
    if (*(rax_16 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_7.d)
        rax_16 = rbx_2[3]
    
    rax_14 = *(rax_16 + (rdx_7 << 3))

var_268:8.q = rax_14
int64_t rax_17 = 0
void* rsi_6 = var_2b8

if (rsi_6 != 0)
    int64_t rdx_8 = sx.q(*(rsi_6 + 0x10c))
    void* var_2b0
    int64_t* rbx_3 = *(var_2b0 + 0x10)
    int64_t rax_19 = rbx_3[3]
    
    if (*(rax_19 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_8.d)
        rax_19 = rbx_3[3]
    
    rax_17 = *(rax_19 + (rdx_8 << 3))

int128_t var_248
var_248.q = rax_17
int32_t var_210 = 0
sub_1419870b0(arg1, &var_268, 2)
void* r9_2 = sub_1413f7570(rsi_6, arg1, arg3, arg4)
int512_t zmm3
zmm3.o = 0x3f800000
int512_t zmm2
zmm2.o = zx.o(0)
int32_t var_2e4 = 1
var_320.d = 0x3f800000
var_328.d = 0
var_330.d = 0
wchar16 const* const var_338
var_338.d = 0x3f800000
var_2b8.o = var_278.o
sub_1413993b0(arg1, zx.o(0), zmm2, r9_2, zmm3, var_338.d, var_330, var_328, var_320, 0x3f800000, 
    0x100000001, 1.q, &var_2b8, 0, 1)
sub_141096650(arg1)
int64_t* rsi_7 = r12[1]
void*** rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int128_t var_2a8 = data_142d57d10
int128_t zmm0_2 = data_142d57920
void* rax_21 = &rbx_6[0xa]
int128_t var_298 = data_142d3f800

if (rax_21 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rbx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rbx_6[0xa]

*(arg1 + 0x30) = rax_21
int64_t* rax_22 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_22 = rbx_6
*(arg1 + 8) = &rbx_6[1]
rbx_6[1] = 0
*rbx_6 = &data_142d56628
rbx_6[2].d = var_2a8.d
__builtin_memset(rbx_6 + 0x14, 0xff, 0x20)
*(rbx_6 + 0x34) = zmm0_2:4.d
rbx_6[7].d = zmm0_2:8.d
*(rbx_6 + 0x3c) = zmm0_2:0xc.d
rbx_6[8] = rsi_7
rbx_6[9] = rsi_7

if ((*(*rsi_7 + 8))(rsi_7) == 0)
    int64_t* rcx_25 = rbx_6[8]
    
    if ((*(*rcx_25 + 0x18))(rcx_25) == 0)
        int64_t* rcx_26 = rbx_6[8]
        
        if ((*(*rcx_26 + 0x20))(rcx_26) == 0)
            int64_t* rcx_27 = rbx_6[8]
            (*(*rcx_27 + 0x10))(rcx_27)

int64_t* rcx_28 = rbx_6[9]

if ((*(*rcx_28 + 8))(rcx_28) == 0)
    int64_t* rcx_29 = rbx_6[9]
    
    if ((*(*rcx_29 + 0x18))(rcx_29) == 0)
        int64_t* rcx_30 = rbx_6[9]
        
        if ((*(*rcx_30 + 0x20))(rcx_30) == 0)
            int64_t* rcx_31 = rbx_6[9]
            (*(*rcx_31 + 0x10))(rcx_31)

int64_t* rax_42 = var_2e0
int64_t* rcx_32 = data_143f0f180
zmm0_2 = data_142f794b0
int16_t* var_2d0 = nullptr
int64_t var_2c8 = 0
var_320.d = 0
var_328.d = 0
var_330.d = 0
var_2b8.o = zmm0_2
(*(*rcx_32 + 0x650))(zmm0_2, arg1, rax_42[2], &var_2b8, &var_2d0, var_330, var_328, var_320)
int16_t* rsi_8 = var_2d0
uint32_t rbx_9 = zx.d(*rsi_8)
int32_t rdi_2 = (rbx_9 & 0xffff8000) << 0x10
int16_t rax_44 = rbx_9.w & 0x7c00
int32_t var_2e8_2

if (rax_44 == 0)
    int32_t rbx_10 = rbx_9 & 0x3ff
    
    if (rbx_10 != 0)
        TEB* gsbase
        
        if (data_143cda914
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
            
            rsi_8 = var_2d0
        
        zmm0_2.d = float.s(zx.q(rbx_10))
        int32_t r13_1 = 0xa - int.d(logf(zmm0_2.d) f* data_143cda910)
        var_2e8_2 =
            (rbx_10 << (r13_1.b + 0xd) & 0x7fffff) | ((0x71 - r13_1) << 0x17 & 0x7f800000) | rdi_2
    else
        var_2e8_2 = rdi_2
else if (rax_44 != 0x7c00)
    var_2e8_2 = ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rdi_2
else
    var_2e8_2 = rdi_2 | 0x477fe000

if (rsi_8 != 0)
    sub_140a74f90(rsi_8)

int64_t var_60
sub_1405d1550(&var_60)
int64_t* rcx_38 = var_2e0

if (rcx_38 != 0)
    (*(*rcx_38 + 0x38))(rcx_38)

int512_t result
result.o = var_2e8_2
__security_check_cookie(rax_1 ^ &var_358)
return result
