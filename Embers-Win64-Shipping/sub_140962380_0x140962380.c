// 函数: sub_140962380
// 地址: 0x140962380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143f5b298
int64_t arg_18 = 0
int64_t var_b8 = 0
int64_t var_80 = 0
int64_t* var_78 = nullptr
sub_1423de540(rcx, arg1, 0)
int64_t* rax = sub_14093f850(&var_b8)
wchar16 const* const var_68 = u"GetMyPlayerIndex"
int16_t* const rsi = &data_142d40450

if (rax == 0)
    int64_t var_d8_1 = 0
    int16_t* var_b0
    sub_140a2e390(&var_b0, u"%s - Invalid or uninitialized OnlineSubsystem", u"GetMyPlayerIndex")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_a8
    
    if (var_a8 != 0)
        rcx_3 = var_b0
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_b0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t result = sub_140971be0(&var_80, arg2)

if (var_80 != 0 && rax != 0)
    int64_t* var_50
    (*(*rax + 0xf8))(rax, &var_50)
    int64_t* r15_1 = var_50
    
    if (r15_1 == 0)
        int64_t var_c0_1 = 0
        result = sub_140d23f50(u"Turn Based Matches not supported by Online Subsystem", 3)
    else
        int64_t* var_60
        void var_40
        (*(*r15_1 + 0x38))(r15_1, &var_60, sub_140596d10(&var_40, arg3))
        int64_t* rcx_9 = var_60
        int16_t* rcx_12
        
        if (rcx_9 == 0)
            int16_t* const r8_5
            
            if (arg3[1].d == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = *arg3
            
            int16_t* var_90
            sub_140a2e390(&var_90, u"Match ID %s not found", r8_5)
            int64_t var_c8_1 = 0
            int32_t var_88
            
            if (var_88 != 0)
                rsi = var_90
            
            result = sub_140d23f50(rsi, 3)
            rcx_12 = var_90
            goto label_140962528
        
        result = (*(*rcx_9 + 0x10))(rcx_9, zx.q(arg4), arg5)
        
        if (result.b == 0)
            int16_t* var_a0
            sub_140a2e390(&var_a0, Player index %d not within bounds of player array.", zx.q(arg4))
            int64_t var_d0_1 = 0
            int32_t var_98
            
            if (var_98 != 0)
                rsi = var_a0
            
            result = sub_140d23f50(rsi, 3)
            rcx_12 = var_a0
        label_140962528:
            
            if (rcx_12 != 0)
                result = sub_140a74f90(rcx_12)
        
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
    
    int64_t* var_48
    
    if (var_48 != 0)
        result = var_48[1].d
        var_48[1].d -= 1
        
        if (result == 1)
            result = (**var_48)(var_48)
            int32_t rdi_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_48 + 8))(var_48, zx.q(rdi_1))

if (var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        result = (**var_78)(var_78)
        int32_t temp2_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_78 + 8))(var_78, 1)

int64_t rcx_21 = *arg3

if (rcx_21 == 0)
    return result

return sub_140a74f90(rcx_21)
