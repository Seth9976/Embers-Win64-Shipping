// 函数: sub_140961520
// 地址: 0x140961520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int64_t rcx = data_143f5b298
int64_t var_b8 = 0
int64_t arg_18 = 0
int64_t var_90 = 0
int64_t* var_88 = nullptr
sub_1423de540(rcx, arg1, 0)
int64_t* rax = sub_14093f850(&var_b8)
wchar16 const* const var_78 = u"GetIsMyTurn"
int16_t* const r15 = &data_142d40450

if (rax == 0)
    int64_t arg_20 = 0
    int16_t* var_b0
    sub_140a2e390(&var_b0, u"%s - Invalid or uninitialized OnlineSubsystem", u"GetIsMyTurn")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_a8
    
    if (var_a8 != 0)
        rcx_3 = var_b0
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_b0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t result = sub_140971be0(&var_90, arg2)

if (var_90 != 0 && rax != 0)
    int64_t* var_60
    (*(*rax + 0xf8))(rax, &var_60)
    int64_t* r14_1 = var_60
    
    if (r14_1 == 0)
        int64_t var_c0_1 = 0
        result = sub_140d23f50(u"Turn Based Matches not supported by Online Subsystem", 3)
    else
        int64_t* var_70
        void var_50
        (*(*r14_1 + 0x38))(r14_1, &var_70, sub_140596d10(&var_50, arg3))
        int64_t* r14_2 = var_70
        
        if (r14_2 == 0)
            int16_t* const r8_2
            
            if (arg3[1].d == 0)
                r8_2 = &data_142d40450
            else
                r8_2 = *arg3
            
            int16_t* var_a0
            sub_140a2e390(&var_a0, u"Match ID %s not found", r8_2)
            int64_t var_c8_1 = 0
            int32_t var_98
            
            if (var_98 != 0)
                r15 = var_a0
            
            result = sub_140d23f50(r15, 3)
            int16_t* rcx_13 = var_a0
            
            if (rcx_13 != 0)
                result = sub_140a74f90(rcx_13)
        else
            int32_t rax_4 = (*(*r14_2 + 0x48))(r14_2)
            int64_t rdx_7 = *r14_2
            result.b = rax_4 == (*(rdx_7 + 0x40))(r14_2, rdx_7)
            *arg4 = result.b
        
        int64_t* var_68
        
        if (var_68 != 0)
            result = var_68[1].d
            var_68[1].d -= 1
            
            if (result == 1)
                (**var_68)(var_68)
                result = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*var_68 + 8))(var_68, 1)
    
    int64_t* var_58
    
    if (var_58 != 0)
        result = var_58[1].d
        var_58[1].d -= 1
        
        if (result == 1)
            result = (**var_58)(var_58)
            int32_t rdi_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_58 + 8))(var_58, zx.q(rdi_1))

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        result = (**var_88)(var_88)
        int32_t temp2_1 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_88 + 8))(var_88, 1)

int64_t rcx_20 = *arg3

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
