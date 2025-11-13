// 函数: sub_140fca4c0
// 地址: 0x140fca4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int16_t* var_68 = nullptr
int32_t var_5c = 0
int32_t rdx = 0
int32_t var_60 = 0
int32_t r9 = 0
int64_t rdi = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_1.d + 1)
        r9 = var_5c
        rdx = var_60
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_60 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, arg2, (rbx_1.d + 1) * 2)

int16_t* _String_2 = nullptr
int32_t var_50 = 0
int16_t* _String_1 = nullptr
int32_t rsi_1 = 0
sub_1405947f0(&_String_2, 2)
int32_t rbx_3 = var_50 + 2

if (rbx_3 s> 0)
    sub_140594770(&_String_2)

int16_t* _String_8 = _String_2
sub_1405a7220(_String_8, 2, &data_142d6bc34, 2, 0x3f)
int16_t* const _String_9 = &data_142d40450

if (rbx_3 != 0)
    _String_9 = _String_8

int32_t rax_2 = sub_140a23cf0(&var_68, _String_9, 1, 0, 0xffffffff)

if (_String_8 != 0)
    sub_140a74f90(_String_8)

_String_2 = nullptr
int32_t var_50_1 = 0
sub_1405947f0(&_String_2, 2)
int32_t rbx_4 = var_50_1 + 2

if (rbx_4 s> 0)
    sub_140594770(&_String_2)

int16_t* _String_6 = _String_2
sub_1405a7220(_String_6, 2, &data_142d6bc34, 2, 0x3f)
int16_t* _String_10 = &data_142d40450

if (rbx_4 != 0)
    _String_10 = _String_6

int32_t rax_3 = sub_140a23cf0(&var_68, _String_10, 1, 1, 0xffffffff)

if (_String_6 != 0)
    sub_140a74f90(_String_6)

_String_2 = nullptr
int64_t var_50_2 = 0
sub_1405947f0(&_String_2, 3)
int32_t rbx_5 = var_50_2.d + 3
var_50_2.d = rbx_5

if (rbx_5 s> 0)
    sub_140594770(&_String_2)
    rbx_5 = var_50_2.d

int16_t* _String_7 = _String_2
sub_1405a7220(_String_7, 3, "]:", 3, 0x3f)
int16_t* _String_11 = &data_142d40450

if (rbx_5 != 0)
    _String_11 = _String_7

if (sub_140a23cf0(&var_68, _String_11, 1, 0, 0xffffffff) != 0xffffffff
        || (rax_2 == rax_3 && rax_3 != 0xffffffff))
    rbx_5.b = 1
else
    rbx_5.b = 0

if (_String_7 != 0)
    sub_140a74f90(_String_7)

if (rbx_5.b != 0)
    int32_t rdx_6 = var_60
    int16_t* r10_1 = var_68
    int32_t rcx_18
    int16_t* r11_1
    
    if (rdx_6 == 0)
        rcx_18 = 0
        r11_1 = &data_142d40450
    else
        rcx_18 = rdx_6 - 1
        r11_1 = r10_1
    
    int32_t rax_6 = rcx_18 - rax_3
    int32_t r8_2
    
    if (rax_6 - 1 s>= 0)
        r8_2 = rcx_18
        
        if (rax_6 s<= rcx_18)
            r8_2 = rax_6 - 1
    else
        r8_2 = 0
    
    _String_1 = nullptr
    rsi_1 = 0
    _String_2 = nullptr
    int32_t rax_8 = 0
    var_50_2.d = 0
    var_50_2:4.d = 0
    int16_t* rbx_6 = &r11_1[sx.q(rcx_18) - sx.q(r8_2)]
    
    if (rbx_6 != 0 && *rbx_6 != 0)
        do
            rdi += 1
        while (rbx_6[rdi] != 0)
        
        if (rdi.d + 1 s> 0)
            sub_1405947f0(&_String_2, rdi.d + 1)
            rax_8 = var_50_2:4.d
            rsi_1 = var_50_2.d
            _String_1 = _String_2
        
        rsi_1 += rdi.d + 1
        var_50_2.d = rsi_1
        
        if (rsi_1 s> rax_8)
            sub_140594770(&_String_2)
            rsi_1 = var_50_2.d
            _String_1 = _String_2
        
        UnDecorator::getReferenceType(_String_1, rbx_6, (rdi.d + 1) * 2)
        rdx_6 = var_60
        r10_1 = var_68
    
    int32_t rax_9 = rdx_6 - 1
    
    if (rdx_6 == 0)
        rax_9 = 0
    
    int32_t r9_2
    
    if (rax_3 s>= 0)
        r9_2 = rax_9
        
        if (rax_3 s< rax_9)
            r9_2 = rax_3
    else
        r9_2 = 0
    
    int32_t rax_10 = rax_9 - r9_2
    int32_t rbx_7 = rdx_6 - 1
    
    if (rdx_6 == 0)
        rbx_7 = 0
    
    int32_t rbx_8 = rbx_7 - r9_2
    
    if (rax_10 s>= 0)
        if (rax_10 s< rbx_8)
            rbx_8 = rax_10
        
        if (rbx_8 != 0)
            int32_t rax_12 = rdx_6 - r9_2
            
            if (rax_12 != rbx_8)
                memmove(&r10_1[sx.q(r9_2)], &r10_1[sx.q(r9_2 + rbx_8)], (rax_12 - rbx_8) * 2)
                rdx_6 = var_60
            
            int32_t var_60_1 = rdx_6 - rbx_8

_String_2 = nullptr
int32_t var_50_3 = 0
sub_1405947f0(&_String_2, 2)
int32_t rax_16 = var_50_3 + 2
var_50_3 = rax_16

if (rax_16 s> 0)
    sub_140594770(&_String_2)

sub_1405a7220(_String_2, 2, U"[", 2, 0x3f)
sub_140a2fba0(&var_68, &_String_2, 1)
int16_t* _String_3 = _String_2

if (_String_3 != 0)
    sub_140a74f90(_String_3)

_String_2 = nullptr
int64_t* var_50_4 = nullptr
sub_1405947f0(&_String_2, 2)
int32_t rax_17 = var_50_4.d + 2
var_50_4.d = rax_17

if (rax_17 s> 0)
    sub_140594770(&_String_2)

sub_1405a7220(_String_2, 2, &(*U"},{]")[3], 2, 0x3f)
uint64_t result = sub_140a2f8e0(&var_68, &_String_2, 1)
int16_t* _String_4 = _String_2

if (_String_4 != 0)
    result = sub_140a74f90(_String_4)

int64_t* rcx_34 = arg1[0x11]

if (rcx_34 != 0)
    result = (*(*rcx_34 + 0x58))(rcx_34, &_String_2, &var_68)
    int16_t* _String_5 = _String_2
    
    if (_String_5 != 0)
        *arg3 = 1
        int64_t var_48
        result = (*(*arg1 + 0x50))(arg1, (*(*_String_5 + 0x58))(_String_5, &var_48))
        int64_t rcx_36 = var_48
        
        if (rcx_36 != 0)
            result = sub_140a74f90(rcx_36)
        
        if (rsi_1 s> 1)
            int16_t* _String = &data_142d40450
            
            if (rsi_1 != 0)
                _String = _String_1
            
            int32_t rax_22 = _wtoi(_String)
            int64_t r8_8 = *arg1
            result = (*(r8_8 + 0x28))(arg1, zx.q(rax_22), r8_8)
    
    if (var_50_4 != 0)
        var_50_4[1].d -= 1
        
        if (var_50_4[1].d == 1)
            result = (**var_50_4)(var_50_4)
            int32_t temp1_1 = *(var_50_4 + 0xc)
            *(var_50_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_50_4 + 8))(var_50_4, 1)

if (_String_1 != 0)
    result = sub_140a74f90(_String_1)

int16_t* rcx_41 = var_68

if (rcx_41 == 0)
    return result

return sub_140a74f90(rcx_41)
