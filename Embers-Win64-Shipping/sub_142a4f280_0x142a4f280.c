// 函数: sub_142a4f280
// 地址: 0x142a4f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_148 = -2
void var_1c8
char* var_58 = __security_cookie ^ &var_1c8
char* result

if (*arg10 s> 0)
    result.b = 0
else
    void var_160
    void* var_138
    int16_t var_12c
    char var_f8[0x30]
    
    if (arg4 s<= 0)
    label_142a4f503:
        
        if (arg6 s<= 0)
        label_142a4f618:
            var_138 = &var_12c:1
            int32_t var_130_4 = 0x28
            var_12c = 0
            int32_t var_100_4 = 0
            Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_160, &var_138)
            sub_142a4f750(arg1, arg2, 0, 0, 0, 0, nullptr, 0, nullptr, &var_160, arg10)
            sub_142a8cff0(&var_160)
            
            if (*arg10 s> 0)
                goto label_142a4f6aa
            
            result = sub_142a4fa00(var_138, &var_f8, 0x9d, arg10)
            
            if (*arg10 s> 0)
                goto label_142a4f6aa
            
            if (result == 0)
                if (var_12c.b != 0)
                    sub_142a7dcd0(var_138)
                
                result.b = 0
            else
                sub_142a4f750(nullptr, 0, arg3, arg4, arg5, arg6, arg7, arg8, result, arg9, arg10)
                
                if (var_12c.b == 0)
                    result.b = 1
                else
                    sub_142a7dcd0(var_138)
                    result.b = 1
        else
            var_138 = &var_12c:1
            int32_t var_130_3 = 0x28
            var_12c = 0
            int32_t var_100_3 = 0
            Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_160, &var_138)
            sub_142a4f750(arg1, arg2, 0, 0, arg5, arg6, nullptr, 0, nullptr, &var_160, arg10)
            sub_142a8cff0(&var_160)
            
            if (*arg10 s> 0)
                goto label_142a4f6aa
            
            result = sub_142a4fa00(var_138, &var_f8, 0x9d, arg10)
            
            if (*arg10 s> 0)
                goto label_142a4f6aa
            
            if (result == 0)
                if (var_12c.b != 0)
                    sub_142a7dcd0(var_138)
                
                goto label_142a4f618
            
            sub_142a4f750(nullptr, 0, arg3, arg4, 0, 0, arg7, arg8, result, arg9, arg10)
            
            if (var_12c.b == 0)
                result.b = 1
            else
                sub_142a7dcd0(var_138)
                result.b = 1
    else if (arg6 s<= 0)
    label_142a4f406:
        var_138 = &var_12c:1
        int32_t var_130_2 = 0x28
        var_12c = 0
        int32_t var_100_2 = 0
        Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_160, &var_138)
        sub_142a4f750(arg1, arg2, arg3, arg4, 0, 0, nullptr, 0, nullptr, &var_160, arg10)
        sub_142a8cff0(&var_160)
        
        if (*arg10 s> 0)
            goto label_142a4f6aa
        
        result = sub_142a4fa00(var_138, &var_f8, 0x9d, arg10)
        
        if (*arg10 s> 0)
            goto label_142a4f6aa
        
        if (result == 0)
            if (var_12c.b != 0)
                sub_142a7dcd0(var_138)
            
            goto label_142a4f503
        
        sub_142a4f750(nullptr, 0, 0, 0, arg5, arg6, arg7, arg8, result, arg9, arg10)
        
        if (var_12c.b == 0)
            result.b = 1
        else
            sub_142a7dcd0(var_138)
            result.b = 1
    else
        var_138 = &var_12c:1
        int32_t var_130_1 = 0x28
        var_12c = 0
        int32_t var_100_1 = 0
        Concurrency::details::GlobalCore::TopologyObject::TopologyObject(&var_160, &var_138)
        sub_142a4f750(arg1, arg2, arg3, arg4, arg5, arg6, nullptr, 0, nullptr, &var_160, arg10)
        sub_142a8cff0(&var_160)
        
        if (*arg10 s<= 0)
            result = sub_142a4fa00(var_138, &var_f8, 0x9d, arg10)
            
            if (*arg10 s> 0)
                goto label_142a4f6aa
            
            if (result == 0)
                if (var_12c.b != 0)
                    sub_142a7dcd0(var_138)
                
                goto label_142a4f406
            
            sub_142a4f750(nullptr, 0, 0, 0, 0, 0, arg7, arg8, result, arg9, arg10)
            
            if (var_12c.b != 0)
                sub_142a7dcd0(var_138)
            
            result.b = 1
        else
        label_142a4f6aa:
            
            if (var_12c.b != 0)
                sub_142a7dcd0(var_138)
            
            if (*arg10 s> 0)
                result.b = 0
            else
                *arg10 = 1
                result.b = 0

__security_check_cookie(var_58 ^ &var_1c8)
return result
