// 函数: sub_141911230
// 地址: 0x141911230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rsi = 0
int32_t r12 = 0
void var_158
sub_1405eb940(&var_158, data_143effa60(0x1f02))
int32_t rdx_1 = 0
int32_t var_190 = 0
int32_t rcx_1 = 0
int32_t var_18c = 0
int64_t var_198 = 0
int16_t* var_50

if (var_50 != 0 && *var_50 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_50[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_198, rbx_1.d + 1)
        rcx_1 = var_18c
        rdx_1 = var_190
    
    int32_t rax_3 = rbx_1.d + 1 + rdx_1
    int32_t var_190_1 = rax_3
    
    if (rax_3 s> rcx_1)
        sub_140594770(&var_198)
    
    UnDecorator::getReferenceType(var_198, var_50, (rbx_1.d + 1) * 2)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int16_t* _String_4 = nullptr
int32_t var_170 = 0
int16_t* _String_5 = nullptr
int32_t var_160 = 0
int64_t var_188 = 0
int32_t var_180 = 0
sub_1405947f0(&var_188, 2)
int32_t rax_4 = var_180 + 2
var_180 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_188)

int64_t rbx_3 = var_188
UnDecorator::getReferenceType(rbx_3, &data_142d404c4, 4)
char rax_5 = sub_14060a620(&var_198, &var_188, &_String_4, &_String_5, 1, 0)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int16_t* _String_2 = _String_4
int16_t* _String_3 = _String_5

if (rax_5 != 0)
    int16_t* const _String_1 = &data_142d40450
    int16_t* const _String = &data_142d40450
    
    if (var_170 != 0)
        _String = _String_2
    
    rsi = _wtoi(_String)
    
    if (var_160 != 0)
        _String_1 = _String_3
    
    r12 = _wtoi(_String_1)

int32_t var_1a8_2 = 0xffffffff
data_143eff5cc = sub_140a23cf0(arg1, u"GL_NVX_gpu_memory_info", 1, 0, 0xffffffff) != 0xffffffff
int32_t rax_9

if (sub_140a23cf0(arg1, u"GL_ARB_compute_shader", 1, 0, var_1a8_2) != 0xffffffff)
    rax_9.b = 1
else if (rsi != 4)
    if (rsi s> 4)
        rax_9.b = 1
    else
        rax_9.b = 0
else if (r12 s< 3)
    rax_9.b = 0
else
    rax_9.b = 1

data_1439c74e8 = rax_9.b
int32_t rax_10

if (sub_140a23cf0(arg1, u"GL_ARB_vertex_attrib_binding", 1, 0, 0xffffffff) != 0xffffffff)
    rax_10.b = 1
else if (rsi != 4)
    if (rsi s> 4)
        rax_10.b = 1
    else
        rax_10.b = 0
else if (r12 s< 3)
    rax_10.b = 0
else
    rax_10.b = 1

data_1439c74e9 = rax_10.b
int32_t rax_11

if (sub_140a23cf0(arg1, u"GL_ARB_texture_view", 1, 0, 0xffffffff) != 0xffffffff)
    rax_11.b = 1
else if (rsi != 4)
    if (rsi s> 4)
        rax_11.b = 1
    else
        rax_11.b = 0
else if (r12 s< 3)
    rax_11.b = 0
else
    rax_11.b = 1

data_1439c74ea = rax_11.b
data_143eff5c8 = 0
data_143efbce8 = 1
data_143effa50(0x90cf, &data_143eff5c8)
data_143efbce8 = 0
data_1439c74e4 = 0
data_143efbce8 = 1
data_143effa50(0x90ce, &data_1439c74e4)
data_143efbce8 = 0
data_1439c74c4 = 0
data_143efbce8 = 1
data_143effa50(0x919f, &data_1439c74c4)
bool cond:8 = data_1439c74e8 == 0
data_143efbce8 = 0

if (not(cond:8))
    data_1439c74d8 = 0
    data_143efbce8 = 1
    data_143effa50(0x91bc, &data_1439c74d8)
    data_143efbce8 = 0
    data_1439c74dc = 0
    data_143efbce8 = 1
    data_143effa50(0x8263, &data_1439c74dc)
    data_143efbce8 = 0
    data_1439c74e0 = 0
    data_143efbce8 = 1
    data_143effa50(0x91bd, &data_1439c74e0)
    data_143efbce8 = 0

int32_t r8_4 = 8

if (data_143eff5c8 s<= 8)
    r8_4 = data_143eff5c8

bool cond:5 = data_1439c74e0 s<= r8_4
int32_t rdx_6 = r8_4
data_143eff5c8 = r8_4

if (cond:5)
    rdx_6 = data_1439c74e0

bool cond:6 = data_1439c74e4 s<= r8_4
data_1439c74e0 = rdx_6

if (cond:6)
    r8_4 = data_1439c74e4

data_1439c74e4 = r8_4
int64_t result = sub_141910be0(arg1)

if (_String_3 != 0)
    result = sub_140a74f90(_String_3)

if (_String_2 != 0)
    result = sub_140a74f90(_String_2)

int64_t rcx_19 = var_198

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
