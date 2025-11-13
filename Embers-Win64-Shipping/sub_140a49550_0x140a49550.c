// 函数: sub_140a49550
// 地址: 0x140a49550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143db1900 = sub_140b1d030()
data_143db1901 = sub_140b1d2a0()
data_143db1902 = sub_140b1da90()
data_143db1908 = GetCurrentProcessId()
int16_t* _Source_18
sub_140a2e390(&_Source_18, u"UE4-%s", u"Embers")
int16_t* const _Source_13 = &data_142d40450
int16_t* const _Source_1 = &data_142d40450
int32_t var_100

if (var_100 != 0)
    _Source_1 = _Source_18

wcsncpy(&data_143db1930, _Source_1, 0x3f)
int16_t* _Source_20 = _Source_18
data_143db19ae = 0

if (_Source_20 != 0)
    sub_140a74f90(_Source_20)

wcsncpy(&data_143db25b0, &data_142d40450, 0x3f)
data_143db262e = 0
wcsncpy(&data_143db3230, &data_142d40450, 0x3f)
data_143db32ae = 0
wcsncpy(&data_143db2530, &data_142d40450, 0x3f)
data_143db25ae = 0
uint32_t rcx_1 = zx.d(sub_140ab2200())
wchar16 const* const _Source_2

if (rcx_1 == 1)
    _Source_2 = u"Debug"
else if (rcx_1 == 2)
    _Source_2 = u"DebugGame"
else if (rcx_1 == 3)
    _Source_2 = u"Development"
else if (rcx_1 == 4)
    _Source_2 = u"Shipping"
else if (rcx_1 == 5)
    _Source_2 = u"Test"
else
    _Source_2 = u"Unknown"

wcsncpy(&data_143db1b30, _Source_2, 0x3f)
data_143db1bae = 0
wcsncpy(&data_143db1ab0, sub_140b66930(1), 0x3f)
data_143db1b2e = 0
sub_140b65060()
wcsncpy(&data_143db1c30, &data_143e189c0, 0xff)
data_143db1e2e = 0
wcsncpy(&data_143db1e30, sub_140a4fcd0(), 0xff)
data_143db202e = 0
int16_t* _Source_14 = nullptr
int32_t var_160 = 0
PWSTR var_1a8 = nullptr
int32_t var_1a0 = 0
sub_1405947f0(&var_1a8, 0xa)
int32_t rax_7 = var_1a0 + 0xa
var_1a0 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_1a8)

__builtin_memcpy(var_1a8, u"AccountId", 0x14)
int64_t var_1b8 = 0
int32_t var_1b0 = 0
sub_1405947f0(&var_1b8, 0x1a)
int32_t rax_8 = var_1b0 + 0x1a
var_1b0 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_1b8)

__builtin_memcpy(var_1b8, u"Unreal Engine/Identifiers", 0x34)
int64_t var_1c8 = 0
int32_t var_1c0 = 0
sub_1405947f0(&var_1c8, 0xb)
int32_t rax_9 = var_1c0 + 0xb
var_1c0 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_1c8)

__builtin_wcscpy(var_1c8, u"Epic Games")
sub_140b6c580(&var_1c8, &var_1b8, &var_1a8, &_Source_14)
int64_t rcx_17 = var_1c8

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = var_1b8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

PWSTR rcx_19 = var_1a8

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int16_t* const _Source_3 = &data_142d40450

if (var_160 != 0)
    _Source_3 = _Source_14

wcsncpy(&data_143db2030, _Source_3, 0x3f)
int16_t* _Source_21 = _Source_14
data_143db20ae = 0

if (_Source_21 != 0)
    sub_140a74f90(_Source_21)

int32_t var_118
sub_140a479a0(&var_118)
int16_t* _Source_15
int32_t var_114
int32_t var_110
int32_t var_10c
int16_t* const _Source_4

if ((var_118 | var_114 | var_110 | var_10c) != 0)
    int64_t var_b8
    sub_140a35790(sub_140b291e0(&var_118, &var_b8, 0), &_Source_15)
    int64_t rcx_23 = var_b8
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    _Source_4 = _Source_15
    int32_t var_150
    
    if (var_150 == 0)
        _Source_4 = &data_142d40450
else
    _Source_15 = nullptr
    int64_t var_150_1 = 0
    _Source_4 = &data_142d40450

wcsncpy(&data_143db20b0, _Source_4, 0x3f)
int16_t* _Source_22 = _Source_15
data_143db212e = 0

if (_Source_22 != 0)
    sub_140a74f90(_Source_22)

int16_t* _Source_17 = nullptr
int32_t var_120 = 0
int16_t* _Source_16 = nullptr
int32_t var_130 = 0
sub_140b69ab0(&_Source_17, &_Source_16)
int16_t* const _Source_5 = &data_142d40450

if (var_120 != 0)
    _Source_5 = _Source_17

wcsncpy(&data_143db2130, _Source_5, 0x3f)
int16_t* const _Source_6 = &data_142d40450
data_143db21ae = 0

if (var_130 != 0)
    _Source_6 = _Source_16

wcsncpy(&data_143db21b0, _Source_6, 0x3f)
data_143db222e = 0
data_143db1910 = sub_140b70ca0()
data_143db1914 = sub_140b70da0()
int64_t var_a8
int64_t* rax_17 = sub_140b67340(&var_a8)
wchar16* _Source_7

if (rax_17[1].d == 0)
    _Source_7 = &data_142d40450
else
    _Source_7 = *rax_17

wcsncpy(&data_143db2230, _Source_7, 0x3f)
int64_t rcx_26 = var_a8
data_143db22ae = 0

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t var_98
int64_t* rax_18 = sub_140b67260(&var_98)
wchar16* _Source_8

if (rax_18[1].d == 0)
    _Source_8 = &data_142d40450
else
    _Source_8 = *rax_18

wcsncpy(&data_143db22b0, _Source_8, 0x3f)
int64_t rcx_28 = var_98
data_143db232e = 0

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t var_88
int64_t* rax_19 = sub_140b6b840(&var_88)
wchar16* _Source_9

if (rax_19[1].d == 0)
    _Source_9 = &data_142d40450
else
    _Source_9 = *rax_19

wcsncpy(&data_143db2330, _Source_9, 0x3f)
int64_t rcx_30 = var_88
data_143db23ae = 0

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

rcx_30.b = 1
wcsncpy(&data_143db23b0, sub_140b73b20(rcx_30.b), 0x3f)
data_143db242e = 0
int64_t var_78
int64_t* rax_21 = sub_140b678b0(&var_78)
wchar16* _Source_10

if (rax_21[1].d == 0)
    _Source_10 = &data_142d40450
else
    _Source_10 = *rax_21

wcsncpy(&data_143db2430, _Source_10, 0x3f)
int64_t rcx_32 = var_78
data_143db24ae = 0

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

if (sub_140af87b0() != 0)
    data_143db1903 = sub_140af85a0()
    wchar16* _Source
    
    if (sub_140af87b0() == 0)
        _Source = &data_142d40450
    else
        _Source = sub_140af4ba0()
    
    wcsncpy(&data_143db2630, _Source, 0x3ff)
    bool cond:4_1 = data_143de5426 == 0
    wchar16 const* const _Source_11 = u"Commandlet"
    data_143db2e2e = 0
    
    if (cond:4_1)
        _Source_11 = u"Game"
    
    wcsncpy(&data_143db19b0, _Source_11, 0x3f)
    data_143db1a2e = 0
    wcsncpy(&data_143db1a30, u"Unset", 0x3f)
    data_143db1aae = 0
    sub_140af2b60()
    sub_140b2b020(&data_143dbb3f0, u"EPICAPP=", &data_143db1bb0, 0x40, 1)
    data_143db191c = 0
    
    if (sub_140af87b0() != 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"fullcrashdumpalways") == 0)
            char rax_27 = sub_140b21a10(&data_143dbb3f0, u"fullcrashdump")
            int32_t rcx_33 = data_143db191c
            
            if (rax_27 != 0)
                rcx_33 = 1
            
            data_143db191c = rcx_33
        else
            data_143db191c = 2

void var_68
sub_140b214c0(&var_68)
int64_t var_1d8 = 0
int32_t var_1d0 = 0
sub_1405947f0(&var_1d8, 8)

if (var_1d0 + 8 s> 0)
    sub_140594770(&var_1d8)

int16_t var_1e8 = 0x3f
sub_1405a7220(var_1d8, 8, "Windows", 8, 0x3f)
int64_t var_58
int64_t* rax_28 = sub_140b291e0(&var_68, &var_58, 0)
int16_t* const rax_29

if (rax_28[1].d == 0)
    rax_29 = &data_142d40450
else
    rax_29 = *rax_28

var_1e8.q = rax_29
int16_t* _Source_19
sub_140a2e390(&_Source_19, u"%s%s-%s", u"UE4CC-")
int16_t* const _Source_12 = &data_142d40450
int32_t var_f0

if (var_f0 != 0)
    _Source_12 = _Source_19

wcsncpy(&data_143db24b0, _Source_12, 0x3f)
int16_t* _Source_23 = _Source_19
data_143db252e = 0

if (_Source_23 != 0)
    sub_140a74f90(_Source_23)

int64_t rcx_40 = var_58

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

if (data_143de542c != 0)
    int64_t* rsi_1
    
    if (sub_140a80c80() == 0)
        int32_t* var_198 = nullptr
        int32_t var_190_1 = 0
        sub_1405947f0(&var_198, 3)
        int32_t rax_33 = var_190_1 + 3
        var_190_1 = rax_33
        
        if (rax_33 s> 0)
            sub_140594770(&var_198)
        
        int32_t* rcx_44 = var_198
        *rcx_44 = 0x6e0065
        rcx_44[1].w = 0
        int64_t* var_e8
        sub_140a783a0(sub_140a752e0(), &var_e8, &var_198)
        int32_t* rcx_46 = var_198
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
        
        int64_t* rcx_47 = var_e8
        
        if (rcx_47 == 0)
            data_143db190c = 0x409
        else
            data_143db190c = Concurrency::details::_Context::_IsSynchronouslyBlocked(rcx_47)
        
        int64_t* var_e0
        rsi_1 = var_e0
    else
        char* rax_31 = sub_140a752e0()
        rsi_1 = *(rax_31 + 0x30)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        data_143db190c = Concurrency::details::_Context::_IsSynchronouslyBlocked(*(rax_31 + 0x28))
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rbx_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

void*** var_188 = nullptr
void*** rax_39 = sub_140a84c80(0, 0x20, 0)
var_188 = rax_39
int32_t var_180 = 2

if (rax_39 != 0)
    *rax_39 = &data_142e5ffa0
    rax_39[2] = sub_140a387b0()

void arg_8
sub_140a208a0(sub_140b18f30(), &arg_8, &var_188, 0x3f800000)
void*** rax_43

if (var_180 == 0)
    rax_43 = var_188
label_140a49e59:
    
    if (rax_43 != 0)
        sub_140a74f90(rax_43)
else
    void*** rcx_51 = var_188
    
    if (rcx_51 != 0)
        (*rcx_51)[7](rcx_51, 0)
        rax_43 = var_188
        
        if (rax_43 != 0)
            rax_43 = sub_140a84c80(rax_43, 0, 0)
            var_188 = rax_43
        
        int32_t var_180_1 = 0
        goto label_140a49e59
void*** rax_44 = sub_140a84c80(0, 0x20, 0)

if (rax_44 != 0)
    *rax_44 = &data_142e5fff0
    rax_44[2] = sub_140a387b0()
    *rax_44 = &data_142e60048

if (rax_44 != 0)
    sub_140599630(&data_1439a0270, 1)
    void arg_10
    (*rax_44)[6](rax_44, &arg_10)
    int64_t rsi_2 = sx.q(data_1439a0278)
    int32_t rax_47 = (rsi_2 + 1).d
    bool cond:7_1 = rax_47 s<= data_1439a027c
    data_1439a0278 = rax_47
    
    if (not(cond:7_1))
        sub_1405a4f90(&data_1439a0270)
    
    void**** rax_50 = (rsi_2 << 4) + data_1439a0270
    *rax_50 = rax_44
    rax_50[1].d = 2

void*** rax_51 = sub_140a84c80(0, 0x20, 0)

if (rax_51 != 0)
    *rax_51 = &data_142e600a0
    rax_51[2] = sub_140a387b0()
    *rax_51 = &data_142e600f8

if (rax_51 != 0)
    sub_140599630(&data_1439a0288, 1)
    void arg_18
    (*rax_51)[6](rax_51, &arg_18)
    int64_t rsi_3 = sx.q(data_1439a0290)
    int32_t rax_54 = (rsi_3 + 1).d
    bool cond:8_1 = rax_54 s<= data_1439a0294
    data_1439a0290 = rax_54
    
    if (not(cond:8_1))
        sub_1405a4f90(&data_1439a0288)
    
    void**** rax_57 = (rsi_3 << 4) + data_1439a0288
    *rax_57 = rax_51
    rax_57[1].d = 2

void*** rax_58 = sub_140a84c80(0, 0x20, 0)

if (rax_58 != 0)
    *rax_58 = &data_142e60150
    rax_58[2] = sub_140a387b0()
    *rax_58 = &data_142e601a8

if (rax_58 != 0)
    sub_140599630(&data_1439a02a0, 1)
    void arg_20
    (*rax_58)[6](rax_58, &arg_20)
    int64_t rsi_4 = sx.q(data_1439a02a8)
    int32_t rax_61 = (rsi_4 + 1).d
    bool cond:9_1 = rax_61 s<= data_1439a02ac
    data_1439a02a8 = rax_61
    
    if (not(cond:9_1))
        sub_1405a4f90(&data_1439a02a0)
    
    void**** rax_64 = (rsi_4 << 4) + data_1439a02a0
    *rax_64 = rax_58
    rax_64[1].d = 2

void*** rax_65 = sub_140a84c80(0, 0x20, 0)

if (rax_65 != 0)
    *rax_65 = &data_142e60200
    rax_65[2] = sub_140a387b0()
    *rax_65 = &data_142e60258

if (rax_65 != 0)
    sub_140599630(&data_1439a02b8, 1)
    void var_d8
    (*rax_65)[6](rax_65, &var_d8)
    int64_t rsi_5 = sx.q(data_1439a02c0)
    int32_t rax_68 = (rsi_5 + 1).d
    bool cond:10_1 = rax_68 s<= data_1439a02c4
    data_1439a02c0 = rax_68
    
    if (not(cond:10_1))
        sub_1405a4f90(&data_1439a02b8)
    
    void**** rax_71 = (rsi_5 << 4) + data_1439a02b8
    *rax_71 = rax_65
    rax_71[1].d = 2

int64_t* var_148 = nullptr
int32_t var_140 = 0
void*** rax_72 = sub_1405978f0(0x18, &var_148)

if (rax_72 != 0)
    *rax_72 = &data_142e602b0
    rax_72[2] = sub_140a387b0()
    *rax_72 = &data_142e60308

void var_d0
sub_140a3dfa0(&data_14399fca0, &var_d0, &var_148)
int64_t* rax_75

if (var_140 == 0)
    rax_75 = var_148
label_140a4a137:
    
    if (rax_75 != 0)
        sub_140a74f90(rax_75)
else
    int64_t* rbx_8 = var_148
    
    if (rbx_8 != 0)
        (*(*rbx_8 + 0x38))(rbx_8, 0)
        rax_75 = sub_140a84c80(rbx_8, 0, 0)
        goto label_140a4a137
int64_t* var_178 = nullptr
int32_t var_170 = 0
void*** rax_76 = sub_1405978f0(0x18, &var_178)

if (rax_76 != 0)
    *rax_76 = &data_142e60360
    rax_76[2] = sub_140a387b0()
    *rax_76 = &data_142e603b8

if (var_170 != 0)
    int64_t* rbx_10 = var_178
    
    if (rbx_10 != 0)
        sub_140599630(&data_1439a02d0, 1)
        void var_c8
        (*(*rbx_10 + 0x30))(rbx_10, &var_c8)
        int64_t rsi_6 = sx.q(data_1439a02d8)
        int32_t rax_79 = (rsi_6 + 1).d
        bool cond:11_1 = rax_79 s<= data_1439a02dc
        data_1439a02d8 = rax_79
        
        if (not(cond:11_1))
            sub_1405a4f90(&data_1439a02d0)
        
        var_178 = nullptr
        int64_t** rax_82 = (rsi_6 << 4) + data_1439a02d0
        int32_t var_170_1 = 0
        *rax_82 = rbx_10
        rax_82[1].d = var_170

sub_140745b20(&var_178)
void var_c0
sub_1405966e0(&data_1439a02e8, &var_c0, sub_140a4a2c0)
int64_t var_48
int16_t** rax_83 = sub_140a46530(&var_48)

if (rax_83[1].d != 0)
    _Source_13 = *rax_83

wcsncpy(&data_143db3544, _Source_13, 0xff)
int64_t rcx_64 = var_48
data_143db3742 = 0

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

data_143db3540 = sub_140a4aa30() != 0
sub_140a52b20()
int64_t result = sub_140b5d000()
int64_t rcx_65 = var_1d8
data_143d796d0 = 1

if (rcx_65 != 0)
    result = sub_140a74f90(rcx_65)

int16_t* _Source_24 = _Source_16

if (_Source_24 != 0)
    result = sub_140a74f90(_Source_24)

int16_t* _Source_25 = _Source_17

if (_Source_25 == 0)
    return result

return sub_140a74f90(_Source_25)
