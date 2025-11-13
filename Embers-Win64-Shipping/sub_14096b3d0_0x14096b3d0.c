// 函数: sub_14096b3d0
// 地址: 0x14096b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x70)
int64_t arg_8 = 0
int64_t rcx = data_143f5b298
int64_t var_68 = 0
int64_t var_40 = 0
int64_t* var_38 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax_1 = sub_14093f850(&var_68)
wchar16 const* const var_28 = u"DestroySessionCallback"

if (rax_1 == 0)
    int64_t arg_20 = 0
    int16_t* var_60
    sub_140a2e390(&var_60, %s - Invalid or uninitialized OnlineSubsystem", DestroySessionCallback")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_58
    
    if (var_58 != 0)
        rcx_3 = var_60
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_60
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_40, sub_140d3c6e0(arg1 + 0x50))

if (var_40 != 0 && rax_1 != 0)
    int64_t* var_50
    (*(*rax_1 + 0x20))(rax_1, &var_50)
    int64_t* rcx_8 = var_50
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0xf8))(rcx_8, arg1 + 0x68)
    
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rdi_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_48 + 8))(var_48, zx.q(rdi_1))

int64_t result = sub_1405a9f90((((zx.q(arg3) ^ 1) + 3) << 4) + arg1, 0)

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        result = (**var_38)(var_38)
        int32_t temp2_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_38 + 8))(var_38, 1)

return result
