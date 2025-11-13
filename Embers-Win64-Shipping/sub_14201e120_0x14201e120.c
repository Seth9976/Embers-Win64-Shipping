// 函数: sub_14201e120
// 地址: 0x14201e120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x150))()
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0xe)
int32_t rax_1 = var_50 + 0xe
var_50 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_58)

int64_t rsi = var_58
UnDecorator::getReferenceType(rsi, u"SpectatorOnly", 0x1c)
int16_t* _String_4
void var_38
sub_142035500(&_String_4, sub_140596d10(&var_38, arg3), &var_58)
int16_t* const _String_1 = &data_142d40450
int32_t var_40
int64_t rdx_3
int32_t r14

if (var_40 s<= 1)
    int16_t* _String_5 = _String_4
    
    if (_String_5 != 0)
        sub_140a74f90(_String_5)
    
    r14 = 0
else
    int16_t* _String_2 = _String_4
    int16_t* const _String = &data_142d40450
    
    if (var_40 != 0)
        _String = _String_2
    
    int32_t rax_4
    rax_4, rdx_3 = _wtoi(_String)
    r14 = rax_4
    
    if (_String_2 != 0)
        sub_140a74f90(_String_2)

if (rsi != 0)
    sub_140a74f90(rsi)

rdx_3.b = r14 == 1

if ((*(*arg1 + 0x658))(arg1, rdx_3) == 0)
    var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 0x11)
    int32_t rax_8 = var_50_1 + 0x11
    var_50_1 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_58)
    
    int64_t r14_1 = var_58
    UnDecorator::getReferenceType(r14_1, u"SplitscreenCount", 0x22)
    sub_142035500(&_String_4, sub_140596d10(&var_38, arg3), &var_58)
    int32_t rsi_1
    
    if (var_40 s<= 1)
        int16_t* _String_6 = _String_4
        
        if (_String_6 != 0)
            sub_140a74f90(_String_6)
        
        rsi_1 = 0
    else
        int16_t* _String_3 = _String_4
        
        if (var_40 != 0)
            _String_1 = _String_3
        
        rsi_1 = _wtoi(_String_1)
        
        if (_String_3 != 0)
            sub_140a74f90(_String_3)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    uint32_t rax_12 = zx.d(*(arg1 + 0x22c))
    *arg2 = 0
    arg2[1] = 0
    
    if (rsi_1 s> rax_12)
        sub_1405947f0(arg2, 0x1c)
        int32_t rax_13 = arg2[1].d + 0x1c
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"Maximum splitscreen players", 0x38)
else
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 0xd)
    int32_t rax_7 = arg2[1].d + 0xd
    arg2[1].d = rax_7
    
    if (rax_7 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"Server full.", 0x1a)

return arg2
