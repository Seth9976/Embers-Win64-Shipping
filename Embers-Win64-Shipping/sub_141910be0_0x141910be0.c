// 函数: sub_141910be0
// 地址: 0x141910be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t r14 = 0
int32_t r13 = 0
void var_158
sub_1405eb940(&var_158, data_143effa60(0x1f02))
int32_t rdx_1 = 0
int32_t var_198 = 0
int32_t rcx_1 = 0
int32_t var_194 = 0
int64_t var_1a0 = 0
int16_t* var_50

if (var_50 != 0 && *var_50 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_50[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_1a0, rbx_1.d + 1)
        rcx_1 = var_194
        rdx_1 = var_198
    
    int32_t rax_3 = rbx_1.d + 1 + rdx_1
    int32_t var_198_1 = rax_3
    
    if (rax_3 s> rcx_1)
        sub_140594770(&var_1a0)
    
    UnDecorator::getReferenceType(var_1a0, var_50, (rbx_1.d + 1) * 2)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int16_t* _String_4 = nullptr
int32_t var_170 = 0
int16_t* _String_5 = nullptr
int32_t var_160 = 0
int64_t var_190 = 0
int32_t var_188 = 0
sub_1405947f0(&var_190, 2)
int32_t rax_4 = var_188 + 2
var_188 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_190)

int64_t rbx_3 = var_190
UnDecorator::getReferenceType(rbx_3, &data_142d404c4, 4)
char rax_5 = sub_14060a620(&var_1a0, &var_190, &_String_4, &_String_5, 1, 0)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int16_t* _String_3 = _String_4
int16_t* _String_2 = _String_5

if (rax_5 != 0)
    int16_t* const _String_1 = &data_142d40450
    int16_t* const _String = &data_142d40450
    
    if (var_170 != 0)
        _String = _String_3
    
    r14 = _wtoi(_String)
    
    if (var_160 != 0)
        _String_1 = _String_2
    
    r13 = _wtoi(_String_1)

int32_t rax_8

if (sub_140a23cf0(arg1, u"GL_ARB_tessellation_shader", 1, 0, 0xffffffff) != 0xffffffff || r14 s>= 4)
    rax_8.b = 1
else
    rax_8.b = 0

data_143eff5c5 = rax_8.b
data_1439c74ac = 0
data_143efbce8 = 1
data_143effa50(0x8b4a, &data_1439c74ac)
data_143efbce8 = 0
data_1439c74b0 = 0
data_143efbce8 = 1
data_143effa50(0x8b49, &data_1439c74b0)
data_143efbce8 = 0
data_1439c74b4 = 0
data_143efbce8 = 1
data_143effa50(0x8ddf, &data_1439c74b4)
data_143efbce8 = 0
data_1439c74a0 = 0
data_143efbce8 = 1
data_143effa50(0x8c29, &data_1439c74a0)
data_143efbce8 = 0
data_1439c74c0 = 0
data_143efbce8 = 1
data_143effa50(0x8dfc, &data_1439c74c0)
bool cond:2 = data_143eff5c5 == 0
data_143efbce8 = 0
data_1439c74b8 = 0

if (cond:2)
    data_1439c74bc = 0
    data_1439c74a4 = 0
    data_1439c74a8 = 0
else
    data_143efbce8 = 1
    data_143effa50(0x8e7f, &data_1439c74b8)
    data_143efbce8 = 0
    data_1439c74bc = 0
    data_143efbce8 = 1
    data_143effa50(0x8e80, &data_1439c74bc)
    data_143efbce8 = 0
    data_1439c74a4 = 0
    data_143efbce8 = 1
    data_143effa50(0x8e81, &data_1439c74a4)
    data_143efbce8 = 0
    data_1439c74a8 = 0
    data_143efbce8 = 1
    data_143effa50(0x8e82, &data_1439c74a8)
    data_143efbce8 = 0

data_143effcc0(0x8e28, 0x8864, &data_143eff5c0)
sub_141911680(arg1)
int32_t var_1a8
data_143f00108(1, &var_1a8)
data_143f000f8(0x8ca9, zx.q(var_1a8))
int32_t var_1a4
data_143effa28(1, &var_1a4)
data_143eff988(0x806f, zx.q(var_1a4))
data_143effc00(0x806f, 0, 0x8058, 0x100, 0x100, 0x100, 0, 0x1908, 0x1401, 0)
data_143f00130(0x8ca9, 0x8ce0, zx.q(var_1a4), 0)
data_143efbce4 = data_143f00110(0x8ca9) == 0x8cd5
data_143eff9c8(1, &var_1a4)
data_143f00100(1, &var_1a8)
TEB* gsbase

if (data_143eff5e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff5e8)
    
    if (data_143eff5e8 == 0xffffffff)
        int64_t* rcx_25 = data_143db18d0
        
        if (rcx_25 == 0)
            sub_140a53c40()
            rcx_25 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_19 = (*(*rcx_25 + 0xb0))(rcx_25, u"OpenGL.UseSeparateShaderObjects", r8_5)
        int64_t rax_17
        
        if (rax_19 == 0)
            rax_17 = 0
        else
            int64_t rdx_14 = *rax_19
            rax_17 = (*(rdx_14 + 0x58))(rax_19, rdx_14)
        
        data_143eff5e0 = rax_17
        _Init_thread_footer(&data_143eff5e8)

int64_t rax_13 = data_143eff5e0

if (rax_13 == 0 || *(rax_13 + 4) != 1)
    rax_13.b = 0
else
    char rax_12 = sub_14197ee80(&var_1a8)
    
    if (rax_12 != 0 && var_1a8 == 1)
        rax_13 = 0xf
        
        if (data_143eff5c7 != 0)
            rax_13 = 0x18
    
    if (rax_12 != 0 && var_1a8 == 1 && rax_13.d == 0x18)
        rax_13.b = 0
    else if (sub_140a23cf0(arg1, GL_ARB_separate_shader_objects", 1, 0, 0xffffffff).d != 0xffffffff
            || (r14 == 4 && r13 s>= r14))
        rax_13.b = 1
    else
        rax_13.b = 0

data_143eff5c6 = rax_13.b
int32_t result_1
int32_t result

if (sub_14197ee80(&result_1) == 0)
    var_1a8 = 0
    data_143effa50(0x821b, &var_1a8)
    int32_t rax_15 = var_1a8
    
    if (rax_15 != 3 && rax_15 == 4)
        var_1a4 = 0
        data_143effa50(0x821c, &var_1a4)
        result = 1
        
        if (var_1a4 u> 2)
            result = 3
        
        goto label_141911116
    
label_141911134:
    
    if (sub_140a23cf0(arg1, u"GL_ARB_ES3_1_compatibility", 1, 0, 0xffffffff) == 0xffffffff)
        result.b = 0
    else
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"GLESCompat").b == 0)
            result.b = 0
        else
            result.b = 1
else
    result = result_1
label_141911116:
    
    if (result == 1)
        goto label_141911134
    
    result.b = 0

data_143eff5c7 = result.b

if (_String_2 != 0)
    result = sub_140a74f90(_String_2)

if (_String_3 != 0)
    result = sub_140a74f90(_String_3)

int64_t rcx_22 = var_1a0

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
