// 函数: sub_140a41470
// 地址: 0x140a41470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
wchar16 var_128[0x80]
sub_1405a6010(&var_128, 0x80, u"%s_%04i", arg1)
char result = sub_140af87b0()

if (result != 0)
    int64_t* rax_2 = sub_140b257f0()
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rcx_1
    
    if (rax_2[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *rax_2
    
    int16_t* const var_148 = rcx_1
    uint64_t var_158 = 0
    wchar16 const* const var_140_1 = u"Crashes"
    int32_t var_150_1 = 0
    wchar16 (* var_138_1)[0x80] = &var_128
    sub_140b0f5f0(&var_158, &var_148, 3)
    sub_140a464c0()
    int16_t* const r8 = &data_142d40450
    
    if (var_150_1 != 0)
        r8 = var_158
    
    char const (* r9_1)[0x4] = data_14399ea08
    int16_t** rax_3 = (*(r9_1 + 0x100))(&data_14399ea08, &var_148, r8, r9_1, arg2)
    
    if (arg3 != rax_3)
        int16_t* rcx_3 = *arg3
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg3 = *rax_3
        *rax_3 = nullptr
        arg3[1].d = rax_3[1].d
        *(arg3 + 0xc) = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    int16_t* const rcx_5 = var_148
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_140a464c0()
    
    if (arg3[1].d != 0)
        rsi_1 = *arg3
    
    int64_t r8_1
    r8_1.b = 1
    char result_1 = (*(data_14399ea08 + 0x58))(&data_14399ea08, rsi_1, r8_1)
    uint64_t rcx_6 = var_158
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_188)
return result
