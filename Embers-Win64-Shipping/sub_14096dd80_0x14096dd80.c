// 函数: sub_14096dd80
// 地址: 0x14096dd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x60)
int64_t var_88 = 0
int64_t arg_8 = 0
int64_t rcx = data_143f5b298
int64_t var_50 = 0
int64_t* var_48 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&var_88)
wchar16 const* const var_38 = u"Logout"

if (rax == 0)
    int64_t arg_20 = 0
    int16_t* var_70
    sub_140a2e390(&var_70, u"%s - Invalid or uninitialized OnlineSubsystem", u"Logout")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_68
    
    if (var_68 != 0)
        rcx_3 = var_70
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_70
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_50, sub_140d3c6e0(arg1 + 0x50))

if (var_50 != 0 && rax != 0)
    int64_t* var_60
    (*(*rax + 0x80))(rax, &var_60)
    int64_t* rcx_8 = var_60
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0xa0))(rcx_8, zx.q(arg2), arg1 + 0x58)
    
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rdi_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_58 + 8))(var_58, zx.q(rdi_1))

int64_t rax_7 = sub_140d3c6e0(arg1 + 0x50)
void* rcx_12
int64_t* rdx_6

if (arg3 == 0)
    int64_t var_78 = rax_7
    rcx_12 = arg1 + 0x40
    rdx_6 = &var_78
else
    int64_t var_80 = rax_7
    rcx_12 = arg1 + 0x30
    rdx_6 = &var_80

int64_t result = sub_1405a9f90(rcx_12, rdx_6)

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        result = (**var_48)(var_48)
        int32_t temp2_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_48 + 8))(var_48, 1)

return result
