// 函数: sub_1403d10c0
// 地址: 0x1403d10c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t var_40
__builtin_strncpy(&var_40, "tEXt", 5)
void* var_48
int64_t result = sub_1403d00e0(arg1, arg2, &var_48)

if (result != 0)
    uint8_t var_38
    int64_t r14_1
    
    if (arg3 == 0 || *arg3 == 0)
        r14_1 = 0
        
        if (arg1 != 0)
        label_1403d114b:
            *(arg1 + 0x4a8) = 0x22
            var_38 = (((r14_1 + result).d + 1) u>> 0x18).b
            uint8_t var_37_1 = (((r14_1 + result).d + 1) u>> 0x10).b
            char var_36_1 = ((r14_1 + result).d + 1):1.b
            char var_35_1 = ((r14_1 + result).d + 1).b
            int32_t var_34
            __builtin_strncpy(&var_34, "tEXt", 4)
            sub_1403cc370(arg1, &var_38, 8)
            __builtin_strncpy(arg1 + 0x254, "tEXt", 4)
            sub_1403be750(arg1)
            sub_1403be770(arg1, &var_40, 4)
            *(arg1 + 0x4a8) = 0x42
    else
        r14_1 = sx.q(MultiByteToWideChar(0, 0, arg3, 0xffffffff, nullptr, 0))
        
        if (arg1 != 0)
            goto label_1403d114b
    
    void* rdi_1 = var_48
    
    if (result != -1 && arg1 != 0 && rdi_1 != 0)
        sub_1403cc370(arg1, rdi_1, result + 1)
        sub_1403be770(arg1, rdi_1, (result + 1).d)
    
    if (arg1 != 0 && arg3 != 0 && r14_1 != 0)
        sub_1403cc370(arg1, arg3, r14_1)
        sub_1403be770(arg1, arg3, r14_1.d)
    
    if (arg1 != 0)
        *(arg1 + 0x4a8) = 0x82
        int32_t rax_5 = *(arg1 + 0x244)
        var_38 = (rax_5 u>> 0x18).b
        uint8_t var_37_2 = (rax_5 u>> 0x10).b
        char var_36_2 = rax_5:1.b
        char var_35_2 = rax_5.b
        sub_1403cc370(arg1, &var_38, 4)
    
    result = png_free(arg1, rdi_1)

__security_check_cookie(rax_1 ^ &var_78)
return result
