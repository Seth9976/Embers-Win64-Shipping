// 函数: sub_140fc93c0
// 地址: 0x140fc93c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t* var_18 = __security_cookie ^ &var_1e8
int64_t* result

if (arg1[0x10].b != 0)
    result.b = 0
else
    arg1[0x10].b = 1
    WSADATA wSAData
    result = WSAStartup(0x101, &wSAData)
    
    if (result.d != 0)
        int64_t var_1c8
        sub_140a2e390(&var_1c8, WSAStartup failed (%s)", 
            sub_140fc89f0(arg1, (*(*arg1 + 0xc0))(arg1, zx.q(result.d))))
        
        if (arg2 == &var_1c8)
            int64_t rcx_7 = var_1c8
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
        else
            int64_t rcx_3 = *arg2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            *arg2 = var_1c8
            int32_t var_1c0
            arg2[1].d = var_1c0
            int32_t var_1bc
            *(arg2 + 0xc) = var_1bc
        
        result.b = 0
    else
        result.b = 1

__security_check_cookie(var_18 ^ &var_1e8)
return result
