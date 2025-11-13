// 函数: sub_14276f7b0
// 地址: 0x14276f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result

if (data_143b6d9fc == 0)
    result = zx.q(arg1)
else if (arg1 != 0x50)
    result = zx.q(arg1)
else
    int64_t r14_1 = *(*arg2 + 0x10)
    int32_t rsi_1 = *(arg2[1] + 8)
    int32_t var_88 = 0
    int16_t var_84_1 = 0
    char var_82_1 = 0
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x2c)
    int32_t var_54_1 = 0x80
    int32_t var_50_1 = 0xffffffff
    int32_t var_4c_1 = 0
    int64_t var_40_1 = 0
    int32_t var_38_1 = 0
    sub_14276e3a0(&var_88, arg2)
    void* rcx_1 = *arg2
    char r8_1 = 1
    char* rax_4 = *(rcx_1 + 0x10)
    char i = *rax_4
    *(rcx_1 + 0x10) = &rax_4[1]
    
    while (i == 0x4f)
        char rax_6 = sub_142763b80(&var_88, arg2)
        void* rdx_1 = *arg2
        r8_1 = rax_6
        char* rcx_3 = *(rdx_1 + 0x10)
        i = *rcx_3
        *(rdx_1 + 0x10) = &rcx_3[1]
        
        if (rax_6 == 0)
            goto label_14276f8a0
    
    char rax_8
    
    if (r8_1 != 0)
        rax_8 = sub_14276e510(&var_88, arg2)
    
    if (r8_1 == 0 || rax_8 == 0)
    label_14276f8a0:
        *(*arg2 + 0x10) = r14_1
        int64_t* rdi_1 = arg2[1]
        int64_t rbx = sx.q(rdi_1[1].d)
        
        if (rsi_1 s> rbx.d)
            rdi_1[1].d = rsi_1
            
            if (rsi_1 s> *(rdi_1 + 0xc))
                sub_1405daba0(rdi_1)
            
            memset(rbx + *rdi_1, 0, sx.q(rsi_1 - rbx.d))
        else if (rsi_1 s< rbx.d && rsi_1 != rbx.d)
            rdi_1[1].d = rsi_1
        
        int32_t var_38_3 = 0
        
        if (var_40_1 != 0)
            sub_140a74f90(var_40_1)
        
        sub_140597460(&var_80)
        result.b = 0x50
    else
        int32_t var_38_2 = 0
        
        if (var_40_1 != 0)
            sub_140a74f90(var_40_1)
        
        sub_140597460(&var_80)
        result = zx.q(i)

__security_check_cookie(rax_1 ^ &var_b8)
return result
