// 函数: sub_140bcd790
// 地址: 0x140bcd790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t var_68
int64_t var_60
int64_t var_58
sub_140bd0600(arg1, arg2, &var_68, &var_60, arg5, &var_58)
int32_t rcx = arg1[3].d
uint64_t result
int16_t* var_50

if (((rcx u>> 0x10).b & 1) == 0)
    int32_t var_48
    
    if (((rcx u>> 0xb).b & 1) != 0)
        sub_140b0f020(&var_50, arg4, &data_143e1a878)
    else if (((rcx u>> 8).b & 1) != 0)
        int64_t* r8_1
        
        if ((not.b(rcx.b) & 1) == 0)
            r8_1 = &data_143e1a868
            
            if (((rcx u>> 0xc).b & 1) == 0)
                r8_1 = &data_143e1a858
        else
            r8_1 = &data_143e1a848
        
        sub_140b0f020(&var_50, arg4, r8_1)
    else
        int32_t rsi_1 = arg4[1].d
        int64_t rbx_1 = *arg4
        var_50 = nullptr
        var_48 = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_50, rsi_1, 0)
            memcpy(var_50, rbx_1, rsi_1 * 2)
        else
            int32_t var_44_1 = 0
    
    sub_140a464c0()
    int16_t* const rdx_4 = &data_142d40450
    
    if (var_48 != 0)
        rdx_4 = var_50
    
    char const (* r8_4)[0x4] = data_14399ea08
    result = (*(r8_4 + 0x48))(&data_14399ea08, rdx_4, r8_4)
    
    if (result.b != 0)
        arg1[3].d = var_68
        *arg6 = var_60
        *arg7 = var_58
        arg1[1].d = 0xffffffff
        result = *arg6
        *arg1 = result
    
    int16_t* rcx_7 = var_50
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
else
    int64_t rcx_1 = -1
    
    if (var_60 s> 0)
        rcx_1 = var_58
    
    void* rcx_2 = data_143e1a8d8
    int64_t var_3c_1 = 0x80000000000000 + rcx_1
    var_3c_1:7.b = 4
    var_50 = (*(arg3 + 0x54)).q
    result = sub_140aa6880(rcx_2, &var_50)
    
    if (result.b != 0)
        int16_t* zmm0_1 = var_50
        arg1[3].d = var_68 | 0x10000
        *arg6 = var_60
        *arg7 = var_58
        result = zx.q(var_3c_1:4.d)
        *arg1 = zmm0_1
        arg1[1].d = result.d
__security_check_cookie(rax_1 ^ &var_98)
return result
