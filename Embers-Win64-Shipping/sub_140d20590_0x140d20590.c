// 函数: sub_140d20590
// 地址: 0x140d20590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (sub_140ab3dc0(arg2) == 0)
    int16_t* var_58
    int32_t var_4c
    int16_t* var_48
    int16_t* var_38
    
    if (Concurrency::details::LockQueueNode::IsTicketValid(arg2) == 0)
        var_48 = nullptr
        int32_t var_40_1 = 0
        sub_140aca310(&var_48, arg2, 0, arg4, arg5)
        int16_t* const rcx_16 = &data_142d40450
        
        if (var_40_1 != 0)
            rcx_16 = var_48
        
        int64_t var_28
        
        if (sub_140ab3ae0(rcx_16) == 0)
            int32_t rcx_29 = sub_140a20ba0(arg1, u"FText::FromString(\n", 0x13)
            int32_t rdi_3 = arg3[1].d
            int64_t rbx_3 = *arg3
            var_58 = nullptr
            sub_1405a4c70(&var_58, sbb.d(rcx_29, rcx_29, rdi_3 != 0) + 3 + rdi_3, 0)
            memcpy(var_58, rbx_3, rdi_3 * 2)
            sub_140a20ba0(&var_58, &data_142eaf198, 2)
            var_38 = var_58
            int32_t var_30_2 = rdi_3
            int32_t var_2c_2 = var_4c
            int32_t var_50_3
            var_50_3.q = 0
            var_58 = nullptr
            int64_t* rax_20 = sub_140cfbb40(&var_28, &var_48, &var_38)
            int32_t rcx_35 = rax_20[1].d
            int32_t r8_14 = rcx_35 - 1
            
            if (rcx_35 == 0)
                r8_14 = 0
            
            sub_140a20ba0(arg1, *rax_20, r8_14)
            int64_t rcx_37 = var_28
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            int16_t* rcx_38 = var_38
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
        else
            int32_t rcx_18 = sub_140a20ba0(arg1, u"FTextStringHelper::CreateFromBuffer(\n", 0x25)
            int32_t rdi_2 = arg3[1].d
            int64_t rbx_2 = *arg3
            var_58 = nullptr
            sub_1405a4c70(&var_58, sbb.d(rcx_18, rcx_18, rdi_2 != 0) + 3 + rdi_2, 0)
            memcpy(var_58, rbx_2, rdi_2 * 2)
            sub_140a20ba0(&var_58, &data_142eaf198, 2)
            var_38 = var_58
            int32_t var_30_1 = rdi_2
            int32_t var_2c_1 = var_4c
            int32_t var_50_2
            var_50_2.q = 0
            var_58 = nullptr
            int64_t* rax_13 = sub_140cfbb40(&var_28, &var_48, &var_38)
            int32_t rcx_24 = rax_13[1].d
            int32_t r8_9 = rcx_24 - 1
            
            if (rcx_24 == 0)
                r8_9 = 0
            
            sub_140a20ba0(arg1, *rax_13, r8_9)
            int64_t rcx_26 = var_28
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            int16_t* rcx_27 = var_38
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            int32_t rax_14 = arg3[1].d
            int32_t r8_10 = rax_14 - 1
            
            if (rax_14 == 0)
                r8_10 = 0
            
            sub_140a20ba0(arg1, *arg3, r8_10)
        sub_140a20ba0(arg1, &data_142eaf1a0, 2)
        int16_t* rcx_40 = var_48
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
    else
        int64_t* rax_2 = sub_140a4c340(arg2)
        int32_t r8 = sub_140a20ba0(arg1, u"FText::AsCultureInvariant(\n", 0x1b)
        int32_t rdi_1 = arg3[1].d
        int64_t rbx_1 = *arg3
        var_58 = nullptr
        sub_1405a4c70(&var_58, sbb.d(r8, r8, rdi_1 != 0) + 3 + rdi_1, 0)
        memcpy(var_58, rbx_1, rdi_1 * 2)
        sub_140a20ba0(&var_58, &data_142eaf198, 2)
        var_48 = var_58
        int64_t var_40
        var_40.d = rdi_1
        var_40:4.d = var_4c
        int32_t var_50_1
        var_50_1.q = 0
        var_58 = nullptr
        int64_t* rax_6 = sub_140cfbb40(&var_38, rax_2, &var_48)
        int32_t rcx_10 = rax_6[1].d
        int32_t r8_5 = rcx_10 - 1
        
        if (rcx_10 == 0)
            r8_5 = 0
        
        sub_140a20ba0(arg1, *rax_6, r8_5)
        int16_t* rcx_12 = var_38
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int16_t* rcx_13 = var_48
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        sub_140a20ba0(arg1, &data_142eaf1a0, 2)
else
    sub_140a20ba0(arg1, u"FText::GetEmpty()", 0x11)

return arg1
