// 函数: sub_140b21b90
// 地址: 0x140b21b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
sub_140a300d0(arg1, &var_48, &data_142d404b0, &data_142d404d4, 1)
sub_140a306e0(&var_48, &data_142d84ee0, &data_142d404d4, 0)
sub_140a306e0(&var_48, &data_142d404c4, &data_142d404d4, 0)
int32_t rsi = 0
int64_t* var_58 = nullptr
int32_t i_2 = 0
sub_140a2ccb0(&var_48, &var_58, &data_142d404d4, 1)

if (i_2 - 6 u> 1)
    rsi.b = 0
else
    int64_t* rax_2 = var_58
    int16_t* const _String_6 = &data_142d40450
    wchar16* _String
    
    if (rax_2[1].d == 0)
        _String = &data_142d40450
    else
        _String = *rax_2
    
    int32_t rax_3 = _wtoi(_String)
    int64_t* rcx_3 = var_58
    wchar16* _String_1
    
    if (rcx_3[3].d == 0)
        _String_1 = &data_142d40450
    else
        _String_1 = rcx_3[2]
    
    int32_t rax_4 = _wtoi(_String_1)
    int64_t* rcx_4 = var_58
    wchar16* _String_2
    
    if (rcx_4[5].d == 0)
        _String_2 = &data_142d40450
    else
        _String_2 = rcx_4[4]
    
    int32_t rax_5 = _wtoi(_String_2)
    int64_t* rcx_5 = var_58
    wchar16* _String_3
    
    if (rcx_5[7].d == 0)
        _String_3 = &data_142d40450
    else
        _String_3 = rcx_5[6]
    
    int32_t rax_6 = _wtoi(_String_3)
    int64_t* rcx_6 = var_58
    wchar16* _String_4
    
    if (rcx_6[9].d == 0)
        _String_4 = &data_142d40450
    else
        _String_4 = rcx_6[8]
    
    int32_t rax_7 = _wtoi(_String_4)
    int64_t* rcx_7 = var_58
    wchar16* _String_5
    
    if (rcx_7[0xb].d == 0)
        _String_5 = &data_142d40450
    else
        _String_5 = rcx_7[0xa]
    
    int32_t rax_8 = _wtoi(_String_5)
    
    if (i_2 s> 6)
        int64_t* rax_9 = var_58
        
        if (rax_9[0xd].d != 0)
            _String_6 = rax_9[0xc]
        
        rsi = _wtoi(_String_6)
    
    if (rax_3 - 1 u> 0x270e || rax_4 - 1 u> 0xb || rax_5 s< 1)
        rsi.b = 0
    else if (rax_5 s> sub_140b12d60(rax_3, rax_4) || rax_6 u> 0x17 || rax_7 u> 0x3b || rax_8 u> 0x3b
            || rsi u> 0x3e7)
        rsi.b = 0
    else
        void arg_18
        int64_t* rax_14 = sub_140b0a2c0(&arg_18, rax_3, rax_4, rax_5, rax_6, rax_7, rax_8, rsi)
        rsi.b = 1
        *arg2 = *rax_14

int32_t i_1 = i_2
int64_t* rbx_1 = var_58

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_12 = *rbx_1
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_58

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return zx.q(rsi.b)
