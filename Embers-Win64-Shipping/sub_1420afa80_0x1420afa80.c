// 函数: sub_1420afa80
// 地址: 0x1420afa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90810(arg1, arg2)
*arg1 = &data_142d4a438

if (data_143f47dd0 == 0)
    void* rcx = data_143ddb400
    uint64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_140af5b90(rcx, u"LocalNotification", u"DefaultPlatformService", &var_18, &data_143de5780)
    
    if (var_10_1 != 0 && var_10_1 - 1 s> 0)
        void arg_8
        int64_t rbx_1 = *sub_140b58260(&arg_8, var_18, 1)
        j_sub_140b3db50()
        int64_t* rax_4 = sub_140b407e0(&data_143de7d78, rbx_1)
        
        if (rax_4 != 0)
            int64_t rdx_2 = *rax_4
            data_143f47dd0 = (*(rdx_2 + 0x40))(rax_4, rdx_2)
    
    uint64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg1
