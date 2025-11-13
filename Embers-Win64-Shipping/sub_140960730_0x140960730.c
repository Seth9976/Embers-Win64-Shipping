// 函数: sub_140960730
// 地址: 0x140960730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
*arg4 = 0
sub_1405d9400()
sub_14065da90(arg5, &data_143cd6fd8)
sub_1405d9400()
sub_14065da90(arg6, &data_143cd6fd8)
sub_1405d9400()
sub_14065da90(arg7, &data_143cd6fd8)
int64_t arg_20 = 0
int64_t var_a8 = 0
int64_t* var_a0 = nullptr
*arg8 = 0
int64_t rcx_3 = data_143f5b298
int64_t var_d0 = 0
sub_1423de540(rcx_3, arg1, 0)
int64_t* rax_1 = sub_14093f850(&var_d0)
wchar16 const* const var_90 = u"GetCachedAchievementDescription"

if (rax_1 == 0)
    int64_t var_d8_1 = 0
    int16_t* var_c8
    sub_140a2e390(&var_c8, %s - Invalid or uninitialized OnlineSubsystem", 
        GetCachedAchievementDescription")
    int16_t* const rcx_6 = &data_142d40450
    int32_t var_c0
    
    if (var_c0 != 0)
        rcx_6 = var_c8
    
    sub_140d23f50(rcx_6, 3)
    int16_t* rcx_7 = var_c8
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

uint32_t result = sub_140971be0(&var_a8, arg2)

if (var_a8 != 0 && rax_1 != 0)
    int64_t* var_b8
    (*(*rax_1 + 0xb0))(rax_1, &var_b8)
    
    if (var_b8 == 0)
        arg8 = nullptr
        result = sub_140d23f50(u"Achievements not supported by Online Subsystem", 3)
    else
        void var_78
        sub_140a96170(&var_78)
        void var_60
        sub_140a96170(&var_60)
        void var_48
        sub_140a96170(&var_48)
        int64_t* rdi_1 = var_b8
        int64_t var_88
        result = (*(*rdi_1 + 0x30))(rdi_1, sub_140b63b70(&arg_18, &var_88), &var_78)
        int64_t rcx_15 = var_88
        int64_t rbx_2
        rbx_2.b = result == 0
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        if (rbx_2.b != 0)
            *arg4 = 1
            sub_14065da90(arg5, &var_78)
            sub_14065da90(arg6, &var_60)
            sub_14065da90(arg7, &var_48)
            char result_1
            result = zx.d(result_1)
            *arg8 = result.b
        
        int64_t* var_40
        
        if (var_40 != 0)
            result = var_40[1].d
            var_40[1].d -= 1
            
            if (result == 1)
                (**var_40)(var_40)
                result = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*var_40 + 8))(var_40, 1)
        
        int64_t* var_58
        
        if (var_58 != 0)
            result = var_58[1].d
            var_58[1].d -= 1
            
            if (result == 1)
                (**var_58)(var_58)
                result = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*var_58 + 8))(var_58, 1)
        
        int64_t* var_70
        
        if (var_70 != 0)
            result = var_70[1].d
            var_70[1].d -= 1
            
            if (result == 1)
                (**var_70)(var_70)
                result = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*var_70 + 8))(var_70, 1)
    
    int64_t* var_b0
    
    if (var_b0 != 0)
        result = var_b0[1].d
        var_b0[1].d -= 1
        
        if (result == 1)
            result = (**var_b0)(var_b0)
            int32_t rsi_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*var_b0 + 8))(var_b0, zx.q(rsi_1))

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        result = (**var_a0)(var_a0)
        int32_t temp2_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_a0 + 8))(var_a0, 1)

return result
