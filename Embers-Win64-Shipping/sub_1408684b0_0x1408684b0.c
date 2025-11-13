// 函数: sub_1408684b0
// 地址: 0x1408684b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1408692e0(arg1 + 0xb8)
int64_t* i = *(arg1 + 0x10)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x18)) * 4]; i != rdi_2; i = &i[4])
    int64_t var_78 = *i
    int64_t var_70_1 = i[1]
    int16_t var_68_1 = i[2].w
    int32_t var_66_1 = 0xffffffff
    int64_t var_60_1 = 0
    int64_t var_58_1 = 0
    int64_t var_88
    result = sub_140a32ae0(sub_140b63b70(&var_78, &var_88), u"User.", 1)
    int64_t rcx_3 = var_88
    char result_1 = result
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    if (result_1 != 0)
        void var_50
        int64_t* var_98 = sub_140866170(arg1, &var_50, &var_78)
        int64_t* var_90_1 = &var_78
        void arg_8
        result = sub_140862ed0(arg1 + 0xb8, &arg_8, &var_98, nullptr)
        int64_t var_38
        
        if (var_38 != 0)
            result = sub_140a74f90(var_38)
    
    if (var_60_1 != 0)
        result = sub_140a74f90(var_60_1)

return result
