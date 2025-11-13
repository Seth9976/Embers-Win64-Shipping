// 函数: sub_140f6a640
// 地址: 0x140f6a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
void* result = __security_cookie ^ &var_88
void* result_1 = result

if (*(arg1 + 0x800) == 0)
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x14)
    int64_t var_50_1 = 0
    char var_48_1 = 0
    int64_t var_40_1
    __builtin_memset(&var_40_1, 0, 0x18)
    sub_140a96170(&var_68)
    var_48_1 = 0
    int64_t var_40_2 = 0
    int64_t var_38
    var_38.w = 0
    int64_t var_30_1 = (zx.o(0)).q
    int64_t* rbx_1
    int64_t* var_60
    
    if (&var_68 == arg1 + 0x7c0)
        rbx_1 = var_60
    else
        sub_140f89a00(arg1 + 0x7c0)
        rbx_1 = var_60
        *(arg1 + 0x7c0) = var_68
        *(arg1 + 0x7c8) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = var_60
        
        int32_t var_58
        *(arg1 + 0x7d0) = var_58
        *(arg1 + 0x7e0) = 0
        
        if (var_48_1 != 0)
            *(arg1 + 0x7d8) = var_50_1
            *(arg1 + 0x7e0) = 1
        
        var_48_1 = 0
        *(arg1 + 0x7e8) = var_40_2.o
        *(arg1 + 0x7f8) = var_30_1
        *(arg1 + 0x800) = 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))
    
    result = sub_140f7c220(arg1, arg1 + 0x7c0)

__security_check_cookie(result_1 ^ &var_88)
return result
