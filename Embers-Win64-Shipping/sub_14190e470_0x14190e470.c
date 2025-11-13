// 函数: sub_14190e470
// 地址: 0x14190e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_8 = rbx
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* rcx = data_143ddb400
int64_t* var_1f8 = &data_143de5780
data_143f0f200 = 0
data_143f0f208 = 0
sub_140af3c10(rcx, u"TextureStreaming", u"PoolSizeVRAMPercentage", &data_143f0f208, var_1f8)
void var_148
sub_1405eb940(&var_148, data_143effa60(0x1f01))
int64_t r14 = 0
int64_t var_1b8 = 0
int32_t rdi = 0
int64_t var_1b0 = 0
int32_t r15 = 0
int16_t* var_40

if (var_40 != 0 && *var_40 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_40[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_1b8, rbx.d)
        r15 = var_1b0:4.d
        rdi = var_1b0.d
        r14 = var_1b8
    
    rdi += rbx.d
    var_1b0.d = rdi
    
    if (rdi s> r15)
        sub_140594770(&var_1b8)
        r15 = var_1b0:4.d
        rdi = var_1b0.d
        r14 = var_1b8
    
    UnDecorator::getReferenceType(r14, var_40, rbx.d * 2)

int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_6 = data_143f024b8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

data_143f024b8 = r14
data_143f024c0 = rdi
data_143f024c4 = r15
sub_1405eb940(&var_148, data_143effa60(0x1f02))

if (data_143f024c8 != var_40)
    if (var_40 == 0 || *var_40 == 0)
        rbx = 0
    else
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (var_40[rbx_2] != 0)
        
        rbx = zx.q(rbx_2.d + 1)
    
    int32_t rcx_8 = data_143f024d4
    int32_t rdx_5 = 0
    data_143f024d0 = 0
    
    if (rcx_8 != rbx.d)
        sub_1405947f0(&data_143f024c8, rbx.d)
        rcx_8 = data_143f024d4
        rdx_5 = data_143f024d0
    
    int32_t rax_4 = rbx.d + rdx_5
    data_143f024d0 = rax_4
    
    if (rax_4 s> rcx_8)
        sub_140594770(&data_143f024c8)
    
    if (rbx.d != 0)
        memcpy(data_143f024c8, var_40, rbx.d * 2)

if (var_48 != 0)
    sub_140a74f90(var_48)

var_1b8 = 0
int64_t var_1b0_1 = 0
sub_14190d6f0(&var_1b8)
int32_t rdi_2 = 1
var_1f8.d = 0xffffffff
bool cond:0 = sub_140a23cf0(&var_1b8, u"WGL_EXT_swap_control", 1, 0, var_1f8.d) != 0xffffffff
char r14_1 = 0
int64_t* var_1e8 = nullptr
int32_t i_3 = 0

if (cond:0)
    r14_1 = 1

sub_140a2ccb0(&var_1b8, &var_1e8, &data_142d404d4, 1)
sub_1419097b0(&var_1b8)
sub_141911230(&var_1b8)
int32_t i_2 = i_3
int64_t* rbx_3 = var_1e8

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_16 = *rbx_3
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rbx_3 = &rbx_3[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_3 = var_1e8

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rcx_18 = var_1b8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

char* rax_8

if (r14_1 == 0)
    rax_8 = strstr(wglGetProcAddress("wglGetExtensionsStringEXT")(), "WGL_EXT_swap_control")

if (r14_1 != 0 || rax_8 != 0)
    data_143efbcf0 = wglGetProcAddress("wglSwapIntervalEXT")

char rax_10 = data_143effa98(0x92e0)

if (rax_10 != 0 || data_143eff974 != 0)
    rax_10 = 1

data_143eff5c4 = rax_10
int32_t var_198 = 0
data_143effa50(0xd33, &var_198)
data_143effa40()
int32_t var_194 = 0
data_143effa50(0x8c2b, &var_194)
data_143effa40()
int32_t var_190 = 0
data_143effa50(0x851c, &var_190)
data_143effa40()
int32_t var_18c = 0
data_143effa50(0x88ff, &var_18c)
data_143effa40()
int32_t var_184 = 0
data_143effa50(0x8073, &var_184)
data_143effa40()
int32_t var_188 = 0
data_143effa50(0x84e8, &var_188)
data_143effa40()
int32_t var_19c = 0
data_143effa50(0x8872, &var_19c)
data_143effa40()
int32_t var_1c4 = 1
data_143effa50(0x8824, &var_1c4)
data_143effa40()
int32_t rcx_20 = 8
int32_t var_180 = 1

if (var_1c4 s<= 8)
    rcx_20 = var_1c4

data_143eff634 = rcx_20
data_143effa50(0x8cdf, &var_180)
data_143effa40()
int32_t var_17c = 1
data_143effa50(0x8d57, &var_17c)
data_143effa40()
int32_t var_1a8 = 1
data_143effa50(0x910e, &var_1a8)
data_143effa40()
int32_t var_1a4 = 1
data_143effa50(0x910f, &var_1a4)
data_143effa40()
int32_t var_1a0 = 1
data_143effa50(0x9110, &var_1a0)
data_143effa40()
int32_t var_178 = 0
data_143effa50(0x8b4d, &var_178)
data_143effa40()
int32_t var_174 = 0
data_143effa50(0x8869, &var_174)
data_143effa40()
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"quad_buffer_stereo") != 0)
    char var_1c8 = 0
    data_143effa30(0xc33, &var_1c8)
    data_143effa40()
    data_143f0f19e = var_1c8 == 1

if (data_143efbce5 != 0)
    var_1c4 = 0
    data_143effa50(0x84ff, &var_1c4)
    data_143effa40()
    data_1439c7508 = var_1c4

data_143eff648 = var_1a8
data_143eff64c = var_1a4
data_143eff650 = var_1a0
int32_t var_1c0 = 0
data_143effa50(0x821b, &var_1c0)
var_1c0 = 0
data_143effa50(0x821c, &var_1c0)

if (sub_14197ee80(&var_1b8) == 0)
    var_1c4 = 0
    data_143effa50(0x821b, &var_1c4)
    int32_t rax_17 = var_1c4
    
    if (rax_17 != 3 && rax_17 == 4)
        var_1c0 = 0
        data_143effa50(0x821c, &var_1c0)
        
        if (var_1c0 u> 2)
            rdi_2 = 3
else
    rdi_2 = var_1b8.d

data_1439c7a08 = rdi_2
wchar32 rbx_4 = 0xf
uint32_t rax_20

if (sub_14197ee80(&var_1b8) == 0 || var_1b8.d != 1)
    rax_20 = 6
else
    rax_20 = 0xf
    
    if (data_143eff5c7 != 0)
        rax_20 = 0x18

bool cond:6 = data_1439c7a08 s> 1
data_143f0f1a0 = rax_20
int64_t rcx_23
int64_t rdi_3

if (not(cond:6))
    rdi_3 = data_143eff578
    
    if (data_143de5480 == 0)
        rcx_23 = 0
    else
        rcx_23.b = GetCurrentThreadId() != data_143de5470

if (cond:6 || *(rdi_3 + (rcx_23 << 2)) == 0)
    rax_20.b = 0
else
    rax_20.b = 1

uint64_t rcx_24 = zx.q(data_14401b1a0)
data_143f0f223 = rax_20.b
TEB* gsbase
void* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (rcx_24 << 3))

if (data_143eff620 s> *(rsi_1 + 0x14))
    _Init_thread_header(&data_143eff620)
    
    if (data_143eff620 == 0xffffffff)
        int64_t* rcx_41 = data_143db18d0
        
        if (rcx_41 == 0)
            sub_140a53c40()
            rcx_41 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        int64_t* rax_92 = (*(*rcx_41 + 0xb0))(rcx_41, u"OpenGL.UseEmulatedUBs", r8_6)
        int64_t rax_93
        
        if (rax_92 == 0)
            rax_93 = 0
        else
            int64_t rdx_37 = *rax_92
            rax_93 = (*(rdx_37 + 0x58))(rax_92, rdx_37)
        
        data_143eff618 = rax_93
        _Init_thread_footer(&data_143eff620)

int64_t rdi_4 = data_143eff618
int64_t rcx_25

if (rdi_4 != 0)
    if (data_143de5480 == 0)
        rcx_25 = 0
    else
        rcx_25.b = GetCurrentThreadId() != data_143de5470

char rdx_30

if (rdi_4 == 0 || *(rdi_4 + (rcx_25 << 2)) == 0)
    rdx_30 = 0
else
    rdx_30 = 1

int32_t rax_25 = data_143f0f1a0
int64_t rax_24

if (rax_25 u> 0x1e || not(test_bit(0x6562c800, rax_25)))
    rax_24 = sx.q(data_143f0f1a0)

bool cond:9_1

if ((rax_25 u<= 0x1e && test_bit(0x6562c800, rax_25))
        || (*(&data_143f025fc + rax_24 * 0x14) & 1) != 0)
    cond:9_1 = rdx_30 == 0

if (((rax_25 u> 0x1e || not(test_bit(0x6562c800, rax_25)))
        && (*(&data_143f025fc + rax_24 * 0x14) & 1) == 0) || rdx_30 == 0)
    rax_25.b = 0
    cond:9_1 = true
else
    rax_25.b = 1

int32_t rcx_27 = data_1439c7a08
data_143efed00 = rax_25.b
uint64_t var_170 = 0
int64_t var_168 = 0
sub_141972a50(rcx_27, &var_170)
int64_t var_160
sub_140b63b70(sub_141976940(&var_1b8, data_143f0f1a0), &var_160)
int32_t r9 = var_198
data_1439c7a28 = var_19c
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(r9)
int32_t rcx_30

rcx_30 = cond:9_1 ? 0x20 : 0x1f - temp0_1

int32_t rcx_32 = rcx_30 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(r9 - 1)
int32_t r8_5

if (rcx_32 == 0)
    r8_5 = 0x20
else
    r8_5 = 0x1f - temp0_2

data_1439c7a1c = 0x3f800000
data_1439c7a78 = r9
data_1439c7a0e = 0
data_143f0f1be = 1
data_143f0f1cc = 0
int32_t rax_30 = ((0x20 - r8_5) & not.d(rcx_32)) + 1
data_1439c7a14 = 1
data_1439c7a04 = 1
data_1439c7a68 = 1

if (rax_30 s>= 0xe)
    rax_30 = 0xe

data_1439c7a69 = 1
bool cond:11 = data_143f00388 != 0
int32_t rcx_34 = 0x1000
data_1439c7a00 = rax_30
int64_t rax_31 = sx.q(var_194)
data_143f0f1c3 = cond:11
bool cond:12 = var_188 s<= 0x1000
data_1439c7a80 = rax_31

if (cond:12)
    rcx_34 = var_188

bool cond:13 = data_143eff5c0 s> 0
data_1439c7a8c = var_190
int32_t rax_33 = var_18c
data_143f0f1b7 = cond:13
data_1439c7a24 = rax_33
data_1439c7a15 = data_143efbce4
data_143f0f1bf = data_143efbce6
int32_t rax_36 = data_1439c7a08
data_1439c7a6a = 1

if (rax_36 == 1)
    rbx_4 = data_143f0f1a0

(*U"1111")[1] = rbx_4
data_1439c7a18 = 1
data_1439c7a17 = 1
data_143f0f1c1 = 0
data_143f0f1c2 = 0
data_1439c7a0c = 1
data_143f0f1b5 = 0
data_143f0f1b6 = 0
data_1439c7a70 = rcx_34
data_1439c7a74 = rcx_34
data_143f0f1ba = 0
data_1439c7a48 = 0
data_143f0f1d3 = 1
(*U"1111")[0] = 0x31
(*U"1111")[2] = 0x31
(*U"1111")[3] = 6

if (rax_36 s> 1)
    rax_36.b = 1
else
    rax_36.b = data_143efbce2 != 0

data_143f0f1f6 = rax_36.b

if (data_143eff630 s> *(rsi_1 + 0x14))
    _Init_thread_header(&data_143eff630)
    
    if (data_143eff630 == 0xffffffff)
        int64_t* rcx_43 = data_143db18d0
        
        if (rcx_43 == 0)
            sub_140a53c40()
            rcx_43 = data_143db18d0
        
        int64_t r8_7
        r8_7.b = 1
        int64_t* rax_95 =
            (*(*rcx_43 + 0xb0))(rcx_43, r.OpenGL.DisableTextureStreamingSupport", r8_7)
        int64_t rax_90
        
        if (rax_95 == 0)
            rax_90 = 0
        else
            int64_t rdx_38 = *rax_95
            rax_90 = (*(rdx_38 + 0x58))(rax_95, rdx_38)
        
        data_143eff628 = rax_90
        _Init_thread_footer(&data_143eff630)

int64_t rbx_5 = data_143eff628
int64_t rcx_35

if (data_143de5480 == 0)
    rcx_35 = 0
else
    rcx_35.b = GetCurrentThreadId() != data_143de5470

char* rdx_36 = &data_1439c8600
char rax_39 = data_143f0f1f6
int128_t* i_1 = &data_143efeda0

if (*(rbx_5 + (rcx_35 << 2)) != 0)
    rax_39 = 0

data_1439c7a9c.w = 0x101
data_143f0f1f6 = rax_39
data_1439c7aa3 = 1

do
    var_1e8 = nullptr
    int64_t var_1e0 = 0
    *rdx_36 = 0
    rdx_36 = &rdx_36[0x28]
    *i_1 = var_1e8.o
    i_1[1].q = 0
    *(i_1 + 0x18) = 0.d
    i_1 += 0x1c
while (i_1 s< &data_143eff564)

var_1e8 = nullptr
int64_t var_1e0_1 = 0
var_1e8.d = 0x8814
var_1e8:4.d = 0x8814
var_1e0_1.d = 0x8814
var_1e0_1:4.d = 0x8814
int16_t var_1d0_3 = 0
data_143efeda0 = var_1e8.o
int128_t zmm0_1 = var_1e8.o
__builtin_memset(&var_1e8, 0, 0x1a)
data_143efedb0 = 0
data_143efedb8 = 0.d
data_143efedbc = zmm0_1
data_143efedd4 = var_1d0_3.d
var_1e8.d = 0x81a5
var_1e8:4.d = 0x81a5
int64_t var_1e0_2
var_1e0_2.d = 0x81a5
var_1e0_2:4.d = 0x81a5
int16_t var_1d0_5 = 0
data_143efee80 = var_1e8.o
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\xa5\x81\x00\x00\xa5\x81\x00\x00\xa5\x81\x00\x00\xa5\x81\x00\x00\x08\x19\x00\x00", 0x14)
int16_t var_1d0_4
data_143efee98 = var_1d0_4.d
int16_t var_1d0_6 = 0
int64_t var_1d8 = 0
data_143efedcc = 0x1908
int64_t zmm1_1 = var_1d8
var_1d8.d = 0x1902
var_1d8:4.d = 0x1405
data_143efee90 = zmm1_1
data_143efeef0 = zmm0_1
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x1a\x88\x00\x00\x1a\x88\x00\x00\x1a\x88\x00\x00\x1a\x88\x00\x00\x02\x19\x00\x00\x05\x14\x00\x00", 
    0x18)
data_143efef00 = var_1d8
zmm1_1 = var_1d8
data_143efef08 = var_1d0_5.d
var_1d8.d = 0x1908
var_1d8:4.d = 0x140b
data_143efefd0 = zmm0_1
zmm0_1 = var_1e8.o
data_143efefe8 = var_1d0_6.d
data_143efefe0 = zmm1_1
data_143efefb4 = zmm0_1
data_1439c8600 = 0
data_1439c8628 = 1
data_1439c8740 = 0
data_1439c87e0 = 1
data_1439c8920 = 1
data_143efefc4 = var_1d8
data_143efefcc = 0.d
data_1439c88f8 = 1
var_1e8 = nullptr
int64_t var_1e0_3 = 0
int64_t var_1d8_1 = 0
var_1e8.d = 0x8d76
var_1e8:4.d = 0x8d76
var_1e0_3.d = 0x8d76
var_1e0_3:4.d = 0x8d76
var_1d8_1.d = 0x8d99
data_143eff05c = var_1e8.o
data_143eff074 = 0.d
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x88\x8d\x00\x00\x88\x8d\x00\x00\x88\x8d\x00\x00\x88\x8d\x00\x00\x99\x8d\x00\x00\x03\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff06c = 0
data_143eff158 = zmm0_1
int16_t var_1d0_9
data_143eff170 = var_1d0_9.d
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x70\x8d\x00\x00\x70\x8d\x00\x00\x70\x8d\x00\x00\x70\x8d\x00\x00\x99\x8d\x00\x00\x02\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff168 = var_1d8_1
data_143eff174 = zmm0_1
int16_t var_1d0_10
data_143eff18c = var_1d0_10.d
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x5b\x80\x00\x00\x5b\x80\x00\x00\x5b\x80\x00\x00\x5b\x80\x00\x00\x08\x19\x00\x00\x05\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff184 = var_1d8_1
data_143eff2e0 = zmm0_1
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x5b\x80\x00\x00\x5b\x80\x00\x00\x5b\x80\x00\x00\x5b\x80\x00\x00\x08\x19\x00\x00\x03\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff2f0 = var_1d8_1
int16_t var_1d0_11
data_143eff2f8 = var_1d0_11.d
data_143eff468 = zmm0_1
zmm0_1 = var_1e8.o
data_143eff478 = var_1d8_1
var_1d8_1:4.d = 0x1402
int16_t var_1d0_12
data_143eff480 = var_1d0_12.d
data_143eff484 = zmm0_1
data_1439c89e8 = 0
data_1439c8b50 = 1
data_1439c8b78 = 1
data_1439c8d80 = 1
data_1439c8fb0 = 1
data_143eff494 = 0x140200001908
data_143eff49c = 0.d
data_1439c8fd8 = 1
var_1e8.d = 0x823a
var_1e8:4.d = 0x823a
var_1e0_3.d = 0x823a
var_1e0_3:4.d = 0x823a
zmm0_1 = var_1e8.o
var_1e8 = nullptr
int64_t var_1e0_4 = 0
int16_t var_1d0_15 = 0
data_143eff2fc = zmm0_1
data_143eff314 = 0.d
var_1e8.d = 0x822a
var_1e8:4.d = 0x822a
var_1e0_4.d = 0x822a
var_1e0_4:4.d = 0x822a
int16_t var_1d0_16 = 0
data_143eff190 = var_1e8.o
zmm0_1 = var_1e8.o
var_1e8.d = 0x822e
var_1e8:4.d = 0x822e
var_1e0_4.d = 0x822e
var_1e0_4:4.d = 0x822e
data_143eff1a8 = var_1d0_15.d
int16_t var_1d0_17 = 0
data_143efee10 = zmm0_1
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x2f\x82\x00\x00\x2f\x82\x00\x00\x2f\x82\x00\x00\x2f\x82\x00\x00\x28\x82\x00\x00", 0x14)
data_143efee28 = var_1d0_16.d
int16_t var_1d0_18 = 0
int64_t var_1d8_2 = 0
data_143eff30c = 0x140200008228
zmm1_1 = var_1d8_2
var_1d8_2.d = 0x1903
var_1d8_2:4.d = 0x1403
data_143eff1a0 = zmm1_1
zmm1_1 = var_1d8_2
var_1d8_2.d = 0x1903
var_1d8_2:4.d = 0x1406
data_143efee20 = zmm1_1
zmm1_1 = var_1d8_2
var_1d8_2.d = 0x8227
var_1d8_2:4.d = 0x140b
data_143efef0c = zmm0_1
data_143efef24 = var_1d0_17.d
zmm0_1 = var_1e8.o
data_143efef1c = zmm1_1
__builtin_memcpy(&var_1e8, 
    "\x2f\x82\x00\x00\x2f\x82\x00\x00\x2f\x82\x00\x00\x2f\x82\x00\x00\x27\x82\x00\x00\x0b\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143efef44 = zmm0_1
zmm0_1 = var_1e8.o
data_143efef54 = var_1d8_2
data_143efef5c = var_1d0_18.d
data_143efef60 = zmm0_1
data_1439c8da8 = 1
data_1439c8ba0 = 0
data_1439c86a0 = 1
data_1439c8808 = 1
data_1439c8858 = 1
data_143efef70 = 0x140b00008227
int16_t var_1d0_19
data_143efef78 = var_1d0_19.d
data_1439c8880 = 1
__builtin_memcpy(&var_1e8, 
    "\x30\x82\x00\x00\x30\x82\x00\x00\x30\x82\x00\x00\x30\x82\x00\x00\x27\x82\x00\x00\x06\x14\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x59\x80\x00\x00\x59\x80\x00\x00\x59\x80\x00\x00\x59\x80\x00\x00\x08\x19\x00\x00\x68\x83\x00\x00\x"
"00\x00", 
    0x1a)
data_143efef7c = zmm0_1
int16_t var_1d0_20
data_143efef94 = var_1d0_20.d
zmm0_1 = var_1e8.o
var_1e8.d = 0x822d
__builtin_memcpy(&var_1e8:4, 
    "\x2d\x82\x00\x00\x2d\x82\x00\x00\x2d\x82\x00\x00\x03\x19\x00\x00\x0b\x14\x00\x00\x00\x00", 
    0x16)
data_143efef8c = 0x140b00008227
data_143efef98 = zmm0_1
int16_t var_1d0_21
data_143efefb0 = var_1d0_21.d
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x2d\x82\x00\x00\x2d\x82\x00\x00\x2d\x82\x00\x00\x2d\x82\x00\x00\x03\x19\x00\x00\x0b\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143efefa8 = var_1d8_2
data_143efefec = zmm0_1
int16_t var_1d0_22
data_143eff004 = var_1d0_22.d
zmm0_1 = var_1e8.o
var_1e8.d = 0x8c3a
__builtin_memcpy(&var_1e8:4, 
    "\x3a\x8c\x00\x00\x3a\x8c\x00\x00\x3a\x8c\x00\x00\x07\x19\x00\x00\x3b\x8c\x00\x00\x00\x00", 
    0x16)
data_143efeffc = var_1d8_2
data_143eff008 = zmm0_1
int16_t var_1d0_23
data_143eff020 = var_1d0_23.d
zmm0_1 = var_1e8.o
data_143eff018 = var_1d8_2
data_143efee9c = zmm0_1
__builtin_memcpy(&var_1e8, 
    "\x3a\x8c\x00\x00\x3a\x8c\x00\x00\x3a\x8c\x00\x00\x3a\x8c\x00\x00\x07\x19\x00\x00\x3b\x8c\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
data_143efeeac = var_1d8_2
int16_t var_1d0_24
data_143efeeb4 = var_1d0_24.d
data_143eff078 = zmm0_1
data_1439c88a8 = 1
data_1439c88d0 = 1
data_1439c8948 = 1
data_1439c8970 = 1
data_1439c8768 = 1
data_143eff088 = 0x8c3b00001907
int16_t var_1d0_25
data_143eff090 = var_1d0_25.d
data_1439c8a10 = 1
__builtin_memcpy(&var_1e8, 
    "\x95\x8f\x00\x00\x00\x00\x00\x00\x95\x8f\x00\x00\x00\x00\x00\x00\x27\x82\x00\x00\x00\x14\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x2b\x82\x00\x00\x2b\x82\x00\x00\x2b\x82\x00\x00\x2b\x82\x00\x00\x27\x82\x00\x00\x01\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff040 = zmm0_1
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\xbd\x8d\x00\x00\xbd\x8d\x00\x00\xbd\x8d\x00\x00\xbd\x8d\x00\x00\x27\x82\x00\x00\x01\x14\x00\x00\x"
"01\x00", 
    0x1a)
data_143eff050 = 0x8c3b00008227
int16_t var_1d0_26
data_143eff058 = var_1d0_26.d
data_143eff200 = zmm0_1
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\xbb\x8d\x00\x00\xbb\x8d\x00\x00\xbb\x8d\x00\x00\xbb\x8d\x00\x00\x03\x19\x00\x00\x01\x14\x00\x00\x"
"01\x00", 
    0x1a)
data_143eff210 = var_1d8_2
int16_t var_1d0_27
data_143eff218 = var_1d0_27.d
data_143eff024 = zmm0_1
int16_t var_1d0_28
data_143eff03c = var_1d0_28.d
zmm0_1 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x29\x82\x00\x00\x29\x82\x00\x00\x29\x82\x00\x00\x29\x82\x00\x00\x03\x19\x00\x00\x01\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff034 = var_1d8_2
data_143eff1e4 = zmm0_1
int16_t var_1d0_29
data_143eff1fc = var_1d0_29.d
zmm0_1 = var_1e8.o
data_143eff1f4 = var_1d8_2
data_143eff094 = zmm0_1
__builtin_memcpy(&var_1e8, 
    "\x36\x82\x00\x00\x36\x82\x00\x00\x36\x82\x00\x00\x36\x82\x00\x00\x94\x8d\x00\x00\x05\x14\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
data_143eff0a4 = var_1d8_2
int16_t var_1d0_30
data_143eff0ac = var_1d0_30.d
data_143eff0b0 = zmm0_1
data_1439c89c0 = 1
data_1439c8c40 = 1
data_1439c8998 = 1
data_1439c8c18 = 1
data_1439c8a38 = 1
data_143eff0c0 = 0x140500008d94
int16_t var_1d0_31
data_143eff0c8 = var_1d0_31.d
__builtin_memcpy(&var_1e8, 
    "\x35\x82\x00\x00\x35\x82\x00\x00\x35\x82\x00\x00\x35\x82\x00\x00\x94\x8d\x00\x00\x04\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff0cc = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x34\x82\x00\x00\x34\x82\x00\x00\x34\x82\x00\x00\x34\x82\x00\x00\x94\x8d\x00\x00\x03\x14\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
data_143eff0dc = 0x140500008d94
int16_t var_1d0_32
data_143eff0e4 = var_1d0_32.d
data_143eff120 = zmm0_1
__builtin_memcpy(&var_1e8, 
    "\x33\x82\x00\x00\x33\x82\x00\x00\x33\x82\x00\x00\x33\x82\x00\x00\x94\x8d\x00\x00\x02\x14\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
data_143eff130 = 0x140300008d94
int16_t var_1d0_33
data_143eff138 = var_1d0_33.d
data_143eff13c = zmm0_1
__builtin_memcpy(&var_1e8, 
    "\x32\x82\x00\x00\x32\x82\x00\x00\x32\x82\x00\x00\x32\x82\x00\x00\x94\x8d\x00\x00\x01\x14\x00\x00\x"
"00\x00", 
    0x1a)
zmm0_1 = var_1e8.o
data_143eff14c = 0x140200008d94
int16_t var_1d0_34
data_143eff154 = var_1d0_34.d
data_143eff3dc = zmm0_1
int16_t var_1d0_35
data_143eff3f4 = var_1d0_35.d
data_143eff3ec = 0x140100008d94
__builtin_memcpy(&var_1e8, 
    "\x1a\x88\x00\x00\x1a\x88\x00\x00\x1a\x88\x00\x00\x1a\x88\x00\x00\x08\x19\x00\x00\x0b\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143efeeb8 = var_1e8.o
data_1439c8a60 = 1
data_1439c8a88 = 1
data_1439c8b00 = 1
data_1439c8b28 = 1
data_1439c8ee8 = 1
data_143efeec8 = 0x140100001908
int16_t var_1d0_36
data_143efeed0 = var_1d0_36.d
data_1439c8790 = 1
sub_14197ee80(&var_1b8)
__builtin_memcpy(&var_1e8, 
    "\x29\x82\x00\x00\x41\x8c\x00\x00\x29\x82\x00\x00\x41\x8c\x00\x00\x03\x19\x00\x00\x01\x14\x00\x00\x"
"00\x00", 
    0x1a)
int128_t zmm0_2 = var_1e8.o
var_1e8.d = 0x8058
__builtin_memcpy(&var_1e8:4, 
    "\x43\x8c\x00\x00\x58\x80\x00\x00\x43\x8c\x00\x00\xe1\x80\x00\x00\x67\x83\x00\x00\x00\x00", 
    0x16)
data_143efedf4 = zmm0_2
int16_t var_1d0_37
data_143efee0c = var_1d0_37.d
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x58\x80\x00\x00\x43\x8c\x00\x00\x58\x80\x00\x00\x43\x8c\x00\x00\xe1\x80\x00\x00\x67\x83\x00\x00\x"
"00\x00", 
    0x1a)
data_143efee04 = 0x140b00001903
data_143efedd8 = zmm0_2
int16_t var_1d0_38
data_143efedf0 = var_1d0_38.d
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x7c\x8d\x00\x00\x7c\x8d\x00\x00\x7c\x8d\x00\x00\x7c\x8d\x00\x00\x08\x19\x00\x00\x67\x83\x00\x00\x"
"00\x00", 
    0x1a)
data_143efede8 = var_1d8_2
data_143eff1ac = zmm0_2
int16_t var_1d0_39
data_143eff1c4 = var_1d0_39.d
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x58\x80\x00\x00\x58\x80\x00\x00\x58\x80\x00\x00\x58\x80\x00\x00\x99\x8d\x00\x00\x01\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff1bc = var_1d8_2
data_143eff430 = zmm0_2
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\x2c\x82\x00\x00\x2c\x82\x00\x00\x2c\x82\x00\x00\x2c\x82\x00\x00\x08\x19\x00\x00\x01\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff440 = var_1d8_2
int64_t zmm1_2 = var_1d8_2
int16_t var_1d0_40
data_143eff448 = var_1d0_40.d
var_1d8_2.d = 0x8227
data_143eff44c = zmm0_2
zmm0_2 = var_1e8.o
int16_t var_1d0_41
data_143eff464 = var_1d0_41.d
data_143eff45c = zmm1_2
data_143efef28 = zmm0_2
data_1439c8678 = 1
data_1439c8650 = 1
data_1439c8bc8 = 1
data_1439c8f60 = 1
data_1439c8f88 = 1
data_143efef38 = var_1d8_2
int16_t var_1d0_42
data_143efef40 = var_1d0_42.d
data_1439c8830 = 1
__builtin_memcpy(&var_1e8, 
    "\x3c\x82\x00\x00\x3c\x82\x00\x00\x3c\x82\x00\x00\x3c\x82\x00\x00\x27\x82\x00\x00\x03\x14\x00\x00\x"
"00\x00", 
    0x1a)
bool cond:18 = data_143efbce1 == 0
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\xf0\x88\x00\x00\x00\x00\x00\x00\xf0\x88\x00\x00\x00\x00\x00\x00\xf9\x84\x00\x00\x05\x14\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff510 = zmm0_2
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\xf1\x83\x00\x00\x4d\x8c\x00\x00\xf1\x83\x00\x00\x4d\x8c\x00\x00\x08\x19\x00\x00\xfa\x84\x00\x00\x"
"00\x00", 
    0x1a)
data_143eff520 = 0x140500008227
zmm1_2 = var_1d8_2
var_1d8_2:4.d = 0x1401
int16_t var_1d0_43
data_143eff528 = var_1d0_43.d
int16_t var_1d0_45 = 1
data_143efeed4 = zmm0_2
int16_t var_1d0_44
data_143efeeec = var_1d0_44.d
zmm0_2 = var_1e8.o
__builtin_memcpy(&var_1e8, 
    "\xf2\x83\x00\x00\x4e\x8c\x00\x00\xf2\x83\x00\x00\x4e\x8c\x00\x00\x08\x19\x00\x00\x01\x14\x00\x00\x"
"01\x00", 
    0x1a)
data_143efeee4 = zmm1_2
data_143efee2c = zmm0_2
data_143efee44 = var_1d0_45.d
zmm0_2 = var_1e8.o
data_143efee3c = var_1d8_2
data_143efee48 = zmm0_2
__builtin_memcpy(&var_1e8, 
    "\xf3\x83\x00\x00\x4f\x8c\x00\x00\xf3\x83\x00\x00\x4f\x8c\x00\x00\x08\x19\x00\x00\x01\x14\x00\x00\x"
"01\x00", 
    0x1a)
zmm0_2 = var_1e8.o
data_143efee58 = var_1d8_2
int16_t var_1d0_46
data_143efee60 = var_1d0_46.d
int16_t var_1d0_47
int32_t result = var_1d0_47.d
data_143efee64 = zmm0_2
data_1439c90a0 = 1
data_1439c87b8 = 1
data_1439c86c8 = 1
data_1439c86f0 = 1
data_143efee74 = 0x140100001908
data_143efee7c = result
data_1439c8718 = 1

if (not(cond:18))
    __builtin_memcpy(&var_1e8, 
        "\xb0\x93\x00\x00\xd0\x93\x00\x00\xb0\x93\x00\x00\xd0\x93\x00\x00\x08\x19\x00\x00\x01\x14\x00\x"
    "00\x01\x00", 
        0x1a)
    zmm0_2 = var_1e8.o
    __builtin_memcpy(&var_1e8, 
        "\xb4\x93\x00\x00\xd4\x93\x00\x00\xb4\x93\x00\x00\xd4\x93\x00\x00\x08\x19\x00\x00\x01\x14\x00\x"
    "00\x01\x00", 
        0x1a)
    data_143eff318 = zmm0_2
    int16_t var_1d0_48
    data_143eff330 = var_1d0_48.d
    zmm0_2 = var_1e8.o
    __builtin_memcpy(&var_1e8, 
        "\xb7\x93\x00\x00\xd7\x93\x00\x00\xb7\x93\x00\x00\xd7\x93\x00\x00\x08\x19\x00\x00\x01\x14\x00\x"
    "00\x01\x00", 
        0x1a)
    data_143eff328 = 0x140100001908
    data_143eff334 = zmm0_2
    int16_t var_1d0_49
    data_143eff34c = var_1d0_49.d
    zmm0_2 = var_1e8.o
    __builtin_memcpy(&var_1e8, 
        "\xbb\x93\x00\x00\xdb\x93\x00\x00\xbb\x93\x00\x00\xdb\x93\x00\x00\x08\x19\x00\x00\x01\x14\x00\x"
    "00\x01\x00", 
        0x1a)
    data_143eff344 = var_1d8_2
    data_143eff350 = zmm0_2
    zmm0_2 = var_1e8.o
    int16_t var_1d0_50
    data_143eff368 = var_1d0_50.d
    data_143eff360 = var_1d8_2
    data_143eff36c = zmm0_2
    __builtin_memcpy(&var_1e8, 
        "\xbd\x93\x00\x00\xdd\x93\x00\x00\xbd\x93\x00\x00\xdd\x93\x00\x00\x08\x19\x00\x00", 0x14)
    zmm0_2 = var_1e8.o
    data_143eff37c = var_1d8_2
    int16_t var_1d0_51
    data_143eff384 = var_1d0_51.d
    result = 1.d
    data_143eff388 = zmm0_2
    data_1439c8dd0 = 1
    data_1439c8df8 = 1
    data_1439c8e20 = 1
    data_1439c8e48 = 1
    data_143eff398 = 0x140100001908
    data_143eff3a0 = result
    data_1439c8e70 = 1

int64_t rcx_37 = var_160
data_1439c87ac = 4
data_1439c875c = 4
data_1439c8784 = 8
data_143f0f1c0 = 1

if (rcx_37 != 0)
    result = sub_140a74f90(rcx_37)

uint64_t rcx_38 = var_170

if (rcx_38 != 0)
    result = sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_218)
return result
