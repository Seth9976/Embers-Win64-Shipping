// 函数: sub_140b36410
// 地址: 0x140b36410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rdi = **(arg1 + 8)
int64_t* result

if (rdi != 0)
    sub_140b30d60(arg2, rdi + 8)
    void* rsi_1 = *(arg1 + 8)
    *(arg1 + 8) = rdi
    int64_t rcx_1 = 0
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x18)
    int32_t var_30
    
    if (rdi + 8 != &var_78)
        sub_140a642d0(rdi + 8, &var_78)
        int64_t var_38
        int64_t var_40
        
        if (var_38 == 0)
            memmove(rdi + 0x40, &var_40, 4)
        int64_t rcx_4 = *(rdi + 0x48)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *(rdi + 0x48) = var_38
        int64_t var_38_1 = 0
        *(rdi + 0x50) = var_30
        rcx_1 = var_38_1
    
    var_30 = 0
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_1405e1b50(&var_78, 0)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rsi_1 != 0)
        *(rsi_1 + 0x50) = 0
        int64_t rcx_8 = *(rsi_1 + 0x48)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        sub_1405e1b50(rsi_1 + 8, 0)
        int64_t rcx_10 = *(rsi_1 + 0x28)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *(rsi_1 + 8)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        j_sub_140a74f90(rsi_1)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
