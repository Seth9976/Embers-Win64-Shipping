// 函数: sub_140b1eb60
// 地址: 0x140b1eb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b12ac0(arg1, u"bIsConfidential", arg2 + 0x10)
sub_140b12ac0(arg1, u"bRestrictLocalization", arg2 + 0x11)
uint64_t _String = 0
int32_t var_20 = 0

if (sub_140af5d90(arg1, DataDrivenPlatformInfo", AudioCompressionSettingsIniSectionName", &_String)
        != 0)
    char rax_1 = sub_140a32ae0(&_String, u"ini:", 1)
    char rax_2
    
    if (rax_1 == 0)
        rax_2 = sub_140a32ae0(&_String, u"!ini:", 1)
    
    if (rax_1 != 0 || rax_2 != 0)
        sub_140b12b80(&_String)

if (var_20 != 0 && var_20 - 1 s> 0 && arg2 + 0x18 != &_String)
    int32_t r8_2 = *(arg2 + 0x24)
    uint64_t _String_3 = _String
    *(arg2 + 0x20) = var_20
    sub_1405a4c70(arg2 + 0x18, var_20, r8_2)
    memcpy(*(arg2 + 0x18), _String_3, var_20 * 2)

uint64_t _String_1 = _String

if (_String_1 != 0)
    sub_140a74f90(_String_1)

sub_140af2e70(arg1, u"DataDrivenPlatformInfo", u"AdditionalRestrictedFolders", arg2 + 0x28)
sub_140b12ac0(arg1, u"Freezing_b32Bit", arg2 + 0x3c)
bool cond:0 = *(arg2 + 0x3c) != 0
int16_t* r8_6 = u"Freezing_MaxFieldAlignment64"
_String = 0

if (cond:0)
    r8_6 = u"Freezing_MaxFieldAlignment32"

int32_t var_20_1 = 0

if (sub_140af5d90(arg1, u"DataDrivenPlatformInfo", r8_6, &_String) != 0)
    char rax_5 = sub_140a32ae0(&_String, u"ini:", 1)
    char rax_6
    
    if (rax_5 == 0)
        rax_6 = sub_140a32ae0(&_String, u"!ini:", 1)
    
    if (rax_5 != 0 || rax_6 != 0)
        sub_140b12b80(&_String)

if (var_20_1 != 0 && var_20_1 - 1 s> 0)
    *(arg2 + 0x38) = _wcstoui64(_String, nullptr, 0xa)

uint64_t _String_2 = _String

if (_String_2 != 0)
    sub_140a74f90(_String_2)

sub_140b12ac0(arg1, u"Freezing_bForce64BitMemoryImagePointers", arg2 + 0x3d)
sub_140b12ac0(arg1, u"Freezing_bAlignBases", arg2 + 0x3e)
return sub_140b12ac0(arg1, u"Freezing_bWithRayTracing", arg2 + 0x3f) __tailcall
