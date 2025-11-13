// 函数: sub_1414cd310
// 地址: 0x1414cd310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_e8
int64_t rax_2 = __security_cookie ^ &var_e8
int32_t r14_1 = int.d(fconvert.t(*(data_143ee73b8 + 4)))
int32_t r15_1 = int.d(fconvert.t(*(data_143ee73d0 + 4)))

if (r14_1 s< 4)
    r14_1 = 4

int32_t r12_1 = int.d(fconvert.t(*(data_143ee7430 + 4)))

if (r15_1 s< 4)
    r15_1 = 4

int32_t r13_1 = int.d(fconvert.t(*(data_143ee7448 + 4)))
int64_t var_90_1 = 0
int64_t var_88_1 = 0

if (r12_1 s< 4)
    r12_1 = 4

int64_t var_98 = 1
int64_t var_78_1 = 1
int16_t var_70_1 = 1
wchar16 const* const var_58_1 = u"UnknownTexture"
int16_t var_50_1 = 1

if (r13_1 s< 4)
    r13_1 = 4

int64_t var_80_1 = 0
int64_t var_6c_1 = 0
int32_t var_64_1 = 0
int16_t var_60_1 = 0
char var_4e_1 = 0
void* rax_8 = (*(*arg2 + 0x1d0))(arg2)
int32_t rax_9 = sub_1414cba90(arg2[1].d)
int64_t rax_10 = data_143ee7490
int64_t rdx

if (data_143de5480 == 0)
    rdx = 0
else
    rdx.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_2 = 1
int32_t rdx_1 = rax_9

if (*(rax_10 + (rdx << 2)) == 0)
    rcx_2 = 0x25

if (*(data_143ee73a0 + 4) s> 0)
    rdx_1 = rcx_2

var_88_1.d = data_143f02318
var_88_1:4.d = r14_1
wchar16 const* const var_58_2 = u"UnknownTexture2D"
var_6c_1.d = rdx_1
var_98.o = data_143f02308
var_80_1.d = r15_1
var_78_1:6.w = 1
var_6c_1:4.d = 0x200000
int32_t var_64_2 = 0x10008
sub_1419a0ce0(&data_1439c9260, arg1, &var_98, rax_8 + 0xc8, u"TransmittanceLutTexture", 1, 1, 0)
var_88_1.d = data_143f02318
var_88_1:4.d = r12_1
var_98.o = data_143f02308
var_80_1.d = r13_1
var_80_1:4.d = 0
var_78_1.d = 1
var_78_1:4.d = 0x10000
int16_t var_70_2 = 1
var_6c_1.d = rax_9
var_6c_1:4.d = 0x200000
int32_t var_64_3 = 0x10008
int16_t var_60_2 = 0
wchar16 const* const var_58_3 = u"UnknownTexture2D"
int16_t var_50_2 = 1
char var_4e_2 = 0
sub_1419a0ce0(&data_1439c9260, arg1, &var_98, rax_8 + 0xd0, MultiScatteredLuminanceLutTexture", 1, 
    1, 0)

if (*(data_143ee7460 + 4) s> 0)
    var_88_1.d = data_143f02318
    var_98.o = data_143f02308
    var_88_1:4.d = 1
    int64_t var_80_2 = 1
    var_78_1.d = 1
    var_78_1:4.d = 0x10000
    int16_t var_70_3 = 1
    var_6c_1.d = rax_9
    var_6c_1:4.d = 0x200000
    int32_t var_64_4 = 0x10008
    int16_t var_60_3 = 0
    wchar16 const* const var_58_4 = u"UnknownTexture2D"
    int16_t var_50_3 = 1
    char var_4e_3 = 0
    sub_1419a0ce0(&data_1439c9260, arg1, &var_98, rax_8 + 0xd8, DistantSkyLightLutTexture", 1, 1, 0)

__security_check_cookie(rax_2 ^ &var_e8)
