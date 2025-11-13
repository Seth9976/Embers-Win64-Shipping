// 函数: sub_140fcbb40
// 地址: 0x140fcbb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_2 = 0
int64_t rsi

if (sub_140a2ccb0(arg1, &var_18, &data_142d404c4, 0) != 4)
    rsi.b = 0
else
    int64_t* rax_1 = var_18
    int16_t* const _String_3 = &data_142d40450
    wchar16* _String
    
    if (rax_1[1].d == 0)
        _String = &data_142d40450
    else
        _String = *rax_1
    
    char rax_2 = _wtoi(_String)
    int64_t* rcx = var_18
    arg2[3] = rax_2
    wchar16* _String_1
    
    if (rcx[3].d == 0)
        _String_1 = &data_142d40450
    else
        _String_1 = rcx[2]
    
    char rax_3 = _wtoi(_String_1)
    int64_t* rcx_1 = var_18
    arg2[2] = rax_3
    wchar16* _String_2
    
    if (rcx_1[5].d == 0)
        _String_2 = &data_142d40450
    else
        _String_2 = rcx_1[4]
    
    arg2[1] = _wtoi(_String_2)
    int64_t* rax_5 = var_18
    
    if (rax_5[7].d != 0)
        _String_3 = rax_5[6]
    
    *arg2 = _wtoi(_String_3)
    rsi.b = 1

int32_t i_1 = i_2
int64_t* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rsi.b)
