// 函数: sub_1421ba310
// 地址: 0x1421ba310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char rcx = (data_1439c7a34).b
int32_t var_188 = 1
int32_t rdx = *(data_143f4dfa0 + 4)
int128_t var_178 = zx.o(0)
char var_150 = 0
int32_t var_154 = (1 << rcx) - 1
int32_t rcx_1 = 0x2000001
int32_t var_158 = data_1439c7b30

if (rdx == 1)
    rcx_1 = 0x22000001

int64_t var_148 = 0
int32_t var_140 = 0
int128_t var_168 = data_1439c7b20
sub_1421be920(data_143a2ee34, data_143a2ee38, 2, 1, 0, rcx_1, 0, &var_178, arg1 + 0x10, 
    arg1 + 0x18, var_188)
TEB* gsbase

if (data_143f4ec60 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4ec60)
    
    if (data_143f4ec60 == 0xffffffff)
        sub_140b58260(&data_143f4ec58, u"ParticleAttributes", 1)
        _Init_thread_footer(&data_143f4ec60)

*(*(arg1 + 0x10) + 0x58) = data_143f4ec58
int64_t* rcx_6 = data_143f0f180
(*(*rcx_6 + 0x2e8))(rcx_6, *(arg1 + 0x10), u"ParticleAttributes")
int64_t rax_11 = *(arg1 + 0x10)
int128_t zmm1 = data_142d3f5a0
int32_t var_60 = 0
int32_t var_5c
__builtin_memset(&var_5c, 0xff, 0x14)
int128_t var_48 = zmm1
int64_t var_38
__builtin_memset(&var_38, 0, 0x19)
int64_t var_138 = rax_11
int64_t var_130 = 0
int32_t var_128 = 0xffffffff
int16_t var_124 = 0x900
int64_t var_78
__builtin_memset(&var_78, 0, 0x11)
int32_t var_64 = 0
bool var_1f = *(rax_11 + 0x38) u> 1
void var_120
memset(&var_120, 0, 0xa8)
int64_t rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
int64_t rax_12 = rbx_3 + 0xc

if (rax_12 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0xe)
    rbx_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    rax_12 = rbx_3 + 0xc

wchar16 const* const rcx_8 = u"Clear"
data_143f02bc8 = rax_12
wchar16 const i

do
    i = *rcx_8
    *(rbx_3 - u"Clear" + rcx_8) = i
    rcx_8 = &rcx_8[1]
while (i != 0)
void*** rcx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_11[0x27]

if (rax_13 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x140)
    rcx_11 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_11[0x27]

data_143f02bac += 1
data_143f02bc8 = rax_13
*data_143f02ba0 = rcx_11
data_143f02ba0 = &rcx_11[1]
sub_1405d11b0(rcx_11, &var_138, rbx_3)
data_143f02d5c = 1
sub_1405d19b0(&data_143f02b98, &var_138)
int64_t var_28
data_143f02d10 = var_28:7.b
data_143f02d11 = 0
data_143f02d5c = 1
sub_141096650(&data_143f02b98)
int64_t var_30
int64_t result = sub_1405d1550(&var_30)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
