// 函数: sub_140b1bef0
// 地址: 0x140b1bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* _String_2
int64_t* rax =
    sub_140af5b50(data_143ddb400, &_String_2, &data_142e74a30, Protocol", &data_143de5780)

if (arg1 != rax)
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg1 = *rax
    *rax = 0
    arg1[1].d = rax[1].d
    *(arg1 + 0xc) = *(rax + 0xc)
    rax[1] = 0

int16_t* _String_3 = _String_2

if (_String_3 != 0)
    sub_140a74f90(_String_3)

int64_t* rax_3 = sub_140af5b50(data_143ddb400, &_String_2, &data_142e74a30, Name", &data_143de5780)

if (&arg1[2] != rax_3)
    int64_t rcx_4 = arg1[2]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    arg1[2] = *rax_3
    *rax_3 = 0
    arg1[3].d = rax_3[1].d
    *(arg1 + 0x1c) = *(rax_3 + 0xc)
    rax_3[1] = 0

int16_t* _String_4 = _String_2

if (_String_4 != 0)
    sub_140a74f90(_String_4)

int64_t* rax_6 = sub_140af5b50(data_143ddb400, &_String_2, &data_142e74a30, Host", &data_143de5780)

if (&arg1[4] != rax_6)
    int64_t rcx_7 = arg1[4]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    arg1[4] = *rax_6
    *rax_6 = 0
    arg1[5].d = rax_6[1].d
    *(arg1 + 0x2c) = *(rax_6 + 0xc)
    rax_6[1] = 0

int16_t* _String_5 = _String_2

if (_String_5 != 0)
    sub_140a74f90(_String_5)

int64_t* rax_9 =
    sub_140af5b50(data_143ddb400, &_String_2, &data_142e74a30, Portal", &data_143de5780)

if (&arg1[6] != rax_9)
    int64_t rcx_10 = arg1[6]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg1[6] = *rax_9
    *rax_9 = 0
    arg1[7].d = rax_9[1].d
    *(arg1 + 0x3c) = *(rax_9 + 0xc)
    rax_9[1] = 0

int16_t* _String_6 = _String_2

if (_String_6 != 0)
    sub_140a74f90(_String_6)

int64_t* rax_12 =
    sub_140af5b50(data_143ddb400, &_String_2, &data_142e74a30, SaveExt", &data_143de5780)

if (&arg1[8] != rax_12)
    int64_t rcx_13 = arg1[8]
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    arg1[8] = *rax_12
    *rax_12 = 0
    arg1[9].d = rax_12[1].d
    *(arg1 + 0x4c) = *(rax_12 + 0xc)
    rax_12[1] = 0

int16_t* _String_7 = _String_2

if (_String_7 != 0)
    sub_140a74f90(_String_7)

_String_2 = nullptr
int32_t var_20 = 0
sub_140af2b60()
int16_t* _String_1
int32_t rsi

if (sub_140b2acc0(&data_143dbb3f0, u"Port=", &_String_2, 1) != 0)
    rsi = var_20
    _String_1 = _String_2
else
    int64_t var_18
    int64_t* rax_16 =
        sub_140af5b50(data_143ddb400, &var_18, &data_142e74a30, Port", &data_143de5780)
    
    if (&_String_2 == rax_16)
        rsi = var_20
        _String_1 = _String_2
    else
        int16_t* _String_8 = _String_2
        
        if (_String_8 != 0)
            sub_140a74f90(_String_8)
        
        _String_1 = *rax_16
        *rax_16 = 0
        rsi = rax_16[1].d
        rax_16[1] = 0
    
    int64_t rcx_16 = var_18
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

int16_t* const _String = &data_142d40450

if (rsi != 0)
    _String = _String_1

int32_t result = _wtoi(_String)
arg1[0xa].d = result

if (_String_1 == 0)
    return result

return sub_140a74f90(_String_1)
