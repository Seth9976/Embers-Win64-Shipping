// 函数: sub_140cc12f0
// 地址: 0x140cc12f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> 0)
    if ((arg2 - 1 s< 0 || arg2 - 1 s>= *(arg1 + 0x20)) && sub_140a4aa30() == 0)
        void var_50
        sub_140a96170(&var_50)
        void var_68
        sub_140a96170(&var_68)
        sub_140af5fd0(data_143ddb400, /Script/Engine.Engine", SerializationOutOfBoundsErrorMessage"
            , &var_50, &data_143de5780)
        sub_140af5fd0(data_143ddb400, /Script/Engine.Engine", 
            SerializationOutOfBoundsErrorMessageCaption", &var_68, &data_143de5780)
        sub_140b19e60()
        sub_140b19e60()
        void* rdx = data_1439a8bd0
        (*(rdx + 0x18))(&data_1439a8bd0, rdx)
        int64_t* rax_2 = sub_140ac6680(&var_68)
        int16_t* const rbx_1 = &data_142d40450
        PWSTR rdi_1
        
        if (rax_2[1].d == 0)
            rdi_1 = &data_142d40450
        else
            rdi_1 = *rax_2
        
        int16_t** rax_3 = sub_140ac6680(&var_50)
        
        if (rax_3[1].d != 0)
            rbx_1 = *rax_3
        
        arg3 = sub_140b709d0(0, rbx_1, rdi_1)
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rax_6 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        int64_t* var_48
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t rbx_2 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_48 + 8))(var_48, zx.q(rbx_2))
    
    return sub_140cb4600(arg1, arg2 - 1, arg3)

if (arg2 s>= 0)
    return 0

int32_t rsi_2 = not.d(arg2)

if ((rsi_2 s< 0 || rsi_2 s>= *(arg1 + 0x10)) && sub_140a4aa30() == 0)
    void var_20
    sub_140a96170(&var_20)
    void var_38
    sub_140a96170(&var_38)
    sub_140af5fd0(data_143ddb400, /Script/Engine.Engine", SerializationOutOfBoundsErrorMessage", 
        &var_20, &data_143de5780)
    sub_140af5fd0(data_143ddb400, /Script/Engine.Engine", 
        SerializationOutOfBoundsErrorMessageCaption", &var_38, &data_143de5780)
    sub_140b19e60()
    sub_140b19e60()
    void* rdx_4 = data_1439a8bd0
    (*(rdx_4 + 0x18))(&data_1439a8bd0, rdx_4)
    int64_t* rax_13 = sub_140ac6680(&var_38)
    int16_t* const rbx_3 = &data_142d40450
    PWSTR rdi_4
    
    if (rax_13[1].d == 0)
        rdi_4 = &data_142d40450
    else
        rdi_4 = *rax_13
    
    int16_t** rax_14 = sub_140ac6680(&var_20)
    
    if (rax_14[1].d != 0)
        rbx_3 = *rax_14
    
    sub_140b709d0(0, rbx_3, rdi_4)
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rax_17 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rbx_4 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rbx_4 == 1)
                (*(*var_18 + 8))(var_18, zx.q(rbx_4))

return sub_140cb5e90(arg1, rsi_2)
