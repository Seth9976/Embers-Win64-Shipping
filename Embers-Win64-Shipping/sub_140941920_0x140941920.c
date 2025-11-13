// 函数: sub_140941920
// 地址: 0x140941920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
char arg_18 = 0

for (int32_t i = 0; i s< 2; i += 1)
    int16_t* rbx_1 = nullptr
    int32_t rsi_1 = 0
    
    if (i != 1)
    label_140941a40:
        int64_t var_48
        int64_t* rax_4 = sub_140b63b70(arg1, &var_48)
        int16_t* const r8_2
        
        if (rax_4[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *rax_4
        
        int16_t* var_68
        sub_140a2e390(&var_68, u"OnlineSubsystem%s", r8_2)
        int64_t rcx_10 = var_48
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int32_t r8_3 = rsi_1 - 1
        
        if (rsi_1 == 0)
            r8_3 = 0
        
        sub_140a20ba0(&var_68, rbx_1, r8_3)
        int16_t* rdx_6 = &data_142d40450
        int32_t var_60
        
        if (var_60 != 0)
            rdx_6 = var_68
        
        bool rax_1 = sub_140af2fd0(data_143ddb400, rdx_6, u"bEnabled", &arg_18, &data_143de5780)
        int16_t* rcx_13 = var_68
        r13.b |= rax_1
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
    else
        int32_t rcx
        rcx.b = sub_140b5b8a0(*arg2, 0) == 0
        
        if ((arg2[1] != 0 | rcx.b) != 0)
            int64_t var_58
            int64_t* rax_2 = sub_140b63b70(arg2, &var_58)
            int32_t rcx_2 = rax_2[1].d
            int16_t* var_78 = nullptr
            rbx_1 = nullptr
            int64_t var_70_1 = 0
            int32_t rdx_1 = 0
            int32_t rdi_1 = rcx_2 - 1
            int32_t rcx_3 = 0
            
            if (rcx_2 == 0)
                rdi_1 = 0
            
            if (rdi_1 + 2 s> 0)
                sub_1405947f0(&var_78, rdi_1 + 2)
                rcx_3 = var_70_1:4.d
                rdx_1 = var_70_1.d
                rbx_1 = var_78
            
            rsi_1 = rdi_1 + 2 + rdx_1
            var_70_1.d = rsi_1
            
            if (rsi_1 s> rcx_3)
                sub_140594770(&var_78)
                rsi_1 = var_70_1.d
                rbx_1 = var_78
            
            *rbx_1 = 0x20
            int64_t rdi_2 = sx.q(rdi_1)
            memcpy(&rbx_1[1], *rax_2, rdi_2.d * 2)
            rbx_1[rdi_2 + 1] = 0
            int64_t rcx_7 = var_58
            var_78 = nullptr
            int64_t var_70_2 = 0
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            goto label_140941a40

if (r13.b != 0 && arg_18 == 0)
    return false

return true
