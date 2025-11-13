// 函数: sub_14078bc80
// 地址: 0x14078bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t var_18 = __security_cookie ^ &var_e8
int32_t var_c8 = 0
uint64_t result

if (arg2 == 0)
    result.b = 0
else
    int64_t var_68
    int64_t* rax_1 = sub_14078a590(arg1 + 0x30, &var_68, arg2 + 0x30)
    char r8_2 = 1
    *(rax_1 + 0x34)
    int64_t var_b8
    int64_t* rax_4
    
    if (rax_1[1].d == *(rax_1 + 0x34))
        rax_4 = sub_14078a590(arg1 + 0x80, &var_b8, arg2 + 0x80)
        r8_2 = 3
        *(rax_4 + 0x34)
    
    void* rbx
    
    if (rax_1[1].d != *(rax_1 + 0x34) || rax_4[1].d != *(rax_4 + 0x34))
        rbx.b = 0
    else
        rbx.b = 1
    
    if ((r8_2 & 2) != 0)
        int32_t var_70_1 = 0
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int32_t var_b0_1 = 0
        int32_t var_ac
        
        if (var_ac != 0)
            sub_140638cc0(&var_b8, 0)
        
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        void var_a8
        sub_14059a8e0(&var_a8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t rcx_7 = var_b8
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    int32_t var_20_1 = 0
    int64_t var_28
    
    if (var_28 != 0)
        sub_140a74f90(var_28)
    
    int32_t var_60_1 = 0
    int32_t var_5c
    
    if (var_5c != 0)
        sub_140638cc0(&var_68, 0)
    
    int32_t var_38_1 = 0xffffffff
    int32_t var_34_1 = 0
    void var_58
    sub_14059a8e0(&var_58, 0)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    result = zx.q(rbx.b)

__security_check_cookie(var_18 ^ &var_e8)
return result
