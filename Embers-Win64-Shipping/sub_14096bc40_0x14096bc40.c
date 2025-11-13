// 函数: sub_14096bc40
// 地址: 0x14096bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0
int64_t var_68 = 0
int64_t var_38 = 0
int64_t* var_30 = nullptr
sub_1423de540(data_143f5b298, *(arg1 + 0x90), 0)
int64_t* rax = sub_14093f850(&var_68)
wchar16 const* const var_20 = u"CreateSessionCallback"

if (rax == 0)
    int64_t var_78_1 = 0
    int16_t* var_48
    sub_140a2e390(&var_48, %s - Invalid or uninitialized OnlineSubsystem", CreateSessionCallback")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        rcx_3 = var_48
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t result = sub_140971be0(&var_38, sub_140d3c6e0(arg1 + 0x50))

if (var_38 == 0 || rax == 0)
label_14096bde6:
    
    if (arg3 == 0)
        result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_58
    result = (*(*rax + 0x20))(rax, &var_58)
    int64_t* rcx_8 = var_58
    
    if (rcx_8 != 0)
        result = (*(*rcx_8 + 0x58))(rcx_8, arg1 + 0x78)
    
    int64_t* var_50
    
    if (rcx_8 == 0 || arg3 == 0)
        if (var_50 == 0)
            goto label_14096bde6
        
        result = var_50[1].d
        var_50[1].d -= 1
        
        if (result == 1)
            result = (**var_50)(var_50)
            int32_t rbx_3 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rbx_3 == 1)
                result = (*(*var_50 + 8))(var_50, zx.q(rbx_3))
        
        goto label_14096bde6
    
    int64_t* rcx_9 = var_58
    void var_60
    int64_t* rax_5 = (*(*rcx_9 + 0x78))(rcx_9, &var_60, arg1 + 0x68)
    int64_t* rbx_1 = var_58
    *(arg1 + 0x80) = *rax_5
    int32_t var_6c_1 = 0
    void arg_8
    result = (*(*rbx_1 + 0x70))(rbx_1, (*sub_140b5e500(&arg_8, 0x11f)).q)
    
    if (var_50 != 0)
        result = var_50[1].d
        var_50[1].d -= 1
        
        if (result == 1)
            result = (**var_50)(var_50)
            int32_t rbx_2 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rbx_2 == 1)
                result = (*(*var_50 + 8))(var_50, zx.q(rbx_2))

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_30 + 8))(var_30, 1)

return result
