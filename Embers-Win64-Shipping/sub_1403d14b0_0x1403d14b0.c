// 函数: sub_1403d14b0
// 地址: 0x1403d14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rcx_1 = __security_cookie ^ &var_c8
int32_t var_58
__builtin_strncpy(&var_58, "iTXt", 5)
int64_t var_90 = 0
int128_t var_80
__builtin_memset(&var_80, 0, 0x18)
void* var_70
int64_t result = sub_1403d00e0(arg1, arg3, &var_70)

if (result != 0)
    uint8_t* var_68
    int64_t rax_1 = sub_1403d00e0(arg1, arg4, &var_68)
    
    if (rax_1 == 0)
        png_warning(arg1, "Empty language field in iTXt chunk")
        var_68 = nullptr
    
    int64_t r8_4
    int64_t r15_1
    
    if (arg5 == 0)
        r15_1 = 0
        
        if (arg6 != 0)
            r8_4 = sx.q(MultiByteToWideChar(0, 0, arg6, 0xffffffff, nullptr, 0))
        else
            r8_4 = 0
    else
        r15_1 = sx.q(MultiByteToWideChar(0, 0, arg5, 0xffffffff, nullptr, 0))
        
        if (arg6 == 0)
            r8_4 = 0
        else
            r8_4 = sx.q(MultiByteToWideChar(0, 0, arg6, 0xffffffff, nullptr, 0))
    
    int32_t rax_4 = sub_1403d0330(arg1, arg6, r8_4, zx.q(arg2 - 2), &var_90)
    uint8_t var_50
    
    if (arg1 != 0)
        *(arg1 + 0x4a8) = 0x22
        var_50 = ((rax_4 + r15_1.d + (rax_1 + result).d + 5) u>> 0x18).b
        uint8_t var_4f_1 = ((rax_4 + r15_1.d + (rax_1 + result).d + 5) u>> 0x10).b
        char var_4e_1 = (rax_4 + r15_1.d + (rax_1 + result).d + 5):1.b
        char var_4d_1 = (rax_4 + r15_1.d + (rax_1 + result).d + 5).b
        int32_t var_4c
        __builtin_strncpy(&var_4c, "iTXt", 4)
        sub_1403cc370(arg1, &var_50, 8)
        __builtin_strncpy(arg1 + 0x254, "iTXt", 4)
        sub_1403be750(arg1)
        sub_1403be770(arg1, &var_58, 4)
        *(arg1 + 0x4a8) = 0x42
    
    void* r13_2 = var_70
    
    if (result != -1 && arg1 != 0 && r13_2 != 0)
        sub_1403cc370(arg1, r13_2, result + 1)
        sub_1403be770(arg1, r13_2, (result + 1).d)
    
    uint8_t rax_7 = 0
    
    if (arg2 != 0xffffffff && arg2 != 1)
        rax_7 = 1
    
    uint8_t var_5a = rax_7
    char var_59_1 = 0
    
    if (arg1 != 0)
        sub_1403cc370(arg1, &var_5a, 2)
        sub_1403be770(arg1, &var_5a, 2)
    
    var_5a = 0
    uint8_t* rbp_2 = var_68
    uint8_t* rbx_1 = &var_5a
    uint8_t* rdi_3 = rbp_2
    
    if (rbp_2 == 0)
        rdi_3 = &var_5a
    
    if (rax_1 != -1 && arg1 != 0 && rdi_3 != 0)
        sub_1403cc370(arg1, rdi_3, rax_1 + 1)
        sub_1403be770(arg1, rdi_3, (rax_1 + 1).d)
    
    if (arg5 != 0)
        rbx_1 = arg5
    
    if (arg1 != 0 && rbx_1 != 0 && r15_1 != -1)
        sub_1403cc370(arg1, rbx_1, r15_1 + 1)
        sub_1403be770(arg1, rbx_1, (r15_1 + 1).d)
    
    sub_1403d0620(arg1, &var_90)
    
    if (arg1 != 0)
        *(arg1 + 0x4a8) = 0x82
        int32_t rax_9 = *(arg1 + 0x244)
        var_50 = (rax_9 u>> 0x18).b
        uint8_t var_4f_2 = (rax_9 u>> 0x10).b
        char var_4e_2 = rax_9:1.b
        char var_4d_2 = rax_9.b
        sub_1403cc370(arg1, &var_50, 4)
    
    png_free(arg1, r13_2)
    result = png_free(arg1, rbp_2)

__security_check_cookie(rcx_1 ^ &var_c8)
return result
