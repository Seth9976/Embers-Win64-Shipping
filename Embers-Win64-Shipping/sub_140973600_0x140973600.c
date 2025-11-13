// 函数: sub_140973600
// 地址: 0x140973600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0
int64_t var_50 = 0
int64_t var_28 = 0
int64_t* var_20 = nullptr
sub_1423de540(data_143f5b298, arg1, 0)
int64_t* rax = sub_14093f850(&var_50)
wchar16 const* const var_10 = u"GetIsMyTurn"

if (rax == 0)
    int64_t var_58_1 = 0
    int16_t* var_48
    sub_140a2e390(&var_48, u"%s - Invalid or uninitialized OnlineSubsystem", u"GetIsMyTurn")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        rcx_3 = var_48
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t result = sub_140971be0(&var_28, arg2)

if (var_28 != 0 && rax != 0)
    int64_t* var_38
    result = (*(*rax + 0xf8))(rax, &var_38)
    int64_t* rcx_7 = var_38
    
    if (rcx_7 != 0)
        result = (*(*rcx_7 + 0x48))(rcx_7, arg3)
    
    int64_t* var_30
    
    if (var_30 != 0)
        result = var_30[1].d
        var_30[1].d -= 1
        
        if (result == 1)
            result = (**var_30)(var_30)
            int32_t rdi_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_30 + 8))(var_30, zx.q(rdi_1))

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_20 + 8))(var_20, 1)

return result
