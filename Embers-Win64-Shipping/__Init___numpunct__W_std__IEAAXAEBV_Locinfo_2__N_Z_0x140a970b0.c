// 函数: ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z
// 地址: 0x140a970b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*arg1 = 0
arg1[1] = 0
void* rcx = &arg1[2]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
InitializeCriticalSection(&arg1[0xa])
SetCriticalSectionSpinCount(&arg1[0xa], 0xfa0)
void*** var_58 = nullptr
void** const var_48 = &data_142d42d18
void**** (* var_68)(void**** arg1) = UnDecorator::getGuardNumber
int32_t rax_3 = sub_140b21160(u"plural", 0xc, 0)
int64_t var_80 = 0
int64_t var_78 = 0
int32_t var_90
sub_140a9e690(arg1, &var_90)
char* var_a0 = nullptr
int64_t* var_88
*var_88 = u"plural"
var_88[1].d = 6
*(var_88 + 0xc) = rax_3
var_88[2] = 0
var_88[3] = 0
var_88[4] = var_68
var_88[6] = var_58
*(var_88 + 0x40) = var_48.o
int128_t var_38
*(var_88 + 0x50) = var_38
void**** (* rax_6)(void**** arg1) = var_68

if (var_88[4] != 0)
    rax_6 = nullptr

var_88[0xc].d = 0xffffffff
void var_98
sub_140aa7ce0(arg1, &var_98, *(var_88 + 0xc), var_88, var_90, var_a0)

if (rax_6 != 0)
    void** const* rcx_6 = &var_48
    
    if (var_58 != 0)
        rcx_6 = var_58
    
    (*rcx_6)[2](rcx_6)

void*** var_58_1 = nullptr
var_48 = &data_142d42d18
void**** (* var_68_2)(void**** arg1) = UnDecorator::getDisplacement
int32_t rax_10 = sub_140b21160(u"ordinal", 0xe, 0)
int64_t var_80_1 = 0
int64_t var_78_1 = 0
sub_140a9e690(arg1, &var_90)
char* var_a0_1 = nullptr
*var_88 = u"ordinal"
var_88[1].d = 7
*(var_88 + 0xc) = rax_10
var_88[2] = 0
var_88[3] = 0
var_88[4] = var_68_2
var_88[6] = var_58_1
*(var_88 + 0x40) = var_48.o
*(var_88 + 0x50) = var_38
void**** (* rax_13)(void**** arg1) = var_68_2

if (var_88[4] != 0)
    rax_13 = nullptr

var_88[0xc].d = 0xffffffff
sub_140aa7ce0(arg1, &var_98, *(var_88 + 0xc), var_88, var_90, var_a0_1)

if (rax_13 != 0)
    void** const* rcx_10 = &var_48
    
    if (var_58_1 != 0)
        rcx_10 = var_58_1
    
    (*rcx_10)[2](rcx_10)

void*** var_58_2 = nullptr
var_48 = &data_142d42d18
void** (* var_68_4)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_140aa3920
int32_t rax_17 = sub_140b21160(u"gender", 0xc, 0)
int64_t var_80_2 = 0
int64_t var_78_2 = 0
sub_140a9e690(arg1, &var_90)
char* var_a0_2 = nullptr
*var_88 = u"gender"
var_88[1].d = 6
*(var_88 + 0xc) = rax_17
var_88[2] = 0
var_88[3] = 0
var_88[4] = var_68_4
var_88[6] = var_58_2
*(var_88 + 0x40) = var_48.o
*(var_88 + 0x50) = var_38
void** (* rax_20)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = var_68_4

if (var_88[4] != 0)
    rax_20 = nullptr

var_88[0xc].d = 0xffffffff
sub_140aa7ce0(arg1, &var_98, *(var_88 + 0xc), var_88, var_90, var_a0_2)

if (rax_20 != 0)
    void** const* rcx_14 = &var_48
    
    if (var_58_2 != 0)
        rcx_14 = var_58_2
    
    (*rcx_14)[2](rcx_14)

void*** var_58_3 = nullptr
var_48 = &data_142d42d18
void**** (* var_68_6)(void**** arg1, int64_t arg2, int64_t* arg3) = sub_140aa39a0
int32_t rax_24 = sub_140b21160(u"hpp", 6, 0)
int64_t var_80_3 = 0
int64_t var_78_3 = 0
sub_140a9e690(arg1, &var_90)
char* var_a0_3 = nullptr
*var_88 = &data_142e64c50
var_88[1].d = 3
*(var_88 + 0xc) = rax_24
var_88[2] = 0
var_88[3] = 0
var_88[4] = var_68_6
var_88[6] = var_58_3
*(var_88 + 0x40) = var_48.o
*(var_88 + 0x50) = var_38
void**** (* rax_27)(void**** arg1, int64_t arg2, int64_t* arg3) = var_68_6

if (var_88[4] != 0)
    rax_27 = nullptr

var_88[0xc].d = 0xffffffff
sub_140aa7ce0(arg1, &var_98, *(var_88 + 0xc), var_88, var_90, var_a0_3)

if (rax_27 != 0)
    void** const* rcx_18 = &var_48
    
    if (var_58_3 != 0)
        rcx_18 = var_58_3
    
    void** const rdx_9 = *rcx_18
    rdx_9[2](rcx_18, rdx_9)

__security_check_cookie(rax_1 ^ &var_c8)
return arg1
