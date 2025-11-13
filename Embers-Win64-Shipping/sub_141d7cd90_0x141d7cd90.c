// 函数: sub_141d7cd90
// 地址: 0x141d7cd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x20)
int64_t rsi = *(arg2 + 0x18)
int64_t var_38 = 0

if (rdi != 0)
    sub_1405a4c70(&var_38, rdi, 0)
    memcpy(var_38, rsi, rdi * 2)
else
    int32_t var_2c_1 = 0

int32_t rax = sub_140a23cf0(&var_38, u"{frame}", 1, 0, 0xffffffff)

if (rax == 0xffffffff)
    int32_t rax_1 = sub_140a23cf0(&var_38, u"{shot_frame}", rax + 2, 0, rax)
    
    if (rax_1 == 0xffffffff)
        sub_140a20ba0(&var_38, u".{frame}", rax_1 + 9)
        
        if (arg2 + 0x18 != &var_38)
            int64_t rsi_1 = var_38
            int32_t r8_5 = *(arg2 + 0x24)
            *(arg2 + 0x20) = rdi
            
            if (rdi != 0 || r8_5 != 0)
                sub_1405a4c70(arg2 + 0x18, rdi, r8_5)
                memcpy(*(arg2 + 0x18), rsi_1, rdi * 2)
            else
                *(arg2 + 0x24) = 0

int32_t result = sub_140a23cf0(&var_38, u"{material}", 1, 0, 0xffffffff)
int64_t rdi_3

if (result != 0xffffffff)
    rdi_3 = var_38
else
    int32_t rax_2 = sub_140a23cf0(&var_38, u".{frame}", result + 2, 0, result)
    
    if (rax_2 == 0xffffffff)
        sub_140a20ba0(&var_38, u"{material}", 0xa)
    else
        int64_t var_28 = 0
        int32_t var_20_1 = 0
        sub_1405947f0(&var_28, 0xb)
        int32_t rsi_2 = var_20_1 + 0xb
        
        if (rsi_2 s> 0)
            sub_140594770(&var_28)
        
        int64_t rdi_2 = var_28
        UnDecorator::getReferenceType(rdi_2, u"{material}", 0x16)
        
        if (rsi_2 != 0 && rsi_2 != 1)
            int64_t* rcx_12 = &var_38
            
            if (rdi != 0)
                sub_140ab3a50(rcx_12, rdi_2, rsi_2 - 1, rax_2)
            else
                sub_140a20ba0(rcx_12, rdi_2, rsi_2 - 1)
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
    
    result = &var_38
    
    if (arg2 + 0x18 == &var_38)
        rdi_3 = var_38
    else
        rdi_3 = var_38
        int32_t r8_10 = *(arg2 + 0x24)
        *(arg2 + 0x20) = rdi
        
        if (rdi != 0 || r8_10 != 0)
            sub_1405a4c70(arg2 + 0x18, rdi, r8_10)
            result = memcpy(*(arg2 + 0x18), rdi_3, rdi * 2)
            rdi_3 = var_38
        else
            *(arg2 + 0x24) = 0

if (rdi_3 == 0)
    return result

return sub_140a74f90(rdi_3)
